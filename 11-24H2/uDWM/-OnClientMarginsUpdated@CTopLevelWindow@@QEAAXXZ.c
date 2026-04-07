/*
 * XREFs of ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180085AD8
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180005D7C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180052CAC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnClientMarginsUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x2000);
}
