/*
 * XREFs of HalDmaFreeCrashDumpRegistersEx @ 0x1404A9310
 * Callers:
 *     DifHalDmaFreeCrashDumpRegistersExWrapper @ 0x140620A80 (DifHalDmaFreeCrashDumpRegistersExWrapper.c)
 * Callees:
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404A9334 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     HalpDmaExtractFromVerifierShadowAdapter @ 0x1404A93D4 (HalpDmaExtractFromVerifierShadowAdapter.c)
 */

__int64 HalDmaFreeCrashDumpRegistersEx()
{
  __int64 v0; // rax
  __int64 v1; // rdx

  v0 = HalpDmaExtractFromVerifierShadowAdapter();
  return HalpDmaFreeCrashdumpRegistersInternal(v0, v1, 1LL);
}
