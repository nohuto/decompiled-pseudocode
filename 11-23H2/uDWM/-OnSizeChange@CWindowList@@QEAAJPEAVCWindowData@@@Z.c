/*
 * XREFs of ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18003CBB4
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CWindowList::OnSizeChange(CWindowList *this, struct CWindowData *a2)
{
  return CWindowList::UpdateWindowScale(this, a2, 0);
}
