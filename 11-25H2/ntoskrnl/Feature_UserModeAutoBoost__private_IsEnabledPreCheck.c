/*
 * XREFs of Feature_UserModeAutoBoost__private_IsEnabledPreCheck @ 0x1404BA1F0
 * Callers:
 *     PspSchedulerSharedDataRegionCreate @ 0x1408BA4BC (PspSchedulerSharedDataRegionCreate.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_UserModeAutoBoost__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_UserModeAutoBoost__private_featureState;
  if ( (Feature_UserModeAutoBoost__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_UserModeAutoBoost__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_UserModeAutoBoost__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_UserModeAutoBoost__private_descriptor);
  }
  return 1LL;
}
