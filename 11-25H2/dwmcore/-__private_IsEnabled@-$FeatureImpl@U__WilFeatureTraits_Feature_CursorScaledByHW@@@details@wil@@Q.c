/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CursorScaledByHW@@@details@wil@@QEAA_NXZ @ 0x180277A44
 * Callers:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x180239FE4 (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z @ 0x18027708C (-IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CursorScaledByHW@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180252F90 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CursorScaledByHW@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CursorScaledByHW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18025823C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CursorScaledByHW@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CursorScaledByHW>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CursorScaledByHW>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CursorScaledByHW>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
