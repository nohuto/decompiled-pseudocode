/*
 * XREFs of KiAltReturnDpcRoutine @ 0x1405C7340
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem(&stru_140F0FBF8, CriticalWorkQueue);
}
