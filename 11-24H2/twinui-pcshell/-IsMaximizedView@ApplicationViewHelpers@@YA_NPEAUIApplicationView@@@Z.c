/*
 * XREFs of ?IsMaximizedView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18067F56C
 * Callers:
 *     ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x18059EAD0 (-GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@P.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsMaximizedWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18067F598 (-IsMaximizedWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall ApplicationViewHelpers::IsMaximizedView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  char v2; // bl
  ApplicationViewHelpers *WindowForView; // rax
  HWND v4; // rdx

  v2 = 0;
  WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(this, a2);
  if ( WindowForView )
    return ApplicationViewHelpers::IsMaximizedWindow(WindowForView, v4);
  return v2;
}
