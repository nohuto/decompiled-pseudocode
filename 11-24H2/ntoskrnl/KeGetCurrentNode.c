/*
 * XREFs of KeGetCurrentNode @ 0x1405BA900
 * Callers:
 *     ExpPartitionCreatePool @ 0x140AB9EF0 (ExpPartitionCreatePool.c)
 * Callees:
 *     <none>
 */

__int64 KeGetCurrentNode()
{
  return KeNodeBlock[KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]];
}
