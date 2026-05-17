/*
 * XREFs of RtlStdLogStackTrace @ 0x18009C890
 * Callers:
 *     RtlInitializeResource @ 0x18009A370 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18009C824 (RtlLogStackBackTraceEx.c)
 *     RtlLogStackTrace @ 0x1800FB5E0 (RtlLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18003C700 (RtlCaptureStackBackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800EF820 (RtlpStdLogCapturedStackTrace.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlStdLogStackTrace(__int64 a1, int a2)
{
  _BYTE v5[14]; // [rsp+20h] [rbp-118h] BYREF
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG BackTraceHash; // [rsp+148h] [rbp+10h] BYREF

  memset_thunk_772440563353939046(v5, 0, 0x110uLL);
  BackTraceHash = 0;
  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &BackTraceHash) )
    return RtlpStdLogCapturedStackTrace(a1, v5, BackTraceHash);
  else
    return 0LL;
}
