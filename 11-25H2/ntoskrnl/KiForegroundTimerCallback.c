/*
 * XREFs of KiForegroundTimerCallback @ 0x1405BED00
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 */

BOOLEAN KiForegroundTimerCallback()
{
  return KeInsertQueueDpc(&stru_140F21A88, 0LL, 0LL);
}
