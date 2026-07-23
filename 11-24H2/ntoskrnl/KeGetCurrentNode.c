/*
 * XREFs of KeGetCurrentNode @ 0x1405B7F30
 * Callers:
 *     ExpPartitionCreatePool @ 0x140AB4F0C (ExpPartitionCreatePool.c)
 * Callees:
 *     <none>
 */

__int64 KeGetCurrentNode()
{
  return KeNodeBlock[KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]];
}
