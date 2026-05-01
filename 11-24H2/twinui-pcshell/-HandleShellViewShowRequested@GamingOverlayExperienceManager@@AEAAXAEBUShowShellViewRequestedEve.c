/*
 * XREFs of ?HandleShellViewShowRequested@GamingOverlayExperienceManager@@AEAAXAEBUShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180351900
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0e520bed2ae6600bd10a6457679c4d1b___::Invoke @ 0x180352180 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180352180.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180223D5C (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180354038 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?ShellView_ShowRequested@GamingOverlayTelemetry@@SAXXZ @ 0x18035AD14 (-ShellView_ShowRequested@GamingOverlayTelemetry@@SAXXZ.c)
 */

void __fastcall GamingOverlayExperienceManager::HandleShellViewShowRequested(
        GamingOverlayExperienceManager *this,
        const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a2)
{
  int v4; // eax
  const char *v5; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  GamingOverlayTelemetry::ShellView_ShowRequested();
  try
  {
    v4 = GamingOverlayExperienceManager::LaunchGameBar(this, L"ms-gamebar://launchForeground", 7LL);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6CB,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v4,
        v6);
    winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)a2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6CF,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      v5);
  }
}
