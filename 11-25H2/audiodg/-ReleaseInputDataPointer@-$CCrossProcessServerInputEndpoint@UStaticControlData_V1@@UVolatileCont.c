/*
 * XREFs of ?ReleaseInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXI_K@Z @ 0x140051D30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085ED8 (McTemplateU0p_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::ReleaseInputDataPointer(
        __int64 a1,
        __int64 a2)
{
  int v2; // esi
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  signed __int64 v8; // rax
  signed __int64 v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rtt

  v2 = a2;
  v3 = a1 - 480;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(a1, a2, a1 - 480, 7, a2, 0, 0);
  v5 = *(unsigned int *)(*(_QWORD *)(a1 - 392) + 164LL);
  if ( v2 && ((v5 & 1) != 0 || (*(_BYTE *)(a1 - 288) & 1) != 0) )
  {
    v6 = *(_QWORD *)(a1 - 392);
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), 0LL, 0LL);
    if ( v7 >= 0 )
    {
      v5 = *(unsigned int *)(a1 + 16);
      a2 = (unsigned int)(*(_DWORD *)(a1 - 376) * v2 - *(_DWORD *)(a1 + 80));
      if ( (unsigned int)v5 <= 1 )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), 0LL, 0LL);
        v5 = (unsigned int)a2;
        a2 = *(_QWORD *)(a1 - 392);
        v9 = v5 + v7;
        if ( v9 > v8 )
          v9 = v8;
        v11 = *(_QWORD *)(a2 + 24);
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v9, v11);
        if ( v11 != v10 )
        {
          do
          {
            v5 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v9, v10);
          }
          while ( v10 != v5 );
        }
      }
    }
    else
    {
      if ( (byte_1400C45C1 & 4) != 0 )
        McTemplateU0p_EventWriteTransfer(v6, a2, v3);
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v3 + 88) + 164LL), 0xFFFFFFFE);
      AudCPTraceLoggingErrorHelper(
        "CCrossProcessBaseEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::IsValidOffset",
        0x6F0u,
        -2147467259);
    }
  }
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v5, a2, a1 - 480, 8, v2, *(_DWORD *)(a1 + 16), 0);
  *(_DWORD *)(a1 + 16) = 3;
}
