/*
 * XREFs of CcPVCMDelayedDeleteTimerDpc @ 0x140579960
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall CcPVCMDelayedDeleteTimerDpc(__int64 a1, __int64 a2)
{
  return ExQueueWorkItemToPartition(a2 + 1512, 0, 0xFFFFFFFF, *(_QWORD *)(a2 + 8));
}
