/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140A9CFC8
 * Callers:
 *     MiFreePhysicalPageChain @ 0x140266C0C (MiFreePhysicalPageChain.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 1392), -a2);
}
