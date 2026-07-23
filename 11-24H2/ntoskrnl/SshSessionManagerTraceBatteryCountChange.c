/*
 * XREFs of SshSessionManagerTraceBatteryCountChange @ 0x1407664DC
 * Callers:
 *     PopDiagTraceBatteryCountChange @ 0x140753CA0 (PopDiagTraceBatteryCountChange.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerTraceBatteryCountChangeV1 @ 0x140767128 (SshpSessionManagerTraceBatteryCountChangeV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceBatteryCountChange(int a1, int a2, int a3, char a4, char a5, char a6)
{
  int v6; // r9d
  char v8; // [rsp+30h] [rbp-39h] BYREF
  int v9; // [rsp+38h] [rbp-31h] BYREF
  int v10; // [rsp+40h] [rbp-29h] BYREF
  int v11; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v12[10]; // [rsp+50h] [rbp-19h] BYREF

  v9 = a1;
  v10 = a2;
  v11 = a3;
  v8 = a4;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v6) = v8;
    return SshpSessionManagerTraceBatteryCountChangeV1(v9, v10, v11, v6, a5, a6);
  }
  else
  {
    v12[1] = 4LL;
    v12[0] = &v9;
    v12[3] = 4LL;
    v12[2] = &v10;
    v12[5] = 4LL;
    v12[4] = &v11;
    v12[7] = 1LL;
    v12[6] = &v8;
    v12[8] = &a5;
    v12[9] = 1LL;
    return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_BATTERY_COUNT_CHANGE_CONTROL_EVENT_V2, 5LL, v12);
  }
}
