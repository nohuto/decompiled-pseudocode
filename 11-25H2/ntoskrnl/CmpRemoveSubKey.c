/*
 * XREFs of CmpRemoveSubKey @ 0x140887D4C
 * Callers:
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpRemoveSubKeyFromList @ 0x140887DF8 (CmpRemoveSubKeyFromList.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  bool v3; // zf
  unsigned __int64 v5; // rdi
  __int64 CellPaged; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  char v9; // di
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  v11 = -1;
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v5 = a3;
  v12 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, &v11);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v11);
  v7 = CellPaged;
  if ( !CellPaged )
    return 0;
  v8 = v5 >> 31;
  v9 = CmpRemoveSubKeyFromList(BugCheckParameter3);
  if ( v9 )
  {
    --*(_DWORD *)(v7 + 4 * v8 + 20);
    v9 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v11);
  return v9;
}
