/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1400AFB78
 * Callers:
 *     StorpRegisterTraceLogging @ 0x14018C91C (StorpRegisterTraceLogging.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorpUninitializePerfTelemetry @ 0x1400BD130 (StorpUninitializePerfTelemetry.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 StorpInitializePerfTelemetry()
{
  __int64 v0; // rdi
  ULONG v1; // ebx
  ULONG v2; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  ULONG v13; // ebx
  ULONG RecommendedSharedDataAlignment; // edi
  int v15; // ebx
  __int64 v16; // rsi
  unsigned int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // r8
  int v20; // ecx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+30h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset_0(&TelemetryPerfContext, 0, 0xD0uLL);
  TelemetryPerfContext = 917506LL;
  *(_OWORD *)&xmmword_140170DF0 = 0LL;
  v0 = 2LL;
  unk_140170DC8 = 28LL;
  xmmword_140170E00 = 0LL;
  *(&xmmword_140170DF0 + 1) = (PVOID)0x1C0000000ALL;
  qword_140170E30 = 0xFC00000026LL;
  xmmword_140170DD0 = 0LL;
  *(_QWORD *)&xmmword_140170DD0 = 327682LL;
  *(_OWORD *)&xmmword_140170E20 = 0LL;
  *(_QWORD *)&xmmword_140170E00 = 0xE00090002LL;
  *(_OWORD *)&P = 0LL;
  *(_OWORD *)&xmmword_140170DB8 = 0LL;
  *(&xmmword_140170E20 + 1) = (PVOID)252;
  *(_OWORD *)&xmmword_140170DE0 = 0LL;
  *(_OWORD *)&xmmword_140170E10 = 0LL;
  v1 = KeGetRecommendedSharedDataAlignment() + 911;
  LODWORD(dword_140170E38) = v1 & -KeGetRecommendedSharedDataAlignment();
  v2 = KeGetRecommendedSharedDataAlignment() + 16 * HIDWORD(qword_140170E30) - 1;
  LODWORD(dword_140170E3C) = v2 & -KeGetRecommendedSharedDataAlignment();
  g_RaidNumberProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(Size) = dword_140170E38 * g_RaidNumberProcessors;
  LODWORD(dword_140170E44) = dword_140170E3C * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_140170E48 = PerformanceCounter.QuadPart;
  if ( !(_WORD)TelemetryPerfContext )
  {
    P = 0LL;
LABEL_8:
    if ( WORD1(TelemetryPerfContext) )
    {
      *(&P + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(TelemetryPerfContext), 1700028754LL, 0LL);
      if ( !*(&P + 1) )
        goto LABEL_6;
    }
    else
    {
      *(&P + 1) = 0LL;
    }
    if ( WORD2(TelemetryPerfContext) )
    {
      xmmword_140170DB8 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(TelemetryPerfContext), 1700028754LL, 0LL);
      if ( !xmmword_140170DB8 )
        goto LABEL_6;
    }
    else
    {
      xmmword_140170DB8 = 0LL;
    }
    if ( HIWORD(TelemetryPerfContext) )
    {
      *(&xmmword_140170DB8 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * HIWORD(TelemetryPerfContext), 1700028754LL, 0LL);
      if ( !*(&xmmword_140170DB8 + 1) )
        goto LABEL_6;
    }
    else
    {
      *(&xmmword_140170DB8 + 1) = 0LL;
    }
    if ( (_WORD)xmmword_140170DD0 )
    {
      *((_QWORD *)&xmmword_140170DD0 + 1) = RaidAllocatePool(
                                              72LL,
                                              8LL * (unsigned __int16)xmmword_140170DD0,
                                              1700028754LL,
                                              0LL);
      if ( !*((_QWORD *)&xmmword_140170DD0 + 1) )
        goto LABEL_6;
    }
    else
    {
      *((_QWORD *)&xmmword_140170DD0 + 1) = 0LL;
    }
    if ( WORD1(xmmword_140170DD0) )
    {
      xmmword_140170DE0 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(xmmword_140170DD0), 1700028754LL, 0LL);
      if ( !xmmword_140170DE0 )
        goto LABEL_6;
    }
    else
    {
      xmmword_140170DE0 = 0LL;
    }
    if ( WORD2(xmmword_140170DD0) )
    {
      *(&xmmword_140170DE0 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(xmmword_140170DD0), 1700028754LL, 0LL);
      if ( !*(&xmmword_140170DE0 + 1) )
        goto LABEL_6;
    }
    else
    {
      *(&xmmword_140170DE0 + 1) = 0LL;
    }
    if ( WORD3(xmmword_140170DD0) )
    {
      xmmword_140170DF0 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD3(xmmword_140170DD0), 1700028754LL, 0LL);
      if ( !xmmword_140170DF0 )
        goto LABEL_6;
    }
    else
    {
      xmmword_140170DF0 = 0LL;
    }
    if ( (_WORD)xmmword_140170E00 )
    {
      *((_QWORD *)&xmmword_140170E00 + 1) = RaidAllocatePool(
                                              72LL,
                                              8LL * (unsigned __int16)xmmword_140170E00,
                                              1700028754LL,
                                              0LL);
      if ( !*((_QWORD *)&xmmword_140170E00 + 1) )
        goto LABEL_6;
    }
    else
    {
      *((_QWORD *)&xmmword_140170E00 + 1) = 0LL;
    }
    if ( WORD1(xmmword_140170E00) )
    {
      xmmword_140170E10 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(xmmword_140170E00), 1700028754LL, 0LL);
      if ( !xmmword_140170E10 )
        goto LABEL_6;
    }
    else
    {
      xmmword_140170E10 = 0LL;
    }
    if ( WORD2(xmmword_140170E00) )
    {
      *(&xmmword_140170E10 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(xmmword_140170E00), 1700028754LL, 0LL);
      if ( !*(&xmmword_140170E10 + 1) )
        goto LABEL_6;
    }
    else
    {
      *(&xmmword_140170E10 + 1) = 0LL;
    }
    if ( WORD3(xmmword_140170E00) )
    {
      xmmword_140170E20 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD3(xmmword_140170E00), 1700028754LL, 0LL);
      if ( !xmmword_140170E20 )
        goto LABEL_6;
    }
    else
    {
      xmmword_140170E20 = 0LL;
    }
    v5 = 0LL;
    v6 = 0LL;
    v7 = 2LL;
    do
    {
      *(_QWORD *)((char *)P + v5) = v6++;
      v5 += 8LL;
      --v7;
    }
    while ( v7 );
    v8 = 0LL;
    v9 = 0LL;
    v10 = 2LL;
    do
    {
      *(_QWORD *)(v8 + *((_QWORD *)&xmmword_140170DD0 + 1)) = v9++;
      v8 += 8LL;
      --v10;
    }
    while ( v10 );
    v11 = 0LL;
    v12 = 0LL;
    do
    {
      *(_QWORD *)(v11 + *((_QWORD *)&xmmword_140170E00 + 1)) = v12++;
      v11 += 8LL;
      --v0;
    }
    while ( v0 );
    if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      KeQueryPerformanceCounter(&PerformanceFrequency);
      *(_QWORD *)*(&P + 1) = (PerformanceFrequency.QuadPart << 7) / 1000000;
      *((_QWORD *)*(&P + 1) + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
      *((_QWORD *)*(&P + 1) + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
      *((_QWORD *)*(&P + 1) + 3) = PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&P + 1) + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&P + 1) + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&P + 1) + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
      *((_QWORD *)*(&P + 1) + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
      *((_QWORD *)*(&P + 1) + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
      *((_QWORD *)*(&P + 1) + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
      *((_QWORD *)*(&P + 1) + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&P + 1) + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&P + 1) + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&P + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)xmmword_140170DE0 = (PerformanceFrequency.QuadPart << 6) / 1000;
      *((_QWORD *)xmmword_140170DE0 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
      *((_QWORD *)xmmword_140170DE0 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
      *((_QWORD *)xmmword_140170DE0 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)xmmword_140170DE0 + 4) = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)*(&xmmword_140170E10 + 1) = (PerformanceFrequency.QuadPart << 7) / 1000000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 3) = PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
    }
    else
    {
      *(_QWORD *)*(&P + 1) = 1280LL;
      *((_QWORD *)*(&P + 1) + 1) = 2560LL;
      *((_QWORD *)*(&P + 1) + 2) = 5120LL;
      *((_QWORD *)*(&P + 1) + 3) = 10000LL;
      *((_QWORD *)*(&P + 1) + 4) = 40000LL;
      *((_QWORD *)*(&P + 1) + 5) = 160000LL;
      *((_QWORD *)*(&P + 1) + 6) = 640000LL;
      *((_QWORD *)*(&P + 1) + 7) = 1280000LL;
      *((_QWORD *)*(&P + 1) + 8) = 2560000LL;
      *((_QWORD *)*(&P + 1) + 9) = 5120000LL;
      *((_QWORD *)*(&P + 1) + 10) = 10000000LL;
      *((_QWORD *)*(&P + 1) + 11) = 20000000LL;
      *((_QWORD *)*(&P + 1) + 12) = 100000000LL;
      *((_QWORD *)*(&P + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)xmmword_140170DE0 = 640000LL;
      *((_QWORD *)xmmword_140170DE0 + 1) = 2560000LL;
      *((_QWORD *)xmmword_140170DE0 + 2) = 10240000LL;
      *((_QWORD *)xmmword_140170DE0 + 3) = 51200000LL;
      *((_QWORD *)xmmword_140170DE0 + 4) = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)*(&xmmword_140170E10 + 1) = 1280LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 1) = 2560LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 2) = 5120LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 3) = 10000LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 4) = 40000LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 5) = 160000LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 6) = 640000LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 7) = 1280000LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 8) = 2560000LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 9) = 5120000LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 10) = 10000000LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 11) = 20000000LL;
      *((_QWORD *)*(&xmmword_140170E10 + 1) + 12) = 100000000LL;
    }
    *((_QWORD *)*(&xmmword_140170E10 + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_140170E10 = 4096LL;
    *((_QWORD *)xmmword_140170E10 + 1) = 0x2000LL;
    *((_QWORD *)xmmword_140170E10 + 2) = 0x4000LL;
    *((_QWORD *)xmmword_140170E10 + 3) = 0x8000LL;
    *((_QWORD *)xmmword_140170E10 + 4) = 0x10000LL;
    *((_QWORD *)xmmword_140170E10 + 5) = 0x20000LL;
    *((_QWORD *)xmmword_140170E10 + 6) = 0x40000LL;
    *((_QWORD *)xmmword_140170E10 + 7) = 0x100000LL;
    *((_QWORD *)xmmword_140170E10 + 8) = 0x7FFFFFFFFFFFFFFFLL;
    v13 = -KeGetRecommendedSharedDataAlignment();
    dword_140170E50 = v13 & (KeGetRecommendedSharedDataAlignment() + 31);
    LODWORD(dword_140170E54) = g_RaidNumberProcessors * dword_140170E50;
    if ( FeatureFixTRIMAddSCSIPassthrough )
    {
      RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
      v15 = 4 * g_RaidNumberProcessors;
      v16 = (RecommendedSharedDataAlignment + v15 - 1) & -KeGetRecommendedSharedDataAlignment();
      qword_140170E58 = (PVOID)RaidAllocatePool(72LL, v16, 1700028754LL, 0LL);
      if ( !qword_140170E58
        || (qword_140170E60 = (PVOID)RaidAllocatePool(72LL, v16, 1700028754LL, 0LL)) == 0LL
        || (qword_140170E68 = (PVOID)RaidAllocatePool(72LL, v16, 1700028754LL, 0LL)) == 0LL )
      {
        v4 = -1073741670;
        goto LABEL_67;
      }
      v17 = g_RaidNumberProcessors;
      v18 = 0;
      if ( g_RaidNumberProcessors )
      {
        v19 = 0LL;
        do
        {
          *(_DWORD *)((char *)qword_140170E58 + v19) = dword_140170E38 * v18;
          *(_DWORD *)((char *)qword_140170E60 + v19) = dword_140170E3C * v18;
          v20 = dword_140170E50 * v18++;
          *(_DWORD *)((char *)qword_140170E68 + v19) = v20;
          v19 += 4LL;
        }
        while ( v18 < v17 );
      }
    }
    return 0;
  }
  P = (PVOID)RaidAllocatePool(72LL, 8LL * (unsigned __int16)TelemetryPerfContext, 1700028754LL, 0LL);
  if ( P )
    goto LABEL_8;
LABEL_6:
  v4 = -1073741801;
LABEL_67:
  StorpUninitializePerfTelemetry();
  g_StorpTraceLoggingPerformanceEnabled = 0;
  return v4;
}
