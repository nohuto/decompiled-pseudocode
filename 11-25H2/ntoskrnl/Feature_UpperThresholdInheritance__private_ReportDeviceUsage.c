/*
 * XREFs of Feature_UpperThresholdInheritance__private_ReportDeviceUsage @ 0x1404A4C64
 * Callers:
 *     PopConfigureHeteroThresholds @ 0x140A2157C (PopConfigureHeteroThresholds.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_UpperThresholdInheritance__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_UpperThresholdInheritance__private_featureState;
  if ( (Feature_UpperThresholdInheritance__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_UpperThresholdInheritance__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_UpperThresholdInheritance__private_descriptor, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_UpperThresholdInheritance__private_descriptor);
  }
  return result;
}
