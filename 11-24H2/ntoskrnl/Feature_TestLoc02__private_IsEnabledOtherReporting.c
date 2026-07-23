/*
 * XREFs of Feature_TestLoc02__private_IsEnabledOtherReporting @ 0x14066894C
 * Callers:
 *     Feature_TestLoc02_IsEnabledWithReporting @ 0x140668840 (Feature_TestLoc02_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_TestLoc02__private_IsEnabledFallback @ 0x1406688F8 (Feature_TestLoc02__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestLoc02__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_TestLoc02__private_featureState;
  if ( (Feature_TestLoc02__private_featureState & 2) == 0 )
    return Feature_TestLoc02__private_IsEnabledFallback((unsigned int)Feature_TestLoc02__private_featureState, a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&wil_details_featureDescriptors_a,
    Feature_TestLoc02__private_featureState,
    a1);
  return v1 & 1;
}
