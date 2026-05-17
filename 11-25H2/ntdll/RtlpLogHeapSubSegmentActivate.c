/*
 * XREFs of RtlpLogHeapSubSegmentActivate @ 0x180002060
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180052EB0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentActivate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]

  v7 = a1;
  memset(v6, 0, sizeof(v6));
  WORD3(v6[0]) = 4152;
  v8 = a2;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v4 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v4, 132098LL, 16LL, v6);
}
