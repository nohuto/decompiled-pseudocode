/*
 * XREFs of McTemplateU0pq_EventWriteTransfer @ 0x14000F578
 * Callers:
 *     ?GetInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140087C90 (-GetInputDataPointer@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDB8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v5[6]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v6; // [rsp+90h] [rbp+18h] BYREF

  v6 = a3;
  v5[3] = 8LL;
  v5[2] = &v6;
  v4 = 0;
  v5[4] = &v4;
  v5[5] = 4LL;
  return McGenEventWrite_EventWriteTransfer(0LL, a2, a3, 3LL, v5);
}
