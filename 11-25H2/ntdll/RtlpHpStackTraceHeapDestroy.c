/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x1800B90C8
 * Callers:
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014CD24 (RtlpHpPerHeapStackTraceCleanup.c)
 */

void __fastcall RtlpHpStackTraceHeapDestroy(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801D0918 & 1) != 0 && (dword_1801D0918 & 2) != 0 )
  {
    v2 = 112LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v2 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v2, 0LL, 0LL);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
