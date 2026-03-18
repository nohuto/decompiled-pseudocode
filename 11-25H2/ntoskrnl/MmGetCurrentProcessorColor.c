/*
 * XREFs of MmGetCurrentProcessorColor @ 0x14041A410
 * Callers:
 *     MiAddSecureEntry @ 0x1408F8CA0 (MiAddSecureEntry.c)
 *     MiInsertSharedCommitNode @ 0x140900A50 (MiInsertSharedCommitNode.c)
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 *     MiAllocateReadList @ 0x1409C9A04 (MiAllocateReadList.c)
 *     MiSecureVad @ 0x1409F01EC (MiSecureVad.c)
 * Callees:
 *     <none>
 */

__int64 MmGetCurrentProcessorColor()
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
