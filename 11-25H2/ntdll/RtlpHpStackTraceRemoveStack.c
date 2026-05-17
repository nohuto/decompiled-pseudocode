/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x1800DF5A0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011E180 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpAcquireSRWLockSharedContended @ 0x18007A040 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlStackDbStackRemove @ 0x18011FEA8 (RtlStackDbStackRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180120780 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014D194 (RtlpHpStackTraceAllocRemove.c)
 */

__int64 __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, char *a2)
{
  unsigned int v2; // eax
  char *v3; // rbx
  char *SchedulerSharedDataSlot; // r9
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v9 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    while ( v2 < 8 )
    {
      a2 = &SchedulerSharedDataSlot[8 * v2];
      if ( !*(_QWORD *)a2 )
      {
        if ( a2 )
          *(_QWORD *)a2 = &RtlpHpStackTrackingContext;
        break;
      }
      ++v2;
    }
  }
  v6 = _InterlockedCompareExchange64(&RtlpHpStackTrackingContext, 17LL, 0LL);
  if ( v6 )
    RtlpAcquireSRWLockSharedContended(
      (unsigned __int64)&RtlpHpStackTrackingContext,
      (unsigned __int64)a2,
      v6,
      (unsigned __int64)SchedulerSharedDataSlot);
  if ( (dword_1801D0918 & 1) != 0
    && (dword_1801D0918 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 0LL, &v9) >= 0 )
  {
    v8 = RtlpHpStackTraceAllocRemove(v9, v3);
    if ( v8 )
      RtlStackDbStackRemove(&qword_1801D0920, v8);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
