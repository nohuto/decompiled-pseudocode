/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_P@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180131564
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801310EC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadEx.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_P@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180130D98 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_P@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_P@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180131448 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_P@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GE_EssentialsBundle_P>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GE_EssentialsBundle_P>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GE_EssentialsBundle_P>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
