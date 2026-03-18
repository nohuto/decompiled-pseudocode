/*
 * XREFs of Feature_ID51538523__private_ReportDeviceUsage @ 0x1401A3C7C
 * Callers:
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140136080 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A2654 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_ID51538523__private_ReportDeviceUsage()
{
  unsigned __int8 v0; // [rsp+30h] [rbp+8h]

  if ( (Feature_ID51538523__private_featureState & 0x10) == 0 )
  {
    v0 = Feature_ID51538523__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ID51538523__private_descriptor,
      Feature_ID51538523__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&Feature_ID51538523__private_descriptor);
  }
}
