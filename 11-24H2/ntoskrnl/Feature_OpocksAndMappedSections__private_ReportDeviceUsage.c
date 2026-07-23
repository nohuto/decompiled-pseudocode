/*
 * XREFs of Feature_OpocksAndMappedSections__private_ReportDeviceUsage @ 0x140459D1C
 * Callers:
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409E64C0 (FsRtlCheckOplockForFsFilterCallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_OpocksAndMappedSections__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_OpocksAndMappedSections__private_featureState;
  if ( (Feature_OpocksAndMappedSections__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_OpocksAndMappedSections__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_OpocksAndMappedSections__private_descriptor,
      v1,
      3LL,
      1LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_OpocksAndMappedSections__private_descriptor);
  }
  return result;
}
