/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x140658450
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem(&ExpDebuggerWorkItem, DelayedWorkQueue);
}
