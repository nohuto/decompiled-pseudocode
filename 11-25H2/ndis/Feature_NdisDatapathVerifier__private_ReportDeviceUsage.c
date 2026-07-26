/*
 * XREFs of Feature_NdisDatapathVerifier__private_ReportDeviceUsage @ 0x1400A2588
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x1400A2340 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14009FAB8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14009FD3C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_NdisDatapathVerifier__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_NdisDatapathVerifier__private_featureState;
  if ( (Feature_NdisDatapathVerifier__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_NdisDatapathVerifier__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_NdisDatapathVerifier__private_descriptor,
      v0,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_NdisDatapathVerifier__private_descriptor);
  }
}
