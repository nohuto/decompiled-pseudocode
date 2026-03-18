/*
 * XREFs of MiWriteRepurposedTransitionPte @ 0x1404A6730
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiWriteRepurposedTransitionPte(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v7; // rsi
  ULONG_PTR result; // rax

  v4 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
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
