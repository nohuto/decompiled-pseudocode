/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x1800901E0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x18008FEF0 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkHash @ 0x180090730 (RtlpHeapTrkHash.c)
 */

void __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  _QWORD *Heap; // rbx
  unsigned int v5; // ebp
  __int64 *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax

  Heap = RtlAllocateHeap(HeapHandle, 0, 0x28uLL);
  if ( Heap )
  {
    v5 = RtlpHeapTrkHash(a2);
    Heap[2] = a1;
    Heap[3] = a2;
    v6 = RtlpHeapTrkTrackStack();
    Heap[4] = v6;
    if ( v6 )
    {
      v7 = 8LL * (v5 & 0xF);
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(v7 + qword_1801D0820));
      v8 = qword_1801D0280 + 16LL * v5;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *Heap = v9;
      Heap[1] = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v7 + qword_1801D0820));
    }
    else
    {
      RtlFreeHeap(HeapHandle, 0, Heap);
    }
  }
}
