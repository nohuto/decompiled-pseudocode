/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x140429CE0
 * Callers:
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpCopyKeyPartial @ 0x14087EFC8 (CmpCopyKeyPartial.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140885FAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x14088DBAC (CmpIncrementCachedSecurityRefcount.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14091C778 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpAddSecurityCellToCache @ 0x14091CE7C (CmpAddSecurityCellToCache.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409765B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140977BB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpAssignSecurityToKcb @ 0x1409D27A0 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x1409D8A60 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x1409DA778 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpRemoveFromSecurityCache @ 0x140A66704 (CmpRemoveFromSecurityCache.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x1409C2D50 (RtlFindLowerBoundInSortedArray.c)
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
