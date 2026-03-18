/*
 * XREFs of ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18029085C
 * Callers:
 *     ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1801D3360 (-BeginUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 */

void __fastcall CCursorVisual::ProcessStateChanges(CCursorVisual *this, unsigned __int64 a2)
{
  char v3; // bl
  __int64 v4; // rcx
  char v5; // si
  __int64 v6; // rax

  v3 = 0;
  v4 = *((_QWORD *)this + 88);
  if ( *(_BYTE *)(v4 + 112) || (v5 = 0, *(_QWORD *)(v4 + 264)) )
    v5 = 1;
  if ( CCursorState::ProcessStateChanges((CCursorState *)v4, a2) )
    CVisual::PropagateFlags((__int64)this, 0x15u);
  if ( v5 || (v6 = *((_QWORD *)this + 88), *(_BYTE *)(v6 + 112)) || *(_QWORD *)(v6 + 264) )
    v3 = 1;
  *((_BYTE *)this + 745) = v3;
}
