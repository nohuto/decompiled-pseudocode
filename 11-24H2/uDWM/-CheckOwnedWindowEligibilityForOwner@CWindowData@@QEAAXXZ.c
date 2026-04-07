/*
 * XREFs of ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18001E730
 * Callers:
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18003F4E0 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FE50 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800991E4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001E780 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibilityForOwner(CWindowData *this)
{
  __int64 i; // rbx

  CWindowData::CheckOwnedWindowEligibility(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 158); i = (unsigned int)(i + 1) )
    CWindowData::CheckOwnedWindowEligibility(*(CWindowData **)(*((_QWORD *)this + 76) + 8 * i));
}
