/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ @ 0x1803720F8
 * Callers:
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036CE58 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18036DF90 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803702A0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18036D710 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18036FA80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
