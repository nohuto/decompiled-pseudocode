/*
 * XREFs of PipDmgInitPhaseTwo @ 0x140725B3C
 * Callers:
 *     PiDmaGuardInitialize @ 0x1405A5580 (PiDmaGuardInitialize.c)
 * Callees:
 *     PipDmgInitReadGroupPolicy @ 0x14071B5D8 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x140725C64 (PipDmgReevaluateQueue.c)
 *     PnpTraceDmaGuardSystemPolicy @ 0x140726480 (PnpTraceDmaGuardSystemPolicy.c)
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
