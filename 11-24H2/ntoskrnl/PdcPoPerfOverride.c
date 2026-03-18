/*
 * XREFs of PdcPoPerfOverride @ 0x140A9568C
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1409025B0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140902758 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14046BC44 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14046BCB0 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404AFD1C (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

void PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  PpmEndHighPerfRequest(1);
}
