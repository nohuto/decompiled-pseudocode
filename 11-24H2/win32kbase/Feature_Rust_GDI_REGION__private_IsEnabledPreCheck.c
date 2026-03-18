/*
 * XREFs of Feature_Rust_GDI_REGION__private_IsEnabledPreCheck @ 0x1401C5674
 * Callers:
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140136080 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A2654 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_Rust_GDI_REGION__private_IsEnabledPreCheck()
{
  unsigned __int8 v1; // [rsp+30h] [rbp+8h]

  if ( (Feature_Rust_GDI_REGION__private_featureState & 0x10) == 0 )
  {
    v1 = Feature_Rust_GDI_REGION__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Rust_GDI_REGION__private_descriptor,
      Feature_Rust_GDI_REGION__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3,
      (__int64)&Feature_Rust_GDI_REGION__private_descriptor);
  }
  return 1LL;
}
