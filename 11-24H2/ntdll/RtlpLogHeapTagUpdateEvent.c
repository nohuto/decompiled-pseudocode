/*
 * XREFs of RtlpLogHeapTagUpdateEvent @ 0x18014C6DC
 * Callers:
 *     RtlpHpSetHeapTag @ 0x18011F0BC (RtlpHpSetHeapTag.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapTagUpdateEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _OWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]

  v5 = a1;
  memset(v4, 0, sizeof(v4));
  WORD3(v4[0]) = 4155;
  v6 = a2;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v2 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v2, 1025LL, 16LL, v4);
}
