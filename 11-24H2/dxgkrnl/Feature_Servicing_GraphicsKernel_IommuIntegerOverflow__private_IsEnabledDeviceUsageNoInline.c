/*
 * XREFs of Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline @ 0x140095010
 * Callers:
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005E6C8 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     ConfigureFeatureDefaults @ 0x1402882E4 (ConfigureFeatureDefaults.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledFallback @ 0x140095048 (Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_featureState,
             3LL);
}
