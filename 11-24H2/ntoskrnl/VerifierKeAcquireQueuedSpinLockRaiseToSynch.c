/*
 * XREFs of VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B952D0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8BC14 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA7ECC (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA7F68 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeAcquireQueuedSpinLockRaiseToSynch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  void *v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v5 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F03E88;
    v6 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v13 = 0LL;
      v14 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v6, a2, v6, v7) )
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
    LOBYTE(a1) = 12;
    v4 = ViKeIrqlLogAndTrimMemory(a1, a2, v6);
  }
  result = guard_dispatch_icall_no_overrides(v5, a2, a3, a4);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v4 )
      *(_WORD *)(v4 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
