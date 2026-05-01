/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAA_NXZ @ 0x1805084AC
 * Callers:
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180503C88 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 *     ?subscribe_to_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180509450 (-subscribe_to_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180509A00 (-unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FCE00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180505CB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59118310>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59118310>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59118310>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
