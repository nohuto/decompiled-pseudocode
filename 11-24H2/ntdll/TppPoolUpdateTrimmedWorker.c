/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x1800F3DB4
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlWakeConditionVariable @ 0x18004AAB0 (RtlWakeConditionVariable.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 */

char __fastcall TppPoolUpdateTrimmedWorker(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  volatile signed __int64 *v3; // rsi
  int v5; // eax
  _QWORD *Heap; // rbx
  _QWORD *v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72), a2, a3);
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    goto LABEL_2;
  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 0x18uLL);
  if ( !Heap )
    goto LABEL_2;
  if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v10, 0, 0, 2) < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (unsigned __int64)Heap);
LABEL_2:
    LOBYTE(v5) = RtlReleaseSRWLockExclusive(v3);
    return v5;
  }
  Heap[2] = v10;
  v7 = *(_QWORD **)(a1 + 464);
  if ( *v7 != a1 + 456 )
    __fastfail(3u);
  Heap[1] = v7;
  *Heap = a1 + 456;
  *v7 = Heap;
  *(_QWORD *)(a1 + 464) = Heap;
  v8 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v8;
  RtlReleaseSRWLockExclusive(v3);
  v5 = v8 ^ (v8 >> 11);
  if ( (v5 & 0xFFE) == 0 )
    LOBYTE(v5) = RtlWakeConditionVariable((volatile signed __int64 *)(a1 + 448));
  return v5;
}
