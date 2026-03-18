/*
 * XREFs of KeGetCurrentNodeNumber @ 0x14040F1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT KeGetCurrentNodeNumber(void)
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
