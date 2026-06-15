/*
 * XREFs of ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA_N_J@Z @ 0x14008595C
 * Callers:
 *     ?GetCurrentPadding@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140083D30 (-GetCurrentPadding@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@U.c)
 *     ?FillRampBuffer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@AEAAXXZ @ 0x140086338 (-FillRampBuffer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V.c)
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140086450 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlD.c)
 *     ?ReleaseInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXI_K@Z @ 0x140086AA0 (-ReleaseInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileCont.c)
 *     ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140087280 (-GetOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileContro.c)
 *     ?ReleaseOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140087680 (-ReleaseOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileCo.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085ED8 (McTemplateU0p_EventWriteTransfer.c)
 */

char __fastcall CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(
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
    "CCrossProcessBaseEndpoint<struct StaticControlData_V0,struct VolatileControlData_V0,struct ControlData_V0>::IsValidOffset");
  return v2;
}
