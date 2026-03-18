/*
 * XREFs of Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x140093B14
 * Callers:
 *     ConfigureFeatureDefaults @ 0x140280E44 (ConfigureFeatureDefaults.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback @ 0x140093B4C (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback.c)
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
