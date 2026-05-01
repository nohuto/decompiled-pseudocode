/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ @ 0x1805DB2B4
 * Callers:
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282774 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName @ 0x180282B2C (_anonymous_namespace_--TryGetDashboardPackageName.c)
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x1805CF200 (_anonymous_namespace_--FindDashboardAppExtension.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805D222C (_anonymous_namespace_--GetDashboardExtensionName.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805CFEC8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D60CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56189266>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56189266>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56189266>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
