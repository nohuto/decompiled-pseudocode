/*
 * XREFs of RtlpProcessHeapsInsert @ 0x180037A58
 * Callers:
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpProcessHeapsInsert(_QWORD *HeapHandle, char a2)
{
  unsigned int v2; // esi
  _QWORD *ProcessHeap; // r14
  _QWORD *Heap; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  struct _PEB *v9; // rdx

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
    RtlEnterCriticalSection(&RtlpProcessHeapsLock);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      HeapHandle[7] = v7;
    else
      HeapHandle[49] = v7;
    v8 = (_QWORD *)qword_1801D5FE8;
    if ( *(__int64 **)qword_1801D5FE8 != &RtlpProcessHeaps )
      __fastfail(3u);
    *v7 = &RtlpProcessHeaps;
    v7[1] = v8;
    *v8 = v7;
    qword_1801D5FE8 = (__int64)v7;
    if ( ProcessHeap == HeapHandle )
    {
      v9 = NtCurrentPeb();
      v9->NumberOfHeaps = 1;
      *v9->ProcessHeaps = HeapHandle;
    }
    RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
