/*
 * XREFs of CmpLightWeightCreateModificationData @ 0x1409DA5B8
 * Callers:
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x1409D9E84 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x1409DA2CC (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpLightWeightDuplicateParentLists @ 0x1409DA684 (CmpLightWeightDuplicateParentLists.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1409DA9B4 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightUpdateModificationActions @ 0x1409DB044 (CmpLightWeightUpdateModificationActions.c)
 */

__int64 __fastcall CmpLightWeightCreateModificationData(__int64 a1, __int64 *a2)
{
  ULONG_PTR v4; // rbp
  __int64 Pool; // rax
  __int64 v6; // rdi
  int updated; // ebx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  Pool = CmpAllocatePool(0x100uLL);
  v6 = Pool;
  if ( Pool )
  {
    *(_QWORD *)Pool = 0LL;
    *(_DWORD *)(Pool + 8) = 0;
    ++*(_DWORD *)Pool;
    *(_DWORD *)(Pool + 12) = -1;
    *(_DWORD *)(Pool + 16) = -1;
    updated = CmpLightWeightDuplicateParentLists(v4);
    if ( updated < 0
      || (updated = CmpLightWeightUpdateModificationActions(
                      v6,
                      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL),
                      *(_QWORD *)(a1 + 56)),
          updated < 0) )
    {
      CmpLightWeightCleanupModifyKeyDataUoW(v4);
    }
    else
    {
      updated = 0;
      *a2 = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)updated;
}
