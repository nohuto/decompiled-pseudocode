/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z @ 0x180044838
 * Callers:
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18007B94C (--1CAnimationComponent@@UEAA@XZ.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

void __fastcall CTransitionVisualController::RestoreWindow(CTransitionVisualController *this, HWND a2)
{
  struct CWindowData *WindowDataByHwnd; // rax

  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                       a2);
  if ( WindowDataByHwnd )
    CTransitionVisualController::RestoreWindow(this, WindowDataByHwnd, 1);
}
