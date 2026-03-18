/*
 * XREFs of PpmHeteroHgsUpdateDpcRoutine @ 0x1404BFE50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void PpmHeteroHgsUpdateDpcRoutine()
{
  ExQueueWorkItem(&PpmHeteroHgsUpdateWorkItem, CustomPriorityWorkQueue|SuperCriticalWorkQueue|0x10);
}
