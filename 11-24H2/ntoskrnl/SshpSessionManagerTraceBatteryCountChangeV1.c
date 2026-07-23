/*
 * XREFs of SshpSessionManagerTraceBatteryCountChangeV1 @ 0x140767128
 * Callers:
 *     SshSessionManagerTraceBatteryCountChange @ 0x1407664DC (SshSessionManagerTraceBatteryCountChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshpSessionManagerTraceBatteryCountChangeV1(int a1, int a2, int a3, char a4, char a5, char a6)
{
  _QWORD v7[12]; // [rsp+28h] [rbp-29h] BYREF
  int v8; // [rsp+A8h] [rbp+57h] BYREF
  int v9; // [rsp+B0h] [rbp+5Fh] BYREF
  int v10; // [rsp+B8h] [rbp+67h] BYREF
  char v11; // [rsp+C0h] [rbp+6Fh] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  v8 = a1;
  v7[1] = 4LL;
  v7[0] = &v8;
  v7[3] = 4LL;
  v7[2] = &v9;
  v7[5] = 4LL;
  v7[4] = &v10;
  v7[7] = 1LL;
  v7[6] = &v11;
  v7[8] = &a5;
  v7[10] = &a6;
  v7[9] = 1LL;
  v7[11] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_BATTERY_COUNT_CHANGE_CONTROL_EVENT, 6LL, v7);
}
