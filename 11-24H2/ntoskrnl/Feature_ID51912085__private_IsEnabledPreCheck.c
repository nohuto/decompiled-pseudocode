/*
 * XREFs of Feature_ID51912085__private_IsEnabledPreCheck @ 0x14045E7E4
 * Callers:
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_ID51912085__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_ID51912085__private_featureState;
  if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_ID51912085__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_ID51912085__private_descriptor, v1, 3LL, 1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_ID51912085__private_descriptor);
  }
  return 1LL;
}
