/*
 * XREFs of CmpUpdateParentForEachSon @ 0x1407E3798
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x140888160 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpUpdateParentForEachSon(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, char a3)
{
  int v4; // r12d
  bool v5; // zf
  __int64 CellPaged; // rax
  unsigned int v7; // r15d
  unsigned int i; // esi
  int SubKeyByNumber; // edi
  __int64 CellFlat; // rax
  int v12; // [rsp+60h] [rbp+40h] BYREF
  int v13; // [rsp+64h] [rbp+44h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp+50h]
  int v15; // [rsp+78h] [rbp+58h] BYREF
  int v16; // [rsp+7Ch] [rbp+5Ch]

  LOBYTE(BugCheckParameter4) = a3;
  v16 = 0;
  v13 = 0;
  v15 = -1;
  v4 = a2;
  v12 = -1;
  v5 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  LODWORD(BugCheckParameter4) = 0;
  if ( v5 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2);
  v7 = *(_DWORD *)(CellPaged + 20) + *(_DWORD *)(CellPaged + 24);
  for ( i = 0; i < v7; ++i )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3);
    if ( SubKeyByNumber < 0 )
      goto LABEL_15;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    *(_DWORD *)(CellFlat + 16) = v4;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v12);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v12);
  }
  SubKeyByNumber = 0;
LABEL_15:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v15);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v15);
  return (unsigned int)SubKeyByNumber;
}
