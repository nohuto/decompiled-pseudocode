/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAA_NXZ @ 0x18003DF2C
 * Callers:
 *     ??R_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z @ 0x18002AC94 (--R_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800308F8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039868 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
