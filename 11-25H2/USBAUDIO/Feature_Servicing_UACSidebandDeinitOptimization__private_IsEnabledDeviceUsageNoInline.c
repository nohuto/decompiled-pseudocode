/*
 * XREFs of Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledDeviceUsageNoInline @ 0x140014CDC
 * Callers:
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x14000F640 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 * Callees:
 *     Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledFallback @ 0x140014D14 (Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_UACSidebandDeinitOptimization__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UACSidebandDeinitOptimization__private_featureState & 1;
  else
    return Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UACSidebandDeinitOptimization__private_featureState,
             3LL);
}
