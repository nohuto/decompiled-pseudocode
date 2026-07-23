/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140B96F30
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8DC14 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA9ECC (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  ++dword_140F047E8;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v5, v4, v5, v6) )
    {
      VfAvlInitializeLockContext((__int64)&v13, 1);
      v9 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v13, v8, v7);
      if ( v9 )
      {
        v11 = v9[8];
        if ( v11 )
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 164));
      }
      VfAvlCleanupLockContext((__int64)&v13, v10);
    }
  }
  return guard_dispatch_icall_no_overrides(a1, a2);
}
