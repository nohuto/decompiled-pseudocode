/*
 * XREFs of FsRtlResetBaseMcb @ 0x1404A43F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlResetBaseMcb(PBASE_MCB Mcb)
{
  Mcb->PairCount = 0;
}
