/*
 * XREFs of ExpWnfAcquireSubscriptionNameInstance @ 0x140A3BBFC
 * Callers:
 *     PopWnfSprActiveSessionChangeCallback @ 0x1408AE6C0 (PopWnfSprActiveSessionChangeCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140A3B470 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A3B590 (PopWnfFullscreenVideoCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140A3B690 (PopNetWnfLowPowerEpochCallback.c)
 *     PopWnfAudioCallback @ 0x140A3B7C0 (PopWnfAudioCallback.c)
 *     PopEsInStandbyEvaluate @ 0x140A3B940 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140A3BAA0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     ExQueryWnfStateData @ 0x140A3BB60 (ExQueryWnfStateData.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionNameInstance(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  signed __int64 *v4; // rbx
  _QWORD *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rcx

  v3 = 0LL;
  v4 = (signed __int64 *)(*(_QWORD *)&PsInitialSystemProcess[3].BasePriority + 80LL);
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v5, (__int64)v4);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = *(struct _EX_RUNDOWN_REF **)(a2 + 48);
  if ( v6 && ExAcquireRundownProtection(v6 + 1) )
    v3 = *(_QWORD *)(a2 + 48);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v3;
}
