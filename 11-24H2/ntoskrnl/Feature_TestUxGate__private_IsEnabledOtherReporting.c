/*
 * XREFs of Feature_TestUxGate__private_IsEnabledOtherReporting @ 0x140668FDC
 * Callers:
 *     Feature_TestUxGate_IsEnabledWithReporting @ 0x140668ED0 (Feature_TestUxGate_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_TestUxGate__private_IsEnabledFallback @ 0x140668F88 (Feature_TestUxGate__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestUxGate__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_TestUxGate__private_featureState;
  if ( (Feature_TestUxGate__private_featureState & 2) == 0 )
    return Feature_TestUxGate__private_IsEnabledFallback((unsigned int)Feature_TestUxGate__private_featureState, a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_TestUxGate__private_descriptor,
    Feature_TestUxGate__private_featureState,
    a1);
  return v1 & 1;
}
