/*
 * XREFs of LdrpInitializeSnapsBuffer @ 0x1800FD5DC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

__int64 LdrpInitializeSnapsBuffer()
{
  PVOID Heap; // rax
  __int64 result; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap )
    return 3221225495LL;
  qword_1801D47E8 = Heap;
  qword_1801D47D8 = (__int64)Heap;
  result = 0LL;
  LdrpSnapsUnicodeString = 0x10000000;
  LdrpSnapsUnicodeString2 = 0x10000000;
  return result;
}
