/*
 * XREFs of ?InitUserConfig@Theming@@YAXXZ @ 0x18010E724
 * Callers:
 *     wistd::__function::__func__lambda_bf3a05332e284c078092dab55d26056a__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180604DF0 (wistd--__function--__func__lambda_bf3a05332e284c078092dab55d26056a__void___cdecl(un_ea_180604DF0.c)
 *     ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x180605928 (-HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJX.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___::Run @ 0x180606120 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___--Run.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z @ 0x1800F0A54 (-SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x1800F1DA8 (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 *     ?SetSoundRedirectionPath@Theming@@YAXPEBG@Z @ 0x1800F1F88 (-SetSoundRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010EAC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18010EB48 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x18010EC08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x18010ECF0 (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18010F110 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@AE.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18010F284 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wi.c)
 *     ?SetStartupSoundDefaultKey@Theming@@YAX_N@Z @ 0x1802C66F8 (-SetStartupSoundDefaultKey@Theming@@YAX_N@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@WindowsUdk@winrt@@UIPackageManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@Z @ 0x180604264 (--$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@-$factory_cache_entry@UPackageManager@De.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Theming::InitUserConfig(Theming *this, __int64 a2)
{
  __int64 v2; // rcx
  const WCHAR *v3; // rcx
  __int64 v4; // rdx
  const WCHAR *v5; // rax
  BYTE *v6; // rax
  const unsigned __int16 *v7; // rdx
  UINT WindowsDirectoryW; // eax
  UINT v9; // ebx
  WCHAR *v10; // rcx
  const unsigned __int16 *v11; // rdx
  BYTE *v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  const WCHAR *v15; // rcx
  __int64 v16; // rdx
  const WCHAR *v17; // rax
  Theming *v18; // rax
  const unsigned __int16 *v19; // rdx
  unsigned int v20; // r8d
  Theming *v21; // rcx
  bool v22; // dl
  int v23; // [rsp+48h] [rbp-69h] BYREF
  __int16 v24; // [rsp+4Ch] [rbp-65h]
  int v25; // [rsp+50h] [rbp-61h] BYREF
  __int16 v26; // [rsp+54h] [rbp-5Dh]
  volatile signed __int32 *v27; // [rsp+58h] [rbp-59h] BYREF
  volatile signed __int32 *v28; // [rsp+60h] [rbp-51h] BYREF
  _DWORD **v29; // [rsp+68h] [rbp-49h] BYREF
  _DWORD **v30; // [rsp+70h] [rbp-41h] BYREF
  _DWORD *v31; // [rsp+78h] [rbp-39h] BYREF
  _DWORD v32[4]; // [rsp+80h] [rbp-31h] BYREF
  const wchar_t *v33; // [rsp+90h] [rbp-21h]
  _DWORD *v34; // [rsp+98h] [rbp-19h] BYREF
  _DWORD v35[4]; // [rsp+A0h] [rbp-11h] BYREF
  const wchar_t *v36; // [rsp+B0h] [rbp-1h]
  __int64 *v37; // [rsp+B8h] [rbp+7h]
  _BYTE v38[8]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 *v39; // [rsp+C8h] [rbp+17h]
  _BYTE v40[8]; // [rsp+D0h] [rbp+1Fh] BYREF
  LPWSTR lpBuffer[3]; // [rsp+D8h] [rbp+27h] BYREF
  unsigned __int64 v42; // [rsp+F0h] [rbp+3Fh]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HVSTest>::GetImpl'::`2'::impl,
    a2);
  v32[0] = 1;
  v32[1] = 17;
  v33 = L"CustomThemeSounds";
  v31 = v32;
  v30 = &v31;
  v37 = &qword_1808CB018;
  _InterlockedAdd64(&qword_1808CB018, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>,
      &v27,
      &v31);
    _InterlockedDecrement64(&qword_1808CB018);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB018);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::call<_lambda_720477a61d445079ad03f3ff7eed504d_ &>(
      v2,
      &v27,
      &v30);
  }
  if ( v27 )
  {
    v3 = (const WCHAR *)*((_QWORD *)v27 + 2);
    v4 = *((unsigned int *)v27 + 1);
  }
  else
  {
    v3 = &pvData;
    v4 = 0LL;
  }
  if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(v3, v4, &pvData, 0LL)
    || (v5 = winrt::hstring::c_str((winrt::hstring *)&v27), !PathFileExistsW(v5)) )
  {
    WindowsDirectoryW = GetWindowsDirectoryW(0LL, 0);
    v9 = WindowsDirectoryW;
    if ( WindowsDirectoryW )
    {
      std::wstring::wstring(lpBuffer, WindowsDirectoryW - 1, 0LL);
      v10 = (WCHAR *)lpBuffer;
      if ( v42 > 7 )
        v10 = lpBuffer[0];
      if ( GetWindowsDirectoryW(v10, v9) )
      {
        std::wstring::append(lpBuffer, L"\\media", 6uLL);
        v12 = (BYTE *)lpBuffer;
        if ( v42 > 7 )
          v12 = (BYTE *)lpBuffer[0];
        Theming::SetSoundRedirectionPath(v12, v11);
      }
      std::wstring::_Tidy_deallocate((void **)lpBuffer);
    }
  }
  else
  {
    v6 = (BYTE *)winrt::hstring::c_str((winrt::hstring *)&v27);
    Theming::SetSoundRedirectionPath(v6, v7);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v27);
  v13 = `wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v29 = *(_DWORD ***)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::GetCachedFeatureEnabledState(
                         &`wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl,
                         v38);
    v13 = (unsigned int)v29;
  }
  v23 = 0;
  v24 = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)&unk_1808CB280,
    0x1D7835Eu,
    (v13 >> 10) & 1,
    (v13 >> 11) & 1,
    (__int64)&v23,
    1u,
    3);
  v35[0] = 1;
  v35[1] = 22;
  v36 = L"CustomThemeBackgrounds";
  v34 = v35;
  v29 = &v34;
  v39 = &qword_1808CB018;
  _InterlockedAdd64(&qword_1808CB018, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>,
      &v28,
      &v34);
    _InterlockedDecrement64(&qword_1808CB018);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB018);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::call<_lambda_720477a61d445079ad03f3ff7eed504d_ &>(
      v14,
      &v28,
      &v29);
  }
  if ( v28 )
  {
    v15 = (const WCHAR *)*((_QWORD *)v28 + 2);
    v16 = *((unsigned int *)v28 + 1);
  }
  else
  {
    v15 = &pvData;
    v16 = 0LL;
  }
  if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(v15, v16, &pvData, 0LL)
    || (v17 = winrt::hstring::c_str((winrt::hstring *)&v28), !PathFileExistsW(v17)) )
  {
    dynamic_config::SetRegValueAndLog(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\EditionOverrides",
      1u,
      L"packagebase2",
      0LL,
      0,
      1);
  }
  else
  {
    v18 = (Theming *)winrt::hstring::c_str((winrt::hstring *)&v28);
    Theming::SetBackgroundsRedirectionPath(v18, v19);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v28);
  v20 = `wil::Feature<__WilFeatureTraits_Feature_HVSUSSHTest>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HVSUSSHTest>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v29 = *(_DWORD ***)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>::GetCachedFeatureEnabledState(
                         &`wil::Feature<__WilFeatureTraits_Feature_HVSUSSHTest>::GetImpl'::`2'::impl,
                         v40);
    v20 = (unsigned int)v29;
  }
  v25 = 0;
  v26 = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)&unk_1808CDDD8,
    0x1EA5769u,
    (v20 >> 10) & 1,
    (v20 >> 11) & 1,
    (__int64)&v25,
    1u,
    3);
  LOBYTE(v21) = 1;
  Theming::SetStartupSoundDefaultKey(v21, v22);
}
