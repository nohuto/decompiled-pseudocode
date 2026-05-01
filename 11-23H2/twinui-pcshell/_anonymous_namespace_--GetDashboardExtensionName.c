/*
 * XREFs of _anonymous_namespace_::GetDashboardExtensionName @ 0x18023BFA8
 * Callers:
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087710 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x18023A414 (_anonymous_namespace_--FindDashboardAppExtension.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x18009355C (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     _anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy @ 0x18024002C (_anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA?AW4Variant_49686193@@W4VariantReportingKind@3@_N@Z @ 0x180248734 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA-AW4.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x18024877C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAA_NXZ @ 0x180248874 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
winrt::hstring *__fastcall anonymous_namespace_::GetDashboardExtensionName(winrt::hstring *this)
{
  __int64 v2; // rbx
  const unsigned __int16 *v3; // rdx
  _QWORD v5[6]; // [rsp+28h] [rbp-30h] BYREF
  int v6; // [rsp+68h] [rbp+10h] BYREF
  char v7; // [rsp+70h] [rbp+18h] BYREF
  void *v8; // [rsp+78h] [rbp+20h] BYREF

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl)
    || !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55368383>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55368383>::GetImpl'::`2'::impl)
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) != 1
    && !(unsigned __int8)anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy()
    || (v6 = 4,
        v5[0] = *(_QWORD *)winrt::hstring::hstring(
                             (winrt::hstring *)&v8,
                             L"com.microsoft.windows.extension.widgetboard"),
        v2 = *(_QWORD *)winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
                          (const struct winrt::param::hstring *)&v7,
                          (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v5,
                          (__int64)&v6),
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v7),
        winrt::hstring::~hstring(&v8),
        v3 = L"com.microsoft.windows.extension.widgetboard",
        !v2) )
  {
    v3 = L"com.microsoft.windows.extension.dashboard";
  }
  winrt::hstring::hstring(this, v3);
  return this;
}
