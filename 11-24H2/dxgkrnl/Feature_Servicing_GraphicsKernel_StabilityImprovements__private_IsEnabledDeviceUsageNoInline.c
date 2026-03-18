/*
 * XREFs of Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14006B850
 * Callers:
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledFallback @ 0x14006B888 (Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_StabilityImprovements__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_StabilityImprovements__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_StabilityImprovements__private_featureState,
             3LL);
}
