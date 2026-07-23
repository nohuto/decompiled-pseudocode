/*
 * XREFs of PdcPoPerfOverride @ 0x140A91EBC
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A6DE90 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1404648C4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x140464930 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404AA70C (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

void PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  PpmEndHighPerfRequest(1);
}
