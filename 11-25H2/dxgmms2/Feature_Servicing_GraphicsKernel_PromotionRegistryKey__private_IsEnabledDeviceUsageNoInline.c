/*
 * XREFs of Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledDeviceUsageNoInline @ 0x14004DA74
 * Callers:
 *     ?ReadPagingConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14010AD08 (-ReadPagingConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114C70 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledFallback @ 0x14004DAAC (Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_featureState,
             3LL);
}
