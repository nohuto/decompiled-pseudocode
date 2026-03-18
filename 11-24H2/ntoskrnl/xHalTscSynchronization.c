/*
 * XREFs of xHalTscSynchronization @ 0x1405823C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x1404BE5A4 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
