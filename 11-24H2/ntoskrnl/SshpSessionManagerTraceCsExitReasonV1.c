/*
 * XREFs of SshpSessionManagerTraceCsExitReasonV1 @ 0x14076731C
 * Callers:
 *     SshSessionManagerTraceCsExitReason @ 0x1407666F8 (SshSessionManagerTraceCsExitReason.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshpSessionManagerTraceCsExitReasonV1(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  int v7; // ecx
  BOOL v9; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+24h] [rbp-DCh] BYREF
  int v11; // [rsp+28h] [rbp-D8h] BYREF
  int v12; // [rsp+2Ch] [rbp-D4h] BYREF
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v22[46]; // [rsp+60h] [rbp-A0h] BYREF

  v22[1] = 4LL;
  v22[0] = a3 + 32;
  v15 = *(unsigned __int8 *)(a1 + 56);
  v22[2] = &v15;
  v4 = *(_DWORD *)a3 - 1;
  v22[3] = 4LL;
  v9 = (v4 & 0xFFFFFFFD) == 0;
  v22[5] = 4LL;
  v22[4] = &v9;
  v22[7] = 8LL;
  v22[6] = a1 + 8;
  v22[8] = 0xFFFFF780000002C4uLL;
  v22[10] = &v10;
  v22[12] = a1 + 40;
  v22[14] = a1 + 44;
  v22[16] = a1 + 48;
  v22[18] = a1 + 52;
  v5 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v22[9] = 4LL;
  v22[11] = 4LL;
  v22[13] = 4LL;
  v22[15] = 4LL;
  v22[17] = 4LL;
  v22[19] = 4LL;
  v21 = v5 / 0xA;
  v22[20] = &v21;
  v22[21] = 8LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v20 = 0LL;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
    v11 = *(_DWORD *)(a2 + 40);
    v12 = *(_DWORD *)(a2 + 44);
    v13 = *(_DWORD *)(a2 + 48);
    v7 = *(_DWORD *)(a2 + 52);
    v20 = v6 / 0xA;
    v10 = 1;
    v14 = v7;
  }
  v22[23] = 4LL;
  v22[22] = &v11;
  v22[25] = 4LL;
  v22[24] = &v12;
  v22[27] = 4LL;
  v22[26] = &v13;
  v22[28] = &v14;
  v22[30] = &v20;
  v22[32] = a3 + 57;
  v16 = *(unsigned __int8 *)(a3 + 63);
  v22[34] = &v16;
  v17 = *(unsigned __int8 *)(a3 + 64);
  v22[36] = &v17;
  v18 = *(unsigned __int8 *)(a3 + 65);
  v22[38] = &v18;
  v19 = *(unsigned __int8 *)(a3 + 66);
  v22[40] = &v19;
  v22[42] = a3 + 59;
  v22[44] = a3 + 61;
  v22[29] = 4LL;
  v22[31] = 8LL;
  v22[33] = 1LL;
  v22[35] = 4LL;
  v22[37] = 4LL;
  v22[39] = 4LL;
  v22[41] = 4LL;
  v22[43] = 1LL;
  v22[45] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_CS_EXIT_REASON_CONTROL_EVENT, 23LL, v22);
}
