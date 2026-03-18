/*
 * XREFs of Feature_ID51912085__private_IsEnabledPreCheck @ 0x1404F1B70
 * Callers:
 *     PspThreadOpen @ 0x1409BBDF0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1409BBF00 (PspProcessOpen.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     SeQuerySigningPolicy @ 0x1409BD120 (SeQuerySigningPolicy.c)
 *     PspValidateCreateProcessProtection @ 0x1409BDFD8 (PspValidateCreateProcessProtection.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_ID51912085__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_ID51912085__private_featureState;
  if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_ID51912085__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_ID51912085__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_ID51912085__private_descriptor);
  }
  return 1LL;
}
