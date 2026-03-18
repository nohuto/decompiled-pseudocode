/*
 * XREFs of CcPVCMDelayedDeleteTimerDpc @ 0x1405791C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall CcPVCMDelayedDeleteTimerDpc(__int64 a1, __int64 a2)
{
  return ExQueueWorkItemToPartition((_QWORD *)(a2 + 1512), 0, 0xFFFFFFFF, *(_QWORD *)(a2 + 8));
}
