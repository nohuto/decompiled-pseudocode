/*
 * XREFs of Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline @ 0x140092B60
 * Callers:
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005DE90 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     ConfigureFeatureDefaults @ 0x140280E44 (ConfigureFeatureDefaults.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledFallback @ 0x140092B98 (Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledFallback.c)
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
