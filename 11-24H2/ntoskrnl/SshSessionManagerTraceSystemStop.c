/*
 * XREFs of SshSessionManagerTraceSystemStop @ 0x140767208
 * Callers:
 *     PopDiagTraceGracefulShutdown @ 0x140B5FC14 (PopDiagTraceGracefulShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A70190 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceSystemStop(int a1, int a2, char a3, char a4)
{
  _QWORD v5[8]; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+80h] [rbp+10h] BYREF
  int v7; // [rsp+88h] [rbp+18h] BYREF
  char v8; // [rsp+90h] [rbp+20h] BYREF
  char v9; // [rsp+98h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6 = a1;
  v5[5] = 1LL;
  v5[1] = 4LL;
  v5[0] = &v6;
  v5[3] = 4LL;
  v5[2] = &v7;
  v5[7] = 1LL;
  v5[4] = &v8;
  v5[6] = &v9;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STOPPED_CONTROL_EVENT, 4LL, v5);
}
