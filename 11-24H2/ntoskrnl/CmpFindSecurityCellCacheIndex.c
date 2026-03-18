/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x14041FBC0
 * Callers:
 *     CmpSyncKeyValues @ 0x1407E2A84 (CmpSyncKeyValues.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087C024 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCopyKeyPartial @ 0x140880F10 (CmpCopyKeyPartial.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x14088711C (CmpIncrementCachedSecurityRefcount.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409A0064 (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpAddSecurityCellToCache @ 0x1409A1310 (CmpAddSecurityCellToCache.c)
 *     CmpAssignSecurityToKcb @ 0x1409D58E0 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A1F89C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A2E074 (CmpUndoDeleteKeyForTrans.c)
 *     CmpRemoveFromSecurityCache @ 0x140A69344 (CmpRemoveFromSecurityCache.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A82334 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x1409B0BD0 (RtlFindLowerBoundInSortedArray.c)
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
