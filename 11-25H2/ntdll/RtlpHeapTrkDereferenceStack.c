/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800907E0
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x1800902C0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FD438 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHeapTrkDereferenceStack(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v7; // r9

  v2 = 8LL * (*(_WORD *)(a1 + 18) & 0xF);
  RtlAcquireSRWLockExclusive(*(volatile signed __int32 **)(v2 + qword_1801D0838));
  if ( (*(_DWORD *)(a1 + 20))-- != 1 )
    return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(v2 + qword_1801D0838));
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v5 = *(_QWORD **)(a1 + 8), *v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  _InterlockedDecrement(&dword_1801D020C);
  RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(v2 + qword_1801D0838));
  return RtlFreeHeap(qword_1801D0840, 0, a1, v7);
}
