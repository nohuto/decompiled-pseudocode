/*
 * XREFs of ?OnGDISurfaceChange@CTopLevelWindow@@QEAAX_N@Z @ 0x18001A8F0
 * Callers:
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A8C0 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnGDISurfaceChange(CTopLevelWindow *this, char a2)
{
  if ( a2 )
    CVisual::SetDirtyFlags(this, 0x2000000u);
  else
    *((_DWORD *)this + 8) &= ~0x2000000u;
}
