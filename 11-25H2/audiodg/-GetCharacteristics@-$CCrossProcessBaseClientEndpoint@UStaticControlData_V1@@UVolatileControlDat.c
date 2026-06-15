/*
 * XREFs of ?GetCharacteristics@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAK@Z @ 0x140083CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetCharacteristics(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *a2 = 1;
  }
  else
  {
    v2 = -2147467261;
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessBaseClientEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::"
      "GetCharacteristics");
  }
  return v2;
}
