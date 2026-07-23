/*
 * XREFs of CmpCopyCell @ 0x140885DE0
 * Callers:
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     CmpCopyValue @ 0x140885564 (CmpCopyValue.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1409096E4 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpLightWeightCreateSetValueData @ 0x1409F8474 (CmpLightWeightCreateSetValueData.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
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
