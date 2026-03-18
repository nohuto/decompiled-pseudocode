/*
 * XREFs of MiReferencePageRuns @ 0x1404401F0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiProcessLargeCoalesceCandidates @ 0x14030A3A4 (MiProcessLargeCoalesceCandidates.c)
 *     MiRebuildLargePage @ 0x1403D2BAC (MiRebuildLargePage.c)
 *     MiReferencePageRuns @ 0x1404401F0 (MiReferencePageRuns.c)
 *     MiComputeNodeMemory @ 0x14066C790 (MiComputeNodeMemory.c)
 *     MiGetListOfPendingBadPages @ 0x140673AD0 (MiGetListOfPendingBadPages.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EBB48 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1407EF7B0 (MiScanPagefileSpace.c)
 *     MmScrubMemory @ 0x1407FDC70 (MmScrubMemory.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 *     MmGetNodeChannelRanges @ 0x140A6BAE4 (MmGetNodeChannelRanges.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AB2D28 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReferencePageRuns @ 0x1404401F0 (MiReferencePageRuns.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E38CC8);
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
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E38CC8);
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
