/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140A9C348
 * Callers:
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiFreePhysicalPageChain @ 0x1404B3ADC (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 1392), -a2);
}
