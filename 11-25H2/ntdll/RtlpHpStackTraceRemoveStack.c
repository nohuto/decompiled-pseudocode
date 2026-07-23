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

void __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, char *a2)
{
  unsigned int v2; // eax
  char *v3; // rbx
  char *SchedulerSharedDataSlot; // r9
  char *v6; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v8 = 0LL;
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
  v6 = (char *)_InterlockedCompareExchange64((volatile signed __int64 *)&RtlpHpStackTrackingContext, 17LL, 0LL);
  if ( v6 )
    RtlpAcquireSRWLockSharedContended(
      (unsigned __int64)&RtlpHpStackTrackingContext,
      (unsigned __int64)a2,
      v6,
      SchedulerSharedDataSlot);
  if ( (dword_1801D0918 & 1) != 0
    && (dword_1801D0918 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 0LL, &v8) >= 0 )
  {
    v7 = RtlpHpStackTraceAllocRemove(v8, v3);
    if ( v7 )
      RtlStackDbStackRemove(&qword_1801D0920, v7);
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
