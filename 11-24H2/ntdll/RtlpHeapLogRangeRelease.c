/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x18006B624
 * Callers:
 *     RtlpHpSegSegmentFree @ 0x180026FA4 (RtlpHpSegSegmentFree.c)
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800284AC (RtlpDestroyHeapSegment.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLargeReAlloc @ 0x18009E474 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F5BB4 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _OWORD Fields[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = a3;
  v6 = a1;
  memset(Fields, 0, sizeof(Fields));
  v7 = a2;
  WORD3(Fields[0]) = 615;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v3 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x20402u, 0x18u, Fields);
}
