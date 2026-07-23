/*
 * XREFs of Feature_TestLoc03__private_IsEnabledOtherReporting @ 0x140668ABC
 * Callers:
 *     Feature_TestLoc03_IsEnabledWithReporting @ 0x1406689B0 (Feature_TestLoc03_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_TestLoc03__private_IsEnabledFallback @ 0x140668A68 (Feature_TestLoc03__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestLoc03__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_TestLoc03__private_featureState;
  if ( (Feature_TestLoc03__private_featureState & 2) == 0 )
    return Feature_TestLoc03__private_IsEnabledFallback((unsigned int)Feature_TestLoc03__private_featureState, a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_TestLoc03__private_descriptor,
    Feature_TestLoc03__private_featureState,
    a1);
  return v1 & 1;
}
