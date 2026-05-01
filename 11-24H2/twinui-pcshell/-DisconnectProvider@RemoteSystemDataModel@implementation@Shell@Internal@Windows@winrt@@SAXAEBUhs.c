/*
 * XREFs of ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x18064B938
 * Callers:
 *     _lambda_3e3d6084102ea12775201c324e2ccf34_::operator() @ 0x1806591AC (_lambda_3e3d6084102ea12775201c324e2ccf34_--operator().c)
 *     ?DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18065A608 (-DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@wi.c)
 *     ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x18066D960 (-DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D64 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C577C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CFE14 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801953E8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028BD78 (--0-$test_data_control@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A9958 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806422E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_Switc.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180647668 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649E54 (--1-$test_data_control@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649F90 (--1-$test_watcher@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@I@Z @ 0x18064BEC4 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowId@UI@Windows@.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x18064D648 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::DisconnectProvider(
        const struct winrt::hstring *a1)
{
  bool is_running; // al
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  int NetworkConnectivityLevel; // edi
  HWND hWnd[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[56]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+68h] [rbp-8h] BYREF
  __int64 *v14; // [rsp+98h] [rbp+28h] BYREF
  _BYTE *v15; // [rsp+A0h] [rbp+30h] BYREF
  _BYTE *v16; // [rsp+A8h] [rbp+38h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>>((__int64)v12);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v14, a1);
  is_running = tip2::details::shared_data<1,0,0>::is_running(v13 + 8);
  v5 = v14;
  if ( is_running )
  {
    tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
      (__int64 *)&v15,
      &v13);
    winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)a1, hWnd);
    std::wstring::assign((void **)(v6 + 272), hWnd[0], (unsigned __int64)hWnd[1]);
    tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)&v15);
    if ( !v5 )
    {
      tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
        (__int64 *)&v15,
        &v13);
      v15[304] = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)&v15);
      tip2::details::shared_data<1,0,0>::complete_without_lock(v13 + 8);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::GetImpl'::`2'::impl,
        1u,
        v7,
        v8);
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::GetImpl'::`2'::impl,
    1u,
    v3,
    v4);
  if ( v5 )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
      &v14,
      &v15);
    v9 = 0;
    NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v15);
    while ( v9 != NetworkConnectivityLevel )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetAt(
        &v15,
        hWnd,
        v9);
      if ( !PostMessageW(hWnd[0], 0x10u, 0LL, 0LL) && tip2::details::shared_data<1,0,0>::is_running(v13 + 8) )
      {
        tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
          (__int64 *)&v16,
          &v13);
        v16[306] = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)&v16);
        tip2::details::shared_data<1,0,0>::complete_without_lock(v13 + 8);
      }
      ++v9;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)v12);
}
