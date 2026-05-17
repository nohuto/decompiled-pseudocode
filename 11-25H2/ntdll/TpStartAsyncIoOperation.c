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

void __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  int v4; // eax

  if ( !a1
    || (v2 = *(_DWORD *)(a1 + 168), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    TppBarrierAdjust(a1 + 56, 1LL, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 280));
    _InterlockedIncrement((volatile signed __int32 *)a1);
    v3 = *(_QWORD *)(a1 + 144);
    if ( !v3 || (v4 = *(_DWORD *)(v3 + 440)) == 0 )
      v4 = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v3 + 424) != v4 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v3 + 72));
      TppAdjustRunningThreadGoalWithLock(v3);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 72));
    }
  }
}
