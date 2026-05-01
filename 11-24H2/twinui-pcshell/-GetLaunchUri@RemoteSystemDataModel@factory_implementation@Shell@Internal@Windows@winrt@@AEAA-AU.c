/*
 * XREFs of ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18064CA34
 * Callers:
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E358 (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E498 (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18018E184 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18018ED94 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802973D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     ??9winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1802CE7B0 (--9winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180359460 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x1806403AC (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180640918 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@U76@@Z @ 0x18064ABBC (-CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x180650C44 (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806677B4 (--0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$basic_string@GU-$char_trai.c)
 *     ?AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18066784C (-AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV-$basic_stri.c)
 *     ?Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA?AU0Foundation@56@XZ @ 0x180667954 (-Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0Foundation@56@XZ.c)
 */

// Hidden C++ exception states: #wind=18
_QWORD *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetLaunchUri(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *a1,
        _QWORD *a2,
        __int64 **a3,
        int a4)
{
  const unsigned __int16 *v8; // r8
  unsigned __int16 *v9; // rax
  unsigned int BootToCloudModeType; // esi
  unsigned __int16 *v11; // rax
  _QWORD *v12; // rbx
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rax
  __int64 v15; // rdx
  WCHAR *v16; // rdx
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rax
  unsigned __int16 *v19; // rax
  unsigned __int16 *v20; // rax
  __int64 *v21; // rax
  unsigned __int16 *v22; // rax
  unsigned __int16 *v23; // rax
  unsigned __int16 *v24; // rax
  unsigned __int16 *v25; // rax
  unsigned __int16 *v26; // rax
  unsigned __int16 *v27; // rax
  volatile signed __int32 *v29; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v30; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v31; // [rsp+30h] [rbp-D0h] BYREF
  void *v32[4]; // [rsp+40h] [rbp-C0h] BYREF
  void *v33[4]; // [rsp+60h] [rbp-A0h] BYREF
  void *v34[5]; // [rsp+80h] [rbp-80h] BYREF
  void *v35[4]; // [rsp+A8h] [rbp-58h] BYREF
  void *v36[4]; // [rsp+C8h] [rbp-38h] BYREF
  void *v37[5]; // [rsp+E8h] [rbp-18h] BYREF
  _WORD pvData[264]; // [rsp+110h] [rbp+10h] BYREF

  v31 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( a4 == 1 )
  {
    CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v8);
    std::wstring::wstring((char **)v36, pvData);
    v9 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemBootAPPURI);
    std::wstring::wstring((char **)v37, v9);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(v34, v37);
    std::wstring::_Tidy_deallocate(v37);
    BootToCloudModeType = CloudPCHelpers::GetBootToCloudModeType();
    if ( !std::wstring::_Equal((char *)v36, (char *)&::pvData) )
    {
      v11 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_correlationIdQueryParam);
      std::wstring::wstring((char **)v32, v11);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v32, v36);
      std::wstring::_Tidy_deallocate(v32);
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl,
      1u);
    v12 = std::to_wstring(v35, BootToCloudModeType);
    v13 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_bootModeTypeQueryParam);
    std::wstring::wstring((char **)v32, v13);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v32, v12);
    std::wstring::_Tidy_deallocate(v32);
    std::wstring::_Tidy_deallocate(v35);
    std::wstring::wstring((char **)v33, L"true");
    v14 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportBluetoothSettingsQueryParam);
    std::wstring::wstring((char **)v32, v14);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v32, v33);
    std::wstring::_Tidy_deallocate(v32);
    std::wstring::_Tidy_deallocate(v33);
    LOBYTE(v15) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
      v15);
    v16 = (WCHAR *)L"true";
    if ( BootToCloudModeType != 2 )
      v16 = (WCHAR *)L"false";
    std::wstring::wstring((char **)v35, v16);
    std::wstring::wstring((char **)v32, L"true");
    v17 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
    std::wstring::wstring((char **)v33, v17);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v33, v32);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::_Tidy_deallocate(v32);
    std::wstring::wstring((char **)v32, L"true");
    v18 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
    std::wstring::wstring((char **)v33, v18);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v33, v32);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::_Tidy_deallocate(v32);
    std::wstring::wstring((char **)v32, L"true");
    v19 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
    std::wstring::wstring((char **)v33, v19);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v33, v32);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::_Tidy_deallocate(v32);
    v20 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
    std::wstring::wstring((char **)v33, v20);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v33, v35);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::_Tidy_deallocate(v35);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::Uri(v34, a2);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v36);
  }
  else if ( a4 )
  {
    *a2 = 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      a3,
      &v30);
    v21 = (__int64 *)winrt::hstring::hstring((winrt::hstring *)&v31, (const struct winrt::hstring *)&v30);
    winrt::Windows::Internal::Shell::implementation::Utils::CreateCorrelationIdForSwitch(
      (volatile signed __int32 *)&v29,
      v21);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      a1,
      (const struct winrt::hstring *)&v30,
      (const struct winrt::hstring *)&v29);
    v22 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemSwitchAPPURI);
    std::wstring::wstring((char **)v35, v22);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(v34, v35);
    std::wstring::_Tidy_deallocate(v35);
    v23 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v30);
    std::wstring::wstring((char **)v32, v23);
    v24 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_remoteDesktopIdQueryParam);
    std::wstring::wstring((char **)v33, v24);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v33, v32);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::_Tidy_deallocate(v32);
    if ( winrt::operator!=((__int64 *)&v29) )
    {
      v25 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v29);
      std::wstring::wstring((char **)v32, v25);
      v26 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_correlationIdQueryParam);
      std::wstring::wstring((char **)v33, v26);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v33, v32);
      std::wstring::_Tidy_deallocate(v33);
      std::wstring::_Tidy_deallocate(v32);
    }
    std::wstring::wstring((char **)v32, L"false");
    v27 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportBluetoothSettingsQueryParam);
    std::wstring::wstring((char **)v33, v27);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v34, v33, v32);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::_Tidy_deallocate(v32);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::Uri(v34, a2);
    std::wstring::_Tidy_deallocate(v34);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v29);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
  }
  return a2;
}
