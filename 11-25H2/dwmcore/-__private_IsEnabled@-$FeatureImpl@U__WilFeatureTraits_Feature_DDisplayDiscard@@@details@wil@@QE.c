/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayDiscard@@@details@wil@@QEAA_NXZ @ 0x180285134
 * Callers:
 *     ?GetClearMode@CDDisplayRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x1802810F0 (-GetClearMode@CDDisplayRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayDiscard@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180280FC4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayDiscard@@@detail.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayDiscard@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180282F50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayDiscard@@@details@wil@@QEAAX_NW4R.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayDiscard>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayDiscard>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayDiscard>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
