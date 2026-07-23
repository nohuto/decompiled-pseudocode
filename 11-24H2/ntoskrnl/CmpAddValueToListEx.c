/*
 * XREFs of CmpAddValueToListEx @ 0x14088522C
 * Callers:
 *     CmpMergeKeyValues @ 0x1407E24E4 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x140884CD8 (CmpSetValueKeyNew.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x140AA8D74 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
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
