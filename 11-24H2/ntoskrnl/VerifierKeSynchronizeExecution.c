/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x140B959B0
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

__int64 __fastcall VerifierKeSynchronizeExecution(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  void *v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F03E8C;
    v7 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v15 = 0LL;
      v16 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v7, a2, v7, v8) )
      {
        VfAvlInitializeLockContext((__int64)&v15, 1);
        v11 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v15, v10, v9);
        if ( v11 )
        {
          v13 = v11[8];
          if ( v13 )
            _InterlockedIncrement((volatile signed __int32 *)(v13 + 168));
        }
        VfAvlCleanupLockContext((__int64)&v15, v12);
      }
    }
    LOBYTE(a1) = *(_BYTE *)(v6 + 93);
    ViKeIrqlLogAndTrimMemory(a1, a2, v7);
  }
  return guard_dispatch_icall_no_overrides(v6, a2, a3, a4);
}
