/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x18008FD48
 * Callers:
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014B774 (RtlpHpPerHeapStackTraceCleanup.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapDestroy(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v5; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpStackTrackingContext, a2, a3);
  if ( (dword_1801CE8C8 & 1) != 0 && (dword_1801CE8C8 & 2) != 0 )
  {
    v5 = 112LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v5 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v5, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
