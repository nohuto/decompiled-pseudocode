/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach@@@details@wil@@QEAA_NXZ @ 0x180250FC0
 * Callers:
 *     ?DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180280DC0 (-DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CLegacyRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180280E20 (-DetachFromChannel@CLegacyRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180250FFC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180251200 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ReleaseSwapchainOnDetach>::ReportUsage(a1, v3);
  return v2;
}
