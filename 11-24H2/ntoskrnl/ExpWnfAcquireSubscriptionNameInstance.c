/*
 * XREFs of ExpWnfAcquireSubscriptionNameInstance @ 0x140A313DC
 * Callers:
 *     PopWnfSprActiveSessionChangeCallback @ 0x140904920 (PopWnfSprActiveSessionChangeCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140A30C50 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A30D70 (PopWnfFullscreenVideoCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140A30E70 (PopNetWnfLowPowerEpochCallback.c)
 *     PopWnfAudioCallback @ 0x140A30FA0 (PopWnfAudioCallback.c)
 *     PopEsInStandbyEvaluate @ 0x140A31120 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140A31280 (PopEsWnfSubscriptionOverrideCallback.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionNameInstance(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  signed __int64 *v4; // rbx
  char *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rcx

  v3 = 0LL;
  v4 = (signed __int64 *)(*(_QWORD *)&PsInitialSystemProcess[3].BasePriority + 80LL);
  v5 = (char *)KeAbPreAcquire((__int64)v4, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v5, (__int64)v4);
  if ( v5 )
    v5[10] = 1;
  v6 = *(struct _EX_RUNDOWN_REF **)(a2 + 48);
  if ( v6 && ExAcquireRundownProtection_0(v6 + 1) )
    v3 = *(_QWORD *)(a2 + 48);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v3;
}
