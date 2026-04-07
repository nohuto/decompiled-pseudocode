/*
 * XREFs of ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B604
 * Callers:
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180008544 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001B5C4 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001E984 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnColorizationUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x100000u);
}
