/*
 * XREFs of MiDereferencePageRuns @ 0x1403BAB84
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiProcessLargeCoalesceCandidates @ 0x14034F1EC (MiProcessLargeCoalesceCandidates.c)
 *     MiRebuildLargePage @ 0x1403BC60C (MiRebuildLargePage.c)
 *     MiComputeNodeMemory @ 0x140660C50 (MiComputeNodeMemory.c)
 *     MiGetListOfPendingBadPages @ 0x140668070 (MiGetListOfPendingBadPages.c)
 *     MiUpdatePartitionMemory @ 0x140680134 (MiUpdatePartitionMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1407DBCA8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1407DF910 (MiScanPagefileSpace.c)
 *     MiMakePartitionMemoryBlock @ 0x1407EC78C (MiMakePartitionMemoryBlock.c)
 *     MmScrubMemory @ 0x1407EDDE0 (MmScrubMemory.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F3FBC (MiCombineAllPhysicalMemory.c)
 *     MmGetNodeChannelRanges @ 0x140A69144 (MmGetNodeChannelRanges.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AADC88 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  void *v2; // rbx
  volatile LONG *v3; // rdi
  KIRQL v4; // si
  __int64 v6; // rdx

  v2 = (void *)(a1 - 16);
  v3 = (volatile LONG *)(*(_QWORD *)(a1 - 16) + 200LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    v4 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  }
  else
  {
    v4 = ExAcquireSpinLockExclusive(v3);
  }
  if ( (*(_QWORD *)(a1 - 8))-- != 1LL )
    v2 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( v4 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = v4;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(v4);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
