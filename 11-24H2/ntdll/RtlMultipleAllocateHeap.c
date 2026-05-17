/*
 * XREFs of RtlMultipleAllocateHeap @ 0x180141A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlMultipleAllocateHeap(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 i; // rbx
  __int64 Heap; // rax

  for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
  {
    Heap = RtlAllocateHeap(a1, a2, a3);
    *(_QWORD *)(a5 + 8 * i) = Heap;
    if ( !Heap )
      return (unsigned int)i;
  }
  return a4;
}
