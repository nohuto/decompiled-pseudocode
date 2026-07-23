/*
 * XREFs of VfCheckForResource @ 0x140BA91D8
 * Callers:
 *     ExpCheckForResource @ 0x14048C4AC (ExpCheckForResource.c)
 * Callees:
 *     VfAvlDeleteTreeNode @ 0x1403E3E20 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x140487850 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     VfAvlFreeNodeNoLock @ 0x14060EC88 (VfAvlFreeNodeNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfCheckForResource(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v5; // rax
  __int64 v6; // rdx
  ULONG_PTR *v7; // rbx
  _SLIST_ENTRY *v8; // rbx
  __int64 v9; // rdx
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]
  ULONG_PTR v12; // [rsp+80h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( ViResourceInitialized )
  {
    if ( (unsigned int)VfPoolIsInternalFree() || !qword_140FFDBC8 )
      return 1LL;
    v12 = 0LL;
    VfAvlInitializeLockContext((__int64)&v10, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v10, BugCheckParameter3, a2);
    v7 = v5;
    if ( v5 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
        CarReportRuleViolationFromNt(196, 210LL, *v5, BugCheckParameter3, a2, 0xBu, 0LL);
      v12 = *v7;
    }
    VfAvlCleanupLockContext((__int64)&v10, v6);
    if ( !v12 )
      return 1LL;
    _InterlockedIncrement(&ViResourceStaleNodes);
    VfAvlInitializeLockContext((__int64)&v10, 0);
    v8 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v10, (__int64)&v12, 0LL);
    VfAvlCleanupLockContext((__int64)&v10, v9);
    if ( v8 )
      VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v8);
  }
  return 0LL;
}
