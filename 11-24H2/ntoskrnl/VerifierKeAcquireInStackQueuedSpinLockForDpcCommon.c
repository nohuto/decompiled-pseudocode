/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140B95110
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140B950F0 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8BC14 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA7ECC (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v7; // rdx
  unsigned int v8; // edx
  unsigned __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v5 = a2;
  ++dword_140F03E88;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v5, v7, v5, a4) )
    {
      VfAvlInitializeLockContext((__int64)&v14, 1);
      v10 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v14, v9, v8);
      if ( v10 )
      {
        v12 = v10[8];
        if ( v12 )
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 164));
      }
      VfAvlCleanupLockContext((__int64)&v14, v11);
    }
  }
  return guard_dispatch_icall_no_overrides(a1, a3, v5, a4);
}
