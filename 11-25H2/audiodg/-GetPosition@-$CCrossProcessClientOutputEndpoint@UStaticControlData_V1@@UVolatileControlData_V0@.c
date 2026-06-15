/*
 * XREFs of ?GetPosition@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140088360
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140086084 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?GetPosition_NonOffload@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAJPEA_K0@Z @ 0x1400885C8 (-GetPosition_NonOffload@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileCont.c)
 *     ?GetPosition_Offload@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAJPEA_K0@Z @ 0x140088948 (-GetPosition_Offload@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControl.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetPosition(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  int v6; // ebp
  bool v7; // zf
  __int64 v8; // r14
  __int64 v9; // rcx
  int Position_NonOffload; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  double v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm0_8
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    v7 = (*(_BYTE *)(a1 - 240) & 1) == 0;
    v8 = a1 - 432;
    v9 = a1 - 432;
    if ( v7 )
      Position_NonOffload = CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetPosition_NonOffload(v9);
    else
      Position_NonOffload = CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetPosition_Offload(v9);
    v6 = Position_NonOffload;
    if ( Position_NonOffload >= 0 )
    {
      v11 = *(_QWORD *)(a1 - 232);
      if ( *a2 < v11 )
      {
        if ( (byte_1400C45C1 & 4) != 0 )
          McTemplateU0pqxxxxffff_EventWriteTransfer(
            *(unsigned int *)(a1 - 328),
            (v11 - *a2) % *(unsigned int *)(a1 - 328),
            v8,
            8,
            *a2,
            v11,
            (v11 - *a2) / *(unsigned int *)(a1 - 328),
            0,
            0,
            0,
            0,
            0);
        *a2 = *(_QWORD *)(a1 - 232);
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( a3 && !*a3 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v13 = PerformanceCount.QuadPart < 0
        ? (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
        + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
        : (double)(int)PerformanceCount.LowPart;
    v14 = v13 * 10000000.0;
    v15 = (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL
        ? (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        : (double)(int)g_u64QPCFrequency;
    v16 = v14 / v15;
    v17 = (unsigned int)(int)v16;
    *a3 = v17;
    if ( (byte_1400C45C1 & 4) != 0 )
    {
      if ( a2 )
        v18 = *a2;
      else
        LOBYTE(v18) = 0;
      McTemplateU0pqxxxxffff_EventWriteTransfer(v17, v12, a1 - 432, 6, v18, (int)v16, 0, 0, 0, 0, 0, 0);
    }
  }
  if ( a2 )
  {
    v19 = *(_QWORD *)(a1 - 232);
    if ( *a2 < v19 && (byte_1400C45C1 & 4) != 0 )
      McTemplateU0pqxxxxffff_EventWriteTransfer(*a2, v19, a1 - 432, 8, *a2, v19, *(_DWORD *)(a1 - 328), 0, 0, 0, 0, 0);
    *(_QWORD *)(a1 - 232) = *a2;
  }
  if ( v6 < 0 )
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessClientOutputEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::GetPosition");
  return (unsigned int)v6;
}
