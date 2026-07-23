/*
 * XREFs of RtlpFindDynamicEHContinuationTarget @ 0x140A248E4
 * Callers:
 *     RtlVerifyUserUnwindTarget @ 0x140A0B69C (RtlVerifyUserUnwindTarget.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlpDynamicEHContinuationTargetsTreeCompare @ 0x140A249D0 (RtlpDynamicEHContinuationTargetsTreeCompare.c)
 */

bool __fastcall RtlpFindDynamicEHContinuationTarget(__int64 a1)
{
  _KPROCESS *Process; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rbx
  _QWORD *v5; // rbx
  int v6; // eax

  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&Process[4].ReadyListHead, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[4].ReadyListHead, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&Process[4].ReadyListHead, 0, v4, (__int64)&Process[4].ReadyListHead);
  if ( v4 )
    v4[10] = 1;
  v5 = *(_QWORD **)&Process[4].AutoBoostState.TreeCount;
  while ( v5 )
  {
    v6 = RtlpDynamicEHContinuationTargetsTreeCompare(a1, v5);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        break;
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      v5 = (_QWORD *)*v5;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[4].ReadyListHead, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Process[4].ReadyListHead);
  KeAbPostRelease((ULONG_PTR)&Process[4].ReadyListHead);
  KeLeaveCriticalRegion();
  return v5 != 0LL;
}
