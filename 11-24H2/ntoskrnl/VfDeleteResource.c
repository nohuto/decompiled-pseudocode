/*
 * XREFs of VfDeleteResource @ 0x140BA188C
 * Callers:
 *     VfMiscExDeleteResourceLite_Entry @ 0x140B9D850 (VfMiscExDeleteResourceLite_Entry.c)
 * Callees:
 *     VfAvlDeleteTreeNode @ 0x1403F0144 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     VfAvlFreeNodeNoLock @ 0x1406106C8 (VfAvlFreeNodeNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfDeleteResource(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _SLIST_ENTRY *v4; // rbx
  __int64 v5; // rdx
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( ViResourceInitialized && qword_140FFCBC8 )
  {
    v4 = 0LL;
    VfAvlInitializeLockContext((__int64)&v6, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v6, BugCheckParameter2, 0LL) )
    {
      v4 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v6, BugCheckParameter2, 0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers )
    {
      CarReportRuleViolationFromNt(196, 209LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a2);
    }
    VfAvlCleanupLockContext((__int64)&v6, v5);
    if ( v4 )
      VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v4);
  }
}
