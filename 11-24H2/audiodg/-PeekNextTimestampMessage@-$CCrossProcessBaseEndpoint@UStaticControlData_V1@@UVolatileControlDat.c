/*
 * XREFs of ?PeekNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x140084928
 * Callers:
 *     ?GetCurrentPadding@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140087550 (-GetCurrentPadding@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?GetDevicePosition@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140087630 (-GetDevicePosition@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?GetInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140087710 (-GetInputDataPointer@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidQueueIndex@@YA_NII@Z @ 0x140053234 (-IsValidQueueIndex@@YA_NII@Z.c)
 *     ?GetCurrentQueue@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z @ 0x140082DE4 (-GetCurrentQueue@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCo.c)
 */

char __fastcall CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::PeekNextTimestampMessage(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  char v3; // bl
  __int64 v5; // rdi
  unsigned int v7; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-Ch] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+28h] BYREF

  v3 = 0;
  v10 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetCurrentQueue(
    a1,
    &v9,
    &v10,
    &v7,
    &v8,
    a3);
  v5 = v10;
  if ( v10 != v7 )
  {
    if ( IsValidQueueIndex(v10, v8) )
    {
      v3 = 1;
      *a2 = v9 + (v5 << 6);
    }
    else
    {
      AudCPTraceLoggingErrorHelper(
        "CCrossProcessBaseEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::Peek"
        "NextTimestampMessage");
    }
  }
  return v3;
}
