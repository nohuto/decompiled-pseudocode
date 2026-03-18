/*
 * XREFs of CmpMarkKeyParentDirty @ 0x140A5AD70
 * Callers:
 *     CmpCopySyncTree2 @ 0x140889B3C (CmpCopySyncTree2.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpMarkIndexDirty @ 0x140887980 (CmpMarkIndexDirty.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpMarkKeyParentDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 CellFlat; // rax
  unsigned int v4; // esi
  int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v7);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, &v7);
  if ( (*(_BYTE *)(CellFlat + 2) & 4) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(CellFlat + 16);
    v5 = CmpMarkIndexDirty(BugCheckParameter3, v4);
    if ( v5 >= 0 )
    {
      v5 = HvpMarkCellDirty(BugCheckParameter3, v4, 0);
      if ( v5 >= 0 )
        v5 = 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v7);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v7);
  return (unsigned int)v5;
}
