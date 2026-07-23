/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x140B94904
 * Callers:
 *     VerifierIoInitializeRemoveLockEx @ 0x140B94620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x140BA9AFC (VfRemLockDeleteMemoryRange.c)
 * Callees:
 *     VfAvlDeleteTreeNode @ 0x1403E3E20 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     VfAvlFreeNodeNoLock @ 0x14060EC88 (VfAvlFreeNodeNoLock.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  _SLIST_ENTRY *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v0 = 0LL;
  v7 = 0LL;
  VfAvlInitializeLockContext((__int64)&v7, 0);
  v3 = (__int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v7, v1, v2);
  v5 = v3;
  if ( v3 )
    v0 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViRemLockAvl, (__int64)&v7, *v3, 0LL);
  VfAvlCleanupLockContext((__int64)&v7, v4);
  if ( !v5 )
    return 0LL;
  if ( v0 )
    VfAvlFreeNodeNoLock((__int64)&ViRemLockAvl, v0);
  return 1LL;
}
