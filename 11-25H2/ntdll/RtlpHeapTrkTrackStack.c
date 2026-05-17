/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x18008FEF0
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x1800901E0 (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlCaptureStackBackTrace @ 0x1800900F0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpHeapTrkTrackStack()
{
  __int64 v0; // rbp
  ULONG v1; // r15d
  __int64 Heap; // rsi
  __int64 v3; // rax
  __int64 *i; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  memset_thunk_772440563353939046(BackTrace, 0, 0x200uLL);
  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap((char *)qword_1801D0840, 0, 8 * v0 + 24);
  RtlAcquireSRWLockExclusive(*(volatile signed __int32 **)(qword_1801D0838 + 8LL * (v1 & 0xF)));
  v3 = qword_1801D0288;
  for ( i = *(__int64 **)(qword_1801D0288 + 16LL * v1); ; i = (__int64 *)*i )
  {
    v5 = v3 + 16LL * v1;
    if ( i == (__int64 *)v5 )
      break;
    if ( *((_WORD *)i + 8) == (_WORD)v0 )
    {
      if ( RtlCompareMemory(BackTrace, i + 3, 8 * v0) == 8 * v0 )
      {
        ++*((_DWORD *)i + 5);
        RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801D0838 + 8LL * (v1 & 0xF)));
        if ( Heap )
          RtlFreeHeap(qword_1801D0840, 0, Heap, v7);
        return (__int64)i;
      }
      v3 = qword_1801D0288;
    }
  }
  if ( Heap )
  {
    *(_WORD *)(Heap + 16) = v0;
    *(_WORD *)(Heap + 18) = v1;
    *(_DWORD *)(Heap + 20) = 1;
    memmove((void *)(Heap + 24), BackTrace, 8 * v0);
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    *(_QWORD *)Heap = v6;
    *(_QWORD *)(Heap + 8) = v5;
    *(_QWORD *)(v6 + 8) = Heap;
    *(_QWORD *)v5 = Heap;
    _InterlockedIncrement(&dword_1801D020C);
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801D0838 + 8LL * (BackTraceHash[0] & 0xF)));
    return Heap;
  }
  else
  {
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801D0838 + 8LL * (v1 & 0xF)));
    return 0LL;
  }
}
