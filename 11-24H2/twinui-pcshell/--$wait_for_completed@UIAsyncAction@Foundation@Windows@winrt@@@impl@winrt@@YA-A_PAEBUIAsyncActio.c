/*
 * XREFs of ??$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@I@Z @ 0x18031C220
 * Callers:
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x1800BDD3C (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802891CC (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D67E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805D67E0.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643B10 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 *     _lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x180655EFC (_lambda_77e78c927b00fdc94620a558442d73ef_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x18023C320 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     WaitForSingleObject_0 @ 0x1802D2A50 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CloseHandle @ 0x1802D2A98 (WINRT_IMPL_CloseHandle.c)
 *     WINRT_IMPL_CreateEventW @ 0x1802D3168 (WINRT_IMPL_CreateEventW.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z @ 0x18031C100 (--$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z.c)
 *     ??$make_delegate_with_shared_state@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBUIAsyncAction@234@I@Z@@impl@winrt@@YA?AU?$pair@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@PEAUshared_type@?1???$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBUIAsyncAction@234@I@Z@@std@@$$QEAUshared_type@?1???$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@01@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@I@Z@@Z @ 0x18031C188 (--$make_delegate_with_shared_state@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushare.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncAction>(__int64 *a1)
{
  HANDLE EventW; // rax
  __int64 v3; // rbx
  HANDLE hObject; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  int v7; // [rsp+2Ch] [rbp-24h]
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int128 v9; // [rsp+38h] [rbp-18h]

  LODWORD(v8) = 0;
  v9 = 0LL;
  EventW = WINRT_IMPL_CreateEventW(0LL, 1, 0, 0LL);
  hObject = (HANDLE)winrt::check_pointer<void>((__int64)EventW, (winrt *)&v8);
  v6 = 0;
  v7 = 0;
  ___make_delegate_with_shared_state_UAsyncActionCompletedHandler_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_UIAsyncAction_Foundation_Windows_winrt___impl_4_YA_A_PAEBUIAsyncAction_234_I_Z__impl_winrt__YA_AU__pair_UAsyncActionCompletedHandler_Foundation_Windows_winrt__PEAUshared_type__1____wait_for_completed_UIAsyncAction_Foundation_Windows_winrt___impl_4_YA_A_PAEBUIAsyncAction_234_I_Z__std____QEAUshared_type__1____wait_for_completed_UIAsyncAction_Foundation_Windows_winrt___01_YA_A_PAEBUIAsyncAction_Foundation_Windows_1_I_Z__Z(
    (char *)&v8,
    (__int64 *)&hObject);
  if ( hObject )
    WINRT_IMPL_CloseHandle(hObject);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    a1,
    &v8);
  v3 = v9;
  WaitForSingleObject_0(*(HANDLE *)v9, 0xFFFFFFFF);
  LODWORD(v3) = *(_DWORD *)(v3 + 8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return (unsigned int)v3;
}
