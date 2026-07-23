/*
 * XREFs of VfLookasideAdd @ 0x140BA1E44
 * Callers:
 *     VfMiscExInitializePagedLookasideList_Exit @ 0x140B9F920 (VfMiscExInitializePagedLookasideList_Exit.c)
 * Callees:
 *     VfAvlDeleteTreeNode @ 0x1403E3E20 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403E4050 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlReserveNode @ 0x1403E5340 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     VfAvlFreeNodeNoLock @ 0x14060EC88 (VfAvlFreeNodeNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfLookasideAdd(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _QWORD *v4; // rsi
  _SLIST_ENTRY *v5; // rdi
  __int64 v6; // rdx
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  if ( ViLookasideInitialized )
  {
    v4 = VfAvlReserveNode((__int64 *)&ViLookasideAvl, BugCheckParameter2, 0LL);
    if ( v4 )
    {
      v5 = 0LL;
      VfAvlInitializeLockContext((__int64)&v7, 0);
      if ( VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v7, BugCheckParameter2, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
          CarReportRuleViolationFromNt(196, 202LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a2);
        v5 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v7, BugCheckParameter2, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)&ViLookasideAvl, (__int64)&v7, v4);
      VfAvlCleanupLockContext((__int64)&v7, v6);
      if ( v5 )
        VfAvlFreeNodeNoLock((__int64)&ViLookasideAvl, v5);
    }
    else
    {
      _InterlockedExchange(&ViLookasideAllocationFailures, 1);
    }
  }
}
