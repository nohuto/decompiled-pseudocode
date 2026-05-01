/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ @ 0x180392AC0
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B41A0 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Close@CStartExperienceManager@@UEAAJXZ @ 0x180241E00 (-Close@CStartExperienceManager@@UEAAJXZ.c)
 *     ?ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z @ 0x180391D00 (-ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18038FF4C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803922EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::ReportUsage((int *)a1, v5 & 1, 3u, v3);
  return v2;
}
