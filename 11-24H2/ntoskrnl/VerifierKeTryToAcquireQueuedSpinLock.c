/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLock @ 0x140B97A90
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

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  void *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  v4 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F047E8;
    v5 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v5, a2, v5, v6) )
      {
        VfAvlInitializeLockContext((__int64)&v12, 1);
        v8 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v12, v7, 1LL);
        if ( v8 )
        {
          v10 = v8[8];
          if ( v10 )
            _InterlockedAdd((volatile signed __int32 *)(v10 + 164), 1u);
        }
        VfAvlCleanupLockContext((__int64)&v12, v9);
      }
    }
    LOBYTE(a1) = 2;
    v2 = ViKeIrqlLogAndTrimMemory(a1, a2, v5);
  }
  result = guard_dispatch_icall_no_overrides(v4, a2);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v2 )
      *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
