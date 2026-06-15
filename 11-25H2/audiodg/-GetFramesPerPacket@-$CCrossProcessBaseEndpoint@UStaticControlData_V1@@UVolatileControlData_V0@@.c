/*
 * XREFs of ?GetFramesPerPacket@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAI@Z @ 0x140084150
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetFramesPerPacket(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 56) )
  {
    if ( a2 )
    {
      *a2 = *(_DWORD *)(a1 + 112);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  AudCPTraceLoggingErrorHelper(
    "CCrossProcessBaseEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::GetFramesPerPacket");
  return v2;
}
