/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x1800A00DC
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlWakeConditionVariable @ 0x18009E790 (RtlWakeConditionVariable.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 */

char __fastcall TppPoolUpdateTrimmedWorker(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  int v3; // eax
  _QWORD *Heap; // rbx
  __int64 v5; // r9
  _QWORD *v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v1 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72));
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    goto LABEL_2;
  Heap = (_QWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 0x18uLL);
  if ( !Heap )
    goto LABEL_2;
  if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v9, 0, 0, 2) < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (__int64)Heap, v5);
LABEL_2:
    LOBYTE(v3) = RtlReleaseSRWLockExclusive(v1);
    return v3;
  }
  Heap[2] = v9;
  v6 = *(_QWORD **)(a1 + 464);
  if ( *v6 != a1 + 456 )
    __fastfail(3u);
  Heap[1] = v6;
  *Heap = a1 + 456;
  *v6 = Heap;
  *(_QWORD *)(a1 + 464) = Heap;
  v7 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v7;
  RtlReleaseSRWLockExclusive(v1);
  v3 = v7 ^ (v7 >> 11);
  if ( (v3 & 0xFFE) == 0 )
    LOBYTE(v3) = RtlWakeConditionVariable((volatile signed __int64 *)(a1 + 448));
  return v3;
}
