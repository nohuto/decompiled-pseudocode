/*
 * XREFs of ?DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180280DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x18020F410 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach@@@details@wil@@QEAA_NXZ @ 0x180250FC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach@@@detail.c)
 */

void __fastcall CDDisplayRenderTarget::DetachFromChannel(CDDisplayRenderTarget *this, struct CChannelContext *a2)
{
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach>::GetImpl'::`2'::impl) )
  {
    *((_DWORD *)this + 8379) = 0;
    CDDisplayRenderTarget::ReleaseSwapChain((CDDisplayRenderTarget *)((char *)this + 160));
  }
  CNotificationResource::DetachFromChannel(this, a2);
}
