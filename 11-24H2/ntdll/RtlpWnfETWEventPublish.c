/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800EC0D8
 * Callers:
 *     RtlTestAndPublishWnfStateData @ 0x1800EBF70 (RtlTestAndPublishWnfStateData.c)
 *     RtlPublishWnfStateData @ 0x1800EC030 (RtlPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventPublish(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  _OWORD Fields[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]
  __int64 v6; // [rsp+50h] [rbp-18h]

  memset(Fields, 0, sizeof(Fields));
  WORD3(Fields[0]) = 3363;
  v5 = a1;
  v6 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v2 = 2147353486LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0xCu, Fields);
}
