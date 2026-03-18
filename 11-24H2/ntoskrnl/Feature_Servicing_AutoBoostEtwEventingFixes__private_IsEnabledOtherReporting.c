/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x14064EECC
 * Callers:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404790D0 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x1404F5D34 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 __fastcall Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState;
  if ( (Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 2) == 0 )
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
             a1,
             a3,
             a4);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_AutoBoostEtwEventingFixes__private_descriptor,
    Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
    a1);
  return v4 & 1;
}
