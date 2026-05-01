/*
 * XREFs of CrmGlobalsStartTelemetry @ 0x18007B968
 * Callers:
 *     CrmGlobalsStart @ 0x180078A08 (CrmGlobalsStart.c)
 * Callees:
 *     CrmSystemTimeToTelemetryWindow @ 0x18006E65C (CrmSystemTimeToTelemetryWindow.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmGlobalsStartTelemetry(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+28h] [rbp-20h] BYREF

  v1 = (__int64 *)(a1 + 584);
  SystemTime = 0LL;
  result = TpAllocTimer(a1 + 584, CrmGlobalsPeriodicRundown, a1, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = *v1;
    *(_QWORD *)(a1 + 608) = MEMORY[0x7FFE0008];
    v6 = -36000000000LL;
    TpSetTimer(v4, &v6, 3600000LL, 900000LL);
    result = TpAllocTimer(a1 + 744, CrmGlobalsPeriodicTelemetry, a1, 0LL);
    if ( (int)result >= 0 )
    {
      GetSystemTime(&SystemTime);
      CrmSystemTimeToTelemetryWindow(&SystemTime, (LPSYSTEMTIME)(a1 + 752));
      v5 = *(_QWORD *)(a1 + 744);
      v6 = 0LL;
      TpSetTimer(v5, &v6, 0LL, 0LL);
      return 0LL;
    }
  }
  return result;
}
