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

__int64 __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax

  result = RtlAllocateHeap((char *)qword_1801D0840, 0, 0x28uLL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = RtlpHeapTrkHash(a2);
    v5[2] = a1;
    v5[3] = a2;
    v7 = RtlpHeapTrkTrackStack();
    v5[4] = v7;
    if ( v7 )
    {
      v9 = 8LL * (v6 & 0xF);
      RtlAcquireSRWLockExclusive(*(volatile signed __int32 **)(v9 + qword_1801D0820));
      v10 = qword_1801D0280 + 16LL * v6;
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        __fastfail(3u);
      *v5 = v11;
      v5[1] = v10;
      *(_QWORD *)(v11 + 8) = v5;
      *(_QWORD *)v10 = v5;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(v9 + qword_1801D0820));
    }
    else
    {
      return RtlFreeHeap(qword_1801D0840, 0, (__int64)v5, v8);
    }
  }
  return result;
}
