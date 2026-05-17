/*
 * XREFs of RtlLogStackBackTraceEx @ 0x18009C824
 * Callers:
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlDebugAllocateHeap @ 0x18009CC30 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800A2A3C (RtlDebugReAllocateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800A88DC (RtlpInitializeHeapSegment.c)
 *     RtlLogStackBackTrace @ 0x1800F7550 (RtlLogStackBackTrace.c)
 *     RtlDebugCreateHeap @ 0x180115F3C (RtlDebugCreateHeap.c)
 *     RtlpAllocateTags @ 0x180141E48 (RtlpAllocateTags.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x18009C890 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18009CA00 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x18009CB10 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlLogStackBackTraceEx(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int RecordedStackTraceIndex; // edi

  v1 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  v3 = RtlStdLogStackTrace(RtlpStackTraceDatabase, a1);
  v4 = v3;
  if ( v3 )
  {
    RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1, v3);
    if ( !RecordedStackTraceIndex )
      RtlStdReleaseStackTrace(v1, v4);
  }
  else
  {
    return 0;
  }
  return RecordedStackTraceIndex;
}
