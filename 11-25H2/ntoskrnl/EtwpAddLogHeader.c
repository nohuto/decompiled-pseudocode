/*
 * XREFs of EtwpAddLogHeader @ 0x140992044
 * Callers:
 *     EtwpPreserveLogger @ 0x1407A067C (EtwpPreserveLogger.c)
 *     EtwpUpdateFileHeader @ 0x140991CA0 (EtwpUpdateFileHeader.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140992AEC (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpPrepareHeader @ 0x140992DEC (EtwpPrepareHeader.c)
 *     EtwpIsWow64Logger @ 0x140993234 (EtwpIsWow64Logger.c)
 *     EtwpAddDebugInfoEvents @ 0x140993258 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x14099352C (EtwpAddBinaryInfoEvents.c)
 */

unsigned __int64 __fastcall EtwpAddLogHeader(__int64 a1, unsigned int *a2)
{
  bool v4; // cf
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int16 v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v9; // r12
  unsigned int UsedProcessorCount; // eax
  char v11; // al
  char v12; // cl
  bool v13; // zf
  int v14; // ecx
  LARGE_INTEGER v15; // rax
  __int64 v16; // r13
  char *v17; // r13
  __int64 v18; // rax
  unsigned int *v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // xmm0_8
  __int64 v22; // rdx
  unsigned __int64 v23; // xmm0_8
  void *v24; // rcx
  char *v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // r13
  char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int128 v31; // xmm1
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-40h] BYREF
  int v33; // [rsp+38h] [rbp-38h]
  void *v34; // [rsp+40h] [rbp-30h]
  __int64 v35; // [rsp+58h] [rbp-18h]
  unsigned int v36; // [rsp+60h] [rbp-10h]

  v33 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v35 = 0LL;
  v36 = 0;
  v4 = (unsigned __int8)EtwpIsWow64Logger(a1) != 0;
  result = *(unsigned int *)(a1 + 4);
  v7 = *(_WORD *)(v6 + 152) + *(_WORD *)(v6 + 136) + (v4 ? 276 : 284);
  if ( result >= (unsigned __int64)v7 + 104 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(25LL) < 0 )
    {
      v35 = 0LL;
      v36 = 0;
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
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    a2[29] = UsedProcessorCount;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || *(_DWORD *)(a1 + 4) > 0x100000u || UsedProcessorCount > 0x100 )
    {
      v11 = 0;
      v12 = 2;
    }
    else
    {
      v11 = 5;
      v12 = 1;
    }
    *((_BYTE *)a2 + 110) = v12;
    *((_BYTE *)a2 + 111) = v11;
    a2[36] = 1;
    a2[34] = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[33] = *(_DWORD *)(a1 + 292);
    a2[32] = KeMaximumIncrement;
    a2[39] = EtwCPUSpeedInMHz;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedExchange64((volatile __int64 *)&EtwPerfFreq, PerformanceFrequency.QuadPart);
    v13 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
    v14 = 1;
    v15 = PerformanceFrequency;
    if ( v13 )
    {
      *((LARGE_INTEGER *)a2 + 45) = PerformanceFrequency;
      *((_QWORD *)a2 + 46) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 44) = EtwpBootTime;
      a2[37] = 8;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v14 = *(_DWORD *)(a1 + 200);
      a2[94] = v14;
      *((_QWORD *)a2 + 20) = HIDWORD(v35);
      *((_QWORD *)a2 + 21) = v36;
      v16 = *(unsigned __int16 *)(a1 + 136);
      v34 = a2 + 96;
      v17 = (char *)a2 + v16 + 384;
      v18 = 18LL;
    }
    else
    {
      a2[18] = -1073676286;
      *((LARGE_INTEGER *)a2 + 44) = v15;
      a2[37] = 4;
      *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 43) = EtwpBootTime;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v14 = *(_DWORD *)(a1 + 200);
      a2[92] = v14;
      a2[40] = HIDWORD(v35);
      a2[41] = v36;
      v27 = *(unsigned __int16 *)(a1 + 136);
      v34 = a2 + 94;
      v17 = (char *)a2 + v27 + 376;
      v18 = 16LL;
    }
    v19 = &a2[v18 + 26];
    RtlpQueryTimeZoneInformationWorker(v19, 0xACuLL);
    v20 = *(_QWORD *)(v19 + 17);
    v21 = _mm_srli_si128(*(__m128i *)(v19 + 17), 8).m128i_u64[0];
    *((_WORD *)v19 + 34) = v20;
    *((_WORD *)v19 + 39) = v21;
    *((_WORD *)v19 + 35) = WORD1(v20);
    *((_WORD *)v19 + 37) = WORD2(v20);
    *((_WORD *)v19 + 36) = HIWORD(v21);
    *((_WORD *)v19 + 40) = WORD1(v21);
    *((_WORD *)v19 + 38) = HIWORD(v20);
    *((_WORD *)v19 + 41) = WORD2(v21);
    v22 = *((_QWORD *)v19 + 19);
    v23 = _mm_srli_si128(*(__m128i *)(v19 + 38), 8).m128i_u64[0];
    *((_WORD *)v19 + 76) = v22;
    *((_WORD *)v19 + 81) = v23;
    *((_WORD *)v19 + 77) = WORD1(v22);
    *((_WORD *)v19 + 79) = WORD2(v22);
    *((_WORD *)v19 + 78) = HIWORD(v23);
    *((_WORD *)v19 + 83) = WORD2(v23);
    v24 = v34;
    *((_WORD *)v19 + 80) = HIWORD(v22);
    *((_WORD *)v19 + 82) = WORD1(v23);
    memmove(v24, *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
    memmove(v17 + 2, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    a2[2] += (v7 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[2] + 68 <= *a2 )
    {
      v28 = (char *)a2 + a2[2];
      *((_DWORD *)v28 + 1) = 327748;
      *(_DWORD *)v28 = -1073610750;
      *((_DWORD *)v28 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v28 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v28 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v28 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v28 + 2) = *v9;
      v29 = *(_QWORD *)(a1 + 1360);
      v30 = 32LL * *(unsigned __int8 *)(a1 + 818);
      *((_OWORD *)v28 + 2) = *(_OWORD *)(v30 + v29 + 4284);
      v31 = *(_OWORD *)(v30 + v29 + 4300);
      *((_DWORD *)v28 + 16) = 85;
      *((_OWORD *)v28 + 3) = v31;
      a2[2] += 72;
    }
    if ( a2[2] + 80 <= *a2 )
    {
      v25 = (char *)a2 + a2[2];
      *((_DWORD *)v25 + 1) = 5242960;
      *(_DWORD *)v25 = -1073610750;
      *((_DWORD *)v25 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v25 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v25 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v25 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v25 + 2) = *v9;
      *((_DWORD *)v25 + 8) = 0;
      *((_DWORD *)v25 + 9) = *(_DWORD *)(*(_QWORD *)(a1 + 1360) + 4228LL);
      *((_OWORD *)v25 + 3) = *(_OWORD *)(*(_QWORD *)(a1 + 1360) + 4176LL);
      *((_QWORD *)v25 + 5) = *(_QWORD *)(a1 + 1544);
      *((_OWORD *)v25 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 1360) + 4192LL);
      a2[2] += 80;
    }
    v26 = *a2;
    a2[12] = a2[2];
    if ( a2[2] < v26 )
    {
      if ( *(_QWORD *)(a1 + 96) != a1 + 96 || *(_DWORD *)(a1 + 120) )
        EtwpAddDebugInfoEvents(a1, (_DWORD)a2, v26, a1 + 312, 3);
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
