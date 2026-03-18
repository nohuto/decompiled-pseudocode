/*
 * XREFs of CmpAddSubKeyEx @ 0x1408897A8
 * Callers:
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpAddSubKey @ 0x1408895B4 (CmpAddSubKey.c)
 *     CmpCopySyncTree2 @ 0x140889B3C (CmpCopySyncTree2.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14097470C (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpAddSubKeyToList @ 0x14087DDCC (CmpAddSubKeyToList.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r12d
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned int *v13; // rsi
  ULONG_PTR v14; // rdx
  _WORD *CellPaged; // rax
  __int16 v16; // cx
  _WORD *v17; // rdi
  int v18; // esi
  int v20; // eax
  unsigned int v21; // ecx
  __int16 v22; // r13
  int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // [rsp+30h] [rbp-30h] BYREF
  int v29; // [rsp+34h] [rbp-2Ch]
  unsigned int v30; // [rsp+38h] [rbp-28h]
  __int64 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v33[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+50h]

  v35 = a3;
  v29 = -1;
  *(_QWORD *)v33 = 0LL;
  v31 = 0LL;
  v5 = -1;
  v34 = -1;
  v28 = -1;
  HvpGetCellContextInitialize(v33);
  v32 = 0LL;
  HvpGetCellContextInitialize(&v31);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, v33);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, v33);
  v10 = CellFlat;
  v11 = a3 >> 31;
  v30 = a3 >> 31;
  v12 = v11;
  if ( *(_DWORD *)(CellFlat + 4 * v11 + 20) )
  {
    v13 = (unsigned int *)(CellFlat + 4 * (v11 + 7));
    v14 = *v13;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v14, &v31);
    else
      CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v14, &v31);
    v16 = *CellPaged;
    v17 = CellPaged;
    if ( *CellPaged != 26220 )
    {
      if ( v16 != 26988 && v16 != 26732 )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( CellPaged[1] < 0x1FBu )
      goto LABEL_10;
    v18 = HvpMarkCellDirty(BugCheckParameter3, *v13, 0);
    if ( v18 >= 0 )
    {
      v25 = 0;
      if ( v17[1] )
      {
        do
        {
          v27 = v25++;
          *(_DWORD *)&v17[2 * v27 + 2] = *(_DWORD *)&v17[4 * v27 + 2];
        }
        while ( v25 < (unsigned __int16)v17[1] );
        v5 = v29;
      }
      *v17 = 26988;
      v13 = (unsigned int *)(v10 + 4 * (v12 + 7));
LABEL_9:
      if ( v17[1] < 0x3F5u )
        goto LABEL_10;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v31);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v31);
      v32 = 0LL;
      v18 = HvAllocateCell(BugCheckParameter3, 12, v30, &v28, &v32, (__int64)&v31);
      if ( v18 < 0 )
      {
        v17 = (_WORD *)v32;
        goto LABEL_11;
      }
      v26 = v32;
      v13 = (unsigned int *)(v10 + 4 * (v12 + 7));
      *(_DWORD *)v32 = 92530;
      *(_DWORD *)(v26 + 4) = *v13;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v31);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v31);
      v17 = 0LL;
      *v13 = v28;
LABEL_10:
      v18 = CmpAddSubKeyToList(BugCheckParameter3, v13, v35);
      if ( v18 < 0 )
        goto LABEL_11;
      goto LABEL_35;
    }
  }
  else
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 220) < 5u )
    {
      v23 = 12;
      v22 = 26220;
    }
    else
    {
      v20 = 1012;
      v21 = 1;
      v22 = 26732;
      if ( a4 )
        v21 = a4;
      if ( v21 < 0x3F4 )
        v20 = v21;
      v23 = 8 * v20 + 4;
    }
    v18 = HvAllocateCell(BugCheckParameter3, v23, v11, &v34, &v32, (__int64)&v31);
    if ( v18 >= 0 )
    {
      v24 = v32;
      *(_WORD *)v32 = v22;
      *(_WORD *)(v24 + 2) = 0;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v31);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v31);
      v17 = 0LL;
      v18 = CmpAddSubKeyToList(BugCheckParameter3, &v34, v35);
      if ( v18 >= 0 )
      {
        v5 = -1;
        *(_DWORD *)(v10 + 4 * v12 + 28) = v34;
LABEL_35:
        ++*(_DWORD *)(v10 + 4 * v12 + 20);
        v18 = 0;
        goto LABEL_11;
      }
      v5 = v34;
    }
    else
    {
      v17 = (_WORD *)v32;
      v5 = v34;
    }
  }
LABEL_11:
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v33);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v33);
  }
  if ( v17 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v31);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v31);
  }
  if ( v5 != -1 )
    HvFreeCell(BugCheckParameter3, v5);
  return (unsigned int)v18;
}
