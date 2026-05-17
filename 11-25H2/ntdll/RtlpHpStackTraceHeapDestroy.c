/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x1800B90C8
 * Callers:
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014CD24 (RtlpHpPerHeapStackTraceCleanup.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapDestroy(__int64 a1)
{
  __int64 v3; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpStackTrackingContext);
  if ( (dword_1801D0918 & 1) != 0 && (dword_1801D0918 & 2) != 0 )
  {
    v3 = 112LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v3 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v3, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
