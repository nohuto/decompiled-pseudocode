/*
 * XREFs of Feature_ValUxPerf2__private_IsEnabledOtherReporting @ 0x140669B2C
 * Callers:
 *     Feature_ValUxPerf2_IsEnabledWithReporting @ 0x140669A20 (Feature_ValUxPerf2_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_ValUxPerf2__private_IsEnabledFallback @ 0x140669AD8 (Feature_ValUxPerf2__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ValUxPerf2__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_ValUxPerf2__private_featureState;
  if ( (Feature_ValUxPerf2__private_featureState & 2) == 0 )
    return Feature_ValUxPerf2__private_IsEnabledFallback((unsigned int)Feature_ValUxPerf2__private_featureState, a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_ValUxPerf2__private_descriptor,
    Feature_ValUxPerf2__private_featureState,
    a1);
  return v1 & 1;
}
