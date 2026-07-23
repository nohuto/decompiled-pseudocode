/*
 * XREFs of KeStallWhileFrozen @ 0x1405BF0E0
 * Callers:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 * Callees:
 *     KiCheckStall @ 0x1405BF1C0 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
