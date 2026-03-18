/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowNodeRender@@@details@wil@@QEAA_NXZ @ 0x18029E4B0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowNodeRender@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18029E028 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowNodeRender@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowNodeRender@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029E428 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowNodeRender@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowNodeRender>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowNodeRender>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowNodeRender>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
