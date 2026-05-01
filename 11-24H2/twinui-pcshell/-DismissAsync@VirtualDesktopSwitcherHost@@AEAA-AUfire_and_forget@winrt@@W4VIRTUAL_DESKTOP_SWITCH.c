/*
 * XREFs of ?DismissAsync@VirtualDesktopSwitcherHost@@AEAA?AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1802B8C48
 * Callers:
 *     ?DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806ABB30 (-DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1806AC2F0 (-Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_eba64241e9b90ff96c214d869f8d7087___::Invoke @ 0x1806AC5F0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_eba64241e9b.c)
 *     ?MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AC7C0 (-MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     VirtualDesktopSwitcherHost::DismissAsync$_InitCoro$2 @ 0x1806AB934 (VirtualDesktopSwitcherHost--DismissAsync$_InitCoro$2.c)
 */

__int64 __fastcall VirtualDesktopSwitcherHost::DismissAsync(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // eax
  int v7; // [rsp+98h] [rbp+10h] BYREF
  int v8; // [rsp+A0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (unsigned int)operator new(0x50uLL);
  v7 = 0;
  VirtualDesktopSwitcherHost::DismissAsync__InitCoro_2((unsigned int)&v7, v5, a2, (unsigned int)&v8, a1);
  return a2;
}
