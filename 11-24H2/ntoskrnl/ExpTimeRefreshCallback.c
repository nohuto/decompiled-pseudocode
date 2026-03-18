/*
 * XREFs of ExpTimeRefreshCallback @ 0x140653710
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 */

BOOLEAN ExpTimeRefreshCallback()
{
  return KeInsertQueueDpc(&ExpTimeRefreshDpc, 0LL, 0LL);
}
