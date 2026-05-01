/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA_NXZ @ 0x180491378
 * Callers:
 *     ?Show@AccessibilityExperienceManager@@UEAAJH@Z @ 0x1802589F0 (-Show@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     _lambda_c3975a5b4ee2ba5280707fbe38be1371_::operator() @ 0x18048EAC0 (_lambda_c3975a5b4ee2ba5280707fbe38be1371_--operator().c)
 *     _lambda_fa553258777e9fe890f937adf5270d38_::operator() @ 0x18048EC38 (_lambda_fa553258777e9fe890f937adf5270d38_--operator().c)
 *     ?SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z @ 0x1804900B0 (-SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z @ 0x1804902C0 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z.c)
 *     ?evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ @ 0x180491484 (-evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18048F374 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18048FDFC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
