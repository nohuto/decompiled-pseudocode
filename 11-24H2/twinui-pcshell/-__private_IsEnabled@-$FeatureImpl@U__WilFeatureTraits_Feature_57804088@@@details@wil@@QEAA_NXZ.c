/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ @ 0x180335768
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 *     ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180351438 (-HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$149 @ 0x1806E0B0E (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E0B0E.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18032F524 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180332538 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
