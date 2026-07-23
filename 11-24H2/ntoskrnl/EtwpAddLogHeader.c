/*
 * XREFs of EtwpAddLogHeader @ 0x1409D59FC
 * Callers:
 *     EtwpPreserveLogger @ 0x1407AFE9C (EtwpPreserveLogger.c)
 *     EtwpUpdateFileHeader @ 0x1409D5658 (EtwpUpdateFileHeader.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1409B66B0 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpPrepareHeader @ 0x1409D64A4 (EtwpPrepareHeader.c)
 *     EtwpIsWow64Logger @ 0x1409D68EC (EtwpIsWow64Logger.c)
 *     EtwpAddDebugInfoEvents @ 0x1409D6910 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1409D6BE4 (EtwpAddBinaryInfoEvents.c)
 */

unsigned __int64 __fastcall EtwpAddLogHeader(__int64 a1, unsigned int *a2)
{
  bool v4; // cf
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int16 v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v9; // r12
  __int64 v10; // rdx
  unsigned int UsedProcessorCount; // eax
  char v12; // al
  char v13; // cl
  bool v14; // zf
  int v15; // ecx
  LARGE_INTEGER v16; // rax
  __int64 v17; // r13
  char *v18; // r13
  __int64 v19; // rax
  unsigned int *v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // xmm0_8
  __int64 v23; // rdx
  unsigned __int64 v24; // xmm0_8
  void *v25; // rcx
  char *v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // r13
  char *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm1
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-40h] BYREF
  int v34; // [rsp+38h] [rbp-38h]
  void *v35; // [rsp+40h] [rbp-30h]
  __int64 v36; // [rsp+58h] [rbp-18h]
  unsigned int v37; // [rsp+60h] [rbp-10h]

  v34 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v36 = 0LL;
  v37 = 0;
  v4 = (unsigned __int8)EtwpIsWow64Logger(a1) != 0;
  result = *(unsigned int *)(a1 + 4);
  v7 = *(_WORD *)(v6 + 152) + *(_WORD *)(v6 + 136) + (v4 ? 276 : 284);
  if ( result >= (unsigned __int64)v7 + 104 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(25LL, 12LL) < 0 )
    {
      v36 = 0LL;
      v37 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    *((_WORD *)a2 + 39) = 0;
    v9 = (_QWORD *)(a1 + 312);
    *((_WORD *)a2 + 38) = v7 + 32;
    a2[18] = -1073610750;
    a2[20] = CurrentThread[1].CurrentRunTime;
    a2[21] = CurrentThread[1].CycleTime;
    a2[24] = CurrentThread->SchedulerApc.SpareLong0;
    a2[25] = CurrentThread->UserTime;
    *((_QWORD *)a2 + 11) = *(_QWORD *)(a1 + 312);
    memset_0(a2 + 26, 0, v7);
    a2[26] = *(_DWORD *)(a1 + 4);
    *((_WORD *)a2 + 54) = 10;
    a2[28] = (unsigned __int16)NtBuildNumber;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1, v10);
    a2[29] = UsedProcessorCount;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || *(_DWORD *)(a1 + 4) > 0x100000u || UsedProcessorCount > 0x100 )
    {
      v12 = 0;
      v13 = 2;
    }
    else
    {
      v12 = 5;
      v13 = 1;
    }
    *((_BYTE *)a2 + 110) = v13;
    *((_BYTE *)a2 + 111) = v12;
    a2[36] = 1;
    a2[34] = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[33] = *(_DWORD *)(a1 + 292);
    a2[32] = KeMaximumIncrement;
    a2[39] = EtwCPUSpeedInMHz;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedExchange64((volatile __int64 *)&EtwPerfFreq, PerformanceFrequency.QuadPart);
    v14 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
    v15 = 1;
    v16 = PerformanceFrequency;
    if ( v14 )
    {
      *((LARGE_INTEGER *)a2 + 45) = PerformanceFrequency;
      *((_QWORD *)a2 + 46) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 44) = EtwpBootTime;
      a2[37] = 8;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v15 = *(_DWORD *)(a1 + 200);
      a2[94] = v15;
      *((_QWORD *)a2 + 20) = HIDWORD(v36);
      *((_QWORD *)a2 + 21) = v37;
      v17 = *(unsigned __int16 *)(a1 + 136);
      v35 = a2 + 96;
      v18 = (char *)a2 + v17 + 384;
      v19 = 18LL;
    }
    else
    {
      a2[18] = -1073676286;
      *((LARGE_INTEGER *)a2 + 44) = v16;
      a2[37] = 4;
      *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 43) = EtwpBootTime;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v15 = *(_DWORD *)(a1 + 200);
      a2[92] = v15;
      a2[40] = HIDWORD(v36);
      a2[41] = v37;
      v28 = *(unsigned __int16 *)(a1 + 136);
      v35 = a2 + 94;
      v18 = (char *)a2 + v28 + 376;
      v19 = 16LL;
    }
    v20 = &a2[v19 + 26];
    RtlpQueryTimeZoneInformationWorker((char *)v20, 0xACuLL);
    v21 = *(_QWORD *)(v20 + 17);
    v22 = _mm_srli_si128(*(__m128i *)(v20 + 17), 8).m128i_u64[0];
    *((_WORD *)v20 + 34) = v21;
    *((_WORD *)v20 + 39) = v22;
    *((_WORD *)v20 + 35) = WORD1(v21);
    *((_WORD *)v20 + 37) = WORD2(v21);
    *((_WORD *)v20 + 36) = HIWORD(v22);
    *((_WORD *)v20 + 40) = WORD1(v22);
    *((_WORD *)v20 + 38) = HIWORD(v21);
    *((_WORD *)v20 + 41) = WORD2(v22);
    v23 = *((_QWORD *)v20 + 19);
    v24 = _mm_srli_si128(*(__m128i *)(v20 + 38), 8).m128i_u64[0];
    *((_WORD *)v20 + 76) = v23;
    *((_WORD *)v20 + 81) = v24;
    *((_WORD *)v20 + 77) = WORD1(v23);
    *((_WORD *)v20 + 79) = WORD2(v23);
    *((_WORD *)v20 + 78) = HIWORD(v24);
    *((_WORD *)v20 + 83) = WORD2(v24);
    v25 = v35;
    *((_WORD *)v20 + 80) = HIWORD(v23);
    *((_WORD *)v20 + 82) = WORD1(v24);
    memmove(v25, *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
    memmove(v18 + 2, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    a2[2] += (v7 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[2] + 68 <= *a2 )
    {
      v29 = (char *)a2 + a2[2];
      *((_DWORD *)v29 + 1) = 327748;
      *(_DWORD *)v29 = -1073610750;
      *((_DWORD *)v29 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v29 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v29 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v29 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v29 + 2) = *v9;
      v30 = *(_QWORD *)(a1 + 1360);
      v31 = 32LL * *(unsigned __int8 *)(a1 + 818);
      *((_OWORD *)v29 + 2) = *(_OWORD *)(v31 + v30 + 4556);
      v32 = *(_OWORD *)(v31 + v30 + 4572);
      *((_DWORD *)v29 + 16) = 85;
      *((_OWORD *)v29 + 3) = v32;
      a2[2] += 72;
    }
    if ( a2[2] + 80 <= *a2 )
    {
      v26 = (char *)a2 + a2[2];
      *((_DWORD *)v26 + 1) = 5242960;
      *(_DWORD *)v26 = -1073610750;
      *((_DWORD *)v26 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v26 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v26 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v26 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v26 + 2) = *v9;
      *((_DWORD *)v26 + 8) = 0;
      *((_DWORD *)v26 + 9) = *(_DWORD *)(*(_QWORD *)(a1 + 1360) + 4500LL);
      *((_OWORD *)v26 + 3) = *(_OWORD *)(*(_QWORD *)(a1 + 1360) + 4448LL);
      *((_QWORD *)v26 + 5) = *(_QWORD *)(a1 + 1544);
      *((_OWORD *)v26 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 1360) + 4464LL);
      a2[2] += 80;
    }
    v27 = *a2;
    a2[12] = a2[2];
    if ( a2[2] < v27 )
    {
      if ( *(_QWORD *)(a1 + 96) != a1 + 96 || *(_DWORD *)(a1 + 120) )
        EtwpAddDebugInfoEvents(a1, (_DWORD)a2, v27, a1 + 312, 3);
      if ( *(_QWORD *)(a1 + 1304) != a1 + 1304 )
        EtwpAddBinaryInfoEvents(a1, a2, *a2, 2LL);
    }
    a2[1] = a2[12];
    a2[11] = 3;
    EtwpPrepareHeader(a1, a2, 1LL);
    result = a2[2];
    a2[1] = result;
  }
  return result;
}
