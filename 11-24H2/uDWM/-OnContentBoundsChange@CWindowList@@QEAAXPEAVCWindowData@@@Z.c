/*
 * XREFs of ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001A9FC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FE50 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800991E4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001AA20 (-OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowList::OnContentBoundsChange(CWindowList *this, struct CWindowData *a2)
{
  CTopLevelWindow *v2; // rcx

  v2 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  if ( v2 )
    CTopLevelWindow::OnContentBoundsUpdated(v2);
}
