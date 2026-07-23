/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B96FE8
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x140B96F10 (VerifierKeAcquireInStackQueuedSpinLock.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8DC14 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA9ECC (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA9F68 (ViKeIrqlLogAndTrimMemory.c)
 */

int __fastcall VerifierKeAcquireInStackQueuedSpinLockCommon(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int result; // eax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v5 = a2;
  v6 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F047E8;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v13 = 0LL;
      v14 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v5, a2, v5, v7) )
      {
        VfAvlInitializeLockContext((__int64)&v13, 1);
        v9 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v13, v8, 1LL);
        if ( v9 )
        {
          v11 = v9[8];
          if ( v11 )
            _InterlockedAdd((volatile signed __int32 *)(v11 + 164), 1u);
        }
        VfAvlCleanupLockContext((__int64)&v13, v10);
      }
    }
    LOBYTE(a1) = 2;
    v3 = ViKeIrqlLogAndTrimMemory(a1, a2, v5);
  }
  result = guard_dispatch_icall_no_overrides(v6, a3);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v3 )
    {
      result = KeGetPcr()->Prcb.Number;
      *(_WORD *)(v3 + 10) = result;
    }
  }
  return result;
}
