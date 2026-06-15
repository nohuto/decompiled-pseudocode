/*
 * XREFs of ?GetFrequency@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K@Z @ 0x1400830B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetFrequency(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 - 376), 1, 1) )
    {
      *a2 = *(unsigned int *)(*(_QWORD *)(a1 - 336) + 188LL);
      return v2;
    }
    v2 = -2005139437;
  }
  else
  {
    v2 = -2147467261;
  }
  AudCPTraceLoggingErrorHelper(
    "CCrossProcessBaseClientEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::GetFrequency");
  return v2;
}
