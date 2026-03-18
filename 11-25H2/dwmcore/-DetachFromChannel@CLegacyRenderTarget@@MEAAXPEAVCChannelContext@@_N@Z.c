/*
 * XREFs of ?DetachFromChannel@CLegacyRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180280E20
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach@@@details@wil@@QEAA_NXZ @ 0x180250FC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach@@@detail.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::DetachFromChannel(CLegacyRenderTarget *this, struct CChannelContext *a2)
{
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach>::GetImpl'::`2'::impl) )
  {
    *((_DWORD *)this + 8370) = 0;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 20) + 232LL))((char *)this + 160);
  }
  CNotificationResource::DetachFromChannel(this, a2);
}
