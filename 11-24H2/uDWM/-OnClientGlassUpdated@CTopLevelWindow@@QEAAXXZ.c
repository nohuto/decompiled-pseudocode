/*
 * XREFs of ?OnClientGlassUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B554
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180052E98 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnClientGlassUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x4000u);
}
