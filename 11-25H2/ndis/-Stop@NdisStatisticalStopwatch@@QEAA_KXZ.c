/*
 * XREFs of ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x140017350
 * Callers:
 *     NdisMFreeSharedMemory @ 0x140016B50 (NdisMFreeSharedMemory.c)
 *     ndisFreeSharedMemoryInternal @ 0x140016D00 (ndisFreeSharedMemoryInternal.c)
 *     NdisMAllocateSharedMemory @ 0x140026600 (NdisMAllocateSharedMemory.c)
 *     NdisFreeSharedMemory @ 0x14007B4A0 (NdisFreeSharedMemory.c)
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401402C0 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NdisStatisticalStopwatch::Stop(NdisStatisticalStopwatch *this)
{
  LARGE_INTEGER v2; // rax
  unsigned __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  result = (unsigned __int64)(1000000 * (v2.QuadPart - *((_QWORD *)this + 1))) / PerformanceFrequency.QuadPart;
  _InterlockedAdd64((volatile signed __int64 *)&(&ndisGlobalStatistics)[*(int *)this], result);
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
