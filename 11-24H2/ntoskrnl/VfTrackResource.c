/*
 * XREFs of VfTrackResource @ 0x140BA19B0
 * Callers:
 *     VfMiscExInitializeResourceLite_Exit @ 0x140B9D9E0 (VfMiscExInitializeResourceLite_Exit.c)
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

char __fastcall VfTrackResource(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _QWORD *v5; // rbp
  struct _SLIST_ENTRY *v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]

  v8 = 0LL;
  v9 = 0LL;
  if ( !ViResourceInitialized )
    return 0;
  v5 = VfAvlReserveNode(&ViResourceAvl, BugCheckParameter2, 0LL);
  if ( !v5 )
  {
    _InterlockedExchange(&ViResourceNotTracked, 1);
    return 0;
  }
  v6 = 0LL;
  VfAvlInitializeLockContext((__int64)&v8, 0);
  if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v8, BugCheckParameter2, 0LL) )
  {
    if ( !ViResourcesAlreadyLoadedDrivers )
      CarReportRuleViolationFromNt(196, 208LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a2);
    _InterlockedAdd(&ViResourceStaleNodes, 1u);
    v6 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v8, BugCheckParameter2, 0LL);
  }
  VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)&v8, v5);
  VfAvlCleanupLockContext((__int64)&v8, v7);
  if ( v6 )
    VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v6);
  return 1;
}
