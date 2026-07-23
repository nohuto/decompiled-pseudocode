/*
 * XREFs of SshSessionManagerTraceSystemStop @ 0x140766C3C
 * Callers:
 *     PopDiagTraceGracefulShutdown @ 0x140B61C94 (PopDiagTraceGracefulShutdown.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerTraceSystemStopV1 @ 0x1407677A8 (SshpSessionManagerTraceSystemStopV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceSystemStop(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // r8d
  int v6; // r9d
  char v8; // [rsp+30h] [rbp-21h] BYREF
  char v9; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+40h] [rbp-11h] BYREF
  int v11; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v12[8]; // [rsp+50h] [rbp-1h] BYREF

  v10 = a1;
  v11 = a2;
  v8 = a3;
  v9 = a4;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v6) = v9;
    LOBYTE(v5) = v8;
    return SshpSessionManagerTraceSystemStopV1(v10, v11, v5, v6, a5);
  }
  else
  {
    v12[5] = 1LL;
    v12[1] = 4LL;
    v12[0] = &v10;
    v12[3] = 4LL;
    v12[2] = &v11;
    v12[7] = 1LL;
    v12[4] = &v8;
    v12[6] = &v9;
    return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STOPPED_CONTROL_EVENT_V3, 4LL, v12);
  }
}
