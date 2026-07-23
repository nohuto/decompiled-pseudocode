/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x14036D540
 * Callers:
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x1403ABAF4 (KiCompleteDirectSwitchThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403B4ED0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     KeBoostPriorityThread @ 0x1404DD768 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 *     KiStartDebugAccumulation @ 0x1405BF5FC (KiStartDebugAccumulation.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140369040 (HalRequestSoftwareInterrupt.c)
 *     KiEndCounterAccumulation @ 0x14036AA0C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(struct _KPRCB *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER v6; // r11
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int8 QpcToTscIncrementShift; // cl
  unsigned __int64 QpcToTscIncrement; // rax
  LARGE_INTEGER v12; // rdx
  unsigned __int64 StartCyclesQpc; // r8
  unsigned __int128 v14; // rax
  LARGE_INTEGER v15; // r8
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  char v19; // bp
  __int64 v20; // r13
  unsigned int SelectedPercent; // r15d
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r9
  _PROC_PERF_DOMAIN *Domain; // rcx
  _PROC_PERF_CONSTRAINT *Constraint; // rax
  unsigned int LatestFrequencyPercent; // edx
  unsigned int v30; // r8d
  unsigned __int16 *FrequencyBucketThresholds; // rcx
  unsigned __int8 ArchitecturalEfficiencyClass; // r10
  __int64 v33; // rax
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  int v36; // ecx
  LARGE_INTEGER v37; // rbp
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // r11
  LARGE_INTEGER v41; // rax
  unsigned __int8 v42; // cl
  LARGE_INTEGER v43; // rdx
  unsigned __int64 v44; // rdx
  _PROC_PERF_DOMAIN *v45; // rcx
  _PROC_PERF_CONSTRAINT *v46; // rax
  unsigned int v47; // ecx
  unsigned __int16 *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned int *v52; // r9
  __int64 v53; // r11
  _QWORD *v54; // r10
  bool v55; // zf
  __int64 v57; // rcx
  _QWORD *v58; // rax
  LARGE_INTEGER v59; // r8
  unsigned __int128 v60; // rax
  int v61; // edx
  __int64 v62; // rdx
  __int64 v63; // rax
  char *v64; // rdx
  __int64 v65; // rax
  char *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  int v70; // r9d
  int v71; // ecx
  unsigned int v72; // edx
  __int64 v73; // rcx
  unsigned __int64 v74; // [rsp+30h] [rbp-68h]
  __int64 v75; // [rsp+A8h] [rbp+10h]

  v3 = 0LL;
  a1->NestingLevel = 1;
  v6.QuadPart = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( a1->CycleAccumulationInitialized )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QpcToTscIncrementShift = a1->QpcToTscIncrementShift;
    v6 = PerformanceCounter;
    QpcToTscIncrement = a1->QpcToTscIncrement;
    v12 = v6;
    if ( QpcToTscIncrementShift )
      v12.QuadPart = v6.QuadPart << QpcToTscIncrementShift;
    v8 = (((unsigned __int64)v12.QuadPart * (unsigned __int128)QpcToTscIncrement) >> 64) - a1->StartCycles;
    v7 = ((unsigned __int64)v12.QuadPart * (unsigned __int128)QpcToTscIncrement) >> 64;
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      StartCyclesQpc = a1->StartCyclesQpc;
      if ( MEMORY[0xFFFFF78000000300] )
      {
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v14 = (StartCyclesQpc << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v15.QuadPart = v6.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v14 = StartCyclesQpc * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v15 = v6;
        }
        v16 = ((unsigned __int64)(((((unsigned __int64)v15.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                 * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v14 + 1)
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v16 )
        {
          if ( (*(_DWORD *)(a2 + 116) & 0x400) != 0
            || (((unsigned __int64)v6.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(a2 + 1100)) )
          {
            a1->KernelTime += v16;
            *(_DWORD *)(a2 + 652) += v16;
          }
          else
          {
            a1->UserTime += v16;
            *(_DWORD *)(a2 + 732) += v16;
          }
          if ( (_KTHREAD *)a2 != a1->IdleThread )
          {
            v66 = (char *)(a2 + 195);
            if ( *(char *)(a2 + 195) < 16 )
            {
              if ( *(_QWORD *)(a2 + 104) )
              {
                v67 = *(_QWORD *)(a2 + 104);
                if ( v67 )
                {
                  v68 = v67 + a1->ScbOffset;
                  if ( *v66 < 16 && (*(_DWORD *)(a2 + 120) & 0x200) == 0 )
                  {
                    v69 = v67 + a1->ScbOffset;
                    while ( (*(_BYTE *)(v69 + 112) & 2) == 0 )
                    {
                      v69 = *(_QWORD *)(v69 + 416);
                      if ( !v69 )
                      {
                        do
                        {
                          v70 = *(_DWORD *)(v68 + 124);
                          if ( v70 )
                            break;
                          v68 = *(_QWORD *)(v68 + 416);
                        }
                        while ( v68 );
                        if ( v70 )
                          break;
                        goto LABEL_107;
                      }
                    }
LABEL_109:
                    a1->AvailableTime += v16;
                    goto LABEL_9;
                  }
LABEL_107:
                  v66 = (char *)(a2 + 195);
                }
              }
            }
            if ( *v66 >= 8 )
              goto LABEL_9;
            goto LABEL_109;
          }
        }
      }
    }
  }
LABEL_9:
  a1->StartCyclesQpc = v6.QuadPart;
  a1->StartCycles = v7;
  v17 = v8 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v17;
  v74 = v17;
  if ( (_KTHREAD *)a2 != a1->IdleThread )
  {
    v18 = ((v8 * a1->CpuCycleScalingFactor) >> 16) + *(unsigned int *)(a2 + 80);
    if ( v18 > 0xFFFFFFFF )
      LODWORD(v18) = -1;
    *(_DWORD *)(a2 + 80) = v18;
  }
  v19 = *(_BYTE *)(a2 + 2);
  v20 = 1LL;
  SelectedPercent = 100;
  if ( (v19 & 0xBE) != 0 )
  {
    if ( v19 < 0 )
    {
      v22 = (*(_DWORD *)(*(_QWORD *)(a2 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v23, v22);
      v24 = (*(_DWORD *)(*(_QWORD *)(a2 + 544) + 400LL) >> 4) & 0x1FF;
      v25 = *(_QWORD *)(*((_QWORD *)a1->ExSaPageArray + v23 - 2) + 8LL * (v22 ^ (1 << v23)) + 8);
      *(_QWORD *)(v25 + 8 * v24) += v8;
      v19 &= ~0x80u;
    }
    if ( (v19 & 0x10) != 0 )
    {
      v64 = (char *)a1 + 8 * *(unsigned __int8 *)(a2 + 124);
      *((_QWORD *)v64 + 4305) += v8;
      v19 &= ~0x10u;
    }
    if ( (v19 & 0x20) != 0 )
    {
      v26 = *(_QWORD *)(a2 + 1672);
      if ( v26 )
      {
        Domain = a1->PowerState.CheckContext.Domain;
        Constraint = a1->PowerState.CheckContext.Constraint;
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
        v30 = 0;
        FrequencyBucketThresholds = a1->PowerState.FrequencyBucketThresholds;
        do
        {
          if ( LatestFrequencyPercent <= *FrequencyBucketThresholds )
            break;
          ++v30;
          ++FrequencyBucketThresholds;
        }
        while ( v30 < 3 );
        ArchitecturalEfficiencyClass = a1->PowerState.ArchitecturalEfficiencyClass;
        v33 = v26 + (ArchitecturalEfficiencyClass != 0 ? 8 : 0);
        *(_QWORD *)(v33 + 16LL * v30) += v8;
        v34 = *(_DWORD *)(v26 + 192);
        if ( KiTimelineBitmapTime > v34 )
        {
          LODWORD(v75) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v34 >= 0x20 )
            HIDWORD(v75) = 1;
          else
            HIDWORD(v75) = (*(_DWORD *)(v26 + 196) << (KiTimelineBitmapTime - v34)) | 1;
          *(_QWORD *)(v26 + 192) = v75;
        }
        else
        {
          v35 = v34 - KiTimelineBitmapTime;
          if ( v35 < 0x20 )
            *(_DWORD *)(v26 + 196) |= 1 << v35;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v36 = *(unsigned __int8 *)(a2 + 516);
          if ( ((v36 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v36 == 5 )
            *(_QWORD *)(v26 + 16LL * v30 + 8) += v8;
        }
        if ( *(_QWORD *)(a2 + 1616) )
        {
          v62 = ArchitecturalEfficiencyClass != 0 ? 8 : 0;
          *(_QWORD *)(v62 + v26 + 16 * (v30 + 8LL)) += v8;
          v63 = 64LL;
          if ( ArchitecturalEfficiencyClass )
            v63 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1616) + 1672LL) + v63 + 16LL * v30),
            v8);
        }
      }
      v19 &= ~0x20u;
    }
    if ( (v19 & 0x40) != 0 )
    {
      v65 = *(_QWORD *)(a2 + 968);
      if ( v65 )
        *(_BYTE *)(v65 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, a2, v8, 0);
    if ( a1->CyclesByThreadType && *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess && *(unsigned __int8 *)(a2 + 516) < 7u )
    {
      v71 = 0;
      v72 = *(_DWORD *)(a2 + 80);
      if ( v72 <= *(_DWORD *)(a2 + 84) )
        v72 = *(_DWORD *)(a2 + 84);
      LOBYTE(v71) = v72 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v73 = *(unsigned __int8 *)(a2 + 517)
          + KiHgsPlusConfiguration * (v71 + 2 * (unsigned int)*(unsigned __int8 *)(a2 + 516));
      a1->CyclesByThreadType[v73] += v8;
    }
    if ( (v19 & 0xBE) != 0 )
    {
      v57 = *(_QWORD *)(a2 + 104);
      if ( v57 )
      {
        v58 = (_QWORD *)(v57 + a1->ScbOffset);
        do
        {
          *v58 += v8;
          v58 = (_QWORD *)v58[52];
        }
        while ( v58 );
      }
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0
        && *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess
        && (*(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * a1->SchedulerSubNode->Affinity.Group + 8) & a1->SchedulerSubNode->Affinity.Mask) != a1->SchedulerSubNode->Affinity.Mask )
      {
        a1->AffinitizedCycles += v8;
      }
      if ( *(_QWORD *)(a2 + 360) )
        KiEndCounterAccumulation(a2);
    }
  }
  if ( a3 )
    *a3 = v7;
  v37.QuadPart = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( a1->CycleAccumulationInitialized )
  {
    v41 = KeQueryPerformanceCounter(0LL);
    v42 = a1->QpcToTscIncrementShift;
    v37 = v41;
    v43 = v41;
    if ( v42 )
      v43.QuadPart = v41.QuadPart << v42;
    v38 = ((unsigned __int64)v43.QuadPart * (unsigned __int128)a1->QpcToTscIncrement) >> 64;
    v44 = a1->StartCyclesQpc;
    v40 = v38 - a1->StartCycles;
    v39 = v41.QuadPart - v44;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v59 = v41;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v60 = (v44 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v59.QuadPart = v37.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v60 = v44 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v61 = ((unsigned __int64)(((((unsigned __int64)v59.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                               * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v60 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v61 )
      {
        a1->KernelTime += v61;
        a1->InterruptTime += v61;
      }
    }
  }
  a1->CycleTimeQpc += v39;
  a1->CycleTime += v40;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    v45 = a1->PowerState.CheckContext.Domain;
    v46 = a1->PowerState.CheckContext.Constraint;
    if ( v45 && v46 )
    {
      if ( v46->Selection.Autonomous )
      {
        SelectedPercent = v46->LatestFrequencyPercent;
      }
      else
      {
        SelectedPercent = v46->Selection.SelectedPercent;
        if ( SelectedPercent >= v45->GuaranteedPercent )
          SelectedPercent = v45->GuaranteedPercent;
      }
    }
    v47 = 0;
    v48 = a1->PowerState.FrequencyBucketThresholds;
    do
    {
      if ( SelectedPercent <= *v48 )
        break;
      ++v47;
      ++v48;
    }
    while ( v47 < 3 );
    LOBYTE(v3) = a1->PowerState.ArchitecturalEfficiencyClass != 0;
    a1->Cycles[v47][v3] += v40;
  }
  if ( (*(_BYTE *)(a2 + 2) & 0x40) != 0 )
  {
    v49 = *(_QWORD *)(a2 + 968);
    if ( v49 )
      *(_BYTE *)(v49 + 64) = 1;
  }
  a1->StartCyclesQpc = v37.QuadPart;
  a1->StartCycles = v38;
  if ( (*(_BYTE *)(a2 + 2) & 2) != 0 )
  {
    v50 = *(_QWORD *)(a2 + 360);
    v51 = *(_QWORD *)(v50 + 32);
    if ( v51 )
    {
      if ( KiHwCountersCount )
      {
        v52 = (unsigned int *)&KiHwCounters;
        v53 = (unsigned int)KiHwCountersCount;
        v54 = (_QWORD *)(v50 + 48);
        do
        {
          if ( (v51 & v20) != 0 )
            *v54 = __readpmc(*v52);
          v20 *= 2LL;
          v54 += 3;
          ++v52;
          --v53;
        }
        while ( v53 );
      }
    }
  }
  v55 = a1->InterruptRequest == 0;
  a1->NestingLevel = 0;
  if ( !v55 )
  {
    a1->InterruptRequest = 0;
    HalRequestSoftwareInterrupt(2);
  }
  return v74;
}
