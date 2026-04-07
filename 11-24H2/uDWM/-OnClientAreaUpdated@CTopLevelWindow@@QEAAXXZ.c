/*
 * XREFs of ?OnClientAreaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001D854
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnClientAreaUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x400000u);
}
