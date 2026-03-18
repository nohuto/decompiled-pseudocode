/*
 * XREFs of HalDmaFreeCrashDumpRegistersEx @ 0x1404AEA00
 * Callers:
 *     DifHalDmaFreeCrashDumpRegistersExWrapper @ 0x1406224C0 (DifHalDmaFreeCrashDumpRegistersExWrapper.c)
 * Callees:
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404AEA24 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     HalpDmaExtractFromVerifierShadowAdapter @ 0x1404AEAC4 (HalpDmaExtractFromVerifierShadowAdapter.c)
 */

__int64 HalDmaFreeCrashDumpRegistersEx()
{
  __int64 v0; // rax
  __int64 v1; // rdx

  v0 = HalpDmaExtractFromVerifierShadowAdapter();
  return HalpDmaFreeCrashdumpRegistersInternal(v0, v1, 1LL);
}
