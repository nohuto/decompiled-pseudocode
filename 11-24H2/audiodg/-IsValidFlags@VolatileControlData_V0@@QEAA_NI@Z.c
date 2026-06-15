/*
 * XREFs of ?IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z @ 0x140084818
 * Callers:
 *     ?IsValidControlData@ControlData_V1@@QEAAJXZ @ 0x140084760 (-IsValidControlData@ControlData_V1@@QEAAJXZ.c)
 *     ?Reset@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140084FE0 (-Reset@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@.c)
 *     ?Start@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085250 (-Start@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@.c)
 *     ?Stop@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085360 (-Stop@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@.c)
 *     ?GetInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140087710 (-GetInputDataPointer@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 *     ?ReleaseInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXI_K@Z @ 0x140087A80 (-ReleaseInputDataPointer@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileCont.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085574 (McTemplateU0p_EventWriteTransfer.c)
 */

char __fastcall VolatileControlData_V0::IsValidFlags(VolatileControlData_V0 *this, __int64 a2)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( (a2 & 0xFFFFFFF8) == 0 )
    return 1;
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0p_EventWriteTransfer(this, a2, this);
  _InterlockedAnd(&v4, 0xFFFFFFFE);
  v2 = 0;
  AudCPTraceLoggingErrorHelper("VolatileControlData_V0::IsValidFlags");
  return v2;
}
