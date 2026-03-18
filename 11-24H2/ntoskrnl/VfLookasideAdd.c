/*
 * XREFs of VfLookasideAdd @ 0x140B9FE44
 * Callers:
 *     VfMiscExInitializePagedLookasideList_Exit @ 0x140B9D920 (VfMiscExInitializePagedLookasideList_Exit.c)
 * Callees:
 *     VfAvlDeleteTreeNode @ 0x1403F0144 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403F0328 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlReserveNode @ 0x1403F1620 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     VfAvlFreeNodeNoLock @ 0x1406106C8 (VfAvlFreeNodeNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfLookasideAdd(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _QWORD *v4; // rsi
  struct _SLIST_ENTRY *v5; // rdi
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
        v5 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode(
                                      (__int64 *)&ViLookasideAvl,
                                      (__int64)&v7,
                                      BugCheckParameter2,
                                      0LL);
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
