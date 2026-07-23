/*
 * XREFs of RtlpProcessHeapsInsert @ 0x180025F8C
 * Callers:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 * Callees:
 *     RtlpReleaseHeapListLock @ 0x18002AA6C (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x18002AAB4 (RtlpAcquireHeapListLock.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpProcessHeapsInsert(_QWORD *HeapHandle, char a2)
{
  unsigned int v2; // esi
  _QWORD *ProcessHeap; // r14
  _QWORD *Heap; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  struct _PEB *v9; // rcx

  v2 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( !ProcessHeap )
    ProcessHeap = HeapHandle;
  Heap = RtlAllocateHeap(ProcessHeap, 8u, 0x30uLL);
  v7 = Heap;
  if ( Heap )
  {
    Heap[2] = HeapHandle;
    *((_DWORD *)Heap + 6) = a2 & 3;
    Heap[5] = 0LL;
    RtlpAcquireHeapListLock();
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      HeapHandle[7] = v7;
    else
      HeapHandle[49] = v7;
    v8 = (_QWORD *)qword_1801D2F88;
    if ( *(__int64 **)qword_1801D2F88 != &RtlpProcessHeaps )
      __fastfail(3u);
    *v7 = &RtlpProcessHeaps;
    v7[1] = v8;
    *v8 = v7;
    qword_1801D2F88 = (__int64)v7;
    if ( ProcessHeap == HeapHandle )
    {
      v9 = NtCurrentPeb();
      v9->NumberOfHeaps = 1;
      *v9->ProcessHeaps = HeapHandle;
    }
    RtlpReleaseHeapListLock(0LL);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
