/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x14028E760
 * Callers:
 *     PsQueryTotalCycleTimeProcess @ 0x140A152C0 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x140AB1C34 (KeEnableProfiling.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KiEndCounterAccumulation @ 0x14028E688 (KiEndCounterAccumulation.c)
 *     HalRequestSoftwareInterrupt @ 0x14028F270 (HalRequestSoftwareInterrupt.c)
 *     KiQueryEffectivePriorityThread @ 0x1403188E0 (KiQueryEffectivePriorityThread.c)
 *     PoGetFrequencyBucket @ 0x14031A790 (PoGetFrequencyBucket.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(
        unsigned __int64 QpcToTscIncrementShift,
        unsigned __int64 *a2)
{
  __int64 v3; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rdi
  LARGE_INTEGER v6; // rbp
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 QpcToTscIncrement; // rax
  LARGE_INTEGER v11; // rdx
  unsigned __int64 StartCyclesQpc; // rdx
  LARGE_INTEGER v13; // r8
  unsigned __int128 v14; // rax
  int v15; // r12d
  unsigned __int64 v16; // rax
  char v17; // bp
  __int64 v18; // r12
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // rdx
  LARGE_INTEGER v24; // rbp
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // r11
  LARGE_INTEGER v28; // rax
  LARGE_INTEGER v29; // rdx
  unsigned __int64 v30; // rdx
  _PROC_PERF_DOMAIN *Domain; // rax
  _PROC_PERF_CONSTRAINT *Constraint; // r8
  unsigned int LatestFrequencyPercent; // r8d
  unsigned int v34; // ecx
  unsigned __int16 *FrequencyBucketThresholds; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r11
  unsigned int *v40; // r8
  _QWORD *v41; // r9
  __int64 v42; // r10
  bool v43; // zf
  struct _KPRCB *v44; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned int FrequencyBucket; // eax
  __int64 v48; // r9
  unsigned __int8 ArchitecturalEfficiencyClass; // r11
  __int64 v50; // r10
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int v54; // eax
  LARGE_INTEGER v55; // r8
  unsigned __int128 v56; // rax
  int v57; // edx
  _QWORD *v58; // rax
  signed __int32 v59; // eax
  signed __int32 v60; // ett
  __int64 v61; // rdx
  __int64 v62; // rax
  char *v63; // rdx
  __int64 v64; // rax
  unsigned int v65; // edx
  int v66; // ecx
  unsigned int v67; // edx
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // r8
  __int64 v69; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v70; // [rsp+B0h] [rbp+18h]

  v3 = QpcToTscIncrementShift;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0LL;
  v6.QuadPart = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  CurrentPrcb->NestingLevel = 1;
  if ( CurrentPrcb->CycleAccumulationInitialized )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QpcToTscIncrementShift = CurrentPrcb->QpcToTscIncrementShift;
    v6 = PerformanceCounter;
    QpcToTscIncrement = CurrentPrcb->QpcToTscIncrement;
    v11 = v6;
    if ( (_BYTE)QpcToTscIncrementShift )
      v11.QuadPart = v6.QuadPart << QpcToTscIncrementShift;
    v8 = (((unsigned __int64)v11.QuadPart * (unsigned __int128)QpcToTscIncrement) >> 64) - CurrentPrcb->StartCycles;
    v7 = ((unsigned __int64)v11.QuadPart * (unsigned __int128)QpcToTscIncrement) >> 64;
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      StartCyclesQpc = CurrentPrcb->StartCyclesQpc;
      if ( MEMORY[0xFFFFF78000000300] )
      {
        v13 = v6;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v14 = (StartCyclesQpc << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v13.QuadPart = v6.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v14 = StartCyclesQpc * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        }
        QpcToTscIncrementShift = (unsigned int)KiMaximumIncrementShiftCount;
        v15 = ((unsigned __int64)(((((unsigned __int64)v13.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                 * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v14 + 1)
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v15 )
        {
          if ( (*(_DWORD *)(v3 + 116) & 0x400) != 0
            || (((unsigned __int64)v6.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(v3 + 1100)) )
          {
            CurrentPrcb->KernelTime += v15;
            *(_DWORD *)(v3 + 652) += v15;
          }
          else
          {
            CurrentPrcb->UserTime += v15;
            *(_DWORD *)(v3 + 732) += v15;
          }
          if ( (_KTHREAD *)v3 != CurrentPrcb->IdleThread && (int)KiQueryEffectivePriorityThread(v3, CurrentPrcb) < 8 )
            CurrentPrcb->AvailableTime += v15;
        }
      }
    }
  }
  CurrentPrcb->StartCyclesQpc = v6.QuadPart;
  CurrentPrcb->StartCycles = v7;
  v16 = v8 + *(_QWORD *)(v3 + 72);
  *(_QWORD *)(v3 + 72) = v16;
  v70 = v16;
  if ( (_KTHREAD *)v3 != CurrentPrcb->IdleThread )
  {
    QpcToTscIncrementShift = ((v8 * CurrentPrcb->CpuCycleScalingFactor) >> 16) + *(unsigned int *)(v3 + 80);
    if ( QpcToTscIncrementShift > 0xFFFFFFFF )
      QpcToTscIncrementShift = 0xFFFFFFFFLL;
    *(_DWORD *)(v3 + 80) = QpcToTscIncrementShift;
  }
  v17 = *(_BYTE *)(v3 + 2);
  v18 = 1LL;
  if ( (v17 & 0xBE) != 0 )
  {
    if ( v17 < 0 )
    {
      v19 = (*(_DWORD *)(*(_QWORD *)(v3 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v20, v19);
      v21 = (*(_DWORD *)(*(_QWORD *)(v3 + 544) + 400LL) >> 4) & 0x1FF;
      v22 = 1 << v20;
      QpcToTscIncrementShift = *((_QWORD *)CurrentPrcb->ExSaPageArray + v20 - 2);
      v23 = *(_QWORD *)(QpcToTscIncrementShift + 8LL * (v19 ^ v22) + 8);
      *(_QWORD *)(v23 + 8 * v21) += v8;
      v17 &= ~0x80u;
    }
    if ( (v17 & 0x10) != 0 )
    {
      v63 = (char *)CurrentPrcb + 8 * *(unsigned __int8 *)(v3 + 124);
      QpcToTscIncrementShift = v8 + *((_QWORD *)v63 + 4305);
      *((_QWORD *)v63 + 4305) = QpcToTscIncrementShift;
      v17 &= ~0x10u;
    }
    if ( (v17 & 0x20) != 0 )
    {
      if ( *(_QWORD *)(v3 + 1672) )
      {
        FrequencyBucket = PoGetFrequencyBucket(CurrentPrcb);
        ArchitecturalEfficiencyClass = CurrentPrcb->PowerState.ArchitecturalEfficiencyClass;
        v50 = FrequencyBucket;
        v51 = 2LL * FrequencyBucket;
        v52 = v48 + (ArchitecturalEfficiencyClass != 0 ? 8 : 0);
        v53 = *(_QWORD *)(v52 + 16LL * FrequencyBucket);
        v54 = KiTimelineBitmapTime;
        *(_QWORD *)(v52 + 8 * v51) = v8 + v53;
        QpcToTscIncrementShift = *(unsigned int *)(v48 + 192);
        if ( v54 > (unsigned int)QpcToTscIncrementShift )
        {
          LODWORD(v69) = v54;
          v65 = v54 - QpcToTscIncrementShift;
          if ( v54 - (unsigned int)QpcToTscIncrementShift >= 0x20 )
          {
            HIDWORD(v69) = 1;
          }
          else
          {
            QpcToTscIncrementShift = v65;
            HIDWORD(v69) = (*(_DWORD *)(v48 + 196) << v65) | 1;
          }
          *(_QWORD *)(v48 + 192) = v69;
        }
        else
        {
          QpcToTscIncrementShift = (unsigned int)QpcToTscIncrementShift - v54;
          if ( (unsigned int)QpcToTscIncrementShift < 0x20 )
            *(_DWORD *)(v48 + 196) |= 1 << QpcToTscIncrementShift;
        }
        if ( !KiEfficiencyClassSystem )
        {
          QpcToTscIncrementShift = *(unsigned __int8 *)(v3 + 516);
          if ( (((_DWORD)QpcToTscIncrementShift - 2) & 0xFFFFFFFB) == 0 || (_BYTE)QpcToTscIncrementShift == 5 )
          {
            QpcToTscIncrementShift = v8 + *(_QWORD *)(v48 + 16 * v50 + 8);
            *(_QWORD *)(v48 + 16 * v50 + 8) = QpcToTscIncrementShift;
          }
        }
        if ( *(_QWORD *)(v3 + 1616) )
        {
          v61 = ArchitecturalEfficiencyClass != 0 ? 8 : 0;
          *(_QWORD *)(v61 + v48 + 16 * (v50 + 8)) += v8;
          QpcToTscIncrementShift = *(_QWORD *)(*(_QWORD *)(v3 + 1616) + 1672LL);
          v62 = 64LL;
          if ( ArchitecturalEfficiencyClass )
            v62 = 72LL;
          _InterlockedAdd64((volatile signed __int64 *)(QpcToTscIncrementShift + v62 + 16 * v50), v8);
        }
      }
      v17 &= ~0x20u;
    }
    if ( (v17 & 0x40) != 0 )
    {
      v64 = *(_QWORD *)(v3 + 968);
      if ( v64 )
        *(_BYTE *)(v64 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback((__int64)CurrentPrcb, v3, v8, 0);
    if ( CurrentPrcb->CyclesByThreadType
      && *(_UNKNOWN **)(v3 + 544) != &KiInitialProcess
      && *(unsigned __int8 *)(v3 + 516) < 7u )
    {
      v66 = 0;
      v67 = *(_DWORD *)(v3 + 80);
      if ( v67 <= *(_DWORD *)(v3 + 84) )
        v67 = *(_DWORD *)(v3 + 84);
      LOBYTE(v66) = v67 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      QpcToTscIncrementShift = *(unsigned __int8 *)(v3 + 517)
                             + KiHgsPlusConfiguration * (v66 + 2 * (unsigned int)*(unsigned __int8 *)(v3 + 516));
      CurrentPrcb->CyclesByThreadType[QpcToTscIncrementShift] += v8;
    }
    if ( (v17 & 0xBE) != 0 )
    {
      QpcToTscIncrementShift = *(_QWORD *)(v3 + 104);
      if ( QpcToTscIncrementShift )
      {
        v58 = (_QWORD *)(QpcToTscIncrementShift + CurrentPrcb->ScbOffset);
        do
        {
          *v58 += v8;
          v58 = (_QWORD *)v58[52];
        }
        while ( v58 );
      }
      if ( (*(_BYTE *)(v3 + 2) & 8) != 0 && *(_UNKNOWN **)(v3 + 544) != &KiInitialProcess )
      {
        SchedulerSubNode = CurrentPrcb->SchedulerSubNode;
        QpcToTscIncrementShift = SchedulerSubNode->Affinity.Mask;
        if ( (*(_QWORD *)(*(_QWORD *)(v3 + 576) + 8LL * SchedulerSubNode->Affinity.Group + 8) & QpcToTscIncrementShift) != QpcToTscIncrementShift )
          CurrentPrcb->AffinitizedCycles += v8;
      }
      if ( *(_QWORD *)(v3 + 360) )
        KiEndCounterAccumulation(v3);
    }
  }
  if ( a2 )
    *a2 = v7;
  v24.QuadPart = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( CurrentPrcb->CycleAccumulationInitialized )
  {
    v28 = KeQueryPerformanceCounter(0LL);
    QpcToTscIncrementShift = CurrentPrcb->QpcToTscIncrementShift;
    v24 = v28;
    v29 = v28;
    if ( (_BYTE)QpcToTscIncrementShift )
      v29.QuadPart = v28.QuadPart << QpcToTscIncrementShift;
    v25 = ((unsigned __int64)v29.QuadPart * (unsigned __int128)CurrentPrcb->QpcToTscIncrement) >> 64;
    v30 = CurrentPrcb->StartCyclesQpc;
    v27 = v25 - CurrentPrcb->StartCycles;
    v26 = v28.QuadPart - v30;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v55 = v28;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v56 = (v30 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v55.QuadPart = v24.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v56 = v30 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      QpcToTscIncrementShift = (unsigned int)KiMaximumIncrementShiftCount;
      v57 = ((unsigned __int64)(((((unsigned __int64)v55.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                               * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v56 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v57 )
      {
        CurrentPrcb->KernelTime += v57;
        CurrentPrcb->InterruptTime += v57;
      }
    }
  }
  CurrentPrcb->CycleTimeQpc += v26;
  CurrentPrcb->CycleTime += v27;
  if ( (*(_BYTE *)(v3 + 2) & 0x20) != 0 )
  {
    Domain = CurrentPrcb->PowerState.CheckContext.Domain;
    Constraint = CurrentPrcb->PowerState.CheckContext.Constraint;
    if ( Domain && Constraint )
    {
      if ( Constraint->Selection.Autonomous )
      {
        LatestFrequencyPercent = Constraint->LatestFrequencyPercent;
      }
      else
      {
        LatestFrequencyPercent = Constraint->Selection.SelectedPercent;
        if ( LatestFrequencyPercent >= Domain->GuaranteedPercent )
          LatestFrequencyPercent = Domain->GuaranteedPercent;
      }
    }
    else
    {
      LatestFrequencyPercent = 100;
    }
    v34 = 0;
    FrequencyBucketThresholds = CurrentPrcb->PowerState.FrequencyBucketThresholds;
    do
    {
      if ( LatestFrequencyPercent <= *FrequencyBucketThresholds )
        break;
      ++v34;
      ++FrequencyBucketThresholds;
    }
    while ( v34 < 3 );
    LOBYTE(v5) = CurrentPrcb->PowerState.ArchitecturalEfficiencyClass != 0;
    v36 = v5 + 4336 + 2LL * v34;
    QpcToTscIncrementShift = v27 + *((_QWORD *)&CurrentPrcb->MxCsr + v36);
    *((_QWORD *)&CurrentPrcb->MxCsr + v36) = QpcToTscIncrementShift;
  }
  if ( (*(_BYTE *)(v3 + 2) & 0x40) != 0 )
  {
    v37 = *(_QWORD *)(v3 + 968);
    if ( v37 )
      *(_BYTE *)(v37 + 64) = 1;
  }
  CurrentPrcb->StartCyclesQpc = v24.QuadPart;
  CurrentPrcb->StartCycles = v25;
  if ( (*(_BYTE *)(v3 + 2) & 2) != 0 )
  {
    v38 = *(_QWORD *)(v3 + 360);
    v39 = *(_QWORD *)(v38 + 32);
    if ( v39 )
    {
      if ( KiHwCountersCount )
      {
        v40 = (unsigned int *)&KiHwCounters;
        v41 = (_QWORD *)(v38 + 48);
        v42 = (unsigned int)KiHwCountersCount;
        do
        {
          if ( (v39 & v18) != 0 )
          {
            QpcToTscIncrementShift = *v40;
            *v41 = __readpmc(QpcToTscIncrementShift);
          }
          v18 *= 2LL;
          v41 += 3;
          ++v40;
          --v42;
        }
        while ( v42 );
      }
    }
  }
  v43 = CurrentPrcb->InterruptRequest == 0;
  CurrentPrcb->NestingLevel = 0;
  if ( !v43 )
  {
    LOBYTE(QpcToTscIncrementShift) = 2;
    CurrentPrcb->InterruptRequest = 0;
    HalRequestSoftwareInterrupt(QpcToTscIncrementShift);
  }
  v44 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v44->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v59 = *SchedulerAssist;
    do
    {
      v60 = v59;
      v59 = _InterlockedCompareExchange(SchedulerAssist, v59 & 0xFFDFFFFF, v59);
    }
    while ( v60 != v59 );
    if ( (v59 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v44);
  }
  _enable();
  return v70;
}
