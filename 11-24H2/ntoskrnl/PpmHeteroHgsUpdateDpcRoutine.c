/*
 * XREFs of PpmHeteroHgsUpdateDpcRoutine @ 0x1404BE780
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void PpmHeteroHgsUpdateDpcRoutine()
{
  ExQueueWorkItem(&PpmHeteroHgsUpdateWorkItem, CustomPriorityWorkQueue|SuperCriticalWorkQueue|0x10);
}
