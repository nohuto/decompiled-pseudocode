/*
 * XREFs of CmpFreeIndexByCell @ 0x140A8A904
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1409DA9B4 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpFreeIndexByCell(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebp
  _WORD *CellFlat; // rax
  _WORD *v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = 0LL;
  v3 = a2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, a2, &v8);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3, a2, &v8);
  v6 = CellFlat;
  if ( *CellFlat == 26994 && CellFlat[1] )
  {
    do
    {
      HvFreeCell(BugCheckParameter3, *(_DWORD *)&v6[2 * v2 + 2]);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < (unsigned __int16)v6[1] );
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  return HvFreeCell(BugCheckParameter3, v3);
}
