/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x140415340
 * Callers:
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpAddSecurityCellToCache @ 0x140832634 (CmpAddSecurityCellToCache.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1408328B8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087FED4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x14088AFCC (CmpIncrementCachedSecurityRefcount.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1409C5710 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A1499C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpRemoveFromSecurityCache @ 0x140A626F4 (CmpRemoveFromSecurityCache.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A7CED8 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x14099A690 (RtlFindLowerBoundInSortedArray.c)
 */

char __fastcall CmpFindSecurityCellCacheIndex(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v6; // r8
  char result; // al
  _DWORD *LowerBoundInSortedArray; // rax
  unsigned __int64 v9; // rdx
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *(_DWORD *)(a1 + 1872);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v6 = *(int *)(a1 + 1880);
  if ( (int)v6 >= 0 && (unsigned int)v6 < v3 && *(_DWORD *)(*(_QWORD *)(a1 + 1888) + 16 * v6) == a2 )
  {
    *a3 = v6;
    return 1;
  }
  LowerBoundInSortedArray = (_DWORD *)RtlFindLowerBoundInSortedArray(
                                        (unsigned int)&v10,
                                        *(_QWORD *)(a1 + 1888),
                                        v3,
                                        16,
                                        (__int64)CmpSearchSecurityCellCache);
  v9 = ((unsigned __int64)LowerBoundInSortedArray - *(_QWORD *)(a1 + 1888)) >> 4;
  if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 1872) || *LowerBoundInSortedArray != v10 )
  {
    *a3 = v9;
    return 0;
  }
  *(_DWORD *)(a1 + 1880) = v9;
  result = 1;
  *a3 = v9;
  return result;
}
