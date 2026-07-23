/*
 * XREFs of CmpAddSubKeyEx @ 0x140883094
 * Callers:
 *     CmpAddSubKey @ 0x1408839CC (CmpAddSubKey.c)
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140909474 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpAddSubKeyToList @ 0x140882878 (CmpAddSubKeyToList.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r12d
  ULONG_PTR v6; // rdx
  __int64 CellFlat; // rax
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // r15
  unsigned int *v11; // rsi
  ULONG_PTR v12; // rdx
  _WORD *CellPaged; // rax
  __int16 v14; // cx
  _WORD *v15; // rdi
  int Cell; // esi
  __int16 v18; // r13
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v25[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+50h]

  v27 = a3;
  *(_QWORD *)v25 = 0LL;
  v23 = 0LL;
  v4 = -1;
  v26 = -1;
  HvpGetCellContextInitialize(v25);
  v24 = 0LL;
  HvpGetCellContextInitialize(&v23);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v6, v25);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v6, v25);
  v8 = CellFlat;
  v9 = a3 >> 31;
  v10 = v9;
  if ( !*(_DWORD *)(CellFlat + 4 * v9 + 20) )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 220) < 5u )
      v18 = 26220;
    else
      v18 = 26732;
    Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v24, (__int64)&v23);
    if ( Cell >= 0 )
    {
      v19 = v24;
      *(_WORD *)v24 = v18;
      *(_WORD *)(v19 + 2) = 0;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v23);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
      v15 = 0LL;
      Cell = CmpAddSubKeyToList(BugCheckParameter3, &v26, v27);
      if ( Cell >= 0 )
      {
        v4 = -1;
        *(_DWORD *)(v8 + 4 * v10 + 28) = v26;
LABEL_31:
        ++*(_DWORD *)(v8 + 4 * v10 + 20);
        Cell = 0;
        goto LABEL_11;
      }
      v4 = v26;
    }
    else
    {
      v15 = (_WORD *)v24;
      v4 = v26;
    }
    goto LABEL_11;
  }
  v11 = (unsigned int *)(CellFlat + 4 * (v9 + 7));
  v12 = *v11;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v12, &v23);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v12, &v23);
  v14 = *CellPaged;
  v15 = CellPaged;
  if ( *CellPaged == 26220 )
  {
    if ( CellPaged[1] < 0x1FBu )
      goto LABEL_10;
    Cell = HvpMarkCellDirty(BugCheckParameter3, *v11, 0);
    if ( Cell < 0 )
      goto LABEL_11;
    v20 = 0;
    if ( v15[1] )
    {
      do
      {
        v22 = v20++;
        *(_DWORD *)&v15[2 * v22 + 2] = *(_DWORD *)&v15[4 * v22 + 2];
      }
      while ( v20 < (unsigned __int16)v15[1] );
      v4 = -1;
    }
    *v15 = 26988;
    v11 = (unsigned int *)(v8 + 4 * (v10 + 7));
  }
  else if ( v14 != 26988 && v14 != 26732 )
  {
    goto LABEL_10;
  }
  if ( v15[1] < 0x3F5u )
    goto LABEL_10;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v23);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
  v24 = 0LL;
  Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v24, (__int64)&v23);
  if ( Cell >= 0 )
  {
    v21 = v24;
    v11 = (unsigned int *)(v8 + 4 * (v10 + 7));
    *(_DWORD *)v24 = 92530;
    *(_DWORD *)(v21 + 4) = *v11;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
    v15 = 0LL;
    *v11 = -1;
LABEL_10:
    Cell = CmpAddSubKeyToList(BugCheckParameter3, v11, v27);
    if ( Cell < 0 )
      goto LABEL_11;
    goto LABEL_31;
  }
  v15 = (_WORD *)v24;
LABEL_11:
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v25);
  }
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
  }
  if ( v4 != -1 )
    HvFreeCell(BugCheckParameter3, v4);
  return (unsigned int)Cell;
}
