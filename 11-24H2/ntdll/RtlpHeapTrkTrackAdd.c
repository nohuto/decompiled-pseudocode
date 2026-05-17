/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x18003C7F0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapTrkInterceptor @ 0x18003CA10 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x18003C500 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkHash @ 0x18003CD40 (RtlpHeapTrkHash.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax

  result = RtlAllocateHeap(qword_1801CE808, 0, 0x28uLL);
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
      v8 = 8LL * (v6 & 0xF);
      RtlAcquireSRWLockExclusive(*(_QWORD *)(v8 + qword_1801CE7E8));
      v9 = qword_1801CE280 + 16LL * v6;
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
        __fastfail(3u);
      *v5 = v10;
      v5[1] = v9;
      *(_QWORD *)(v10 + 8) = v5;
      *(_QWORD *)v9 = v5;
      return RtlReleaseSRWLockExclusive(*(_QWORD *)(v8 + qword_1801CE7E8));
    }
    else
    {
      return RtlFreeHeap(qword_1801CE808, 0, (unsigned __int64)v5);
    }
  }
  return result;
}
