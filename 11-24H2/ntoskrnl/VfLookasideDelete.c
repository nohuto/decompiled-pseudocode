/*
 * XREFs of VfLookasideDelete @ 0x140BA1F68
 * Callers:
 *     VfMiscExDeleteLookasideListEx_Entry @ 0x140B9F830 (VfMiscExDeleteLookasideListEx_Entry.c)
 * Callees:
 *     VfAvlDeleteTreeNode @ 0x1403E3E20 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     VfAvlFreeNodeNoLock @ 0x14060EC88 (VfAvlFreeNodeNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfLookasideDelete(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _SLIST_ENTRY *v4; // rbx
  __int64 v5; // rdx
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( ViLookasideInitialized )
  {
    v4 = 0LL;
    VfAvlInitializeLockContext((__int64)&v6, 0);
    if ( VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v6, BugCheckParameter2, 0LL) )
    {
      v4 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v6, BugCheckParameter2, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (VfRuleClasses & 0x800) != 0 )
    {
      CarReportRuleViolationFromNt(196, 203LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a2);
    }
    VfAvlCleanupLockContext((__int64)&v6, v5);
    if ( v4 )
      VfAvlFreeNodeNoLock((__int64)&ViLookasideAvl, v4);
  }
}
