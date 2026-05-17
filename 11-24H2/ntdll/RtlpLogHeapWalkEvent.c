/*
 * XREFs of RtlpLogHeapWalkEvent @ 0x18014C7F8
 * Callers:
 *     RtlpWalkHeap @ 0x180048BA0 (RtlpWalkHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapWalkEvent(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  memset(v3, 0, sizeof(v3));
  WORD3(v3[0]) = 4142;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v1 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v1, 1026LL, 8LL, v3);
}
