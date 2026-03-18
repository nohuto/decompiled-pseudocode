/*
 * XREFs of PdcPoPerfOverride @ 0x140A2BB1C
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A2BBE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14046D2B4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14046D320 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404AEC3C (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

void PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  PpmEndHighPerfRequest(1);
}
