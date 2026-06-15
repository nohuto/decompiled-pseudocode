/*
 * XREFs of ?GetCurrentPadding@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAI@Z @ 0x140051780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentPadding@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140051850 (-GetCurrentPadding@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@U.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetCurrentPadding(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 - 368), 1, 1) )
    {
      CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetCurrentPadding(
        a1 - 416,
        &v6,
        0LL);
      *a2 = (int)((double)(int)(*(_DWORD *)(*(_QWORD *)(a1 - 328) + 188LL)
                              / (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 - 328) + 192LL))
                * (double)(int)v6
                / 10000000.0
                + 0.5);
      return v2;
    }
    v2 = -2005139437;
  }
  else
  {
    v2 = -2147467261;
  }
  AudCPTraceLoggingErrorHelper(
    "CCrossProcessBaseClientEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::GetCurrentPadding",
    0x4F0u,
    v2);
  return v2;
}
