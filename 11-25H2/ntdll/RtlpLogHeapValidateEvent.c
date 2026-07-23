/*
 * XREFs of RtlpLogHeapValidateEvent @ 0x18011FDCC
 * Callers:
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpLogHeapValidateEvent(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD Fields[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  memset(Fields, 0, sizeof(Fields));
  WORD3(Fields[0]) = 4141;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v1 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x402u, 8u, Fields);
}
