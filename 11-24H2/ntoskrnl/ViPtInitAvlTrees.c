/*
 * XREFs of ViPtInitAvlTrees @ 0x140B8E8F0
 * Callers:
 *     VfPoolTrackingEntry @ 0x14060F930 (VfPoolTrackingEntry.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140451510 (RtlInitializeGenericTableAvl.c)
 */

__int64 ViPtInitAvlTrees()
{
  __int64 result; // rax

  ViUpdateStackInfo = 1;
  RtlInitializeGenericTableAvl(
    &ViPoolInfoAvl,
    (PRTL_AVL_COMPARE_ROUTINE)VfPtComparePoolInfoCallback,
    (PRTL_AVL_ALLOCATE_ROUTINE)ViPtAllocPoolInfoCallback,
    (PRTL_AVL_FREE_ROUTINE)ViPtFreePoolInfoEntryCallback,
    0LL);
  _InterlockedExchange(&ViPoolInfoAvlInitialized, 1);
  RtlInitializeGenericTableAvl(
    &ViPoolStackInfoAvl,
    (PRTL_AVL_COMPARE_ROUTINE)VfPtComparePoolStackInfoCallback,
    (PRTL_AVL_ALLOCATE_ROUTINE)ViPtAllocPoolInfoCallback,
    (PRTL_AVL_FREE_ROUTINE)ViPtFreeStackInfoEntryCallback,
    0LL);
  result = (unsigned int)_InterlockedExchange(&ViPoolStackInfoAvlInitialized, 1);
  ViAptInitialized = 1;
  return result;
}
