/*
 * XREFs of Feature_LocPerfVal__private_IsEnabledOtherReporting @ 0x140667E1C
 * Callers:
 *     Feature_LocPerfVal_IsEnabledWithReporting @ 0x140667D10 (Feature_LocPerfVal_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_LocPerfVal__private_IsEnabledFallback @ 0x140667DC8 (Feature_LocPerfVal__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_LocPerfVal__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_LocPerfVal__private_featureState;
  if ( (Feature_LocPerfVal__private_featureState & 2) == 0 )
    return Feature_LocPerfVal__private_IsEnabledFallback((unsigned int)Feature_LocPerfVal__private_featureState, a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_LocPerfVal__private_descriptor,
    Feature_LocPerfVal__private_featureState,
    a1);
  return v1 & 1;
}
