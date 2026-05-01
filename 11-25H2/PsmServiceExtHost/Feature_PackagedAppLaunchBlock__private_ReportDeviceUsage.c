/*
 * XREFs of Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage @ 0x18006FF80
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F6C8 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x180078F88 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1800792E8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_PackagedAppLaunchBlock__private_featureState;
  if ( (Feature_PackagedAppLaunchBlock__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_PackagedAppLaunchBlock__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_PackagedAppLaunchBlock__private_descriptor, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_PackagedAppLaunchBlock__private_descriptor);
  }
  return result;
}
