/*
 * XREFs of VfCheckForLookaside @ 0x140BA9C90
 * Callers:
 *     ExpCheckForLookaside @ 0x14049464C (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x140487850 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfCheckForLookaside(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v5; // rax
  __int64 v6; // rdx
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  result = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  if ( ViLookasideInitialized )
  {
    if ( !(unsigned int)VfPoolIsInternalFree() )
    {
      VfAvlInitializeLockContext((__int64)&v7, 1);
      v5 = (ULONG_PTR *)VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v7, BugCheckParameter3, a2);
      if ( v5 )
      {
        if ( (MmVerifierData & 0x800) != 0 )
          CarReportRuleViolationFromNt(196, 204LL, *v5, BugCheckParameter3, a2, 0xBu, *v5);
      }
      VfAvlCleanupLockContext((__int64)&v7, v6);
    }
    return 1LL;
  }
  return result;
}
