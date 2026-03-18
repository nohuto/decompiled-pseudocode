/*
 * XREFs of KeGetCurrentNode @ 0x1405B6ADC
 * Callers:
 *     ExpPartitionCreatePool @ 0x140AB5BB0 (ExpPartitionCreatePool.c)
 * Callees:
 *     <none>
 */

__int64 KeGetCurrentNode()
{
  return KeNodeBlock[KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]];
}
