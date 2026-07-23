/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x18001CA70
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18001CC90 (RtlpHeapTrkInterceptor.c)
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlpHeapTrkTrackStack @ 0x18001C780 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkHash @ 0x18001CFC0 (RtlpHeapTrkHash.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
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
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(v7 + qword_1801CD7E0));
      v8 = qword_1801CD280 + 16LL * v5;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *Heap = v9;
      Heap[1] = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v7 + qword_1801CD7E0));
    }
    else
    {
      RtlFreeHeap(HeapHandle, 0, Heap);
    }
  }
}
