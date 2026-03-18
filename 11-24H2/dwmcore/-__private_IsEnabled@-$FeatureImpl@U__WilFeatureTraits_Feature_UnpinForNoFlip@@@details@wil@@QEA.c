/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAA_NXZ @ 0x1802BFF08
 * Callers:
 *     ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x180066ACC (-PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1801C7600 (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802BF2A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802BF850 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAAX_NW4Re.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
