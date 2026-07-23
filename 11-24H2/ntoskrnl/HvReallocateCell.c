/*
 * XREFs of HvReallocateCell @ 0x14088539C
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmpSetValueKeyExisting @ 0x140883D24 (CmpSetValueKeyExisting.c)
 *     CmpAddValueToListEx @ 0x14088522C (CmpAddValueToListEx.c)
 *     CmpAddToLeaf @ 0x140887458 (CmpAddToLeaf.c)
 *     CmpRemoveValueFromList @ 0x1409F835C (CmpRemoveValueFromList.c)
 *     CmpSetValueDataExisting @ 0x140A59D2C (CmpSetValueDataExisting.c)
 *     CmpSplitLeaf @ 0x140A5DCF0 (CmpSplitLeaf.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140885F04 (HvpDoAllocateCell.c)
 *     HvpGetCellContextMove @ 0x140886D10 (HvpGetCellContextMove.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        int a3,
        char a4,
        int *a5,
        __int64 *a6,
        __int64 a7)
{
  void *v11; // r12
  ULONG_PTR v12; // rdx
  __int64 CellFlat; // rax
  const void *v14; // rsi
  unsigned int v15; // r15d
  unsigned int v16; // edi
  __int64 v17; // rcx
  int Cell; // edi
  unsigned int v20; // edx
  unsigned int v21; // edi
  int v22; // eax
  void *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  void *v26; // [rsp+38h] [rbp-8h] BYREF
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  int v28; // [rsp+90h] [rbp+50h]

  v27 = 0LL;
  v25 = 0LL;
  v28 = -1;
  HvpGetCellContextInitialize(&v27);
  v11 = 0LL;
  v26 = 0LL;
  HvpGetCellContextInitialize(&v25);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v12, &v27);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v12, &v27);
  v14 = (const void *)CellFlat;
  v15 = -4 - *(_DWORD *)(CellFlat - 4);
  v16 = a3 + 4;
  if ( v16 <= -*(_DWORD *)(CellFlat - 4) )
  {
    v17 = a7;
    *a5 = a2;
    *a6 = CellFlat;
    HvpGetCellContextMove(v17, &v27);
    return 0;
  }
  v20 = 0x4000;
  v21 = (v16 + 7) & 0xFFFFFFF8;
  v22 = 0;
  while ( v21 > v20 )
  {
    v20 *= 2;
    ++v22;
  }
  if ( !v22 )
    v20 = v21;
  if ( v20 > 0x100000 )
  {
    Cell = -1073741670;
LABEL_19:
    if ( v14 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v27);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
    }
    goto LABEL_20;
  }
  Cell = HvpDoAllocateCell(BugCheckParameter3, (__int64)&v26, (__int64)&v25);
  if ( Cell < 0 )
  {
    v11 = v26;
    goto LABEL_19;
  }
  v23 = v26;
  memmove(v26, v14, v15);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v27);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
  if ( a4 )
    HvFreeCell(BugCheckParameter3, a2);
  *a5 = v28;
  v24 = a7;
  *a6 = (__int64)v23;
  HvpGetCellContextMove(v24, &v25);
  Cell = 0;
LABEL_20:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v25);
  }
  return (unsigned int)Cell;
}
