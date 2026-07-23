/*
 * XREFs of VfTargetRecoverIoCallbacks @ 0x14060F7A0
 * Callers:
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B9D138 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     VfDifRecoverIoCallbacks @ 0x14060F4F0 (VfDifRecoverIoCallbacks.c)
 */

__int64 __fastcall VfTargetRecoverIoCallbacks(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  if ( !VfSafeMode )
  {
    VfAvlInitializeLockContext((__int64)&v7, 1);
    v4 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v7, v2, v3);
    v5 = v4;
    if ( v4 )
    {
      VfDifRecoverIoCallbacks(v4[5]);
      v5[6] = 0LL;
    }
  }
  return VfAvlCleanupLockContext((__int64)&v7, a2);
}
