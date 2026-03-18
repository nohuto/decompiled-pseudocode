/*
 * XREFs of Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledDeviceUsageNoInline @ 0x14004D3D8
 * Callers:
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400985C4 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114F00 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledFallback @ 0x14004D410 (Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_featureState,
             3LL);
}
