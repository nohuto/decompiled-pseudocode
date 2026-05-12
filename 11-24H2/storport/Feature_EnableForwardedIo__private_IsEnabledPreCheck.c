/*
 * XREFs of Feature_EnableForwardedIo__private_IsEnabledPreCheck @ 0x1400A51F8
 * Callers:
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140068378 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400685FC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_EnableForwardedIo__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_EnableForwardedIo__private_featureState;
  if ( (Feature_EnableForwardedIo__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_EnableForwardedIo__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_EnableForwardedIo__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3,
      (__int64)&Feature_EnableForwardedIo__private_descriptor);
  }
  return 1LL;
}
