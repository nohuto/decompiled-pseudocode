/*
 * XREFs of KiForegroundTimerCallback @ 0x1405C2DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 */

BOOLEAN KiForegroundTimerCallback()
{
  return KeInsertQueueDpc(&stru_140F22228, 0LL, 0LL);
}
