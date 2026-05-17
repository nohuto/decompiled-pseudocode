/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x180004E68
 * Callers:
 *     RtlpDereferenceWnfNameSubscription @ 0x180004D50 (RtlpDereferenceWnfNameSubscription.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpWnfETWEventNameSubRundown(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 v7; // [rsp+20h] [rbp-48h]
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  LODWORD(v7) = a1;
  v4 = HIDWORD(a1);
  HIDWORD(v7) = v4;
  memset(v8, 0, 32);
  WORD3(v8[0]) = 3364;
  v8[2] = __PAIR128__(a2, v7);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v4, a2, a3, a4) )
    v5 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v5 = 2147353486LL;
  return NtTraceEvent(*(unsigned __int8 *)v5, 132098LL, 16LL, v8);
}
