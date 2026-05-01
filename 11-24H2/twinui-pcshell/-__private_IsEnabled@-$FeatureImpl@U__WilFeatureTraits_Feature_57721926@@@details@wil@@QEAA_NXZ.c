/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x180335728
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180251010 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032EAA0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EAA0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032EFD0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EFD0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 *     ?evaluate@_tip_GamingPostureControllerStateChangeTest@@QEAAXXZ @ 0x180336164 (-evaluate@_tip_GamingPostureControllerStateChangeTest@@QEAAXXZ.c)
 *     ?subscribe_to_services@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180338580 (-subscribe_to_services@GamingPostureController@implementation@Posture@GamingExperiences@Internal.c)
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180338AB8 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 *     _anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____ @ 0x180338CF0 (_anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std--char_traits_u.c)
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x18033A9D0 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@W.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x18033AC80 (-GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences_ea_18033AC80.c)
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180356230 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18032F3FC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803324A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::ReportUsage((int *)a1, v5 & 1, 3u, v3);
  return v2;
}
