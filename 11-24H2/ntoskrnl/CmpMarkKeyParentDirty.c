/*
 * XREFs of CmpMarkKeyParentDirty @ 0x140A54E68
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpMarkIndexDirty @ 0x1408834C8 (CmpMarkIndexDirty.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
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
