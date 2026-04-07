/*
 * XREFs of ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001BF88
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002D1FC (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x1800770B4 (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::UnregisterAccentState(CWindowList *this, struct CWindowData *a2)
{
  _QWORD *v3; // r8
  unsigned int i; // edx

  v3 = (_QWORD *)((char *)this + 568);
  for ( i = 0; i < *((_DWORD *)this + 148); ++i )
  {
    if ( *(struct CWindowData **)(*v3 + 16LL * i) == a2 )
    {
      DynArray<CWindowList::AccentStateDetails,0>::RemoveAt(v3);
      return;
    }
  }
}
