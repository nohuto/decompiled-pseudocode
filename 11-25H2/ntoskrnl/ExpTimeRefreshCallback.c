/*
 * XREFs of ExpTimeRefreshCallback @ 0x140647810
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 */

BOOLEAN ExpTimeRefreshCallback()
{
  return KeInsertQueueDpc(&ExpTimeRefreshDpc, 0LL, 0LL);
}
