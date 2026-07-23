/*
 * XREFs of SshSessionManagerTraceAcDcStateChange @ 0x140AC9170
 * Callers:
 *     PopDiagTraceAcDcStateChange @ 0x140AC4C34 (PopDiagTraceAcDcStateChange.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerTraceAcDcStateChangeV1 @ 0x14076706C (SshpSessionManagerTraceAcDcStateChangeV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceAcDcStateChange(int a1, int a2, int a3, char a4, char a5, char a6)
{
  char v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+38h] [rbp-31h] BYREF
  int v9; // [rsp+40h] [rbp-29h] BYREF
  int v10; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v11[10]; // [rsp+50h] [rbp-19h] BYREF

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v7 = a4;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
    return SshpSessionManagerTraceAcDcStateChangeV1(v8, v9, v10, v7, a5, a6);
  v11[1] = 4LL;
  v11[0] = &v8;
  v11[3] = 4LL;
  v11[2] = &v9;
  v11[5] = 4LL;
  v11[4] = &v10;
  v11[7] = 1LL;
  v11[6] = &v7;
  v11[8] = &a5;
  v11[9] = 1LL;
  return SshpSessionManagerSendControlEvent(
           (__int64)SLEEPSTUDY_EVT_ACDC_STATE_CHANGE_CONTROL_EVENT_V2,
           5u,
           (__int64)v11);
}
