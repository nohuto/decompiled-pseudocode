/*
 * XREFs of KiForegroundTimerCallback @ 0x1405C03B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 */

BOOLEAN KiForegroundTimerCallback()
{
  return KeInsertQueueDpc(&stru_140F22468, 0LL, 0LL);
}
