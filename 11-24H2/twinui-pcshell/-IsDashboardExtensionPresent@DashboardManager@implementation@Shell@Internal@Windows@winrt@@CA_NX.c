/*
 * XREFs of ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275678
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180281A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x1805CED1C (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D8510 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1805D8510.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9CB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805D9CB0.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_ @ 0x1800BC510 (std--_Optional_destruct_base__anonymous_namespace_--DashboardExtensionVersion_0_--__Optional_des.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1800BC52C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1800C54C4 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x180210A00 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::operator__ @ 0x1802112E0 (_anonymous_namespace_--DashboardExtensionVersion--operator__.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282774 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     std::_Optional_construct_base__anonymous_namespace_::DashboardExtensionVersion_::_Assign__anonymous_namespace_::DashboardExtensionVersion_ @ 0x1805C3798 (std--_Optional_construct_base__anonymous_namespace_--DashboardExtensionVersion_--_Assign__anonym.c)
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x1805CF200 (_anonymous_namespace_--FindDashboardAppExtension.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D8E08 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DB04C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix@@@details@wil@@QEAA_NXZ @ 0x1805DB5D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookup.c)
 */

// Hidden C++ exception states: #wind=4
bool winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent(void)
{
  bool v0; // bl
  __int64 DashboardAppExtension; // rax
  __int64 AvailableDashboardExtensionVersion_0; // rax
  _DWORD **v3; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v6[56]; // [rsp+30h] [rbp-59h] BYREF
  char v7; // [rsp+68h] [rbp-21h]
  _BYTE v8[64]; // [rsp+70h] [rbp-19h] BYREF
  void *v9[4]; // [rsp+B0h] [rbp+27h] BYREF

  v0 = 0;
  v7 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::GetImpl'::`2'::impl)
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
  {
    DashboardAppExtension = anonymous_namespace_::FindDashboardAppExtension(v5);
    AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0(
                                             v8,
                                             DashboardAppExtension);
  }
  else
  {
    AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(v8);
  }
  if ( *(_BYTE *)(AvailableDashboardExtensionVersion_0 + 56) )
  {
    std::_Optional_construct_base__anonymous_namespace_::DashboardExtensionVersion_::_Assign__anonymous_namespace_::DashboardExtensionVersion_(
      v6,
      AvailableDashboardExtensionVersion_0);
  }
  else if ( v7 )
  {
    anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion((__int64)v6);
    v7 = 0;
  }
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v8);
  if ( v7 )
  {
    std::wstring::wstring((char **)v9, L"0.1");
    anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion((__int64)v8, v9);
    std::wstring::_Tidy_deallocate(v9);
    v3 = (_DWORD **)std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)v6);
    v0 = anonymous_namespace_::DashboardExtensionVersion::operator__(v3, (__int64)v8);
    anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion((__int64)v8);
  }
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v6);
  return v0;
}
