/*
 * XREFs of MiReferencePageRuns @ 0x1403BAA70
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiProcessLargeCoalesceCandidates @ 0x14034F1EC (MiProcessLargeCoalesceCandidates.c)
 *     MiReferencePageRuns @ 0x1403BAA70 (MiReferencePageRuns.c)
 *     MiRebuildLargePage @ 0x1403BC60C (MiRebuildLargePage.c)
 *     MiComputeNodeMemory @ 0x140660C50 (MiComputeNodeMemory.c)
 *     MiGetListOfPendingBadPages @ 0x140668070 (MiGetListOfPendingBadPages.c)
 *     MmIdentifyPhysicalMemory @ 0x1407DBCA8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1407DF910 (MiScanPagefileSpace.c)
 *     MmScrubMemory @ 0x1407EDDE0 (MmScrubMemory.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F3FBC (MiCombineAllPhysicalMemory.c)
 *     MmGetNodeChannelRanges @ 0x140A69144 (MmGetNodeChannelRanges.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AADC88 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferencePageRuns @ 0x1403BAA70 (MiReferencePageRuns.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  volatile LONG *v4; // rcx
  KIRQL v5; // si
  _QWORD *v6; // rbx

  v4 = (volatile LONG *)(a1 + 200);
  if ( KeGetCurrentIrql() == 2 )
  {
    v5 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v4);
  }
  else
  {
    v5 = ExAcquireSpinLockExclusive(v4);
  }
  if ( (ULONG *)a1 != &MiSystemPartition )
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E38A88);
  if ( a2 )
  {
    v6 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v6 = MmPhysicalMemoryBlock;
    if ( (ULONG *)a1 != &MiSystemPartition )
      v6 = *(_QWORD **)(a1 + 80);
  }
  if ( v6 )
    ++*(v6 - 1);
  if ( (ULONG *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E38A88);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( v5 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    __writecr8(v5);
  }
  if ( v6 )
    return (__int64)v6;
  else
    return MiReferencePageRuns(&MiSystemPartition, a2);
}
