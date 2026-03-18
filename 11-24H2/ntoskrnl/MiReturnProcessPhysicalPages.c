/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140AA1C38
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiFreePhysicalPageChain @ 0x1403CCA3C (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 1392), -a2);
}
