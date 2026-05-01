/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59977048@@@details@wil@@QEAA_NXZ @ 0x180372174
 * Callers:
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017CF60 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180240B24 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59977048@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18036D960 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59977048@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59977048@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18036FB9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59977048@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59977048>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59977048>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59977048>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
