/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B94FE8
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x140B94F10 (VerifierKeAcquireInStackQueuedSpinLock.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8BC14 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA7ECC (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA7F68 (ViKeIrqlLogAndTrimMemory.c)
 */

int __fastcall VerifierKeAcquireInStackQueuedSpinLockCommon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int result; // eax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F03E88;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v14 = 0LL;
      v15 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v6, a2, v6, v8) )
      {
        VfAvlInitializeLockContext((__int64)&v14, 1);
        v10 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v14, v9, 1LL);
        if ( v10 )
        {
          v12 = v10[8];
          if ( v12 )
            _InterlockedAdd((volatile signed __int32 *)(v12 + 164), 1u);
        }
        VfAvlCleanupLockContext((__int64)&v14, v11);
      }
    }
    LOBYTE(a1) = 2;
    v4 = ViKeIrqlLogAndTrimMemory(a1, a2, v6);
  }
  result = guard_dispatch_icall_no_overrides(v7, a3, v6, a4);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v4 )
    {
      result = KeGetPcr()->Prcb.Number;
      *(_WORD *)(v4 + 10) = result;
    }
  }
  return result;
}
