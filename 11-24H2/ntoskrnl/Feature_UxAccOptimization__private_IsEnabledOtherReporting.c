/*
 * XREFs of Feature_UxAccOptimization__private_IsEnabledOtherReporting @ 0x14066932C
 * Callers:
 *     Feature_UxAccOptimization_IsEnabledWithReporting @ 0x140669220 (Feature_UxAccOptimization_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_UxAccOptimization__private_IsEnabledFallback @ 0x1406692D8 (Feature_UxAccOptimization__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UxAccOptimization__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_UxAccOptimization__private_featureState;
  if ( (Feature_UxAccOptimization__private_featureState & 2) == 0 )
    return Feature_UxAccOptimization__private_IsEnabledFallback(
             (unsigned int)Feature_UxAccOptimization__private_featureState,
             a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_UxAccOptimization__private_descriptor,
    Feature_UxAccOptimization__private_featureState,
    a1);
  return v1 & 1;
}
