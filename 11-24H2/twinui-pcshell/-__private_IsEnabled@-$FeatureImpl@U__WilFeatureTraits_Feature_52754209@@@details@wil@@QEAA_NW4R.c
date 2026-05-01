/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52754209@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803C1BA4
 * Callers:
 *     ?on_result@_tip_SearchHideTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1803C3E64 (-on_result@_tip_SearchHideTest@@QEAAXAEBUTipReportingInfo@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_52754209@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B8BB8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_52754209@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_52754209@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BE7BC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_52754209@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_52754209>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_52754209>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_52754209>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
