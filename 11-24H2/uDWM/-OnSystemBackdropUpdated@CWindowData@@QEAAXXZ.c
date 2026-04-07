/*
 * XREFs of ?OnSystemBackdropUpdated@CWindowData@@QEAAXXZ @ 0x180085C80
 * Callers:
 *     ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z @ 0x1800F3330 (-SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::OnSystemBackdropUpdated(CWindowData *this)
{
  CContainerVisual **v1; // rcx

  v1 = (CContainerVisual **)*((_QWORD *)this + 55);
  if ( v1 )
    CTopLevelWindow::OnSystemBackdropUpdated(v1);
}
