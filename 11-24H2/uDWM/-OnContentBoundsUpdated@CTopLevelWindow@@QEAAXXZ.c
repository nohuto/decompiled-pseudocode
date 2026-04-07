/*
 * XREFs of ?OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001AA20
 * Callers:
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001A9FC (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnContentBoundsUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x4000000u);
}
