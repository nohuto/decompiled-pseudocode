/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x14031BF40
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1403B0220 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x1403ECADC (PpmResetPerfTimes.c)
 *     PpmGetThroughputInfoCallback @ 0x140460040 (PpmGetThroughputInfoCallback.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x14047EC50 (PpmCapturePerformanceDistributionCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PpmUpdatePerformanceFeedback @ 0x14031C3F0 (PpmUpdatePerformanceFeedback.c)
 *     PpmGetIdleGenerationCounter @ 0x1403E9B8C (PpmGetIdleGenerationCounter.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        LARGE_INTEGER *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        LARGE_INTEGER *a6)
{
  LARGE_INTEGER v6; // rbp
  unsigned __int8 v8; // r15
  LARGE_INTEGER PerformanceCounter; // r12
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
  __int64 v22; // r8
  LARGE_INTEGER v23; // r9
  LARGE_INTEGER v24; // r10
  __int64 v25; // rax
  signed __int64 QuadPart; // rax
  signed __int64 v27; // rtt
  signed __int64 v28; // rdi
  LARGE_INTEGER v29; // rax
  unsigned int LowPart; // r15d
  unsigned int v31; // edi
  unsigned int i; // r11d
  unsigned int v33; // r9d
  unsigned int v34; // r10d
  __int64 v35; // rcx
  __int64 v36; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  signed __int64 v41; // [rsp+38h] [rbp-70h]
  __int128 v42; // [rsp+48h] [rbp-60h] BYREF
  __int64 v43; // [rsp+58h] [rbp-50h]

  v6.QuadPart = 0LL;
  v43 = 0LL;
  v8 = a2;
  v41 = 0LL;
  v42 = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    _m_prefetchw(&a1[4364]);
    QuadPart = a1[4364].QuadPart;
    do
    {
      v27 = QuadPart;
      QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[4364], QuadPart, QuadPart);
    }
    while ( v27 != QuadPart );
    v41 = QuadPart;
    v28 = QuadPart;
    if ( (QuadPart & 1) == 0 )
      return 0;
    if ( QuadPart )
    {
      if ( a1[4388].LowPart == 3 )
      {
        v29 = a1[4474];
        v28 = *(_QWORD *)(v29.QuadPart + 8LL * DWORD2(xmmword_140E3EA90)) >> 1;
        v41 = v28;
        if ( (*(_QWORD *)(v29.QuadPart + 8LL * DWORD2(xmmword_140E3EA90)) & 1) == 0 )
          return 0;
      }
    }
    if ( !v28 )
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
    v31 = 0;
    a6[1].QuadPart = a1[4309].QuadPart + a1[4335].QuadPart;
    a6[2] = a1[4305];
    a6[3] = a1[4306];
    a6[4] = a1[4307];
    a6[5] = a1[4308];
    do
    {
      for ( i = 0; i < 2; ++i )
      {
        v33 = 0;
        if ( LowPart )
        {
          v34 = i + 2 * v31;
          do
          {
            v35 = v33 + KiHgsPlusConfiguration * v34;
            v36 = v33 + a6[6].LowPart * v34;
            ++v33;
            a6[v36 + 7] = *(LARGE_INTEGER *)(a1[4310].QuadPart + 8 * v35);
          }
          while ( v33 < LowPart );
        }
      }
      ++v31;
    }
    while ( v31 < 7 );
    v8 = a2;
  }
  if ( !a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v37 = *SchedulerAssist;
      do
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange(SchedulerAssist, v37 & 0xFFDFFFFF, v37);
      }
      while ( v38 != v37 );
      if ( (v37 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  v20 = (LARGE_INTEGER *)&v42;
  if ( a1[4388].LowPart != 3 )
    v20 = 0LL;
  result = PpmUpdatePerformanceFeedback((_DWORD)a1, v8, a3, 0, (__int64)v20);
  if ( result )
  {
    if ( a4 && PopSnapEnergyCounters )
      guard_dispatch_icall_no_overrides((unsigned int)a1[4].HighPart, a3);
    if ( v20 )
    {
      PerformanceCounter = *v20;
      v23 = v20[1];
      v24 = v20[2];
    }
    else
    {
      v6 = a1[4365];
      if ( PerformanceCounter.QuadPart <= (unsigned __int64)v6.QuadPart )
        PerformanceCounter = a1[4365];
      v23 = a1[4363];
      v24 = a1[4372];
    }
    if ( a1[4373].QuadPart )
    {
      v25 = a1[4378].QuadPart;
    }
    else if ( a1[4374].QuadPart )
    {
      v25 = a1[4379].QuadPart;
    }
    else
    {
      v25 = 100 * a1[4376].QuadPart;
    }
    *(_QWORD *)(a5 + 24) = v25;
    if ( a1[4374].QuadPart )
      v25 = a1[4379].QuadPart;
    *(_QWORD *)(a5 + 32) = v25;
    *(LARGE_INTEGER *)(a5 + 40) = a1[4381];
    *(LARGE_INTEGER *)(a5 + 16) = a1[4386];
    *(_DWORD *)(a5 + 48) = a1[1803].HighPart;
    if ( !a3 )
    {
      if ( !v20 )
        v23.QuadPart += a1[4362].QuadPart;
LABEL_35:
      *(LARGE_INTEGER *)a5 = PerformanceCounter;
      *(_QWORD *)(a5 + 8) = PerformanceCounter.QuadPart - v23.QuadPart;
      if ( a6 )
        *a6 = v24;
      return 1;
    }
    if ( v41 == ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PpmGetIdleGenerationCounter)(
                  a1,
                  a5,
                  v22,
                  (LARGE_INTEGER)v23.QuadPart) )
    {
      if ( !v20 )
        v23.QuadPart += PerformanceCounter.QuadPart - v6.QuadPart;
      goto LABEL_35;
    }
    return 0;
  }
  return result;
}
