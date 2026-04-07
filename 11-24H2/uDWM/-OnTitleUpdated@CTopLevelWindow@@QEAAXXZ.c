/*
 * XREFs of ?OnTitleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B614
 * Callers:
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800063C4 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180055280 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnTitleUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x10000u);
}
