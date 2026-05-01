/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAA_NXZ @ 0x1805DB144
 * Callers:
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805D222C (_anonymous_namespace_--GetDashboardExtensionName.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805CF900 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D5E18 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55368383>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55368383>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55368383>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
