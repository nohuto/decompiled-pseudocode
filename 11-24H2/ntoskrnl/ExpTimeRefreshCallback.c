/*
 * XREFs of ExpTimeRefreshCallback @ 0x140651E70
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 */

BOOLEAN ExpTimeRefreshCallback()
{
  return KeInsertQueueDpc(&ExpTimeRefreshDpc, 0LL, 0LL);
}
