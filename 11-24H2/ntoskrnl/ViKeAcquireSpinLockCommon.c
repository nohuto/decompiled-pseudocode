/*
 * XREFs of ViKeAcquireSpinLockCommon @ 0x140B960C0
 * Callers:
 *     VerifierPortKeAcquireSpinLock @ 0x140B95E70 (VerifierPortKeAcquireSpinLock.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     VfMiscCheckKernelAddress @ 0x1404B2134 (VfMiscCheckKernelAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8BC14 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA7ECC (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA7F68 (ViKeIrqlLogAndTrimMemory.c)
 */

int __fastcall ViKeAcquireSpinLockCommon(ULONG_PTR a1, unsigned __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONG_PTR v7; // rsi
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int result; // eax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v7 = a1;
  if ( (VfRuleClasses & 0x800) != 0 )
    VfMiscCheckKernelAddress(a1, 8uLL, a2);
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F03E88;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v13 = 0LL;
      v14 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(a2, a2, a3, v8) )
      {
        VfAvlInitializeLockContext((__int64)&v13, 1);
        v9 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v13, a2, 1LL);
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
    v4 = ViKeIrqlLogAndTrimMemory(a1, a2, a3);
  }
  result = guard_dispatch_icall_no_overrides(v7, a2, a3, a4);
  *a3 = result;
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
