/*
 * XREFs of CmpDuplicateIndex @ 0x140AAA134
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x1409DA684 (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     HvDuplicateCell @ 0x140867688 (HvDuplicateCell.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpDuplicateIndex(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned int v7; // esi
  _DWORD *v8; // r14
  _WORD *CellFlat; // rax
  _WORD *v10; // r15
  int v11; // r13d
  unsigned int v12; // esi
  _DWORD *CellPaged; // rax
  unsigned int i; // r12d
  _WORD *v15; // rax
  _WORD *v16; // rsi
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+50h]
  unsigned int *v23; // [rsp+A8h] [rbp+58h]

  v23 = a4;
  v22 = a3;
  v4 = 0;
  v20[0] = 0xFFFFFFFFLL;
  v19 = 0xFFFFFFFFLL;
  LODWORD(BugCheckParameter4) = -1;
  v7 = a2;
  v8 = 0LL;
  LODWORD(v18) = 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, a2, v20);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3, a2, v20);
  v10 = CellFlat;
  if ( *CellFlat == 26994 )
  {
    v11 = HvDuplicateCell(BugCheckParameter3, v7, a3, 0, &BugCheckParameter4);
    if ( v11 >= 0 )
    {
      v12 = BugCheckParameter4;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v19);
      else
        CellPaged = (_DWORD *)HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, &v19);
      v8 = CellPaged;
      *CellPaged = 26994;
      for ( i = 0; i < (unsigned __int16)v10[1]; ++i )
      {
        v11 = HvDuplicateCell(BugCheckParameter3, *(unsigned int *)&v10[2 * i + 2], v22, 1, &v18);
        if ( v11 < 0 )
          goto LABEL_16;
        v8[i + 1] = v18;
        ++*((_WORD *)v8 + 1);
      }
      goto LABEL_15;
    }
LABEL_20:
    v12 = BugCheckParameter4;
    goto LABEL_21;
  }
  v11 = HvDuplicateCell(BugCheckParameter3, v7, a3, 1, &BugCheckParameter4);
  if ( v11 < 0 )
    goto LABEL_20;
  v12 = BugCheckParameter4;
LABEL_15:
  *v23 = v12;
  v12 = -1;
LABEL_16:
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v19);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v19);
  }
LABEL_21:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v20);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v20);
  if ( v12 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v15 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v12, &v19);
    else
      v15 = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v12, &v19);
    v16 = v15;
    if ( *v15 == 26994 && v15[1] )
    {
      do
        HvFreeCell(BugCheckParameter3, *(_DWORD *)&v16[2 * v4++ + 2]);
      while ( v4 < (unsigned __int16)v16[1] );
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v19);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v19);
  }
  return (unsigned int)v11;
}
