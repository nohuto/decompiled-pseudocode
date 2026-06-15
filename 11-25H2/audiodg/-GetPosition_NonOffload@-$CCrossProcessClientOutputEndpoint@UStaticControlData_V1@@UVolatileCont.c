/*
 * XREFs of ?GetPosition_NonOffload@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAJPEA_K0@Z @ 0x1400885C8
 * Callers:
 *     ?GetPosition@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140088360 (-GetPosition@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140083AE8 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140086084 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetPosition_NonOffload(
        __int64 a1,
        __int64 *a2,
        signed __int64 *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  char v8; // al
  __int64 v9; // rdx
  signed __int64 v10; // rax
  __int64 v11; // r13
  int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // r9
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  float v17; // xmm6_4
  int v18; // edx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r15
  double LowPart; // xmm0_8
  double v22; // xmm2_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  signed __int64 v25; // rbp
  int v26; // ebp
  double v27; // xmm3_8
  float v28; // xmm0_4
  __int64 v29; // rdx
  double v30; // xmm0_8
  double v31; // xmm1_8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  double v34; // xmm0_8
  unsigned __int64 v35; // rdx
  float v36; // xmm1_4
  signed __int64 v37; // rax
  float v38; // xmm2_4
  __int64 v40; // [rsp+60h] [rbp-58h]
  unsigned __int64 v41; // [rsp+68h] [rbp-50h]
  unsigned __int64 v42; // [rsp+C0h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+D8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 88);
  v4 = 0;
  PerformanceCount.QuadPart = 0LL;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v9 = *(_QWORD *)(a1 + 88);
  if ( (v8 & 4) == 0 )
  {
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 152), 0LL, 0LL);
LABEL_3:
    *a2 = v10;
    return v4;
  }
  if ( (v8 & 2) == 0 )
  {
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), 0LL, 0LL);
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v9 + 112);
  v12 = 3;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL);
  v40 = v13;
  while ( 1 )
  {
    v14 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), 0, 0);
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 40 * v14 + 32);
    v41 = v15;
    v16 = *(_QWORD *)(a1 + 88);
    v42 = *(_QWORD *)(v16 + 40 * v14 + 56);
    v17 = *(float *)(v16 + 40 * v14 + 64);
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40 * v14 + 68);
    if ( (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), 0, 0) )
      break;
    if ( !--v12 )
    {
      v4 = -2005139393;
LABEL_12:
      *a2 = *(_QWORD *)(a1 + 200);
      AudCPTraceLoggingErrorHelper(
        "CCrossProcessClientOutputEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V"
        "1>::GetPosition_NonOffload");
      return v4;
    }
  }
  if ( !v18 )
  {
    v4 = -2005139375;
    goto LABEL_12;
  }
  v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 152LL), 0LL, 0LL)
      / (unsigned __int64)*(unsigned int *)(a1 + 104);
  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 24LL), 0LL, 0LL)
      / (unsigned __int64)*(unsigned int *)(a1 + 104);
  if ( v15 >= v13 + v11 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v22 = DOUBLE_1_0e7;
    v23 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v24 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v24 = (double)(int)g_u64QPCFrequency;
    v25 = (unsigned int)(int)(v23 / v24);
    if ( a3 )
      *a3 = v25;
    if ( *(_BYTE *)(a1 + 416) )
    {
      v22 = DOUBLE_1_0e7;
      if ( (unsigned int)ConvertHostPerfCounterToPerfCounter(&v42) )
        *(_BYTE *)(a1 + 416) = 0;
    }
    if ( v25 < (__int64)v42 )
      v26 = 0;
    else
      v26 = v25 - v42;
    v27 = v17;
    v28 = *(float *)(a1 + 172);
    v29 = v41 + (unsigned int)(int)((double)v26 * v17 / v22 + 0.5) - v40 - v11;
    if ( v28 != v17 )
    {
      v30 = v28;
      if ( v29 < 0 )
      {
        v32 = v29 & 1 | ((v41 + (unsigned int)(int)((double)v26 * v27 / v22 + 0.5) - v40 - v11) >> 1);
        v31 = (double)(int)v32 + (double)(int)v32;
      }
      else
      {
        v31 = (double)(int)v29;
      }
      v33 = 0LL;
      v34 = v30 * v31 / v27 + 0.5;
      if ( v34 >= 9.223372036854776e18 )
      {
        v34 = v34 - 9.223372036854776e18;
        if ( v34 < 9.223372036854776e18 )
          v33 = 0x8000000000000000uLL;
      }
      v29 = v33 + (unsigned int)(int)v34;
    }
    v35 = v19 + v29;
    if ( v35 < v20 )
      v20 = v35;
    *a2 = v20 * *(unsigned int *)(a1 + 104);
    if ( (byte_1400C45C1 & 4) != 0 )
    {
      LOBYTE(v37) = 0;
      if ( a3 )
        v37 = *a3;
      v36 = (float)(int)*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
      v38 = (float)(int)*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        *a2,
        v35,
        a1,
        6,
        *a2,
        v37,
        v35,
        v19,
        SLOBYTE(v38),
        SLOBYTE(v36),
        SLOBYTE(v17),
        *(_DWORD *)(a1 + 172));
    }
  }
  else
  {
    *a2 = v19 * *(unsigned int *)(a1 + 104);
  }
  return v4;
}
