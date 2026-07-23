/*
 * XREFs of Feature_TestUex12__private_IsEnabledOtherReporting @ 0x140668D7C
 * Callers:
 *     Feature_TestUex12_IsEnabledWithReporting @ 0x140668C70 (Feature_TestUex12_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_TestUex12__private_IsEnabledFallback @ 0x140668D28 (Feature_TestUex12__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestUex12__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_TestUex12__private_featureState;
  if ( (Feature_TestUex12__private_featureState & 2) == 0 )
    return Feature_TestUex12__private_IsEnabledFallback((unsigned int)Feature_TestUex12__private_featureState, a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_TestUex12__private_descriptor,
    Feature_TestUex12__private_featureState,
    a1);
  return v1 & 1;
}
