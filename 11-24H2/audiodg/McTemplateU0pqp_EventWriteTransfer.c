/*
 * XREFs of McTemplateU0pqp_EventWriteTransfer @ 0x14000F474
 * Callers:
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x140031A3C (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 *     ?ProcessingComplete@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXXZ @ 0x140053130 (-ProcessingComplete@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlDat.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDE8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pqp_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE v6[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v8 = 8LL;
  v7 = &v13;
  v12 = 8LL;
  v9 = &v14;
  v10 = 4LL;
  v11 = &a5;
  return McGenEventWrite_EventWriteTransfer(a1, &AudioCore_CrossProcess_SignalPumpPassCompletion, a3, 4LL, v6);
}
