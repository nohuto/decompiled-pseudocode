/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ @ 0x180372134
 * Callers:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1801C67E4 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18024078C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18025AA00 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     std::_Func_impl_no_alloc__lambda_4947cc5562530a5e119976c0de6f80d3__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x1804A4350 (std--_Func_impl_no_alloc__lambda_4947cc5562530a5e119976c0de6f80d3__void_enum_winrt-_ea_1804A4350.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18036D838 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18036FB08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::ReportUsage((int *)a1, v5 & 1, 3u, v3);
  return v2;
}
