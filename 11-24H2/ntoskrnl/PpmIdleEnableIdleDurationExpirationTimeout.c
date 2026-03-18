/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x1404A934C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A2A138 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
