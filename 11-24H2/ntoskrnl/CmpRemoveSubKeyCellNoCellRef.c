/*
 * XREFs of CmpRemoveSubKeyCellNoCellRef @ 0x1407E3464
 * Callers:
 *     CmpCheckRegistry2 @ 0x140888A80 (CmpCheckRegistry2.c)
 * Callees:
 *     CmpFindCellInIndex @ 0x1407E32A8 (CmpFindCellInIndex.c)
 *     CmpRemoveCellFromIndex @ 0x1407E33C4 (CmpRemoveCellFromIndex.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpRemoveSubKeyCellNoCellRef(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3)
{
  unsigned int v5; // edi
  __int64 CellFlat; // rax
  __int64 v7; // r14
  int v8; // edi
  unsigned int v9; // r12d
  _WORD *CellPaged; // rax
  _WORD *v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // r15d
  _WORD *v15; // rax
  _WORD *v16; // r13
  unsigned __int16 CellInIndex; // ax
  unsigned __int16 v18; // r13
  unsigned __int16 v19; // di
  bool v20; // zf
  unsigned __int16 v21; // r15
  _DWORD v23[2]; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v24[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v25[2]; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v26; // [rsp+40h] [rbp-10h]
  unsigned __int16 v27; // [rsp+90h] [rbp+40h]
  unsigned __int16 v29; // [rsp+A8h] [rbp+58h]

  v25[1] = 0;
  v25[0] = -1;
  v24[0] = -1;
  v23[0] = -1;
  v5 = a2;
  v24[1] = 0;
  v26 = 0LL;
  v23[1] = 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v7 = CellFlat;
  v8 = HvpMarkCellDirty(BugCheckParameter3, v5);
  if ( v8 < 0 )
    goto LABEL_52;
  v9 = *(_DWORD *)(v7 + 28);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v7 + 28));
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  v11 = CellPaged;
  if ( *CellPaged == 26994 )
  {
    v13 = 0;
    v27 = CellPaged[1];
    v12 = v27;
    while ( v13 < v12 )
    {
      if ( v13 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v23);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v23);
      }
      v14 = *(_DWORD *)&v11[2 * v13 + 2];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v15 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)&v11[2 * v13 + 2]);
      else
        v15 = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
      v16 = v15;
      v26 = v15;
      CellInIndex = CmpFindCellInIndex(v15, a3);
      v18 = v16[1];
      v29 = CellInIndex;
      if ( CellInIndex < v18 )
      {
        v8 = HvpMarkCellDirty(BugCheckParameter3, v14);
        if ( v8 < 0 )
          goto LABEL_25;
        if ( v18 == 1 )
        {
          v8 = HvpMarkCellDirty(BugCheckParameter3, v9);
          if ( v8 < 0 )
            goto LABEL_25;
          v19 = CmpFindCellInIndex(v11, v14);
          if ( v19 >= v11[1] )
          {
            v8 = -1073741492;
            goto LABEL_25;
          }
        }
        else
        {
          v19 = v27;
        }
        CmpRemoveCellFromIndex(v26, v29);
        if ( v18 == 1 )
        {
          CmpRemoveCellFromIndex(v11, v19);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, v23);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v23);
          v26 = 0LL;
          HvFreeCell(BugCheckParameter3, v14);
          if ( !v11[1] )
          {
            v20 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
            goto LABEL_35;
          }
        }
        goto LABEL_44;
      }
      v12 = v27;
      ++v13;
    }
    goto LABEL_44;
  }
  v21 = CmpFindCellInIndex(CellPaged, a3);
  if ( v21 < v11[1] )
  {
    v8 = HvpMarkCellDirty(BugCheckParameter3, v9);
    if ( v8 >= 0 )
    {
      CmpRemoveCellFromIndex(v11, v21);
      if ( !v11[1] )
      {
        v20 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
LABEL_35:
        if ( v20 )
          HvpReleaseCellPaged(BugCheckParameter3, v24);
        else
          HvpReleaseCellFlat(BugCheckParameter3, v24);
        v11 = 0LL;
        HvFreeCell(BugCheckParameter3, v9);
      }
LABEL_44:
      v20 = (*(_DWORD *)(v7 + 20))-- == 1;
      if ( v20 )
      {
        *(_DWORD *)(v7 + 28) = -1;
        *(_WORD *)(v7 + 52) = 0;
        *(_DWORD *)(v7 + 56) = 0;
      }
      v8 = 0;
LABEL_25:
      if ( v26 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v23);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v23);
      }
    }
  }
  else
  {
    v8 = -1073741492;
  }
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v24);
  }
LABEL_52:
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v25);
  }
  return (unsigned int)v8;
}
