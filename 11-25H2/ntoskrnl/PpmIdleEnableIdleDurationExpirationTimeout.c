/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x1404A830C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A2061C (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
