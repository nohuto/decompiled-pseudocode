/*
 * XREFs of MiDereferencePageRuns @ 0x1404473D0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiProcessLargeCoalesceCandidates @ 0x14030A3A4 (MiProcessLargeCoalesceCandidates.c)
 *     MiRebuildLargePage @ 0x1403D2BAC (MiRebuildLargePage.c)
 *     MiComputeNodeMemory @ 0x14066C790 (MiComputeNodeMemory.c)
 *     MiGetListOfPendingBadPages @ 0x140673AD0 (MiGetListOfPendingBadPages.c)
 *     MiUpdatePartitionMemory @ 0x14068B9C4 (MiUpdatePartitionMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EBB48 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1407EF7B0 (MiScanPagefileSpace.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FC61C (MiMakePartitionMemoryBlock.c)
 *     MmScrubMemory @ 0x1407FDC70 (MmScrubMemory.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 *     MmGetNodeChannelRanges @ 0x140A6BAE4 (MmGetNodeChannelRanges.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AB2D28 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
