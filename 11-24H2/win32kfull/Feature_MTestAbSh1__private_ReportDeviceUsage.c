/*
 * XREFs of Feature_MTestAbSh1__private_ReportDeviceUsage @ 0x14026865C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401A5404 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026CD5C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_MTestAbSh1__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_MTestAbSh1__private_featureState;
  if ( (Feature_MTestAbSh1__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_MTestAbSh1__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MTestAbSh1__private_descriptor,
      Feature_MTestAbSh1__private_featureState | 1,
      3u,
      1LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_MTestAbSh1__private_descriptor);
  }
  return result;
}
