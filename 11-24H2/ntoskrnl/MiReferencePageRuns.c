/*
 * XREFs of MiReferencePageRuns @ 0x1403F8A50
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiProcessLargeCoalesceCandidates @ 0x140314284 (MiProcessLargeCoalesceCandidates.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     MiComputeNodeMemory @ 0x14066D960 (MiComputeNodeMemory.c)
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EC118 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1407EFD80 (MiScanPagefileSpace.c)
 *     MmScrubMemory @ 0x1407FE3E0 (MmScrubMemory.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 *     MmGetNodeChannelRanges @ 0x140A65044 (MmGetNodeChannelRanges.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AADC98 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E38E08);
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
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E38E08);
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
