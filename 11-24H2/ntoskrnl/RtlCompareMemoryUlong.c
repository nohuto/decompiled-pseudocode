/*
 * XREFs of RtlCompareMemoryUlong @ 0x1406B3A10
 * Callers:
 *     MiDoGangAssignment @ 0x1403A8984 (MiDoGangAssignment.c)
 *     RtlScrubMemory @ 0x1403F5B00 (RtlScrubMemory.c)
 *     MiHashIsCommon @ 0x1404582A4 (MiHashIsCommon.c)
 *     RtlpAllocateHeap @ 0x1405EA9AC (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405EB39C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405EB760 (RtlpCreateSplitBlock.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x14066D068 (MiFreedUnusedPfnPagesDpc.c)
 *     MiSoloZeroHugeRange @ 0x140685E14 (MiSoloZeroHugeRange.c)
 *     MiZeroHugeRangeWorker @ 0x140686090 (MiZeroHugeRangeWorker.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x140A2C8D4 (IopTrackLink.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
