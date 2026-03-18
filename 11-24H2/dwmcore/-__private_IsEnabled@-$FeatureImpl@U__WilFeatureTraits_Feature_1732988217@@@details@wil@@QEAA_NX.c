/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1732988217@@@details@wil@@QEAA_NXZ @ 0x180299B7C
 * Callers:
 *     ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x180298FAC (--1CDelegatedInkCanvas@@EEAA@XZ.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x1802A6EF8 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_1732988217@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802997C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_1732988217@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_1732988217@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180299AF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_1732988217@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_1732988217>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_1732988217>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_1732988217>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
