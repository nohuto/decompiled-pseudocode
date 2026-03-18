/*
 * XREFs of VfAvlDeleteAllTreeNodes @ 0x140B83BAC
 * Callers:
 *     VfDeleteLookasideTree @ 0x140B9FE18 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140BA1984 (VfDeleteResourceTree.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403EA300 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403F1260 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403F12C4 (ViAvlRaiseIrqlSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403F1490 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
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
