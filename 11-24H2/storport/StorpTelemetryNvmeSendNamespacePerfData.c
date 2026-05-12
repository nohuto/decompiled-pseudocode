/*
 * XREFs of StorpTelemetryNvmeSendNamespacePerfData @ 0x1400B835C
 * Callers:
 *     StorpIterateAndLogNvmeNamespaceStatistics @ 0x1400B08C0 (StorpIterateAndLogNvmeNamespaceStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0qjzshqusssjqxuxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1400AB898 (McTemplateK0qjzshqusssjqxuxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataCriticalData @ 0x1400B7118 (StorpTelemetryNvmeLogNamespacePerfDataCriticalData.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataMeasures @ 0x1400B745C (StorpTelemetryNvmeLogNamespacePerfDataMeasures.c)
 *     StorpTelemetryNvmeSendNamespaceIoSizeDistributionData @ 0x1400B7B28 (StorpTelemetryNvmeSendNamespaceIoSizeDistributionData.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorpTelemetryNvmeSendNamespacePerfData(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  _QWORD *Pool; // r13
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  ULONG RecommendedSharedDataAlignment; // ebx
  ULONG v9; // eax
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  LARGE_INTEGER *v16; // rax
  unsigned int i; // edx
  __int64 v18; // r8
  _QWORD *v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // r9
  char *v24; // r10
  char *v25; // r11
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // r9d
  _QWORD *v29; // r10
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // r11d
  unsigned __int16 v35; // r10
  __int64 v36; // r8
  int v37; // eax
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 *v40; // rcx
  unsigned __int64 v41; // rax
  bool v42; // cc
  __int128 v43; // xmm2
  __m128i v44; // xmm1
  __int64 v45; // rax
  unsigned __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // r14
  const char *v49; // rdi
  __int64 v50; // rcx
  __int64 v52; // [rsp+80h] [rbp-228h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+228h] [rbp-80h] BYREF
  __m128i v54; // [rsp+230h] [rbp-78h]
  __int128 v55; // [rsp+240h] [rbp-68h]
  unsigned __int64 v56; // [rsp+258h] [rbp-50h]
  char v57[8]; // [rsp+260h] [rbp-48h] BYREF
  const wchar_t *v58; // [rsp+268h] [rbp-40h]
  __int64 v59; // [rsp+270h] [rbp-38h]
  __int64 v60; // [rsp+278h] [rbp-30h]
  __int64 v61; // [rsp+280h] [rbp-28h]
  __int64 v62; // [rsp+288h] [rbp-20h]
  __int64 v63; // [rsp+290h] [rbp-18h]
  __int64 v64; // [rsp+298h] [rbp-10h]
  __int64 v65; // [rsp+2A0h] [rbp-8h]
  __int64 v66; // [rsp+2A8h] [rbp+0h]
  __int64 v67; // [rsp+2B0h] [rbp+8h]
  __int64 v68; // [rsp+2B8h] [rbp+10h]
  __int64 v69; // [rsp+2C0h] [rbp+18h]
  __int64 v70; // [rsp+2C8h] [rbp+20h]
  __int64 v71; // [rsp+2D0h] [rbp+28h]
  __int64 v72; // [rsp+2D8h] [rbp+30h]
  __int64 v73; // [rsp+2E0h] [rbp+38h]
  __int64 v74; // [rsp+2E8h] [rbp+40h]
  __int64 v75; // [rsp+2F0h] [rbp+48h]
  __int64 v76; // [rsp+2F8h] [rbp+50h]
  __int64 v77; // [rsp+300h] [rbp+58h]
  __int64 v78; // [rsp+308h] [rbp+60h]
  __int64 v79; // [rsp+310h] [rbp+68h]
  __int64 v80; // [rsp+318h] [rbp+70h]
  __int64 v81; // [rsp+320h] [rbp+78h]
  __int64 v82; // [rsp+328h] [rbp+80h]
  __int64 v83; // [rsp+330h] [rbp+88h]
  __int64 v84; // [rsp+338h] [rbp+90h]
  __int64 v85; // [rsp+340h] [rbp+98h]
  __int64 v86; // [rsp+348h] [rbp+A0h]
  __int64 v87; // [rsp+350h] [rbp+A8h]
  __int64 v88; // [rsp+358h] [rbp+B0h]
  __int64 v89; // [rsp+360h] [rbp+B8h]
  __int64 v90; // [rsp+368h] [rbp+C0h]
  __int64 v91; // [rsp+370h] [rbp+C8h]
  __int64 v92; // [rsp+378h] [rbp+D0h]
  __int64 v93; // [rsp+380h] [rbp+D8h]
  __int64 v94; // [rsp+388h] [rbp+E0h]
  __int64 v95; // [rsp+390h] [rbp+E8h]
  __int64 v96; // [rsp+398h] [rbp+F0h]
  __int64 v97; // [rsp+3A8h] [rbp+100h]
  __int64 v98; // [rsp+3B0h] [rbp+108h]
  unsigned __int64 v99; // [rsp+3C0h] [rbp+118h]
  _QWORD *v100; // [rsp+3C8h] [rbp+120h]
  unsigned __int64 v101; // [rsp+3D0h] [rbp+128h]
  unsigned __int64 v102; // [rsp+3D8h] [rbp+130h]
  __int64 v103; // [rsp+3E0h] [rbp+138h]

  v2 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  memset_0(v57, 0, 0x190uLL);
  v3 = *(_QWORD *)(a1 + 608);
  v4 = (unsigned int)qword_140170E30;
  Pool = 0LL;
  v6 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  if ( *(_QWORD *)(v3 + 8) )
  {
    Pool = (_QWORD *)RaidAllocatePool(72LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
    if ( Pool
      && (RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment(),
          v9 = KeGetRecommendedSharedDataAlignment(),
          (v6 = (_QWORD *)RaidAllocatePool(
                            72LL,
                            -v9 & (RecommendedSharedDataAlignment + 24 * (_DWORD)v4 - 1),
                            1700028754LL,
                            *(_QWORD *)(a1 + 8))) != 0LL) )
    {
      if ( UseQPCTime )
        v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v10.QuadPart = KeQueryUnbiasedInterruptTime();
      v11 = v10;
      v12 = *(_QWORD *)(a1 + 608);
      if ( v11.QuadPart <= 0 || (v13 = *(_QWORD *)(v12 + 24), v11.QuadPart >= v13) )
        v14 = v11.QuadPart - *(_QWORD *)(v12 + 24);
      else
        v14 = v11.QuadPart - v13 - 1;
      if ( UseQPCTime )
      {
        v15 = 0LL;
        if ( PerformanceFrequency.QuadPart && v14 )
          v15 = 10000
              * (1000 * (v14 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
              / PerformanceFrequency.QuadPart
              + 10000
              * (1000 * (v14 / PerformanceFrequency.QuadPart)
               + 1000 * (v14 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
      }
      else
      {
        v15 = v14;
      }
      qword_140170E48 = v11.QuadPart;
      v16 = *(LARGE_INTEGER **)(a1 + 608);
      v56 = v15;
      v16[3] = v11;
      memmove(Pool, *(const void **)(*(_QWORD *)(a1 + 608) + 8LL), (unsigned int)Size);
      for ( i = 1; i < g_RaidNumberProcessors; ++i )
      {
        v18 = (unsigned int)dword_140170E38 * i;
        if ( (_DWORD)v4 )
        {
          v19 = Pool + 1;
          v20 = v4;
          do
          {
            *(v19 - 1) += *(_QWORD *)((char *)v19 + v18 - 8);
            *v19 += *(_QWORD *)((char *)v19 + v18);
            v19[1] += *(_QWORD *)((char *)v19 + v18 + 8);
            v19 += 3;
            --v20;
          }
          while ( v20 );
        }
      }
      v21 = 0LL;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 32LL);
      if ( (_DWORD)v4 )
      {
        v23 = (_QWORD *)(v22 + 8);
        v24 = (char *)Pool - v22;
        v25 = (char *)v6 - v22;
        v2 = v4;
        do
        {
          v26 = *(_QWORD *)((char *)v23 + (_QWORD)v24 - 8) - *(v23 - 1);
          *(_QWORD *)((char *)v23 + (_QWORD)v25 - 8) = v26;
          v27 = *(_QWORD *)&v24[(_QWORD)v23] - *v23;
          *(_QWORD *)&v25[(_QWORD)v23] = v27;
          *(_QWORD *)((char *)v23 + (_QWORD)v25 + 8) = *(_QWORD *)((char *)v23 + (_QWORD)v24 + 8) - v23[1];
          v23 += 3;
          v21 += v27 + v26;
          --v2;
        }
        while ( v2 );
      }
      memmove(*(void **)(*(_QWORD *)(a1 + 608) + 32LL), Pool, (unsigned int)dword_140170E38);
      if ( v21 )
      {
        v99 = v2;
        if ( (_WORD)TelemetryPerfContext != (_WORD)v2 && WORD1(TelemetryPerfContext) != (_WORD)v2 )
        {
          v28 = v2;
          if ( (_DWORD)v4 )
          {
            v29 = v6 + 2;
            do
            {
              if ( v28 >= dword_140170DCC && v28 < *((_DWORD *)&xmmword_140170DF0 + 3) )
              {
                v30 = v28 / (unsigned __int16)TelemetryPerfContext;
                v31 = *(v29 - 2);
                if ( (unsigned int)v30 >= 0xE )
                  v30 = 13LL;
                v32 = *(v29 - 1);
                v33 = 3 * v30;
                *(&v61 + v33) += *v29;
                *(&v59 + v33) += v31;
                *(&v60 + v33) += v32;
                v99 += v31 + v32;
              }
              ++v28;
              v29 += 3;
            }
            while ( v28 < (unsigned int)v4 );
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 608) + 48LL) != v2 )
        {
          v34 = g_RaidNumberProcessors;
          v35 = v2;
          if ( g_RaidNumberProcessors )
          {
            v36 = v55;
            v37 = v2;
            v38 = v54.m128i_u64[1];
            v39 = v54.m128i_i64[0];
            do
            {
              v40 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 48LL)
                                       + (unsigned int)(dword_140170E50 * v37));
              v41 = *v40;
              v42 = *v40 <= v39;
              *v40 = v2;
              if ( !v42 )
                v39 = v41;
              v38 += v40[1];
              v36 += v40[2];
              v37 = ++v35;
            }
            while ( v35 < v34 );
            v54.m128i_i64[0] = v39;
            *(_QWORD *)&v55 = v36;
            v43 = v55;
            v54.m128i_i64[1] = v38;
            v44 = v54;
          }
          else
          {
            v44 = v54;
            v43 = v55;
            v39 = v54.m128i_i64[0];
            v36 = v55;
            v38 = _mm_srli_si128(v54, 8).m128i_u64[0];
          }
          v45 = *(_QWORD *)(a1 + 608);
          v101 = v39;
          v46 = v38 - *(_QWORD *)(v45 + 64);
          v47 = v36 - *(_QWORD *)(v45 + 72);
          *(__m128i *)(v45 + 56) = v44;
          v103 = v47;
          *(_OWORD *)(v45 + 72) = v43;
          v102 = v46;
        }
        v58 = L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms";
        v100 = v6;
        v57[0] = 12;
        if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1
          && g_StorpTraceLoggingCriticalEventEnabled == (_DWORD)v2
          || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum
          || g_StorpTraceLoggingCriticalEventEnabled == (_DWORD)v2 )
        {
          StorpTelemetryNvmeLogNamespacePerfDataMeasures(a1);
        }
        else
        {
          StorpTelemetryNvmeLogNamespacePerfDataCriticalData(a1);
        }
        if ( (byte_14017146A & 0x20) != 0 )
        {
          v48 = *(_QWORD *)(a1 + 16);
          v49 = (const char *)&word_140150F48;
          if ( *(_QWORD *)(v48 + 752) )
            v49 = *(const char **)(v48 + 752);
          v50 = *(_QWORD *)(a1 + 608);
          McTemplateK0qjzshqusssjqxuxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
            v50,
            *(unsigned __int16 *)(a1 + 424),
            a1 + 160,
            *(_DWORD *)(*(_QWORD *)(v48 + 128) + 56LL),
            *(_QWORD *)(v48 + 128) + 1032LL,
            *(const wchar_t **)(*(_QWORD *)(v48 + 128) + 1016LL),
            *(const char **)(v48 + 792),
            *(_WORD *)(v48 + 4),
            *(_DWORD *)(a1 + 56),
            *(_BYTE *)(v48 + 744),
            v49,
            (const char *)(v48 + 800),
            (const char *)(v48 + 841),
            a1 + 160,
            (*(_BYTE *)(v48 + 136) & 2) != 0 ? 20 : 17,
            v52,
            v57[0],
            v99,
            *(_WORD *)(a1 + 424),
            v101,
            *(_DWORD *)(v50 + 88),
            *(_DWORD *)(v50 + 96),
            v58,
            v59,
            v62,
            v65,
            v68,
            v71,
            v74,
            v77,
            v80,
            v83,
            v86,
            v89,
            v92,
            v95,
            v97,
            v60,
            v63,
            v66,
            v69,
            v72,
            v75,
            v78,
            v81,
            v84,
            v87,
            v90,
            v93,
            v96,
            v98,
            v61,
            v64,
            v67,
            v70,
            v73,
            v76,
            v79,
            v82,
            v85,
            v88,
            v91,
            v94);
          v2 = 0LL;
        }
      }
      if ( g_StorpTraceLoggingIoSizeDistributionEnabled != (_DWORD)v2 && (*(_DWORD *)(a1 + 112) & 0x100LL) != 0 )
        StorpTelemetryNvmeSendNamespaceIoSizeDistributionData(a1);
      v7 = v2;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741823;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 608) + 88LL) = v2;
  *(_QWORD *)(*(_QWORD *)(a1 + 608) + 96LL) = v2;
  **(_DWORD **)(a1 + 608) = v2;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x65546152u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x65546152u);
  return v7;
}
