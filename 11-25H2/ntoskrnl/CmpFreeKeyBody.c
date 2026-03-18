/*
 * XREFs of CmpFreeKeyBody @ 0x140888154
 * Callers:
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

char __fastcall CmpFreeKeyBody(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  unsigned int v2; // esi
  bool v3; // zf
  __int64 CellPaged; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = a2;
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v10 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, &v9);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v9);
  v6 = CellPaged;
  if ( CellPaged )
  {
    if ( (*(_BYTE *)(CellPaged + 2) & 2) == 0 )
    {
      v7 = *(_DWORD *)(CellPaged + 44);
      if ( v7 != -1 )
        HvFreeCell(BugCheckParameter3, v7);
      if ( *(_WORD *)(v6 + 74) )
        HvFreeCell(BugCheckParameter3, *(_DWORD *)(v6 + 48));
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v9);
    HvFreeCell(BugCheckParameter3, v2);
    LOBYTE(CellPaged) = 1;
  }
  return CellPaged;
}
