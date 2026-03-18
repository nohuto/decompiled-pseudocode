/*
 * XREFs of KeStallWhileFrozen @ 0x1405BDAA0
 * Callers:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 * Callees:
 *     KiCheckStall @ 0x1405BDB90 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
