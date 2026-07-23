/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x14036E610
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402AFD50 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmGetThroughputInfoCallback @ 0x14036FE50 (PpmGetThroughputInfoCallback.c)
 *     PpmResetPerfTimes @ 0x14044063C (PpmResetPerfTimes.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x14047A520 (PpmCapturePerformanceDistributionCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmUpdatePerformanceFeedback @ 0x14036EAB0 (PpmUpdatePerformanceFeedback.c)
 *     PpmGetIdleGenerationCounter @ 0x14036F500 (PpmGetIdleGenerationCounter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        LARGE_INTEGER *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        LARGE_INTEGER *a6)
{
  LARGE_INTEGER v6; // r12
  unsigned __int8 v7; // r15
  signed __int64 v9; // rbp
  LARGE_INTEGER PerformanceCounter; // r13
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  LARGE_INTEGER v17; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  LARGE_INTEGER *v20; // rdi
  char result; // al
  LARGE_INTEGER v22; // r8
  LARGE_INTEGER v23; // r9
  __int64 v24; // rax
  signed __int64 QuadPart; // rax
  signed __int64 v26; // rtt
  LARGE_INTEGER v27; // rax
  unsigned int LowPart; // r15d
  unsigned int v29; // edi
  unsigned int i; // r11d
  unsigned int v31; // r9d
  unsigned int v32; // r10d
  __int64 v33; // rcx
  __int64 v34; // r8
  signed __int32 v35; // eax
  signed __int32 v36; // ett
  __int128 v40; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+50h] [rbp-48h]

  v6.QuadPart = 0LL;
  v7 = a3;
  v41 = 0LL;
  v9 = 0LL;
  v40 = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    _m_prefetchw(&a1[4364]);
    QuadPart = a1[4364].QuadPart;
    do
    {
      v26 = QuadPart;
      QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[4364], QuadPart, QuadPart);
    }
    while ( v26 != QuadPart );
    v9 = QuadPart;
    if ( (QuadPart & 1) == 0 )
      return 0;
    if ( QuadPart )
    {
      if ( a1[4388].LowPart == 3 )
      {
        v27 = a1[4474];
        v9 = *(_QWORD *)(v27.QuadPart + 8LL * DWORD2(xmmword_140E3EE10)) >> 1;
        if ( (*(_QWORD *)(v27.QuadPart + 8LL * DWORD2(xmmword_140E3EE10)) & 1) == 0 )
          return 0;
      }
    }
    if ( !v9 )
      return 0;
  }
  else
  {
    _disable();
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v11 = __rdtsc();
    if ( (a1[4596].QuadPart & 0x8000000000LL) != 0 )
      v12 = __readmsr(0xDB2u);
    else
      v12 = 0LL;
    v13 = PerformanceCounter.QuadPart - a1[4375].QuadPart;
    _InterlockedAdd64((volatile signed __int64 *)&a1[4377], v13);
    if ( (a1[4596].QuadPart & 0x8000000000LL) != 0 )
    {
      v14 = v12 - a1[4385].QuadPart;
      v15 = v11 - a1[4371].QuadPart;
      if ( v13 && v15 && v15 != v14 )
      {
        if ( is_mul_ok(v13, v14) )
          v16 = v13 * (unsigned __int128)v14 / v15;
        else
          v16 = v14 * (v13 % v15) / v15 + v14 * (v13 / v15);
      }
      else
      {
        v16 = v13;
      }
      a1[4386].QuadPart += v16;
    }
    v17 = a1[4371];
    a1[4375] = PerformanceCounter;
    if ( v11 > v17.QuadPart )
      a1[4372].QuadPart += v11 - v17.QuadPart;
    a1[4371].QuadPart = v11;
    if ( (a1[4596].QuadPart & 0x8000000000LL) != 0 )
      a1[4385].QuadPart = v12;
  }
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  if ( a6 )
  {
    LowPart = a6[6].LowPart;
    memset_0(a6, 0, (int)(112 * LowPart + 56));
    a6[6].LowPart = LowPart;
    v29 = 0;
    a6[1].QuadPart = a1[4309].QuadPart + a1[4335].QuadPart;
    a6[2] = a1[4305];
    a6[3] = a1[4306];
    a6[4] = a1[4307];
    a6[5] = a1[4308];
    do
    {
      for ( i = 0; i < 2; ++i )
      {
        v31 = 0;
        if ( LowPart )
        {
          v32 = i + 2 * v29;
          do
          {
            v33 = v31 + KiHgsPlusConfiguration * v32;
            v34 = v31 + a6[6].LowPart * v32;
            ++v31;
            a6[v34 + 7] = *(LARGE_INTEGER *)(a1[4310].QuadPart + 8 * v33);
          }
          while ( v31 < LowPart );
        }
      }
      ++v29;
    }
    while ( v29 < 7 );
    v7 = a3;
  }
  if ( !v7 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v35 = *SchedulerAssist;
      do
      {
        v36 = v35;
        v35 = _InterlockedCompareExchange(SchedulerAssist, v35 & 0xFFDFFFFF, v35);
      }
      while ( v36 != v35 );
      if ( (v35 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  v20 = (LARGE_INTEGER *)&v40;
  if ( a1[4388].LowPart != 3 )
    v20 = 0LL;
  result = PpmUpdatePerformanceFeedback((_DWORD)a1, a2, v7, 0, (__int64)v20);
  if ( result )
  {
    if ( a4 && PopSnapEnergyCounters )
      guard_dispatch_icall_no_overrides((unsigned int)a1[4].HighPart, v7);
    if ( v20 )
    {
      PerformanceCounter = *v20;
      v22 = v20[1];
      v23 = v20[2];
    }
    else
    {
      v6 = a1[4365];
      if ( PerformanceCounter.QuadPart <= (unsigned __int64)v6.QuadPart )
        PerformanceCounter = a1[4365];
      v22 = a1[4363];
      v23 = a1[4372];
    }
    if ( a1[4373].QuadPart )
    {
      v24 = a1[4378].QuadPart;
    }
    else if ( a1[4374].QuadPart )
    {
      v24 = a1[4379].QuadPart;
    }
    else
    {
      v24 = 100 * a1[4376].QuadPart;
    }
    *(_QWORD *)(a5 + 24) = v24;
    if ( a1[4374].QuadPart )
      v24 = a1[4379].QuadPart;
    *(_QWORD *)(a5 + 32) = v24;
    *(LARGE_INTEGER *)(a5 + 40) = a1[4381];
    *(LARGE_INTEGER *)(a5 + 16) = a1[4386];
    *(_DWORD *)(a5 + 48) = a1[1803].HighPart;
    if ( !v7 )
    {
      if ( !v20 )
        v22.QuadPart += a1[4362].QuadPart;
      goto LABEL_48;
    }
    if ( v9 == PpmGetIdleGenerationCounter(a1) )
    {
      if ( !v20 )
        v22.QuadPart += PerformanceCounter.QuadPart - v6.QuadPart;
LABEL_48:
      *(LARGE_INTEGER *)a5 = PerformanceCounter;
      *(_QWORD *)(a5 + 8) = PerformanceCounter.QuadPart - v22.QuadPart;
      if ( a6 )
        *a6 = v23;
      return 1;
    }
    return 0;
  }
  return result;
}
