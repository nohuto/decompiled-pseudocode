/*
 * XREFs of ViRemLockFindSurrogate @ 0x140B929A4
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x140B92590 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B92620 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x140B927B0 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x140B92820 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 */

PVOID ViRemLockFindSurrogate()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  PVOID v2; // rbx
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  VfAvlInitializeLockContext((__int64)&v5, 1);
  v2 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v5, v1, (unsigned int)(v0 + 31));
  VfAvlCleanupLockContext((__int64)&v5, v3);
  return v2;
}
