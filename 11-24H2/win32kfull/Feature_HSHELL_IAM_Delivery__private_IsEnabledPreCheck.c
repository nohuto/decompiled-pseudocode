/*
 * XREFs of Feature_HSHELL_IAM_Delivery__private_IsEnabledPreCheck @ 0x1401D52CC
 * Callers:
 *     PostIAMShellHookMessageEx @ 0x140087650 (PostIAMShellHookMessageEx.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401A5404 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026CD5C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_HSHELL_IAM_Delivery__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_HSHELL_IAM_Delivery__private_featureState;
  if ( (Feature_HSHELL_IAM_Delivery__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_HSHELL_IAM_Delivery__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_HSHELL_IAM_Delivery__private_descriptor,
      Feature_HSHELL_IAM_Delivery__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_HSHELL_IAM_Delivery__private_descriptor);
  }
  return 1LL;
}
