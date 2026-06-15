/*
 * XREFs of ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140083AE8
 * Callers:
 *     ?GetInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140087C90 (-GetInputDataPointer@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 *     ?GetPosition@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140087EB0 (-GetPosition@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@.c)
 *     ?GetPosition_NonOffload@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAJPEA_K0@Z @ 0x1400885C8 (-GetPosition_NonOffload@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileCont.c)
 *     ?GetPosition_Offload@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAJPEA_K0@Z @ 0x140088948 (-GetPosition_Offload@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControl.c)
 *     ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x14008E400 (-GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertHostPerfCounterToPerfCounter(unsigned __int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  result = RtlConvertHostPerfCounterToPerfCounter(v3, -1LL, &v3);
  if ( !(_DWORD)result )
    *a1 = v3;
  return result;
}
