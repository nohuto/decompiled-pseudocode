/*
 * XREFs of LdrpInitializeSnapsBuffer @ 0x1800FB3AC
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 */

__int64 LdrpInitializeSnapsBuffer()
{
  void *Heap; // rax
  __int64 result; // rax

  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap )
    return 3221225495LL;
  qword_1801D2798 = Heap;
  qword_1801D2788 = (__int64)Heap;
  result = 0LL;
  LdrpSnapsUnicodeString = 0x10000000;
  LdrpSnapsUnicodeString2 = 0x10000000;
  return result;
}
