/*
 * XREFs of VerifierKeAcquireQueuedSpinLock @ 0x140B91BE0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8DC14 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA9ECC (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA9F68 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeAcquireQueuedSpinLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edx
  unsigned __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  v3 = a1;
  if ( (MmVerifierData & 1) != 0 )
  {
    ++dword_140F047E8;
    v4 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v4, a2, v4, v5) )
      {
        VfAvlInitializeLockContext((__int64)&v12, 1);
        v8 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v12, v7, v6);
        if ( v8 )
        {
          v10 = v8[8];
          if ( v10 )
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 164));
        }
        VfAvlCleanupLockContext((__int64)&v12, v9);
      }
    }
    LOBYTE(a1) = 2;
    v2 = ViKeIrqlLogAndTrimMemory(a1, a2, v4);
  }
  result = guard_dispatch_icall_no_overrides(v3, a2);
  if ( (MmVerifierData & 1) != 0 )
  {
    if ( v2 )
      *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
