/*
 * XREFs of ?GetPosition_Offload@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAJPEA_K0@Z @ 0x140088948
 * Callers:
 *     ?GetPosition@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140088360 (-GetPosition@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x140002584 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x140002630 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140083AE8 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetPosition_Offload(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 *v4; // r15
  signed __int32 v7; // r12d
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r13
  __int64 v12; // rcx
  float v13; // xmm6_4
  int v14; // edx
  signed __int32 v15; // eax
  __int64 v16; // rcx
  double LowPart; // xmm0_8
  double v18; // xmm2_8
  double v19; // xmm0_8
  double v20; // xmm1_8
  signed __int64 v21; // rsi
  int v22; // esi
  double v23; // xmm3_8
  float v24; // xmm0_4
  double v25; // xmm1_8
  double v26; // xmm0_8
  unsigned __int64 v27; // rcx
  double v28; // xmm1_8
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-19h] BYREF
  __int64 v34; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-9h] BYREF
  __int64 v36; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v37[4]; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int64 v38; // [rsp+D8h] [rbp+67h] BYREF
  unsigned __int64 v39; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a1 + 88);
  v4 = (__int64 *)a3;
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v8 = 0;
  if ( (v7 & 4) == 0 )
  {
    v9 = 0LL;
    goto LABEL_41;
  }
  v3 = 3LL;
  do
  {
    v10 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), 0, 0);
    a3 = 5 * v10;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 40 * v10 + 32);
    v12 = *(_QWORD *)(a1 + 88);
    v39 = *(_QWORD *)(v12 + 40 * v10 + 56);
    v13 = *(float *)(v12 + 40 * v10 + 64);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40 * v10 + 68);
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), 0, 0);
    if ( (_DWORD)v10 == v15 )
      break;
    v3 = (unsigned int)(v3 - 1);
  }
  while ( (_DWORD)v3 );
  if ( !v14 )
  {
    v8 = -2004287484;
LABEL_8:
    v9 = *(_QWORD *)(a1 + 200);
    goto LABEL_41;
  }
  if ( (_DWORD)v10 != v15 )
  {
    v8 = -2005139393;
    goto LABEL_8;
  }
  *a2 = v11;
  v16 = v11;
  if ( (v7 & 1) != 0 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v18 = DOUBLE_1_0e7;
    v19 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v20 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v20 = (double)(int)g_u64QPCFrequency;
    v21 = (unsigned int)(int)(v19 / v20);
    if ( v4 )
      *v4 = v21;
    if ( *(_BYTE *)(a1 + 416) )
    {
      v18 = DOUBLE_1_0e7;
      if ( (unsigned int)ConvertHostPerfCounterToPerfCounter(&v39) )
        *(_BYTE *)(a1 + 416) = 0;
    }
    if ( v21 < (__int64)v39 )
      v22 = 0;
    else
      v22 = v21 - v39;
    v23 = DOUBLE_0_5;
    *a2 += (unsigned int)(int)((double)v22 * v13 / v18 + 0.5);
    v16 = *a2;
  }
  else
  {
    v23 = DOUBLE_0_5;
  }
  v24 = *(float *)(a1 + 172);
  if ( v24 != v13 )
  {
    v25 = v24;
    if ( v16 < 0 )
      v26 = (double)(int)(v16 & 1 | ((unsigned __int64)v16 >> 1))
          + (double)(int)(v16 & 1 | ((unsigned __int64)v16 >> 1));
    else
      v26 = (double)(int)v16;
    v27 = 0LL;
    v28 = v25 * v26 / v13 + v23;
    if ( v28 >= 9.223372036854776e18 )
    {
      v28 = v28 - 9.223372036854776e18;
      if ( v28 < 9.223372036854776e18 )
        v27 = 0x8000000000000000uLL;
    }
    *a2 = v27 + (unsigned int)(int)v28;
  }
  v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 24LL), 0LL, 0LL)
      / (unsigned __int64)*(unsigned int *)(a1 + 104);
  v30 = *a2;
  if ( *a2 > v29 )
  {
    if ( (unsigned int)dword_1400C3478 > 5 )
    {
      v34 = *a2;
      v38 = v29;
      v35 = v39;
      v36 = v11;
      v37[0] = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v39,
        (__int64)&unk_1400B0F87,
        a3,
        v3,
        (__int64)v37,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v38);
    }
    *a2 = v29;
    v30 = v29;
  }
  v9 = v30 * *(unsigned int *)(a1 + 104);
LABEL_41:
  *a2 = v9;
  if ( (unsigned int)dword_1400C3478 > 5 )
  {
    if ( v4 )
      v31 = *v4;
    else
      v31 = 0LL;
    v37[0] = v31;
    v36 = v9;
    LODWORD(v38) = v7;
    v35 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v9,
      (__int64)&unk_1400B0FF5,
      a3,
      v3,
      (__int64)&v35,
      (__int64)&v38,
      (__int64)&v36,
      (__int64)v37);
  }
  if ( v8 < 0 )
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessClientOutputEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>"
      "::GetPosition_Offload");
  return (unsigned int)v8;
}
