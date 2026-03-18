/*
 * XREFs of ExpWnfAcquireSubscriptionNameInstance @ 0x140A36EFC
 * Callers:
 *     PopWnfSprActiveSessionChangeCallback @ 0x1408E41D0 (PopWnfSprActiveSessionChangeCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140A366E0 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A36800 (PopWnfFullscreenVideoCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140A36900 (PopNetWnfLowPowerEpochCallback.c)
 *     PopWnfAudioCallback @ 0x140A36A30 (PopWnfAudioCallback.c)
 *     PopEsInStandbyEvaluate @ 0x140A36C44 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140A36DA0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     ExQueryWnfStateData @ 0x140A36E60 (ExQueryWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionNameInstance(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  signed __int64 *v4; // rbx
  __int64 *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rcx

  v3 = 0LL;
  v4 = (signed __int64 *)(*(_QWORD *)&PsInitialSystemProcess[3].BasePriority + 80LL);
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v5, (unsigned __int64)v4);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = *(struct _EX_RUNDOWN_REF **)(a2 + 48);
  if ( v6 && ExAcquireRundownProtection_0(v6 + 1) )
    v3 = *(_QWORD *)(a2 + 48);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v3;
}
