/*
 * XREFs of ?GetLatency@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEA_J@Z @ 0x140084210
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::GetLatency(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 56) )
  {
    if ( a2 )
    {
      *a2 = *(_QWORD *)(a1 + 184);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  AudCPTraceLoggingErrorHelper(
    "CCrossProcessBaseEndpoint<struct StaticControlData_V0,struct VolatileControlData_V0,struct ControlData_V0>::GetLatency");
  return v2;
}
