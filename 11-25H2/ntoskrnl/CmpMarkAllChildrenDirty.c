/*
 * XREFs of CmpMarkAllChildrenDirty @ 0x1407D34D0
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x14088A4F0 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
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
