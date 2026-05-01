/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_InitCoro$2 @ 0x180245E40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 * Callees:
 *     _anonymous_namespace_::TryGetDashboardPackageName @ 0x18005A3E8 (_anonymous_namespace_--TryGetDashboardPackageName.c)
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180061910 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180069A14 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@experimental@std@@@Z @ 0x1800715E8 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@i.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180072F74 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1800B6A10 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800B75C4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5868 (-release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180188BA0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18018F814 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashb_ea_18018F814.c)
 *     ?release_ref@?$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801995CC (-release_ref@-$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AE.c)
 *     ??$await_transform@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEAA?A_P$$QEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@3@@Z @ 0x18019AD9C (--$await_transform@V-$duration@HU-$ratio@$0DM@$00@std@@@chrono@std@@@promise_type@-$coroutine_tr.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_ @ 0x1801B3A48 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--_optional__anonymous_namespace_.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x1801BBA18 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     ?ReadPrelaunchValue@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJPEAK@Z @ 0x1801BCA98 (-ReadPrelaunchValue@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJPEAK@Z.c)
 *     ?await_ready@?$notify_awaiter@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x1801BCE34 (-await_ready@-$notify_awaiter@V-$duration@HU-$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$WidgetsOSState@AEAKAEA_NAEAK_N_NPEBGPEBGAEAPEBG_N_N@DashboardManagerTelemetry@@SAXAEAKAEA_N0$$QEA_N2$$QEAPEBG3AEAPEBG22@Z @ 0x18022F0C4 (--$WidgetsOSState@AEAKAEA_NAEAK_N_NPEBGPEBGAEAPEBG_N_N@DashboardManagerTelemetry@@SAXAEAKAEA_N0$.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x18023BE40 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?GetDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@XZ @ 0x18023BF5C (-GetDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUDash.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x18023BFA8 (_anonymous_namespace_--GetDashboardExtensionName.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName_0 @ 0x180244DFC (_anonymous_namespace_--TryGetDashboardPackageName_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x18024877C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAA_NXZ @ 0x180248A18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExte.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ??1?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1802E79A0 (--1-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803D4B3C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?await_resume@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1806389B4 (-await_resume@-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA.c)
 *     ??$?GUsystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@12@HU?$ratio@$0OBA@$00@2@@chrono@std@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@01@AEBV201@AEBV?$duration@HU?$ratio@$0OBA@$00@std@@@01@@Z @ 0x180693738 (--$-GUsystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@12@HU-$ratio@$0OBA@$00@.c)
 *     _anonymous_namespace_::IsRegistryFlagSet @ 0x180697274 (_anonymous_namespace_--IsRegistryFlagSet.c)
 *     ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1806995D0 (-GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync__ResumeCoro_1(
        char *a1)
{
  __int64 v2; // rcx
  void *v3; // rbx
  _DWORD *v4; // rdi
  __int64 *DashboardAppExtension; // rax
  char *DashboardPackageName_0; // rax
  __int64 v7; // rax
  const WCHAR *v8; // rax
  char IsEnabled; // al
  RTL_SRWLOCK *v10; // rcx
  winrt::Windows::Foundation::IUnknown *DashboardExtension; // rax
  __int64 v12; // r9
  winrt::hstring *DashboardExtensionName; // rax
  DashboardTaskbarSettings *v14; // rcx
  unsigned int v15; // eax
  bool v16; // [rsp+50h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  try
  {
    if ( (unsigned __int16)(*((_WORD *)a1 + 4) + 1) > 8u )
    {
LABEL_29:
      __debugbreak();
    }
    else
    {
      switch ( *((_WORD *)a1 + 4) )
      {
        case 0xFFFF:
        case 3:
          goto LABEL_27;
        case 0:
        case 1:
          goto LABEL_29;
        case 2:
          winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
            *(_QWORD *)(a1 + 364),
            (__int64 *)a1 + 2);
          a1[24] = 0;
          *((_QWORD *)a1 + 4) = a1 + 24;
          if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
            goto LABEL_7;
          *((_WORD *)a1 + 4) = 4;
          ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std___experimental_std___Z(
            4LL,
            a1);
          return;
        case 4:
LABEL_7:
          _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
          *((_DWORD *)a1 + 12) = 20;
          v3 = (void *)std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::await_transform<std::chrono::duration<int,std::ratio<60,1>>>(
                         v2,
                         (__int64)(a1 + 56),
                         (int *)a1 + 12);
          *((_QWORD *)a1 + 5) = v3;
          if ( winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<60,1>>>::await_ready((__int64)v3) )
            goto LABEL_10;
          *((_WORD *)a1 + 4) = 6;
          winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<60,1>>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type>(v3);
          return;
        case 5:
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref((__int64 *)a1 + 2);
          goto LABEL_27;
        case 6:
LABEL_10:
          winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_resume(*((_QWORD *)a1 + 5));
          winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 56);
          *((_QWORD *)a1 + 12) = _Xtime_get_ticks();
          *((_QWORD *)a1 + 13) = 0LL;
          *((_DWORD *)a1 + 28) = 8;
          if ( RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                 L"WidgetsStateLastRun",
                 8u,
                 0LL,
                 a1 + 104,
                 (LPDWORD)a1 + 28)
            || (*((_DWORD *)a1 + 29) = 168,
                *((_QWORD *)a1 + 13) >= *(_QWORD *)std::chrono::operator-<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>,int,std::ratio<3600,1>>(
                                                     a1 + 120,
                                                     a1 + 96)) )
          {
            *((_DWORD *)a1 + 32) = 4;
            if ( RegGetValueW(
                   HKEY_CURRENT_USER,
                   L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
                   L"TaskbarDa",
                   0x10u,
                   0LL,
                   a1 + 132,
                   (LPDWORD)a1 + 32) )
            {
              *((_DWORD *)a1 + 33) = 1;
            }
            v4 = a1 + 136;
            *((_DWORD *)a1 + 34) = 0;
            winrt::Windows::Internal::Shell::implementation::DashboardManager::ReadPrelaunchValue((unsigned int *)a1 + 34);
            std::wstring::wstring((_QWORD *)a1 + 18);
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
            {
              DashboardAppExtension = (__int64 *)winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
                                                   *(RTL_SRWLOCK **)(a1 + 364),
                                                   (winrt::Windows::Foundation::IUnknown *)(a1 + 176));
              DashboardPackageName_0 = anonymous_namespace_::TryGetDashboardPackageName_0(
                                         a1 + 184,
                                         DashboardAppExtension);
              std::wstring::operator=(a1 + 144, DashboardPackageName_0);
              std::wstring::_Tidy_deallocate((__int64)(a1 + 184));
            }
            else
            {
              anonymous_namespace_::TryGetDashboardPackageName((_QWORD *)a1 + 18);
            }
            anonymous_namespace_::TryGetAvailableDashboardExtensionVersion((__int64)(a1 + 224));
            if ( a1[280] )
            {
              v7 = std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)(a1 + 224));
              v8 = (const WCHAR *)std::wstring::c_str((_QWORD *)(v7 + 24));
            }
            else
            {
              v8 = &LocaleName;
            }
            *((_QWORD *)a1 + 36) = v8;
            IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::GetImpl'::`2'::impl);
            v10 = *(RTL_SRWLOCK **)(a1 + 364);
            if ( IsEnabled )
            {
              *((_QWORD *)a1 + 38) = 0LL;
              DashboardExtension = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardExtension(
                                     v10,
                                     (winrt::Windows::Foundation::IUnknown *)(a1 + 312));
              v16 = winrt::Windows::Foundation::operator!=((__int64)DashboardExtension, (__int64)(a1 + 304));
              winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)(a1 + 312));
              winrt::Windows::Foundation::IUnknown::release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 304));
              v4 = a1 + 136;
            }
            else
            {
              *((_QWORD *)a1 + 40) = 0LL;
              v16 = winrt::Windows::Foundation::operator!=((__int64)&v10[17], (__int64)(a1 + 320));
              winrt::Windows::Foundation::IUnknown::release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 320));
            }
            a1[296] = v16;
            a1[328] = anonymous_namespace_::IsRegistryFlagSet(
                        -2147483647LL,
                        L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                        L"PackageRepairCompleted",
                        0LL);
            LOBYTE(v12) = 1;
            a1[329] = anonymous_namespace_::IsRegistryFlagSet(
                        -2147483646LL,
                        L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                        L"AllowWebExperienceAutoInstall",
                        v12);
            DashboardExtensionName = anonymous_namespace_::GetDashboardExtensionName((winrt::hstring *)(a1 + 344));
            *((_QWORD *)a1 + 42) = winrt::hstring::c_str(DashboardExtensionName);
            *((_QWORD *)a1 + 44) = std::wstring::c_str((_QWORD *)a1 + 18);
            a1[360] = DashboardTaskbarSettings::GetTaskbarBadgingEnabled(v14);
            a1[361] = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent();
            DashboardManagerTelemetry::WidgetsOSState<unsigned long &,bool &,unsigned long &,bool,bool,unsigned short const *,unsigned short const *,unsigned short const * &,bool,bool>(
              (unsigned int *)a1 + 33,
              (bool *)a1 + 296,
              v4,
              (bool *)a1 + 361,
              (bool *)a1 + 360,
              (const unsigned __int16 **)a1 + 44,
              (const unsigned __int16 **)a1 + 42,
              (const unsigned __int16 **)a1 + 36,
              (bool *)a1 + 329,
              (bool *)a1 + 328);
            winrt::hstring::~hstring((void **)a1 + 43);
            v15 = RegSetKeyValueW(
                    HKEY_CURRENT_USER,
                    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                    L"WidgetsStateLastRun",
                    3u,
                    a1 + 96,
                    8u);
            if ( v15 )
              wil::details::in1diag3::_Log_Win32(
                retaddr,
                (void *)0x698,
                (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                (const char *)v15);
            std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_((__int64)(a1 + 224));
            std::wstring::_Tidy_deallocate((__int64)(a1 + 144));
          }
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref((__int64 *)a1 + 2);
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
            a1,
            a1 + 362);
          goto LABEL_27;
        case 7:
          winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 56);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref((__int64 *)a1 + 2);
LABEL_27:
          if ( *((_WORD *)a1 + 5) )
            operator delete(a1);
          break;
      }
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
