/*
 * XREFs of Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck @ 0x1405B6544
 * Callers:
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck()
{
  unsigned __int8 v1; // [rsp+30h] [rbp+8h]

  if ( (Feature_TickAccumulationFromAccountingPeriods__private_featureState & 0x10) == 0 )
  {
    v1 = Feature_TickAccumulationFromAccountingPeriods__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_TickAccumulationFromAccountingPeriods__private_descriptor,
      Feature_TickAccumulationFromAccountingPeriods__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3,
      (__int64)&Feature_TickAccumulationFromAccountingPeriods__private_descriptor);
  }
  return 1LL;
}
