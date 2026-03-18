/*
 * XREFs of FsRtlResetBaseMcb @ 0x1404A9030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlResetBaseMcb(PBASE_MCB Mcb)
{
  Mcb->PairCount = 0;
}
