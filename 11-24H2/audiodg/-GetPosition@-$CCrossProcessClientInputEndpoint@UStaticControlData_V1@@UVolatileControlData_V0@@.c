/*
 * XREFs of ?GetPosition@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140087930
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140081D48 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140085720 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetPosition(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  int v6; // ebx
  signed __int64 v7; // rdx
  char v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rax

  v6 = 0;
  if ( a2 )
  {
    *a2 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 344) + 16LL), 0LL, 0LL);
    if ( a3 )
    {
      *a3 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 344) + 56LL), 0LL, 0LL);
      if ( *(_BYTE *)(a1 - 16) )
      {
        if ( (unsigned int)ConvertHostPerfCounterToPerfCounter(a3) )
          *(_BYTE *)(a1 - 16) = 0;
      }
    }
    *(_QWORD *)(a1 - 232) = *a2;
  }
  else
  {
    v6 = -2147467261;
  }
  if ( (byte_1400C4541 & 4) != 0 )
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 344) + 24LL), 0LL, 0LL);
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 344) + 16LL), 0LL, 0LL);
    v9 = 0LL;
    if ( a3 )
      v9 = *a3;
    LOBYTE(v10) = 0;
    if ( a2 )
      v10 = *a2;
    McTemplateU0pqxxxxffff_EventWriteTransfer(v9, v7, 0LL, 6, v10, v9, v8, v7, 0, 0, 0, 0);
  }
  if ( v6 < 0 )
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessClientInputEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::GetPosition");
  return (unsigned int)v6;
}
