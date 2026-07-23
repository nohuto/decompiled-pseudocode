/*
 * XREFs of RtlpInitializeLeakDetection @ 0x180022D68
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180022B90 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlpInitializeMap @ 0x180022B44 (RtlpInitializeMap.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
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
    qword_1801D2E98 = (__int64)&RtlpBusyList;
    RtlpBusyList = (__int64)&RtlpBusyList;
    qword_1801D2EA8 = (__int64)&RtlpLeakList;
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
    RtlpTempBlocks = RtlAllocateHeap(RtlpLeakHeap, 0, 0x28000uLL);
    LOBYTE(Heap) = RtlpTempBlocks != 0LL;
  }
  return (char)Heap;
}
