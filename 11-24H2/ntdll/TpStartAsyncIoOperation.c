/*
 * XREFs of TpStartAsyncIoOperation @ 0x1800E1C50
 * Callers:
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180051CB4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
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
    TppBarrierAdjust((_RTL_SRWLOCK *)&Io->CleanupGroupMember.CallbackBarrier, 1, 0);
    _InterlockedIncrement(&Io->PendingIrpCount);
    _InterlockedIncrement(&Io->CleanupGroupMember.Refcount.Refcount);
    Pool = Io->CleanupGroupMember.Pool;
    if ( !Pool || (SelectedCpuSetCount = Pool->SelectedCpuSetCount) == 0 )
      SelectedCpuSetCount = MEMORY[0x7FFE03C0];
    if ( Pool->LastProcCount != SelectedCpuSetCount )
    {
      RtlAcquireSRWLockExclusive(&Pool->Lock);
      TppAdjustRunningThreadGoalWithLock((__int64)Pool);
      RtlReleaseSRWLockExclusive(&Pool->Lock);
    }
  }
}
