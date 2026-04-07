/*
 * XREFs of ?TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180061E60
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800929E0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z @ 0x180061E98 (-EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowList::TrackMinimizedWindowDuringModeChange(CWindowList *this, struct CWindowData *a2)
{
  CDisplayAnimatedVisual *v2; // rcx

  v2 = (CDisplayAnimatedVisual *)*((_QWORD *)this + 70);
  if ( v2 )
  {
    if ( *((_QWORD *)a2 + 56) )
      CDisplayAnimatedVisual::EnsureMinimizedWindowListUpdated(v2, a2, (*((_DWORD *)a2 + 29) & 0x20000000) != 0);
  }
}
