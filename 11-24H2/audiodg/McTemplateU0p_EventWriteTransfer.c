/*
 * XREFs of McTemplateU0p_EventWriteTransfer @ 0x140085574
 * Callers:
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140050DD0 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_N_J@Z @ 0x140051C98 (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCont.c)
 *     ?ReleaseInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXI_K@Z @ 0x140051D00 (-ReleaseInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileCont.c)
 *     ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x1400529D0 (-GetOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileContro.c)
 *     ?ReleaseOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140052D70 (-ReleaseOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileCo.c)
 *     ?IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z @ 0x140084818 (-IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA_N_J@Z @ 0x14008486C (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCont.c)
 *     ?GetInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140087710 (-GetInputDataPointer@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 *     ?ReleaseInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXI_K@Z @ 0x140087A80 (-ReleaseInputDataPointer@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileCont.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDE8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0p_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 8;
  return McGenEventWrite_EventWriteTransfer(a1, &AudioCore_AESecurity, a3, 2u, &v4);
}
