/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x180055A44
 * Callers:
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x18008F96C (RtlpDestroyHeapSegment.c)
 *     RtlpHpSegSegmentFree @ 0x180090324 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180093AA4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FAE54 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHeapLogRangeRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = a3;
  v6 = a1;
  memset(v5, 0, sizeof(v5));
  v7 = a2;
  WORD3(v5[0]) = 615;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v3 = 2147353480LL;
  return NtTraceEvent(*(unsigned __int8 *)v3, 132098LL, 24LL, v5);
}
