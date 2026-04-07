/*
 * XREFs of ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ @ 0x18008C800
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800991E4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800B06C0 (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800F359C (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsWindowOffscreen(CTopLevelWindow *this)
{
  return *((_BYTE *)this + 201) & 1;
}
