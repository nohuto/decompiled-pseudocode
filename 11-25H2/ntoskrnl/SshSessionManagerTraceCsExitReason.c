/*
 * XREFs of SshSessionManagerTraceCsExitReason @ 0x140756E28
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140AB9C04 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline @ 0x1405CF8A4 (Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SshSessionManagerTraceCsExitReasonV1 @ 0x1407570F8 (SshSessionManagerTraceCsExitReasonV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A6DF80 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceCsExitReason(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int v10; // ecx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v12; // rcx
  BOOL v13; // [rsp+20h] [rbp-E0h] BYREF
  int v14; // [rsp+24h] [rbp-DCh] BYREF
  int v15; // [rsp+28h] [rbp-D8h] BYREF
  int v16; // [rsp+2Ch] [rbp-D4h] BYREF
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v26[42]; // [rsp+60h] [rbp-A0h] BYREF

  if ( (unsigned int)Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline() )
    return SshSessionManagerTraceCsExitReasonV1(a1, a2, a3);
  v26[1] = 4LL;
  v26[0] = a3 + 32;
  v19 = *(unsigned __int8 *)(a1 + 56);
  v26[2] = &v19;
  v7 = *(_DWORD *)a3 - 1;
  v26[3] = 4LL;
  v13 = (v7 & 0xFFFFFFFD) == 0;
  v8 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v26[4] = &v13;
  v26[6] = a1 + 8;
  v26[8] = 0xFFFFF780000002C4uLL;
  v26[10] = &v14;
  v26[12] = a1 + 40;
  v26[14] = a1 + 44;
  v26[16] = a1 + 48;
  v26[18] = a1 + 52;
  v26[5] = 4LL;
  v26[7] = 8LL;
  v26[9] = 4LL;
  v26[11] = 4LL;
  v26[13] = 4LL;
  v26[15] = 4LL;
  v26[17] = 4LL;
  v26[19] = 4LL;
  v25 = v8 / 0xA;
  v26[20] = &v25;
  v26[21] = 8LL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v24 = 0LL;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
    v15 = *(_DWORD *)(a2 + 40);
    v16 = *(_DWORD *)(a2 + 44);
    v17 = *(_DWORD *)(a2 + 48);
    v10 = *(_DWORD *)(a2 + 52);
    v24 = v9 / 0xA;
    v14 = 1;
    v18 = v10;
  }
  v26[23] = 4LL;
  v26[22] = &v15;
  v26[24] = &v16;
  v26[26] = &v17;
  v26[28] = &v18;
  v26[30] = &v24;
  v26[32] = a3 + 57;
  v20 = *(unsigned __int8 *)(a3 + 61);
  v26[34] = &v20;
  v21 = *(unsigned __int8 *)(a3 + 62);
  v26[36] = &v21;
  v22 = *(unsigned __int8 *)(a3 + 63);
  v26[38] = &v22;
  v23 = *(unsigned __int8 *)(a3 + 64);
  v26[40] = &v23;
  v26[25] = 4LL;
  v26[27] = 4LL;
  v26[29] = 4LL;
  v26[31] = 8LL;
  v26[33] = 1LL;
  v26[35] = 4LL;
  v26[37] = 4LL;
  v26[39] = 4LL;
  v26[41] = 4LL;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline();
  v12 = SLEEPSTUDY_EVT_CS_EXIT_REASON_CONTROL_EVENT_V2;
  if ( !IsEnabledDeviceUsageNoInline )
    v12 = SLEEPSTUDY_EVT_CS_EXIT_REASON_CONTROL_EVENT;
  return SshpSessionManagerSendControlEvent(v12, 21LL, v26);
}
