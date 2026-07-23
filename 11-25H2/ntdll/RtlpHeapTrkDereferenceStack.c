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

void __fastcall RtlpHeapTrkDereferenceStack(_DWORD *a1)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax

  v2 = 8LL * (*((_WORD *)a1 + 9) & 0xF);
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(v2 + qword_1801D0838));
  if ( a1[5]-- == 1 )
  {
    v4 = *(_QWORD *)a1;
    if ( *(_DWORD **)(*(_QWORD *)a1 + 8LL) != a1 || (v5 = (_QWORD *)*((_QWORD *)a1 + 1), (_DWORD *)*v5 != a1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    _InterlockedDecrement(&dword_1801D020C);
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v2 + qword_1801D0838));
    RtlFreeHeap(HeapHandle, 0, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v2 + qword_1801D0838));
  }
}
