/*
 * XREFs of PipDmgInitPhaseTwo @ 0x14072FD5C
 * Callers:
 *     PiDmaGuardInitialize @ 0x1405A5E7C (PiDmaGuardInitialize.c)
 * Callees:
 *     PipDmgInitReadGroupPolicy @ 0x1407250E8 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x14072FE84 (PipDmgReevaluateQueue.c)
 *     PnpTraceDmaGuardSystemPolicy @ 0x1407306A0 (PnpTraceDmaGuardSystemPolicy.c)
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
