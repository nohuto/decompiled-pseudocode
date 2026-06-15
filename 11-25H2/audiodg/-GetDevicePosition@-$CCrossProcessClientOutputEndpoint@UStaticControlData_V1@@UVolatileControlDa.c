/*
 * XREFs of ?GetDevicePosition@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140088150
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x140085FC8 (McTemplateU0pqxxxx_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetDevicePosition(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  int v6; // ebp
  int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // r10
  int v10; // r11d
  double LowPart; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm1_8
  __int64 v14; // rcx
  __int64 v15; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  PerformanceCount.QuadPart = 0LL;
  v4 = (__int64 *)a2;
  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 352) + 164LL), 0, 0);
    v6 = 0;
    v7 = 3;
    while ( 1 )
    {
      v8 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 352) + 160LL), 0, 0);
      a2 = 5 * v8;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 - 352) + 40 * v8 + 32);
      v10 = *(_DWORD *)(*(_QWORD *)(a1 - 352) + 40 * v8 + 68);
      if ( (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 352) + 160LL), 0, 0) )
        break;
      if ( !--v7 )
      {
        v6 = -2005139393;
        *v4 = *(_QWORD *)(a1 - 232);
        goto LABEL_12;
      }
    }
    if ( v10 )
    {
      *v4 = v9;
    }
    else
    {
      v6 = -2005139375;
      *v4 = *(_QWORD *)(a1 - 232);
    }
  }
  else
  {
    v6 = -2147467261;
  }
LABEL_12:
  if ( a3 && !*a3 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v12 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v13 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v13 = (double)(int)g_u64QPCFrequency;
    *a3 = (unsigned int)(int)(v12 / v13);
  }
  if ( (byte_1400C45C1 & 4) != 0 )
  {
    v14 = 0LL;
    if ( a3 )
      v14 = *a3;
    LOBYTE(v15) = 0;
    if ( v4 )
      v15 = *v4;
    McTemplateU0pqxxxx_EventWriteTransfer(v14, a2, a1 - 440, 7, 0, v15, 0, v14);
  }
  if ( v4 )
    *(_QWORD *)(a1 - 232) = *v4;
  if ( v6 < 0 )
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessClientOutputEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>"
      "::GetDevicePosition");
  return (unsigned int)v6;
}
