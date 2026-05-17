/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800F1458
 * Callers:
 *     RtlTestAndPublishWnfStateData @ 0x1800F12F0 (RtlTestAndPublishWnfStateData.c)
 *     RtlPublishWnfStateData @ 0x1800F13B0 (RtlPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpWnfETWEventPublish(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  _OWORD v4[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]
  __int64 v6; // [rsp+50h] [rbp-18h]

  memset(v4, 0, sizeof(v4));
  WORD3(v4[0]) = 3363;
  v5 = a1;
  v6 = a2;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v2 = 2147353486LL;
  return NtTraceEvent(*(unsigned __int8 *)v2, 132098LL, 12LL, v4);
}
