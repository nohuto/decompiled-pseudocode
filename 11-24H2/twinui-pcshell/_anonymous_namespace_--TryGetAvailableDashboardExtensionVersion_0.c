/*
 * XREFs of _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D8E08
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275678 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275788 (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180281A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282D70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _lambda_7099901f832ab090231de188016256f4_::operator() @ 0x1805CBC6C (_lambda_7099901f832ab090231de188016256f4_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805CE4F0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D8144 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9CB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805D9CB0.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1800BC52C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1800C54C4 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CFE14 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x180191AB0 (--$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _anonymous_namespace_::TryLookupStringProperty @ 0x1805D99F4 (_anonymous_namespace_--TryLookupStringProperty.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0(
        __int64 a1,
        volatile signed __int32 *a2)
{
  unsigned __int16 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  const WCHAR *v10; // [rsp+20h] [rbp-49h] BYREF
  __int64 v11; // [rsp+28h] [rbp-41h] BYREF
  volatile signed __int32 *v12[3]; // [rsp+30h] [rbp-39h] BYREF
  void *v13[4]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v14[56]; // [rsp+68h] [rbp-1h] BYREF

  v10 = (const WCHAR *)a1;
  v12[2] = a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_5;
  winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
    (__int64 **)a2,
    &v11);
  if ( !v11 )
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
LABEL_5:
    *(_BYTE *)(a1 + 56) = 0;
    goto LABEL_6;
  }
  winrt::hstring::hstring((winrt::hstring *)&v10, L"Version");
  anonymous_namespace_::TryLookupStringProperty((winrt::hstring *)v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v10);
  v10 = winrt::hstring::c_str((winrt::hstring *)v12);
  DashboardManagerTelemetry::DashboardExtensionVersion<unsigned short const *>(&v10);
  v4 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)v12);
  std::wstring::wstring((char **)v13, v4);
  v5 = anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion((__int64)v14, v13);
  v6 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  v7 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = 0LL;
  v8 = *(_QWORD *)v5;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v6;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(v5 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 48) = 7LL;
  *(_WORD *)(v5 + 24) = 0;
  *(_BYTE *)(a1 + 56) = 1;
  anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion((__int64)v14);
  std::wstring::_Tidy_deallocate(v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
LABEL_6:
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
  return a1;
}
