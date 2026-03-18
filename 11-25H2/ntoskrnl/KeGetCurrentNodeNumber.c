/*
 * XREFs of KeGetCurrentNodeNumber @ 0x14041A390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT KeGetCurrentNodeNumber(void)
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
