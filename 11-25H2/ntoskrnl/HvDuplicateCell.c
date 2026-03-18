/*
 * XREFs of HvDuplicateCell @ 0x140867688
 * Callers:
 *     CmpCloneKCBValueListForTrans @ 0x14086919C (CmpCloneKCBValueListForTrans.c)
 *     CmpDuplicateIndex @ 0x140AAA134 (CmpDuplicateIndex.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall HvDuplicateCell(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, char a4, _DWORD *a5)
{
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  const void *v9; // r14
  int v10; // r15d
  int Cell; // eax
  void *v12; // rdi
  unsigned int v13; // esi
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  void *v17; // [rsp+40h] [rbp-10h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  HvpGetCellContextInitialize(&v15);
  v17 = 0LL;
  HvpGetCellContextInitialize(&v16);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v9 = (const void *)CellFlat;
  v10 = -4 - *(_DWORD *)(CellFlat - 4);
  Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v17, (__int64)&v16);
  v12 = v17;
  v13 = Cell;
  if ( Cell >= 0 )
  {
    if ( a4 == 1 )
      memmove(v17, v9, v10);
    else
      memset_0(v17, 0, v10);
    v13 = 0;
    *a5 = -1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v15);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v15);
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v16);
  }
  return v13;
}
