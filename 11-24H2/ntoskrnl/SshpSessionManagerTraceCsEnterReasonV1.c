/*
 * XREFs of SshpSessionManagerTraceCsEnterReasonV1 @ 0x1407671E4
 * Callers:
 *     SshSessionManagerTraceCsEnterReason @ 0x1407665B4 (SshSessionManagerTraceCsEnterReason.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshpSessionManagerTraceCsEnterReasonV1(unsigned __int8 *a1)
{
  int v2; // [rsp+20h] [rbp-89h] BYREF
  int v3; // [rsp+24h] [rbp-85h] BYREF
  int v4; // [rsp+28h] [rbp-81h] BYREF
  int v5; // [rsp+2Ch] [rbp-7Dh] BYREF
  _QWORD v6[24]; // [rsp+30h] [rbp-79h] BYREF

  v6[1] = 4LL;
  v6[0] = a1 + 32;
  v6[3] = 4LL;
  v6[2] = a1 + 40;
  v6[5] = 4LL;
  v6[4] = a1 + 48;
  v6[6] = a1 + 8;
  v6[8] = 0xFFFFF780000002C4uLL;
  v6[10] = a1 + 57;
  v2 = a1[63];
  v6[12] = &v2;
  v3 = a1[64];
  v6[14] = &v3;
  v4 = a1[65];
  v6[16] = &v4;
  v5 = a1[66];
  v6[18] = &v5;
  v6[20] = a1 + 59;
  v6[22] = a1 + 61;
  v6[7] = 8LL;
  v6[9] = 4LL;
  v6[11] = 1LL;
  v6[13] = 4LL;
  v6[15] = 4LL;
  v6[17] = 4LL;
  v6[19] = 4LL;
  v6[21] = 1LL;
  v6[23] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_CS_ENTER_REASON_CONTROL_EVENT, 12LL, v6);
}
