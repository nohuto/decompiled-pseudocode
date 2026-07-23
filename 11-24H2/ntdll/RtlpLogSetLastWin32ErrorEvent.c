/*
 * XREFs of RtlpLogSetLastWin32ErrorEvent @ 0x180144954
 * Callers:
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180087220 (RtlQueryUnbiasedInterruptTime.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18001B350 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogSetLastWin32ErrorEvent(int a1)
{
  _QWORD v2[2]; // [rsp+50h] [rbp-28h] BYREF
  int v3; // [rsp+80h] [rbp+8h] BYREF

  v3 = a1;
  v2[1] = 4LL;
  v2[0] = &v3;
  return EtwpEventWriteFull(g_hUserDiagnosticProvider, &SetLastWin32ErrorEvent, 0LL, 0, 0, 0LL, 0LL, 1, (__int64)v2);
}
