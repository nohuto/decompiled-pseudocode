/*
 * XREFs of CmpMarkAllChildrenDirty @ 0x1407E2DB0
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x1408842B0 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpMarkAllChildrenDirty(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rdx
  __int64 CellFlat; // rax
  unsigned int v4; // ebp
  unsigned int i; // esi
  int SubKeyByNumber; // edi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  HvpGetCellContextInitialize(&v8);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v2);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v4 = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
  for ( i = 0; i < v4; ++i )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3);
    if ( SubKeyByNumber < 0 )
      goto LABEL_10;
    SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, 0LL);
    if ( SubKeyByNumber < 0 )
      goto LABEL_10;
  }
  SubKeyByNumber = 0;
LABEL_10:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v8);
  return (unsigned int)SubKeyByNumber;
}
