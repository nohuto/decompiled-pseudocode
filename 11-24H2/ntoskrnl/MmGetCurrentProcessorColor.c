/*
 * XREFs of MmGetCurrentProcessorColor @ 0x140417C80
 * Callers:
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 *     MiAllocateReadList @ 0x140955F80 (MiAllocateReadList.c)
 *     MiAddSecureEntry @ 0x1409C3F30 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x1409EA8FC (MiSecureVad.c)
 * Callees:
 *     <none>
 */

__int64 MmGetCurrentProcessorColor()
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
