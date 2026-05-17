/*
 * XREFs of RtlpInitializeLeakDetection @ 0x18010A7C8
 * Callers:
 *     RtlDetectHeapLeaks @ 0x18010A5F0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpInitializeMap @ 0x180042390 (RtlpInitializeMap.c)
 */

char RtlpInitializeLeakDetection()
{
  unsigned __int64 *Heap; // rax
  unsigned __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  Heap = (unsigned __int64 *)RtlAllocateHeap(RtlpLeakHeap, 0, 0x840uLL);
  RtlpProcessMemoryMap = (__int64)Heap;
  v1 = Heap;
  if ( Heap )
  {
    RtlpInitializeMap(Heap, 0LL);
    qword_1801D3E98 = (__int64)&RtlpBusyList;
    RtlpBusyList = (__int64)&RtlpBusyList;
    qword_1801D3EA8 = (__int64)&RtlpLeakList;
    RtlpLeakList = (__int64)&RtlpLeakList;
    v2 = 0x100000LL;
    do
    {
      v3 = v2;
      v2 <<= 8;
    }
    while ( v2 >= v3 );
    v1[2] = -1LL;
    *v1 = v3;
    RtlpTempBlocks = (void *)RtlAllocateHeap(RtlpLeakHeap, 0, 0x28000uLL);
    LOBYTE(Heap) = RtlpTempBlocks != 0LL;
  }
  return (char)Heap;
}
