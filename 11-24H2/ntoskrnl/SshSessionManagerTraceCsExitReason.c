/*
 * XREFs of SshSessionManagerTraceCsExitReason @ 0x1407666F8
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140AB8D74 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerTraceCsExitReasonV1 @ 0x14076731C (SshpSessionManagerTraceCsExitReasonV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceCsExitReason(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int v10; // ecx
  BOOL v11; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+24h] [rbp-DCh] BYREF
  int v13; // [rsp+28h] [rbp-D8h] BYREF
  int v14; // [rsp+2Ch] [rbp-D4h] BYREF
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v24[44]; // [rsp+60h] [rbp-A0h] BYREF

  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
    return SshpSessionManagerTraceCsExitReasonV1(a1, a2, a3);
  v24[1] = 4LL;
  v24[0] = a3 + 32;
  v17 = *(unsigned __int8 *)(a1 + 56);
  v24[2] = &v17;
  v7 = *(_DWORD *)a3 - 1;
  v24[3] = 4LL;
  v11 = (v7 & 0xFFFFFFFD) == 0;
  v8 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v24[4] = &v11;
  v24[6] = a1 + 8;
  v24[8] = 0xFFFFF780000002C4uLL;
  v24[10] = &v12;
  v24[12] = a1 + 40;
  v24[14] = a1 + 44;
  v24[16] = a1 + 48;
  v24[18] = a1 + 52;
  v24[5] = 4LL;
  v24[7] = 8LL;
  v24[9] = 4LL;
  v24[11] = 4LL;
  v24[13] = 4LL;
  v24[15] = 4LL;
  v24[17] = 4LL;
  v24[19] = 4LL;
  v23 = v8 / 0xA;
  v24[20] = &v23;
  v24[21] = 8LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v22 = 0LL;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
    v13 = *(_DWORD *)(a2 + 40);
    v14 = *(_DWORD *)(a2 + 44);
    v15 = *(_DWORD *)(a2 + 48);
    v10 = *(_DWORD *)(a2 + 52);
    v22 = v9 / 0xA;
    v12 = 1;
    v16 = v10;
  }
  v24[23] = 4LL;
  v24[22] = &v13;
  v24[25] = 4LL;
  v24[24] = &v14;
  v24[27] = 4LL;
  v24[26] = &v15;
  v24[29] = 4LL;
  v24[28] = &v16;
  v24[30] = &v22;
  v24[32] = a3 + 57;
  v18 = *(unsigned __int8 *)(a3 + 63);
  v24[34] = &v18;
  v19 = *(unsigned __int8 *)(a3 + 64);
  v24[36] = &v19;
  v20 = *(unsigned __int8 *)(a3 + 65);
  v24[38] = &v20;
  v21 = *(unsigned __int8 *)(a3 + 66);
  v24[40] = &v21;
  v24[42] = a3 + 59;
  v24[31] = 8LL;
  v24[33] = 1LL;
  v24[35] = 4LL;
  v24[37] = 4LL;
  v24[39] = 4LL;
  v24[41] = 4LL;
  v24[43] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_CS_EXIT_REASON_CONTROL_EVENT_V3, 22LL, v24);
}
