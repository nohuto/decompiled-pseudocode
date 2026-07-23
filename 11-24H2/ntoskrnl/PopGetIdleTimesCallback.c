/*
 * XREFs of PopGetIdleTimesCallback @ 0x14036F8B0
 * Callers:
 *     PoGetIdleTimes @ 0x14036F560 (PoGetIdleTimes.c)
 *     PopExecuteProcessorCallback @ 0x140370490 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmUpdatePerformanceFeedback @ 0x14036EAB0 (PpmUpdatePerformanceFeedback.c)
 *     PpmConvertTimeTo @ 0x140370A00 (PpmConvertTimeTo.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  signed __int64 *p_IdleSequenceNumber; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // r13
  int v10; // r12d
  LARGE_INTEGER PerformanceCounter; // rbp
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r10
  unsigned __int64 CyclesLast; // rcx
  unsigned __int64 StallTime; // r8
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  unsigned __int64 v21; // rbp
  ULONG v22; // r8d
  unsigned int v23; // r9d
  _PPM_IDLE_STATES *v25; // r11
  unsigned int i; // r10d
  unsigned int StateCount; // ecx
  int StateType; // ecx
  _DWORD *v29; // rdx
  _QWORD *v30; // r8
  unsigned __int64 TotalTime; // r9
  int v32; // eax
  int v33; // eax
  int v34; // eax
  signed __int64 v35; // [rsp+30h] [rbp-88h]
  _QWORD *v36; // [rsp+38h] [rbp-80h]
  _DWORD *v37; // [rsp+40h] [rbp-78h]
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // [rsp+48h] [rbp-70h]
  _PPM_IDLE_STATES *IdleStates; // [rsp+50h] [rbp-68h]
  unsigned __int64 IdleTimeEntry; // [rsp+58h] [rbp-60h]
  ULONG SpareLong0; // [rsp+C0h] [rbp+8h]
  unsigned int KernelTime; // [rsp+D8h] [rbp+20h]

  p_IdleSequenceNumber = (signed __int64 *)&a1->PowerState.IdleSequenceNumber;
  if ( KeGetCurrentPrcb() == a1 )
  {
    v10 = 0;
    v35 = 0LL;
    v9 = 0LL;
    IdleTimeEntry = 0LL;
  }
  else
  {
    _m_prefetchw(p_IdleSequenceNumber);
    v7 = *p_IdleSequenceNumber;
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(p_IdleSequenceNumber, v7, v7);
    }
    while ( v8 != v7 );
    v35 = v7;
    v9 = v7;
    if ( (v7 & 1) == 0 )
      return 3221225473LL;
    v10 = 1;
    IdleTimeEntry = a1->PowerState.IdleTimeEntry;
  }
  IdleAccounting = a1->PowerState.IdleAccounting;
  IdleStates = a1->PowerState.IdleStates;
  v36 = 0LL;
  v37 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KernelTime = a1->KernelTime;
  SpareLong0 = a1->IdleThread->SchedulerApc.SpareLong0;
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    if ( IdleAccounting )
    {
      v25 = IdleStates;
      if ( IdleStates )
      {
        for ( i = 0; ; ++i )
        {
          StateCount = IdleAccounting->StateCount;
          if ( IdleAccounting->StateCount >= v25->ProcessorIdleCount )
            StateCount = v25->ProcessorIdleCount;
          if ( i >= StateCount )
          {
            v9 = v35;
            *(_QWORD *)a2 = PpmConvertTimeTo(IdleAccounting->PriorIdleTime, 10000000LL);
            goto LABEL_8;
          }
          StateType = v25->State[i].StateType;
          if ( StateType == 1 )
          {
LABEL_59:
            v29 = (_DWORD *)(a2 + 32);
            v30 = (_QWORD *)(a2 + 8);
            goto LABEL_60;
          }
          if ( v25->State[i].StateType )
            break;
          if ( i )
          {
            if ( i == 1 )
              v32 = 2;
            else
              v32 = 3;
          }
          else
          {
            v32 = 1;
          }
          v33 = v32 - 1;
          if ( !v33 )
            goto LABEL_59;
          v34 = v33 - 1;
          if ( !v34 )
            goto LABEL_92;
          if ( v34 == 1 )
            goto LABEL_89;
          v29 = 0LL;
          v30 = 0LL;
LABEL_60:
          if ( i == v25->ActualState )
          {
            v36 = v30;
            v37 = v29;
          }
          if ( v29 && v30 )
          {
            *v29 += IdleAccounting->State[i].FailureCount + IdleAccounting->State[i].SuccessCount;
            TotalTime = IdleAccounting->State[i].TotalTime;
            if ( v25->ActualState == i )
              TotalTime += a1->PowerState.IdleTimeLast;
            if ( TotalTime && PopQpcFrequency && PopQpcFrequency != 10000000 )
            {
              if ( is_mul_ok(TotalTime, 0x989680uLL) )
                TotalTime = TotalTime * (unsigned __int128)0x989680uLL / PopQpcFrequency;
              else
                TotalTime = 10000000 * (TotalTime / PopQpcFrequency)
                          + 10000000 * (TotalTime % PopQpcFrequency) / PopQpcFrequency;
            }
            *v30 += TotalTime;
            v25 = IdleStates;
          }
        }
        if ( StateType != 2 )
        {
LABEL_89:
          v29 = (_DWORD *)(a2 + 40);
          v30 = (_QWORD *)(a2 + 24);
          goto LABEL_60;
        }
LABEL_92:
        v29 = (_DWORD *)(a2 + 36);
        v30 = (_QWORD *)(a2 + 16);
        goto LABEL_60;
      }
    }
  }
LABEL_8:
  if ( a3 )
  {
    if ( !v10 )
    {
      v12 = __rdtsc();
      if ( (a1->FeatureBits & 0x8000000000LL) != 0 )
        v13 = __readmsr(0xDB2u);
      else
        v13 = 0LL;
      v14 = PerformanceCounter.QuadPart - a1->PowerState.PerfFeedback.LastUpdateTime;
      _InterlockedAdd64(&a1->PowerState.PerfFeedback.UnaccountedTime, v14);
      if ( (a1->FeatureBits & 0x8000000000LL) != 0 )
      {
        v15 = v13 - a1->PowerState.PerfFeedback.StallCyclesLast;
        v16 = v12 - a1->PowerState.PerfFeedback.CyclesLast;
        if ( v14 && v16 && v16 != v15 )
        {
          if ( is_mul_ok(v14, v15) )
            v14 = v14 * (unsigned __int128)v15 / v16;
          else
            v14 = v15 * (v14 / v16) + v15 * (v14 % v16) / v16;
        }
        a1->PowerState.PerfFeedback.StallTime += v14;
      }
      CyclesLast = a1->PowerState.PerfFeedback.CyclesLast;
      a1->PowerState.PerfFeedback.LastUpdateTime = PerformanceCounter.QuadPart;
      if ( v12 > CyclesLast )
        a1->PowerState.PerfFeedback.CyclesActive += v12 - CyclesLast;
      a1->PowerState.PerfFeedback.CyclesLast = v12;
      if ( (a1->FeatureBits & 0x8000000000LL) != 0 )
        a1->PowerState.PerfFeedback.StallCyclesLast = v13;
      PpmUpdatePerformanceFeedback((__int64)a1, 0, 0, 0, 0LL);
      v9 = v35;
    }
    StallTime = a1->PowerState.PerfFeedback.StallTime;
    if ( StallTime && PopQpcFrequency && PopQpcFrequency != 10000000 )
    {
      if ( is_mul_ok(StallTime, 0x989680uLL) )
        StallTime = StallTime * (unsigned __int128)0x989680uLL / PopQpcFrequency;
      else
        StallTime = 10000000 * (StallTime / PopQpcFrequency)
                  + 10000000 * (StallTime % PopQpcFrequency) / PopQpcFrequency;
    }
    *(_QWORD *)(a3 + 8) = StallTime;
  }
  if ( !v10 )
    goto LABEL_51;
  _m_prefetchw(p_IdleSequenceNumber);
  v19 = *p_IdleSequenceNumber;
  do
  {
    v20 = v19;
    v19 = _InterlockedCompareExchange64(p_IdleSequenceNumber, v19, v19);
  }
  while ( v20 != v19 );
  if ( v9 != v19 )
    return 3221225473LL;
  if ( PerformanceCounter.QuadPart > IdleTimeEntry )
  {
    v21 = PerformanceCounter.QuadPart - IdleTimeEntry;
    if ( v21 && PopQpcFrequency && PopQpcFrequency != 10000000 )
    {
      if ( is_mul_ok(v21, 0x989680uLL) )
        v21 = v21 * (unsigned __int128)0x989680uLL / PopQpcFrequency;
      else
        v21 = 10000000 * (v21 / PopQpcFrequency) + 10000000 * (v21 % PopQpcFrequency) / PopQpcFrequency;
    }
    if ( v36 && v37 )
    {
      ++*v37;
      *v36 += v21;
    }
    v22 = SpareLong0;
    v23 = KernelTime;
    if ( v21 > KeMaximumIncrement )
    {
      v22 = v21 / KeMaximumIncrement + SpareLong0 - 1;
      v23 = v21 / KeMaximumIncrement + KernelTime - 1;
    }
  }
  else
  {
LABEL_51:
    v23 = KernelTime;
    v22 = SpareLong0;
  }
  if ( a2 )
  {
    if ( IdleAccounting && IdleStates )
      *(_QWORD *)a2 += *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24);
    else
      *(_QWORD *)a2 = v22 * (unsigned __int64)KeMaximumIncrement;
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v22;
    *(_DWORD *)(a3 + 4) = v23;
  }
  return 0LL;
}
