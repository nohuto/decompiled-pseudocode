/*
 * XREFs of KeStallWhileFrozen @ 0x1405C1B10
 * Callers:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 * Callees:
 *     KiCheckStall @ 0x1405C1BF0 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
