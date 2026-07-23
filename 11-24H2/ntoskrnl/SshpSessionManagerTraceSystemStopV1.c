/*
 * XREFs of SshpSessionManagerTraceSystemStopV1 @ 0x1407677A8
 * Callers:
 *     SshSessionManagerTraceSystemStop @ 0x140766C3C (SshSessionManagerTraceSystemStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshpSessionManagerTraceSystemStopV1(int a1, int a2, char a3, char a4, char a5)
{
  _QWORD v6[10]; // [rsp+20h] [rbp-60h] BYREF
  int v7; // [rsp+90h] [rbp+10h] BYREF
  int v8; // [rsp+98h] [rbp+18h] BYREF
  char v9; // [rsp+A0h] [rbp+20h] BYREF
  char v10; // [rsp+A8h] [rbp+28h] BYREF

  v10 = a4;
  v9 = a3;
  v8 = a2;
  v7 = a1;
  v6[1] = 4LL;
  v6[0] = &v7;
  v6[3] = 4LL;
  v6[2] = &v8;
  v6[5] = 1LL;
  v6[4] = &v9;
  v6[7] = 1LL;
  v6[6] = &v10;
  v6[8] = &a5;
  v6[9] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STOPPED_CONTROL_EVENT, 5LL, v6);
}
