/*
 * XREFs of ?ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x180672540
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A9958 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18065050C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180658630 (--0-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658B28 (--1-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658BB0 (--1-$test_watcher@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@ti.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_NAEBW4TransitionScreenOptions@567893@@Z @ 0x180669A54 (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransit.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18066C6C0 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18066FA3C (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18066FA7C (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Win_ea_18066FA7C.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FAB0 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x18066FB54 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU0TransitionScreen@CloudDesktop@3456@@Z @ 0x18066FBC0 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ShowTransitionScreen(
        __int64 a1,
        __int64 *a2,
        const struct winrt::hstring *a3,
        _QWORD *a4)
{
  HMONITOR v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbx
  __int64 *v11; // rax
  unsigned int v12; // [rsp+50h] [rbp-49h] BYREF
  int v13; // [rsp+54h] [rbp-45h] BYREF
  volatile signed __int32 *v14; // [rsp+58h] [rbp-41h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp-39h] BYREF
  __int64 v16; // [rsp+68h] [rbp-31h] BYREF
  __int64 v17[2]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v18[56]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+1Fh] BYREF
  volatile signed __int32 *v20; // [rsp+C0h] [rbp+27h] BYREF
  POINT pt; // [rsp+108h] [rbp+6Fh] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>>((__int64)v18);
  if ( winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown((RTL_SRWLOCK *)*a2) )
  {
    if ( tip2::details::shared_data<1,0,0>::is_running(v19 + 8) )
    {
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(
        (__int64 *)&pt,
        &v19);
      *(_BYTE *)(*(_QWORD *)&pt + 347LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((void **)&pt);
      tip2::details::shared_data<1,0,0>::complete_without_lock(v19 + 8);
    }
  }
  else
  {
    winrt::hstring::hstring((winrt::hstring *)&v15, a3);
    pt = 0LL;
    v7 = MonitorFromPoint(0LL, 1u);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
      1u,
      v8,
      v9);
    v10 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(*a2, v17);
    pt.x = 2;
    v20 = v15;
    v12 = 0;
    v11 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
            (__int64 *)*a2,
            &v16);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)v11,
      &v14);
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
      v10,
      &v13,
      &v14,
      &v12,
      a4,
      &v20,
      (__int64)v7,
      0,
      &pt);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
      (RTL_SRWLOCK *)*a2,
      (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v13);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(
      (RTL_SRWLOCK *)*a2,
      1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v18);
}
