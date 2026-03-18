/*
 * XREFs of CmpCopyCell @ 0x14087FFE8
 * Callers:
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 *     CmpCopyKeyPartial @ 0x14087EFC8 (CmpCopyKeyPartial.c)
 *     CmpCopyValue @ 0x14087F76C (CmpCopyValue.c)
 *     CmpLightWeightCreateSetValueData @ 0x1408883AC (CmpLightWeightCreateSetValueData.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409737C4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14097497C (CmpCopyMergeOfLayeredKeyNode.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpCopyCell(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, __int64 a4, _DWORD *a5)
{
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  const void *v9; // rsi
  unsigned int v10; // r12d
  int Cell; // r14d
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  void *v15; // [rsp+40h] [rbp-10h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  HvpGetCellContextInitialize(&v13);
  v15 = 0LL;
  HvpGetCellContextInitialize(&v14);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7, &v13);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v7, &v13);
  v9 = (const void *)CellFlat;
  v10 = -4 - *(_DWORD *)(CellFlat - 4);
  Cell = HvAllocateCell(a3, (__int64)&v15, (__int64)&v14);
  if ( Cell >= 0 )
  {
    memmove(v15, v9, v10);
    Cell = 0;
    *a5 = -1;
  }
  if ( v15 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, &v14);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v14);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
  return (unsigned int)Cell;
}
