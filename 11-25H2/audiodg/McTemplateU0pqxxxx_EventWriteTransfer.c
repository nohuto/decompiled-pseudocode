/*
 * XREFs of McTemplateU0pqxxxx_EventWriteTransfer @ 0x140085FC8
 * Callers:
 *     ?GetCurrentPadding@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140051850 (-GetCurrentPadding@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@U.c)
 *     ?GetCurrentPadding@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140083D30 (-GetCurrentPadding@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@U.c)
 *     ?GetCurrentPadding@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140087AD0 (-GetCurrentPadding@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?GetDevicePosition@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140087BB0 (-GetDevicePosition@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?GetDevicePosition@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140088150 (-GetDevicePosition@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlDa.c)
 *     ?GetDevicePosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140090150 (-GetDevicePosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDB8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0pqxxxx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-39h]
  __int64 v11; // [rsp+48h] [rbp-31h]
  int *v12; // [rsp+50h] [rbp-29h]
  __int64 v13; // [rsp+58h] [rbp-21h]
  char *v14; // [rsp+60h] [rbp-19h]
  __int64 v15; // [rsp+68h] [rbp-11h]
  char *v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  char *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  char *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  __int64 v22; // [rsp+D0h] [rbp+57h] BYREF
  int v23; // [rsp+D8h] [rbp+5Fh] BYREF

  v23 = a4;
  v22 = a3;
  v11 = 8LL;
  v10 = &v22;
  v13 = 4LL;
  v12 = &v23;
  v15 = 8LL;
  v14 = &a5;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  return McGenEventWrite_EventWriteTransfer(a1, &AudioCore_AEPosition, a3, 7u, &v9);
}
