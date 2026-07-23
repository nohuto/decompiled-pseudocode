/*
 * XREFs of PopPowerButtonSuppressionInit @ 0x140C32800
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140758844 (PopEvaluatePowerButtonSuppressionState.c)
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     PopTracePowerButtonSuppressionOptedIn @ 0x140C320C4 (PopTracePowerButtonSuppressionOptedIn.c)
 */

__int64 PopPowerButtonSuppressionInit()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // di
  int v5; // ebx
  unsigned __int32 v6; // eax
  unsigned __int32 v7; // ett
  unsigned __int8 v9; // [rsp+40h] [rbp+8h]

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerButtonSuppressionLock);
  v4 = 0;
  v5 = 0;
  if ( PopPlatformAoAcCapabilityInitialized && PopPlatformAoAc )
  {
    if ( (Feature_PowerButtonSuppression__private_featureState & 0x10) == 0 )
    {
      v9 = Feature_PowerButtonSuppression__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_PowerButtonSuppression__private_descriptor,
        Feature_PowerButtonSuppression__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v9,
        3,
        (__int64)&Feature_PowerButtonSuppression__private_descriptor);
    }
    v4 = 1;
    if ( PopEnablePowerButtonSuppressionOverride )
    {
      PopPowerButtonSuppression = 1;
    }
    else
    {
      PopPowerButtonSuppression = 0;
      v5 = 4;
    }
    if ( (int)ExSubscribeWnfStateChange((__int64)&qword_140F08730, (__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX) < 0 )
    {
      qword_140F08730 = 0LL;
      v5 |= 0x10u;
      PopPowerButtonSuppression = 0;
    }
    byte_140F08721 = PopPowerButtonSuppression;
    _m_prefetchw(&PopLidStateIsReliable);
    v6 = PopLidStateIsReliable;
    do
    {
      v1 = v6;
      v7 = v6;
      v6 = _InterlockedCompareExchange(&PopLidStateIsReliable, v6, v6);
    }
    while ( v7 != v6 );
    if ( !v6 )
    {
      byte_140F08721 = 0;
      v5 |= 0x20u;
    }
  }
  else
  {
    v5 = 1;
  }
  LOBYTE(v3) = byte_140F08721;
  LOBYTE(v2) = v4;
  LOBYTE(v1) = PopPowerButtonSuppression;
  dword_140F08724 = v5;
  PopTracePowerButtonSuppressionOptedIn(v1, v0, v2, v3, v5);
  return PopEvaluatePowerButtonSuppressionState();
}
