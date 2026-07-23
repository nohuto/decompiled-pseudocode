/*
 * XREFs of SshSessionManagerTraceCsEnterReason @ 0x1407665B4
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140AB8D74 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerTraceCsEnterReasonV1 @ 0x1407671E4 (SshpSessionManagerTraceCsEnterReasonV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceCsEnterReason(unsigned __int8 *a1)
{
  int v3; // [rsp+20h] [rbp-79h] BYREF
  int v4; // [rsp+24h] [rbp-75h] BYREF
  int v5; // [rsp+28h] [rbp-71h] BYREF
  int v6; // [rsp+2Ch] [rbp-6Dh] BYREF
  _QWORD v7[22]; // [rsp+30h] [rbp-69h] BYREF

  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
    return SshpSessionManagerTraceCsEnterReasonV1(a1);
  v7[1] = 4LL;
  v7[0] = a1 + 32;
  v7[3] = 4LL;
  v7[2] = a1 + 40;
  v7[5] = 4LL;
  v7[4] = a1 + 48;
  v7[7] = 8LL;
  v7[6] = a1 + 8;
  v7[8] = 0xFFFFF780000002C4uLL;
  v7[10] = a1 + 57;
  v3 = a1[63];
  v7[12] = &v3;
  v4 = a1[64];
  v7[14] = &v4;
  v5 = a1[65];
  v7[16] = &v5;
  v6 = a1[66];
  v7[18] = &v6;
  v7[20] = a1 + 59;
  v7[9] = 4LL;
  v7[11] = 1LL;
  v7[13] = 4LL;
  v7[15] = 4LL;
  v7[17] = 4LL;
  v7[19] = 4LL;
  v7[21] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_CS_ENTER_REASON_CONTROL_EVENT_V3, 11LL, v7);
}
