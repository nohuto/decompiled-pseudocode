/*
 * XREFs of xHalTscSynchronization @ 0x14057F740
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x1404B9764 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
