/*
 * XREFs of ?IsValidQueueIndex@@YA_NII@Z @ 0x140053234
 * Callers:
 *     ?AddTimestampMessage@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x1400523D0 (-AddTimestampMessage@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControl.c)
 *     ?GetCurrentQueue@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z @ 0x140082DE4 (-GetCurrentQueue@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCo.c)
 *     ?GetNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x1400831C0 (-GetNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 *     ?IsValidControlData@ControlData_V1@@QEAAJXZ @ 0x140084760 (-IsValidControlData@ControlData_V1@@QEAAJXZ.c)
 *     ?PeekNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x140084928 (-PeekNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?AddAudioHistoryPacket@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@_K@Z @ 0x1400866C0 (-AddAudioHistoryPacket@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileContr.c)
 *     ?AddTimestampMessage@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x1400868C0 (-AddTimestampMessage@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControl.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall IsValidQueueIndex(unsigned int a1, unsigned int a2)
{
  char v2; // bl

  if ( a1 < a2 )
    return 1;
  v2 = 0;
  AudCPTraceLoggingErrorHelper("IsValidQueueIndex");
  return v2;
}
