/*
 * XREFs of PopEsInStandbyAcDcCallback @ 0x140A36BB0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     PopEsInStandbyEvaluate @ 0x140A36C44 (PopEsInStandbyEvaluate.c)
 *     PopEsWorkItemSchedule @ 0x140A36FBC (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsInStandbyAcDcCallback(LPCGUID SettingGuid, PVOID Value, ULONG ValueLength, PVOID Context)
{
  unsigned __int8 v5; // [rsp+20h] [rbp-18h]

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsInStandbyEvaluate();
  if ( (Feature_EcoModeEnergySaver__private_featureState & 0x10) == 0 )
  {
    v5 = Feature_EcoModeEnergySaver__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EcoModeEnergySaver__private_descriptor,
      Feature_EcoModeEnergySaver__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v5,
      3,
      (__int64)&Feature_EcoModeEnergySaver__private_descriptor);
  }
  PopEsWorkItemSchedule(2LL);
  PopReleaseRwLock(&PopEsLock);
  return 0LL;
}
