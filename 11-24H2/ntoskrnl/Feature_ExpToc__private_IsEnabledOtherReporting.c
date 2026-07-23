/*
 * XREFs of Feature_ExpToc__private_IsEnabledOtherReporting @ 0x140667ACC
 * Callers:
 *     Feature_ExpToc_IsEnabledWithReporting @ 0x1406679C0 (Feature_ExpToc_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_ExpToc__private_IsEnabledFallback @ 0x140667A78 (Feature_ExpToc__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ExpToc__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_ExpToc__private_featureState;
  if ( (Feature_ExpToc__private_featureState & 2) == 0 )
    return Feature_ExpToc__private_IsEnabledFallback((unsigned int)Feature_ExpToc__private_featureState, a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_ExpToc__private_descriptor,
    Feature_ExpToc__private_featureState,
    a1);
  return v1 & 1;
}
