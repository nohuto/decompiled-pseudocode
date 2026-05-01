/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@QEAA_NXZ @ 0x180616A8C
 * Callers:
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18004E650 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     wistd::__function::__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180611990 (wistd--__function--__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl(enum_wil--Regis.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180613E40 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180613E40.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802BC8D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180613520 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBa.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
