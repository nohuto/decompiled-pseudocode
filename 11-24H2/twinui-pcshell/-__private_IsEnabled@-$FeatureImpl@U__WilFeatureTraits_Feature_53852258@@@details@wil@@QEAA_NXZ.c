/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1803C1BE0
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x180243EF0 (-GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA-AUhstring@winrt@@XZ.c)
 *     ?RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180246308 (-RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x180247188 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x18024BC30 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ.c)
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x18028CC9C (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B8E08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BE8BC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
