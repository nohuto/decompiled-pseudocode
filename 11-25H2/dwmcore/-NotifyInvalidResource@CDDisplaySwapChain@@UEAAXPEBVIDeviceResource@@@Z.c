/*
 * XREFs of ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802C8B40
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x18024B1A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1802C92D4 (-clear@-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$eq.c)
 */

void __fastcall CDDisplaySwapChain::NotifyInvalidResource(CDDisplaySwapChain *this, const struct IDeviceResource *a2)
{
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl) )
    std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::clear((char *)this + 320);
  CDeviceResourceT<IRenderTargetBitmap>::NotifyInvalid((_QWORD *)this - 32);
}
