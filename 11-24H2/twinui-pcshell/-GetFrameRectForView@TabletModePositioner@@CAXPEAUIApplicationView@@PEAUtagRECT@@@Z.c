/*
 * XREFs of ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x18051AD68
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180520704 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall TabletModePositioner::GetFrameRectForView(
        __int64 (__fastcall ***a1)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct tagRECT *a2)
{
  HWND WindowForView; // rax
  struct tagRECT pvAttribute; // [rsp+20h] [rbp-28h] BYREF

  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a1, (struct IApplicationView *)a2);
  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(WindowForView, 9u, &pvAttribute, 0x10u) >= 0 )
    *a2 = pvAttribute;
}
