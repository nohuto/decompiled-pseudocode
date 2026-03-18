/*
 * XREFs of MiWriteRepurposedTransitionPte @ 0x14036D574
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 */

ULONG_PTR __fastcall MiWriteRepurposedTransitionPte(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v7; // rsi
  ULONG_PTR result; // rax

  v4 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v7 = v4 + (v5 & 0xFFF);
  if ( MiPteInShadowRange(v7) )
    v6 = MiSanitizeShadowPxe();
  *(_QWORD *)v7 = a2;
  if ( v6 )
    MiWritePteShadow();
  result = CLFS_LSN_NULL_EXT;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  return result;
}
