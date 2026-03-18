/*
 * XREFs of KiAltReturnDpcRoutine @ 0x1405C9C10
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem(&stru_140F0F938, CriticalWorkQueue);
}
