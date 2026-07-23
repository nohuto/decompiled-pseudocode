/*
 * XREFs of MiWriteRepurposedTransitionPte @ 0x1404A19F0
 * Callers:
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 */

ULONG_PTR __fastcall MiWriteRepurposedTransitionPte(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  ULONG_PTR result; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v13 = a2;
  v7 = v4 + (v5 & 0xFFF);
  if ( MiPteInShadowRange(v7) )
  {
    v11 = MiSanitizeShadowPxe(v8, (__int64)&v13, v9);
    a2 = v13;
    v6 = v11;
  }
  *(_QWORD *)v7 = a2;
  if ( v6 )
    MiWritePteShadow(v7, a2, v9, v10);
  result = CLFS_LSN_NULL_EXT;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  return result;
}
