/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x18003CDF0
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x18003C8D0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x18003CA10 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FB208 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHeapTrkDereferenceStack(unsigned __int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax

  v2 = 8LL * (*(_WORD *)(a1 + 18) & 0xF);
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v2 + qword_1801CE800));
  if ( (*(_DWORD *)(a1 + 20))-- != 1 )
    return RtlReleaseSRWLockExclusive(*(_QWORD *)(v2 + qword_1801CE800));
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v5 = *(_QWORD **)(a1 + 8), *v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  _InterlockedDecrement(&dword_1801CE20C);
  RtlReleaseSRWLockExclusive(*(_QWORD *)(v2 + qword_1801CE800));
  return RtlFreeHeap(qword_1801CE808, 0, a1);
}
