/*
 * XREFs of _lambda_d3a26e949cca22f756fde8979863d6a4_::operator() @ 0x1803B6938
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::Run @ 0x1803BF4F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180050E68 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D2A64 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CA780 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$try_get_value@I@reg@wil@@YA?AV?$optional@I@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803B46F4 (--$try_get_value@I@reg@wil@@YA-AV-$optional@I@std@@PEAUHKEY__@@PEBG1@Z.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803B49BC (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe_ea_1803B49BC.c)
 *     ??1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803B5CC8 (--1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManage.c)
 *     ??D?$fast_iterator@U?$IVectorView@UAppExtension@StateRepository@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppExtension@StateRepository@Internal@Windows@2@XZ @ 0x1803B5FD0 (--D-$fast_iterator@U-$IVectorView@UAppExtension@StateRepository@Internal@Windows@winrt@@@Collect.c)
 *     ?FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1803B8508 (-FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z @ 0x1803BFA84 (-SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z.c)
 *     ?Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAX_N000@Z @ 0x1803C0440 (-Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceMan.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_d3a26e949cca22f756fde8979863d6a4_::operator()(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // eax
  bool v3; // di
  winrt::hstring *View; // rax
  char v5; // bl
  winrt::hstring *v6; // rax
  const WCHAR *v7; // rax
  bool v8; // dl
  const char *v9; // r9
  int v10; // r14d
  int v11; // eax
  char v12; // [rsp+30h] [rbp-208h]
  char v13; // [rsp+31h] [rbp-207h]
  volatile signed __int32 *Data; // [rsp+38h] [rbp-200h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-1F0h] BYREF
  volatile signed __int32 *v17; // [rsp+50h] [rbp-1E8h] BYREF
  int v18; // [rsp+58h] [rbp-1E0h]
  __int64 v19; // [rsp+60h] [rbp-1D8h]
  int v20; // [rsp+68h] [rbp-1D0h] BYREF
  __int128 v21; // [rsp+70h] [rbp-1C8h]
  _OWORD v22[2]; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v23[48]; // [rsp+A0h] [rbp-198h] BYREF
  _QWORD v24[34]; // [rsp+D0h] [rbp-168h] BYREF
  _DWORD *v25; // [rsp+1E0h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]

  v1 = a1;
  v19 = a1;
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    a1);
  v24[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  if ( *v25 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v22,
      (struct wil::details::IFailureCallback *)v24,
      (const struct wil::details::StoredCallContextInfo *)(v25 + 10));
  }
  else
  {
    memset(v22, 0, sizeof(v22));
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v23,
      0LL,
      0LL,
      0);
  }
  try
  {
    v3 = 0;
    v12 = 0;
    v5 = 0;
    v13 = 0;
    winrt::WindowsUdk::UI::Shell::WebSearchProvider::FindAll();
    v17 = (volatile signed __int32 *)&v16;
    v10 = 0;
    v18 = 0;
    LODWORD(Data) = 0;
    v20 = 0;
    v21 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v16 + 56LL))(v16, &Data);
    winrt::check_hresult((int *)&v15, v2, (__int64)&v20);
    while ( v10 != (_DWORD)Data )
    {
      winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::StateRepository::AppExtension>>::operator*(
        (__int64)&v17,
        (winrt *)&v15);
      if ( winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided((__int64 *)&v15) )
      {
        v3 = 1;
        v12 = 1;
        View = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                                   &v15,
                                   &Data);
        winrt::hstring::c_str(View);
        wil::reg::try_get_value<unsigned int>((__int64)&v17);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&Data);
        v5 = BYTE4(v17);
        v13 = BYTE4(v17);
        if ( !BYTE4(v17) )
        {
          v6 = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                                   &v15,
                                   &v17);
          v7 = winrt::hstring::c_str(v6);
          SearchSettings::SearchSettingsHelper::SetIsIndividualWebSearchProviderEnabled(v7, v8);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
        break;
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
      v18 = ++v10;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xFE2,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v9);
    v3 = v12;
    v5 = v13;
    v1 = v19;
  }
  LODWORD(Data) = 1;
  v11 = RegSetKeyValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
          L"HasSetWebSearchEnabledStateOnUpdate",
          4u,
          &Data,
          4u);
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0x80070000;
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFE2,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::Stop(
    (SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v24,
    *(_BYTE *)(v1 + 336),
    *(_BYTE *)(v1 + 337),
    v3,
    v5);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v22);
  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate((SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v24);
}
