/*
 * XREFs of CmpDeleteTree @ 0x1407E4024
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140AA89B0 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x140888160 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

char __fastcall CmpDeleteTree(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  int v2; // r15d
  unsigned int v4; // r14d
  _DWORD *CellFlat; // rax
  unsigned int v6; // edi
  int SubKeyByNumber; // edi
  __int64 v8; // rax
  int v9; // esi
  int v11; // [rsp+50h] [rbp+30h] BYREF
  int v12; // [rsp+54h] [rbp+34h]
  ULONG_PTR BugCheckParameter4a; // [rsp+58h] [rbp+38h]

  v2 = BugCheckParameter4;
  v11 = -1;
  LODWORD(BugCheckParameter4a) = 0;
  v4 = BugCheckParameter4;
  v12 = 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, v4);
    else
      CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3);
    if ( !CellFlat )
      return 0;
    v6 = CellFlat[4];
    if ( !(CellFlat[5] + CellFlat[6]) )
      break;
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v11);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v11);
    if ( SubKeyByNumber < 0 )
      return 0;
    v6 = BugCheckParameter4a;
    if ( (_DWORD)BugCheckParameter4a == -1 )
      return 0;
    v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4a)
       : HvpGetCellPaged(BugCheckParameter3);
    if ( !v8 )
      return 0;
    v9 = *(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v11);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v11);
    if ( v9 )
    {
LABEL_20:
      v4 = v6;
    }
    else if ( (int)CmpFreeKeyByCell(BugCheckParameter3, v6) < 0 )
    {
      return 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v11);
  if ( v4 != v2 )
    goto LABEL_20;
  return 1;
}
