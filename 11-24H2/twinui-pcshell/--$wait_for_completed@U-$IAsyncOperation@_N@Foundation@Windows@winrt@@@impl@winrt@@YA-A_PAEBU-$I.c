/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x1805C9C88
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D67E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805D67E0.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D9270 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     _lambda_57788f35bdd9b54a58cb4d12640be97c_::operator() @ 0x18065967C (_lambda_57788f35bdd9b54a58cb4d12640be97c_--operator().c)
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180669030 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18066BB50 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x180670BF4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x18023C320 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     WaitForSingleObject_0 @ 0x1802D2A50 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CloseHandle @ 0x1802D2A98 (WINRT_IMPL_CloseHandle.c)
 *     WINRT_IMPL_CreateEventW @ 0x1802D3168 (WINRT_IMPL_CreateEventW.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z @ 0x18031C100 (--$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z.c)
 *     ??$make_delegate_with_shared_state@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@_N@234@I@Z@@impl@winrt@@YA?AU?$pair@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@PEAUshared_type@?1???$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@_N@234@I@Z@@std@@$$QEAUshared_type@?1???$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@01@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z@@Z @ 0x1805C4E90 (--$make_delegate_with_shared_state@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(__int64 *a1)
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
  ___make_delegate_with_shared_state_U__AsyncOperationCompletedHandler__N_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation__N_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation__N_234_I_Z__impl_winrt__YA_AU__pair_U__AsyncOperationCompletedHandler__N_Foundation_Windows_winrt__PEAUshared_type__1____wait_for_completed_U__IAsyncOperation__N_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation__N_234_I_Z__std____QEAUshared_type__1____wait_for_completed_U__IAsyncOperation__N_Foundation_Windows_winrt___01_YA_A_PAEBU__IAsyncOperation__N_Foundation_Windows_1_I_Z__Z(
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
