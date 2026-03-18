/*
 * XREFs of RtlStdLogStackTrace @ 0x14048A9EC
 * Callers:
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     ExInitializeFastResource2 @ 0x140490B40 (ExInitializeFastResource2.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405DC634 (RtlpStdLogCapturedStackTrace.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlStdLogStackTrace(PKSPIN_LOCK SpinLock, int a2)
{
  _BYTE v5[14]; // [rsp+20h] [rbp-118h] BYREF
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG BackTraceHash; // [rsp+148h] [rbp+10h] BYREF

  memset_0(v5, 0, 0x110uLL);
  BackTraceHash = 0;
  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &BackTraceHash) )
    return RtlpStdLogCapturedStackTrace(SpinLock);
  else
    return 0LL;
}
