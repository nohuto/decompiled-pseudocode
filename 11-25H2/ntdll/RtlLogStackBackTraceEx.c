/*
 * XREFs of RtlLogStackBackTraceEx @ 0x1800257CC
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18003771C (RtlpInitializeHeapSegment.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlLogStackBackTrace @ 0x1800F91B0 (RtlLogStackBackTrace.c)
 *     RtlDebugCreateHeap @ 0x18011912C (RtlDebugCreateHeap.c)
 *     RtlpAllocateTags @ 0x180143538 (RtlpAllocateTags.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x180025840 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800259B0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x180025AC0 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlLogStackBackTraceEx(unsigned int a1)
{
  PRTL_SRWLOCK v1; // rbx
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
