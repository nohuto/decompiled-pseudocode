/*
 * XREFs of ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18002962C
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18002C0C8 (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18006C8D8 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x18008B048 (-RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z.c)
 *     ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18008C420 (-IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVi.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801E0F4C (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

char __fastcall ApplicationViewHelpers::CanMaximizeView(ApplicationViewHelpers *this, struct IApplicationView *a2)
{
  char v2; // bl
  HWND WindowForView; // rax

  v2 = 0;
  WindowForView = ApplicationViewHelpers::GetWindowForView(this, a2);
  if ( WindowForView )
    return ((unsigned int)GetWindowLongPtrW(WindowForView, -16) >> 16) & 1;
  return v2;
}
