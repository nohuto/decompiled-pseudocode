/*
 * XREFs of ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401352C0
 * Callers:
 *     NdisAllocateSharedMemory @ 0x14005CCE0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x14004A120 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     ndisDmaAllocationHistogramAddEntry @ 0x140135300 (ndisDmaAllocationHistogramAddEntry.c)
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
