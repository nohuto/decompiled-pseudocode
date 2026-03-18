/*
 * XREFs of RtlCompareMemoryUlong @ 0x1406A8740
 * Callers:
 *     RtlScrubMemory @ 0x1403F1124 (RtlScrubMemory.c)
 *     MiHashIsCommon @ 0x1404578D4 (MiHashIsCommon.c)
 *     MiDoGangAssignment @ 0x1404D4858 (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x1405DE67C (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405DF06C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405DF430 (RtlpCreateSplitBlock.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x140661528 (MiFreedUnusedPfnPagesDpc.c)
 *     MiSoloZeroHugeRange @ 0x14067A584 (MiSoloZeroHugeRange.c)
 *     MiZeroHugeRangeWorker @ 0x14067A800 (MiZeroHugeRangeWorker.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x140A23294 (IopTrackLink.c)
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
