/*
 * XREFs of ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401402C0
 * Callers:
 *     NdisAllocateSharedMemory @ 0x140077CD0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x140017350 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     ndisDmaAllocationHistogramAddEntry @ 0x140140300 (ndisDmaAllocationHistogramAddEntry.c)
 */

void __fastcall NdisDmaAllocationHistogramStopwatch::~NdisDmaAllocationHistogramStopwatch(
        NdisDmaAllocationHistogramStopwatch *this)
{
  unsigned __int64 v2; // rax

  v2 = NdisStatisticalStopwatch::Stop(this);
  ndisDmaAllocationHistogramAddEntry(v2, (char *)this + 16);
  if ( *((_QWORD *)this + 1) )
    NdisStatisticalStopwatch::Stop(this);
}
