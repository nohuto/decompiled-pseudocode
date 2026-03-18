/*
 * XREFs of Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x140096074
 * Callers:
 *     ConfigureFeatureDefaults @ 0x1402882E4 (ConfigureFeatureDefaults.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback @ 0x1400960AC (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_featureState,
             3LL);
}
