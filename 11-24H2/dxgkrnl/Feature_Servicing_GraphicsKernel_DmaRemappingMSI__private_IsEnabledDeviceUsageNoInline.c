/*
 * XREFs of Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline @ 0x140095860
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140286D30 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140287060 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledFallback @ 0x140095898 (Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_featureState,
             3LL);
}
