/*
 * XREFs of CcPVCMDelayedDeleteTimerDpc @ 0x14057C4D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall CcPVCMDelayedDeleteTimerDpc(__int64 a1, __int64 a2)
{
  return ExQueueWorkItemToPartition(a2 + 1512, 0, 0xFFFFFFFF, *(_QWORD *)(a2 + 8));
}
