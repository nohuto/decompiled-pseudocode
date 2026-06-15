/*
 * XREFs of McTemplateU0pqqq_EtwEventWriteTransfer @ 0x14006DE38
 * Callers:
 *     ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x14004BBB4 (-GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pqqq_EtwEventWriteTransfer(int a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  _BYTE v7[16]; // [rsp+38h] [rbp-19h] BYREF
  __int64 *v8; // [rsp+48h] [rbp-9h]
  __int64 v9; // [rsp+50h] [rbp-1h]
  int *v10; // [rsp+58h] [rbp+7h]
  __int64 v11; // [rsp+60h] [rbp+Fh]
  char *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  char *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  __int64 v16; // [rsp+B8h] [rbp+67h] BYREF
  int v17; // [rsp+C0h] [rbp+6Fh] BYREF

  v17 = a4;
  v16 = a3;
  v9 = 8LL;
  v8 = &v16;
  v11 = 4LL;
  v10 = &v17;
  v13 = 4LL;
  v12 = &a5;
  v14 = &a6;
  v15 = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(a1, (unsigned int)&AudioCore_Pump_GetAPOWorkqueue, a3, 5, (__int64)v7);
}
