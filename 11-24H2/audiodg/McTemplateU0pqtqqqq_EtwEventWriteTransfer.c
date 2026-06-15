/*
 * XREFs of McTemplateU0pqtqqqq_EtwEventWriteTransfer @ 0x14006DE64
 * Callers:
 *     ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x14004B4A4 (-InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pqtqqqq_EtwEventWriteTransfer(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  _BYTE v10[16]; // [rsp+30h] [rbp-61h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-51h]
  __int64 v12; // [rsp+48h] [rbp-49h]
  int *v13; // [rsp+50h] [rbp-41h]
  __int64 v14; // [rsp+58h] [rbp-39h]
  char *v15; // [rsp+60h] [rbp-31h]
  __int64 v16; // [rsp+68h] [rbp-29h]
  char *v17; // [rsp+70h] [rbp-21h]
  __int64 v18; // [rsp+78h] [rbp-19h]
  char *v19; // [rsp+80h] [rbp-11h]
  __int64 v20; // [rsp+88h] [rbp-9h]
  char *v21; // [rsp+90h] [rbp-1h]
  __int64 v22; // [rsp+98h] [rbp+7h]
  char *v23; // [rsp+A0h] [rbp+Fh]
  __int64 v24; // [rsp+A8h] [rbp+17h]
  __int64 v25; // [rsp+E0h] [rbp+4Fh] BYREF
  int v26; // [rsp+E8h] [rbp+57h] BYREF

  v26 = a4;
  v25 = a3;
  v14 = 4LL;
  v11 = &v25;
  v16 = 4LL;
  v13 = &v26;
  v12 = 8LL;
  v15 = &a5;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(a1, (unsigned int)&AudioCore_Pump_InitRTMode, a3, 8, (__int64)v10);
}
