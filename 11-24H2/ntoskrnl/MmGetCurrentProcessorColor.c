/*
 * XREFs of MmGetCurrentProcessorColor @ 0x140407A30
 * Callers:
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiAllocateReadList @ 0x140939930 (MiAllocateReadList.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 * Callees:
 *     <none>
 */

__int64 MmGetCurrentProcessorColor()
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
