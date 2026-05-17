/*
 * XREFs of RtlpLogSetLastWin32ErrorEvent @ 0x180147B54
 * Callers:
 *     RtlQueryUnbiasedInterruptTime @ 0x1800288E0 (RtlQueryUnbiasedInterruptTime.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18008EAC0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
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
