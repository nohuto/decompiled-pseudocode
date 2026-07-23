/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x14064D530
 * Callers:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1403C11B0 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x1404F3634 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 __fastcall Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState;
  if ( (Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 2) == 0 )
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
             a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_AutoBoostEtwEventingFixes__private_descriptor,
    Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
    a1);
  return v1 & 1;
}
