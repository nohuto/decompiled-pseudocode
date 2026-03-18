/*
 * XREFs of Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline @ 0x14004CC48
 * Callers:
 *     ?Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x140112974 (-Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledFallback @ 0x14004CC80 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_featureState,
             3LL);
}
