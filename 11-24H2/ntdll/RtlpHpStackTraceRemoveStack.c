/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x1800E28F0
 * Callers:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x18002B6C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011C8F0 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlStackDbStackRemove @ 0x18011E5D8 (RtlStackDbStackRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011EEB0 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014BBE4 (RtlpHpStackTraceAllocRemove.c)
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
  if ( (dword_1801CE8C8 & 1) != 0
    && (dword_1801CE8C8 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 0LL, &v9) >= 0 )
  {
    v8 = RtlpHpStackTraceAllocRemove(v9, v3);
    if ( v8 )
      RtlStackDbStackRemove(&qword_1801CE8D0, v8);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
