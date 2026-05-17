/*
 * XREFs of TpStartAsyncIoOperation @ 0x1800E67A0
 * Callers:
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  int v2; // eax
  volatile signed __int32 **v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // rdi
  int v6; // eax

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
    TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), 1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 280));
    _InterlockedIncrement((volatile signed __int32 *)a1);
    v5 = *(_QWORD *)(a1 + 144);
    if ( !v5 || (v6 = *(_DWORD *)(v5 + 440)) == 0 )
      v6 = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v5 + 424) != v6 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v5 + 72), v3, v4);
      TppAdjustRunningThreadGoalWithLock(v5);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 72));
    }
  }
}
