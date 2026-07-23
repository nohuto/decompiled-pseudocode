/*
 * XREFs of Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline @ 0x1406692F4
 * Callers:
 *     CmFcDebugUpdateSystemInfo @ 0x140667398 (CmFcDebugUpdateSystemInfo.c)
 *     Feature_UxAccOptimization_IsEnabledWithReporting @ 0x140669220 (Feature_UxAccOptimization_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_UxAccOptimization__private_IsEnabledFallback @ 0x1406692D8 (Feature_UxAccOptimization__private_IsEnabledFallback.c)
 */

__int64 Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_UxAccOptimization__private_featureState & 2) != 0 )
    return Feature_UxAccOptimization__private_featureState & 1;
  else
    return Feature_UxAccOptimization__private_IsEnabledFallback(
             (unsigned int)Feature_UxAccOptimization__private_featureState,
             0);
}
