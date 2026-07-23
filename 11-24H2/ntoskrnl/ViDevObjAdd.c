/*
 * XREFs of ViDevObjAdd @ 0x140B94404
 * Callers:
 *     VerifierIoCreateDevice @ 0x140B94120 (VerifierIoCreateDevice.c)
 * Callees:
 *     VfAvlInsertReservedTreeNode @ 0x1403E4050 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlReserveNode @ 0x1403E5340 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 */

char __fastcall ViDevObjAdd(__int64 a1)
{
  char v1; // bl
  _QWORD *v2; // rax
  _QWORD *v3; // r8
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  v1 = 1;
  if ( ViDevObjInitialized )
  {
    v2 = VfAvlReserveNode(ViDevObjAvl, a1, 336LL);
    if ( v2 )
    {
      *((_DWORD *)v2 + 4) = 0;
      VfAvlInitializeLockContext((__int64)&v6, 0);
      VfAvlInsertReservedTreeNode((__int64)ViDevObjAvl, (__int64)&v6, v3);
      VfAvlCleanupLockContext((__int64)&v6, v4);
      return v1;
    }
    _InterlockedExchange(&ViDevObjAllocationFailures, 1);
  }
  return 0;
}
