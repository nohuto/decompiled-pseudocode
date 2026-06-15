/*
 * XREFs of McTemplateU0pqx_EventWriteTransfer @ 0x1400855D8
 * Callers:
 *     ?Reset@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140084FE0 (-Reset@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@.c)
 *     ?Start@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085250 (-Start@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@.c)
 *     ?Stop@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085360 (-Stop@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@.c)
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008F2A0 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008F3C0 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008F4C0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDE8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0pqx_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+48h] [rbp-1h] BYREF
  __int64 *v7; // [rsp+58h] [rbp+Fh]
  __int64 v8; // [rsp+60h] [rbp+17h]
  int *v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  __int64 *v11; // [rsp+78h] [rbp+2Fh]
  __int64 v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+B8h] [rbp+6Fh] BYREF
  int v14; // [rsp+C0h] [rbp+77h] BYREF

  v14 = a4;
  v13 = a3;
  v8 = 8LL;
  v5 = 0LL;
  v7 = &v13;
  v9 = &v14;
  v11 = &v5;
  v10 = 4LL;
  v12 = 8LL;
  return McGenEventWrite_EventWriteTransfer(a1, &AudioCore_AEControl, a3, 4u, &v6);
}
