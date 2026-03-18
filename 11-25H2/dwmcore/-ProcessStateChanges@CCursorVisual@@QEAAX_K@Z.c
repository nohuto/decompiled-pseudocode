/*
 * XREFs of ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18029A8FC
 * Callers:
 *     ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1801E05E0 (-BeginUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802BC708 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 */

void __fastcall CCursorVisual::ProcessStateChanges(CCursorVisual *this, unsigned __int64 a2)
{
  char v3; // di
  __int64 v4; // rcx
  bool v5; // si
  __int64 v6; // rax

  v3 = 1;
  v4 = *((_QWORD *)this + 87);
  v5 = *(_BYTE *)(v4 + 112) || *(_QWORD *)(v4 + 264);
  if ( CCursorState::ProcessStateChanges((CCursorState *)v4, a2) )
  {
    CVisual::PropagateFlags((__int64)this, 0x15u);
    if ( v5 || (v6 = *((_QWORD *)this + 87), *(_BYTE *)(v6 + 112)) || *(_QWORD *)(v6 + 264) )
      v3 = 0;
    *((_BYTE *)this + 737) = v3;
  }
}
