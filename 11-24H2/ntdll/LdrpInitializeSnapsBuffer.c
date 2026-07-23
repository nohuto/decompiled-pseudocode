/*
 * XREFs of LdrpInitializeSnapsBuffer @ 0x1800F62DC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 */

__int64 LdrpInitializeSnapsBuffer()
{
  PVOID Heap; // rax
  __int64 result; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap )
    return 3221225495LL;
  qword_1801D1798 = Heap;
  qword_1801D1788 = (__int64)Heap;
  result = 0LL;
  LdrpSnapsUnicodeString = 0x10000000;
  LdrpSnapsUnicodeString2 = 0x10000000;
  return result;
}
