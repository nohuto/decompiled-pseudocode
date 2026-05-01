/*
 * XREFs of _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282774
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
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x1800564F0 (_anonymous_namespace_--TryGetTextFromProperty.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180056638 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1800BC52C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1800C54C4 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CFE14 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x180191AB0 (--$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801C4BD4 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ @ 0x1805DB2B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  unsigned __int16 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 **v8; // rcx
  __int64 **v9; // rcx
  void (__fastcall ***v10)(_QWORD, void *, const WCHAR **); // rcx
  unsigned __int16 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  const WCHAR *v17; // [rsp+20h] [rbp-49h] BYREF
  void (__fastcall ***v18)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-41h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-39h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-31h] BYREF
  void (__fastcall ***v21)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp-29h] BYREF
  __int64 v22[2]; // [rsp+48h] [rbp-21h] BYREF
  void *v23[4]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v24[56]; // [rsp+78h] [rbp+Fh] BYREF

  v17 = (const WCHAR *)a1;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56189266>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56189266>::GetImpl'::`2'::impl) )
  {
    LODWORD(v18) = 8;
    v23[0] = *(void **)winrt::hstring::hstring((winrt::hstring *)&v17, L"com.microsoft.windows.extension.dashboard");
    winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
      (const struct winrt::param::hstring *)&v19,
      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v23,
      (__int64)&v18);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v17);
    if ( v19 )
    {
      winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
        &v19,
        &v20);
      if ( v20 )
      {
        winrt::param::hstring::hstring((winrt::param::hstring *)v23, L"Version");
        v10 = *(void (__fastcall ****)(_QWORD, void *, const WCHAR **))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                                         (void (__fastcall ****)(_QWORD, void *, __int64 *))&v20,
                                                                         (winrt *)v22,
                                                                         v23);
        if ( v10 )
        {
          v17 = 0LL;
          (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v17);
          v18 = (void (__fastcall ***)(_QWORD, void *, __int64 *))v17;
        }
        else
        {
          v18 = 0LL;
        }
        if ( v22[0] )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v22);
        anonymous_namespace_::TryGetTextFromProperty((winrt::hstring *)&v21, &v18);
        v17 = winrt::hstring::c_str((winrt::hstring *)&v21);
        DashboardManagerTelemetry::DashboardExtensionVersion<unsigned short const *>(&v17);
        v11 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v21);
        std::wstring::wstring((char **)v23, v11);
        v12 = anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion((__int64)v24, v23);
        v13 = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(v12 + 16) = 0LL;
        v14 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
        v15 = *(_QWORD *)v12;
        *(_QWORD *)v12 = 0LL;
        *(_QWORD *)a1 = v15;
        *(_QWORD *)(a1 + 8) = v14;
        *(_QWORD *)(a1 + 16) = v13;
        *(_OWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 40) = 0LL;
        *(_QWORD *)(a1 + 48) = 0LL;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(v12 + 24);
        *(_OWORD *)(a1 + 40) = *(_OWORD *)(v12 + 40);
        *(_QWORD *)(v12 + 40) = 0LL;
        *(_QWORD *)(v12 + 48) = 7LL;
        *(_WORD *)(v12 + 24) = 0;
        *(_BYTE *)(a1 + 56) = 1;
        anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion((__int64)v24);
        std::wstring::_Tidy_deallocate(v23);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v21);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
        v8 = &v19;
        goto LABEL_10;
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
    }
    v9 = &v19;
LABEL_23:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v9);
    *(_BYTE *)(a1 + 56) = 0;
    return a1;
  }
  LODWORD(v18) = 24;
  v23[0] = *(void **)winrt::hstring::hstring((winrt::hstring *)&v17, L"com.microsoft.windows.extension.dashboard");
  winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
    (const struct winrt::param::hstring *)&v20,
    (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v23,
    (__int64)&v18);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v17);
  if ( !v20 )
  {
LABEL_12:
    v9 = &v20;
    goto LABEL_23;
  }
  winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
    &v20,
    &v19);
  if ( !v19 )
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
    goto LABEL_12;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v23, L"Version");
  v2 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                             (void (__fastcall ****)(_QWORD, void *, __int64 *))&v19,
                                                             (winrt *)&v17,
                                                             v23);
  if ( v2 )
  {
    v22[0] = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, v22);
    v21 = (void (__fastcall ***)(_QWORD, void *, __int64 *))v22[0];
  }
  else
  {
    v21 = 0LL;
  }
  if ( v17 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v17);
  anonymous_namespace_::TryGetTextFromProperty((winrt::hstring *)&v18, &v21);
  v17 = winrt::hstring::c_str((winrt::hstring *)&v18);
  DashboardManagerTelemetry::DashboardExtensionVersion<unsigned short const *>(&v17);
  v3 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v18);
  std::wstring::wstring((char **)v23, v3);
  v4 = anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion((__int64)v24, v23);
  v5 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  v6 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 8) = 0LL;
  v7 = *(_QWORD *)v4;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v5;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(v4 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 7LL;
  *(_WORD *)(v4 + 24) = 0;
  *(_BYTE *)(a1 + 56) = 1;
  anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion((__int64)v24);
  std::wstring::_Tidy_deallocate(v23);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  v8 = &v20;
LABEL_10:
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v8);
  return a1;
}
