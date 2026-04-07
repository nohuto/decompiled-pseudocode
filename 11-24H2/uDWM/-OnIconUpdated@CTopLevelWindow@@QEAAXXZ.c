/*
 * XREFs of ?OnIconUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B544
 * Callers:
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800087D8 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x1800F0748 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnIconUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x20000u);
}
