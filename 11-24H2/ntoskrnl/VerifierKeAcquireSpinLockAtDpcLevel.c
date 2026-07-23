/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevel @ 0x140B973C0
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

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  ++dword_140F047E8;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v3, a2, v3, v4) )
    {
      VfAvlInitializeLockContext((__int64)&v11, 1);
      v7 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v11, v6, v5);
      if ( v7 )
      {
        v9 = v7[8];
        if ( v9 )
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 164));
      }
      VfAvlCleanupLockContext((__int64)&v11, v8);
    }
  }
  return guard_dispatch_icall_no_overrides(a1, a2);
}
