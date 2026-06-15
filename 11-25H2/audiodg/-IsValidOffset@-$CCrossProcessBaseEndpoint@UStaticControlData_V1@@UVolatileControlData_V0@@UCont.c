/*
 * XREFs of ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_N_J@Z @ 0x140051CC8
 * Callers:
 *     ?FillRampBuffer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@AEAAXXZ @ 0x140051438 (-FillRampBuffer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V.c)
 *     ?GetOutputDataPointer@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140051550 (-GetOutputDataPointer@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileContro.c)
 *     ?GetCurrentPadding@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140051850 (-GetCurrentPadding@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@U.c)
 *     ?ReleaseOutputDataPointer@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140051A20 (-ReleaseOutputDataPointer@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileCo.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085ED8 (McTemplateU0p_EventWriteTransfer.c)
 */

char __fastcall CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::IsValidOffset(
        __int64 a1,
        __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( a2 >= 0 )
    return 1;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0p_EventWriteTransfer(a1, a2, a1);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 164LL), 0xFFFFFFFE);
  AudCPTraceLoggingErrorHelper(
    "CCrossProcessBaseEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::IsValidOffset",
    0x6F0u,
    -2147467259);
  return v2;
}
