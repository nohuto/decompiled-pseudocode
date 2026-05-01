/*
 * XREFs of ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18024DF30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x18020EE7C (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180219870 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?DesktopSwitchObserved@StartWindowTelemetry@@SAXXZ @ 0x1802378B8 (-DesktopSwitchObserved@StartWindowTelemetry@@SAXXZ.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18045DAB8 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 */

void __fastcall XamlLauncher::s_LauncherDesktopSwitchEventProc(
        PerSessionState *hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject)
{
  PerSessionState *v5; // rcx
  HANDLE EventW; // rax
  __int64 v7; // rcx
  XamlLauncher *v8; // rcx

  if ( event == 32
    && PerSessionState::IsCurrentThreadOnInputDesktop(hWinEventHook)
    && PerSessionState::HasLoginCompleted(v5)
    && XamlLauncher::s_pLauncher )
  {
    if ( !CLauncherLoginEvent::s_hEvent )
    {
      EventW = CreateEventW(0LL, 1, 1, L"ShellLauncherLoginEvent");
      CLauncherLoginEvent::s_hEvent = EventW;
      if ( EventW )
        SetEvent(EventW);
    }
    UnhookWinEvent((HWINEVENTHOOK)hWinEventHook);
    StartWindowTelemetry::DesktopSwitchObserved(v7);
    v8 = XamlLauncher::s_pLauncher;
    *((_BYTE *)XamlLauncher::s_pLauncher + 357) = 1;
    XamlLauncher::ConsiderShowStartAutomatically(v8);
  }
}
