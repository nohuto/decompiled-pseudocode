/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevel @ 0x140B953C0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8BC14 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA7ECC (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // r8
  unsigned int v6; // edx
  unsigned __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  ++dword_140F03E88;
  v5 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    v12 = 0LL;
    v13 = 0LL;
    if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v5, a2, v5, a4) )
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
  return guard_dispatch_icall_no_overrides(a1, a2, v5, a4);
}
