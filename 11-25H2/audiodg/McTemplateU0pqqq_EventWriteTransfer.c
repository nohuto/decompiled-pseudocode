/*
 * XREFs of McTemplateU0pqqq_EventWriteTransfer @ 0x14004D70C
 * Callers:
 *     ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140052A00 (-GetOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileContro.c)
 *     ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140087280 (-GetOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileContro.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDB8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0pqqq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-19h] BYREF
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
  return McGenEventWrite_EventWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"#", a3, 5u, &v7);
}
