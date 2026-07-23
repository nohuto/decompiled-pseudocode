/*
 * XREFs of Feature_UxAccOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1406692A0
 * Callers:
 *     Feature_UxAccOptimization_IsEnabledWithReporting @ 0x140669220 (Feature_UxAccOptimization_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_UxAccOptimization__private_IsEnabledFallback @ 0x1406692D8 (Feature_UxAccOptimization__private_IsEnabledFallback.c)
 */

__int64 Feature_UxAccOptimization__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UxAccOptimization__private_featureState & 0x10) != 0 )
    return Feature_UxAccOptimization__private_featureState & 1;
  else
    return Feature_UxAccOptimization__private_IsEnabledFallback(
             (unsigned int)Feature_UxAccOptimization__private_featureState,
             3LL);
}
