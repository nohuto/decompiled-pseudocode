/*
 * XREFs of KiAltReturnDpcRoutine @ 0x1405C55F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem(&stru_140F0F238, CriticalWorkQueue);
}
