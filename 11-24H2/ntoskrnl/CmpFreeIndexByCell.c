/*
 * XREFs of CmpFreeIndexByCell @ 0x140A8F924
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A1FAD8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpFreeIndexByCell(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebp
  bool v4; // zf
  _WORD *CellPaged; // rax
  _WORD *v7; // rdi
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = 0LL;
  v3 = a2;
  v4 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v10 = 0;
  if ( v4 )
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, a2, &v9);
  else
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, a2, &v9);
  v7 = CellPaged;
  if ( *CellPaged == 26994 && CellPaged[1] )
  {
    do
    {
      HvFreeCell(BugCheckParameter3, *(_DWORD *)&v7[2 * v2 + 2]);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < (unsigned __int16)v7[1] );
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v9);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v9);
  return HvFreeCell(BugCheckParameter3, v3);
}
