/*
 * XREFs of PipDmgInitPhaseTwo @ 0x140731D4C
 * Callers:
 *     PiDmaGuardInitialize @ 0x1405A8D90 (PiDmaGuardInitialize.c)
 * Callees:
 *     PipDmgInitReadGroupPolicy @ 0x140727558 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x140731E74 (PipDmgReevaluateQueue.c)
 *     PnpTraceDmaGuardSystemPolicy @ 0x140732690 (PnpTraceDmaGuardSystemPolicy.c)
 */

__int64 PipDmgInitPhaseTwo()
{
  int GroupPolicy; // eax

  if ( PipDmaGuardPolicy )
  {
    GroupPolicy = PipDmgInitReadGroupPolicy();
    if ( !GroupPolicy )
      GroupPolicy = 2;
    PipDmaGuardPolicy = GroupPolicy;
    PipDmgReevaluateQueue();
  }
  PnpTraceDmaGuardSystemPolicy();
  return 0LL;
}
