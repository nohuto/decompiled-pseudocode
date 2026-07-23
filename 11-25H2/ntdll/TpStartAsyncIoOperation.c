/*
 * XREFs of TpStartAsyncIoOperation @ 0x1800410C0
 * Callers:
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  volatile int Flags; // eax
  _TP_POOL *Pool; // rdi
  unsigned int SelectedCpuSetCount; // eax

  if ( !Io
    || (Flags = Io->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Io->CleanupGroupMember.VFuncs != &TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    TppBarrierAdjust(&Io->CleanupGroupMember.CallbackBarrier, 1LL, 0LL);
    _InterlockedIncrement(&Io->PendingIrpCount);
    _InterlockedIncrement(&Io->CleanupGroupMember.Refcount.Refcount);
    Pool = Io->CleanupGroupMember.Pool;
    if ( !Pool || (SelectedCpuSetCount = Pool->SelectedCpuSetCount) == 0 )
      SelectedCpuSetCount = MEMORY[0x7FFE03C0];
    if ( Pool->LastProcCount != SelectedCpuSetCount )
    {
      RtlAcquireSRWLockExclusive(&Pool->Lock);
      TppAdjustRunningThreadGoalWithLock(Pool);
      RtlReleaseSRWLockExclusive(&Pool->Lock);
    }
  }
}
