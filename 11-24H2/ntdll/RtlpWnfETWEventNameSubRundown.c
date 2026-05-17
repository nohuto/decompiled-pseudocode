/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800997F8
 * Callers:
 *     RtlpDereferenceWnfNameSubscription @ 0x1800996E0 (RtlpDereferenceWnfNameSubscription.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpWnfETWEventNameSubRundown(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  _OWORD v4[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v4, 0, 32);
  WORD3(v4[0]) = 3364;
  v4[2] = __PAIR128__(a2, a1);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v2 = 2147353486LL;
  return NtTraceEvent(*(unsigned __int8 *)v2, 132098LL, 16LL, v4);
}
