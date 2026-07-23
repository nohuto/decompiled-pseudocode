/*
 * XREFs of VfAvlDeleteAllTreeNodes @ 0x140B85BAC
 * Callers:
 *     VfDeleteLookasideTree @ 0x140BA1E18 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140BA3984 (VfDeleteResourceTree.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403D9CC0 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403E4F80 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403E4FE4 (ViAvlRaiseIrqlSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403E51B0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 */

__int64 __fastcall VfAvlDeleteAllTreeNodes(PRTL_AVL_TABLE Table)
{
  PVOID v2; // rax
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  VfAvlInitializeLockContext((__int64)&v5, 0);
  ViAvlRaiseIrqlSafe((__int64)&v5);
  ViAvlAcquireTableLockAtDpcLevelSafe((__int64)Table, (__int64)&v5);
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !v2 )
      break;
    RtlDeleteElementGenericTableAvl(Table, v2);
  }
  ViAvlReleaseTableLockFromDpcLevel((__int64)Table, (__int64)&v5);
  return VfAvlCleanupLockContext((__int64)&v5, v3);
}
