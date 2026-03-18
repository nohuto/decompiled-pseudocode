/*
 * XREFs of CmpMarkKeyParentDirty @ 0x140A5D138
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408838F4 (CmpCopySyncTree2.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpMarkIndexDirty @ 0x14087F618 (CmpMarkIndexDirty.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpMarkKeyParentDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  bool v2; // zf
  __int64 CellPaged; // rax
  unsigned int v5; // esi
  int v6; // edi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v2 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v9 = 0;
  if ( v2 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, &v8);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v8);
  if ( (*(_BYTE *)(CellPaged + 2) & 4) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(CellPaged + 16);
    v6 = CmpMarkIndexDirty(BugCheckParameter3, v5);
    if ( v6 >= 0 )
    {
      v6 = HvpMarkCellDirty(BugCheckParameter3, v5, 0);
      if ( v6 >= 0 )
        v6 = 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v8);
  return (unsigned int)v6;
}
