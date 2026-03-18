/*
 * XREFs of CmpAddValueToListEx @ 0x14087F434
 * Callers:
 *     CmpMergeKeyValues @ 0x1407D26B4 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x14087EEE0 (CmpSetValueKeyNew.c)
 *     CmpCopyKeyPartial @ 0x14087EFC8 (CmpCopyKeyPartial.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408864B8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409737C4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSetValueKeyTombstone @ 0x140AA8940 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvReallocateCell @ 0x14087F5A4 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int *v5; // r15
  __int64 v7; // r12
  __int64 v9; // rbx
  unsigned int v10; // esi
  int Cell; // eax
  __int64 v12; // rdx
  unsigned int v13; // r14d
  _DWORD *v15; // r8
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF

  v5 = a5;
  LODWORD(a5) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v7 = a3;
  HvpGetCellContextInitialize(&v16);
  v9 = *v5;
  v10 = v9 + 1;
  if ( (unsigned int)(v9 + 1) <= 1 )
    Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v17, (__int64)&v16);
  else
    Cell = HvReallocateCell(BugCheckParameter3, (__int64)&a5, (__int64)&v17, (__int64)&v16);
  v12 = v17;
  v13 = Cell;
  if ( Cell >= 0 )
  {
    v5[1] = (unsigned int)a5;
    if ( (unsigned int)v9 > (unsigned int)v7 )
    {
      v15 = (_DWORD *)(v12 + 4 * v9);
      do
      {
        v9 = (unsigned int)(v9 - 1);
        *v15-- = *(_DWORD *)(v12 + 4 * v9);
      }
      while ( (unsigned int)v9 > (unsigned int)v7 );
    }
    *(_DWORD *)(v12 + 4 * v7) = a2;
    v13 = 0;
    *v5 = v10;
  }
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v16);
  }
  return v13;
}
