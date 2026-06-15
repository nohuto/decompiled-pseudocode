/*
 * XREFs of ?GetDevicePosition@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140087630
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?PeekNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x140084928 (-PeekNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x140085664 (McTemplateU0pqxxxx_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetDevicePosition(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  char v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    v11 = 0LL;
    v10 = 0;
    if ( !CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::PeekNextTimestampMessage(
            (_QWORD *)(a1 - 440),
            &v11,
            &v10) )
    {
      *a2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 16), 0LL, 0LL);
      if ( a3 )
        *a3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 40), 0LL, 0LL);
      if ( (byte_1400C4541 & 4) != 0 )
      {
        LOBYTE(v8) = 0;
        if ( a3 )
          v8 = *a3;
        McTemplateU0pqxxxx_EventWriteTransfer(*a2, v7, 0LL, 7, 0, *a2, 0, v8);
      }
    }
    *(_QWORD *)(a1 - 232) = *a2;
  }
  else
  {
    v3 = -2147467261;
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessClientInputEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>:"
      ":GetDevicePosition");
  }
  return v3;
}
