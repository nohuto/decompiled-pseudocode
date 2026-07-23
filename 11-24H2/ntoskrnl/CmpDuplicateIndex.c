/*
 * XREFs of CmpDuplicateIndex @ 0x140A36F54
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x140A148A8 (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     HvDuplicateCell @ 0x140A37248 (HvDuplicateCell.c)
 */

__int64 __fastcall CmpDuplicateIndex(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3, unsigned int *a4)
{
  unsigned int v4; // edi
  _DWORD *v6; // r14
  _WORD *CellFlat; // rax
  _WORD *v8; // r15
  int v9; // r13d
  unsigned int v10; // esi
  _DWORD *CellPaged; // rax
  unsigned int i; // r12d
  _WORD *v13; // rax
  _WORD *v14; // rsi
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v17[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v18[4]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+A0h] [rbp+50h]
  unsigned int *v21; // [rsp+A8h] [rbp+58h]

  v21 = a4;
  v20 = a3;
  v4 = 0;
  v18[1] = 0;
  v18[0] = -1;
  v17[0] = -1;
  LODWORD(BugCheckParameter4) = -1;
  v6 = 0LL;
  v17[1] = 0;
  LODWORD(v16) = 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, a2, v18);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3, a2, v18);
  v8 = CellFlat;
  if ( *CellFlat == 26994 )
  {
    v9 = HvDuplicateCell(BugCheckParameter3, (__int64)&BugCheckParameter4);
    if ( v9 >= 0 )
    {
      v10 = BugCheckParameter4;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, v17);
      else
        CellPaged = (_DWORD *)HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, v17);
      v6 = CellPaged;
      *CellPaged = 26994;
      for ( i = 0; i < (unsigned __int16)v8[1]; ++i )
      {
        v9 = HvDuplicateCell(BugCheckParameter3, (__int64)&v16);
        if ( v9 < 0 )
          goto LABEL_16;
        v6[i + 1] = v16;
        ++*((_WORD *)v6 + 1);
      }
      goto LABEL_15;
    }
LABEL_20:
    v10 = BugCheckParameter4;
    goto LABEL_21;
  }
  v9 = HvDuplicateCell(BugCheckParameter3, (__int64)&BugCheckParameter4);
  if ( v9 < 0 )
    goto LABEL_20;
  v10 = BugCheckParameter4;
LABEL_15:
  *v21 = v10;
  v10 = -1;
LABEL_16:
  if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v17);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v17);
  }
LABEL_21:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v18);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v18);
  if ( v10 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v13 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v10, v17);
    else
      v13 = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v10, v17);
    v14 = v13;
    if ( *v13 == 26994 && v13[1] )
    {
      do
        HvFreeCell(BugCheckParameter3, *(_DWORD *)&v14[2 * v4++ + 2]);
      while ( v4 < (unsigned __int16)v14[1] );
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v17);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v17);
  }
  return (unsigned int)v9;
}
