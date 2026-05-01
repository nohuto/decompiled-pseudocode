/*
 * XREFs of ?IsMaximizedWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18067F598
 * Callers:
 *     ?ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FA678 (-ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180504C90 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?IsMaximizedView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18067F56C (-IsMaximizedView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ApplicationViewHelpers::IsMaximizedWindow(ApplicationViewHelpers *this, HWND a2)
{
  return IsZoomed((HWND)this);
}
