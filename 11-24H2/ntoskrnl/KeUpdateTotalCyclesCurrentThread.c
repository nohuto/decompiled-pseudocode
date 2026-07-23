/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x1403693A0
 * Callers:
 *     PsQueryTotalCycleTimeProcess @ 0x140A150F0 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x140AB0F18 (KeEnableProfiling.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HalRequestSoftwareInterrupt @ 0x140369040 (HalRequestSoftwareInterrupt.c)
 *     KiQueryEffectivePriorityThread @ 0x14036A4C0 (KiQueryEffectivePriorityThread.c)
 *     KiEndCounterAccumulation @ 0x14036AA0C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(_KTHREAD *a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rdi
  LARGE_INTEGER v6; // rbp
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int8 QpcToTscIncrementShift; // cl
  LARGE_INTEGER v11; // rdx
  LARGE_INTEGER v12; // r8
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // r10
  int v15; // r15d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  char Size; // bp
  __int64 v19; // r13
  unsigned int SelectedPercent; // r15d
  unsigned int v21; // ecx
  __int64 v22; // r9
  _DWORD *SparePtr; // r9
  _PROC_PERF_DOMAIN *Domain; // rcx
  _PROC_PERF_CONSTRAINT *Constraint; // rax
  unsigned int LatestFrequencyPercent; // edx
  unsigned int v27; // r8d
  unsigned __int16 *FrequencyBucketThresholds; // rcx
  unsigned __int8 ArchitecturalEfficiencyClass; // r10
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int BamQosLevel; // ecx
  LARGE_INTEGER v33; // rbp
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // r11
  LARGE_INTEGER v37; // rax
  unsigned __int8 v38; // cl
  LARGE_INTEGER v39; // rdx
  unsigned __int64 StartCyclesQpc; // rdx
  _PROC_PERF_DOMAIN *v41; // rcx
  _PROC_PERF_CONSTRAINT *v42; // rax
  unsigned int v43; // ecx
  unsigned __int16 *v44; // rdx
  _BYTE *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // r8
  unsigned int *v48; // r9
  __int64 v49; // r11
  _QWORD *v50; // r10
  bool v51; // zf
  struct _KPRCB *v52; // rcx
  signed __int32 *v53; // r8
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _QWORD *v56; // rax
  LARGE_INTEGER v57; // r8
  unsigned __int128 v58; // rax
  int v59; // edx
  __int64 v60; // rdx
  __int64 v61; // rax
  _BYTE *SchedulerAssist; // rax
  signed __int32 v63; // eax
  signed __int32 v64; // ett
  int v65; // ecx
  __int64 v66; // rcx
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // r8
  unsigned __int64 *v68; // [rsp+A8h] [rbp+10h]
  __int64 v69; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v70; // [rsp+B8h] [rbp+20h]

  *((_QWORD *)&v2 + 1) = a2;
  v68 = (unsigned __int64 *)*((_QWORD *)&v2 + 1);
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
    v11 = PerformanceCounter;
    if ( QpcToTscIncrementShift )
      v11.QuadPart = PerformanceCounter.QuadPart << QpcToTscIncrementShift;
    v2 = (unsigned __int64)v11.QuadPart * (unsigned __int128)CurrentPrcb->QpcToTscIncrement;
    v8 = *((_QWORD *)&v2 + 1) - CurrentPrcb->StartCycles;
    v7 = *((_QWORD *)&v2 + 1);
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      *((_QWORD *)&v2 + 1) = CurrentPrcb->StartCyclesQpc;
      if ( MEMORY[0xFFFFF78000000300] )
      {
        v12 = v6;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v13 = (unsigned __int64)(*((_QWORD *)&v2 + 1) << MEMORY[0xFFFFF78000000369])
              * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v12.QuadPart = v6.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v13 = *((unsigned __int64 *)&v2 + 1) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        }
        v14 = (*((unsigned __int64 *)&v13 + 1) * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
        v2 = (((unsigned __int64)v12.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
           * (unsigned __int64)KiMaximumIncrementReciprocal;
        v15 = (*((_QWORD *)&v2 + 1) >> KiMaximumIncrementShiftCount) - (v14 >> KiMaximumIncrementShiftCount);
        if ( v15 )
        {
          if ( (a1->MiscFlags & 0x400) != 0
            || (*((_QWORD *)&v2 + 1) = __popcnt(a1->ModeHistory),
                (((unsigned __int64)v6.QuadPart >> 4) & 0x1F) >= DWORD2(v2)) )
          {
            CurrentPrcb->KernelTime += v15;
            a1->SchedulerApc.SpareLong0 += v15;
          }
          else
          {
            CurrentPrcb->UserTime += v15;
            a1->UserTime += v15;
          }
          if ( a1 != CurrentPrcb->IdleThread && (int)KiQueryEffectivePriorityThread(a1, CurrentPrcb) < 8 )
            CurrentPrcb->AvailableTime += v15;
        }
      }
    }
  }
  CurrentPrcb->StartCyclesQpc = v6.QuadPart;
  CurrentPrcb->StartCycles = v7;
  v16 = v8 + a1->CycleTime;
  a1->CycleTime = v16;
  v70 = v16;
  if ( a1 != CurrentPrcb->IdleThread )
  {
    v17 = ((v8 * CurrentPrcb->CpuCycleScalingFactor) >> 16) + a1->CurrentRunTime;
    if ( v17 > 0xFFFFFFFF )
      LODWORD(v17) = -1;
    a1->CurrentRunTime = v17;
  }
  Size = a1->Header.Size;
  v19 = 1LL;
  SelectedPercent = 100;
  if ( (Size & 0xBE) != 0 )
  {
    if ( Size < 0 )
    {
      LODWORD(v2) = (LODWORD(a1->Process->PerProcessorCycleTimes) >> 13) & 0x3FFFF;
      _BitScanReverse(&v21, v2);
      v22 = (LODWORD(a1->Process->PerProcessorCycleTimes) >> 4) & 0x1FF;
      *((_QWORD *)&v2 + 1) = *(_QWORD *)(*((_QWORD *)CurrentPrcb->ExSaPageArray + v21 - 2)
                                       + 8LL * ((unsigned int)v2 ^ (1 << v21))
                                       + 8);
      *(_QWORD *)(*((_QWORD *)&v2 + 1) + 8 * v22) += v8;
      Size &= ~0x80u;
    }
    if ( (Size & 0x10) != 0 )
    {
      *((_QWORD *)&v2 + 1) = (char *)CurrentPrcb + 8 * (unsigned __int8)a1->Tag;
      *(_QWORD *)(*((_QWORD *)&v2 + 1) + 34440LL) += v8;
      Size &= ~0x10u;
    }
    if ( (Size & 0x20) != 0 )
    {
      SparePtr = a1[1].WaitBlock[2].SparePtr;
      if ( SparePtr )
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
        v27 = 0;
        FrequencyBucketThresholds = CurrentPrcb->PowerState.FrequencyBucketThresholds;
        do
        {
          if ( LatestFrequencyPercent <= *FrequencyBucketThresholds )
            break;
          ++v27;
          ++FrequencyBucketThresholds;
        }
        while ( v27 < 3 );
        ArchitecturalEfficiencyClass = CurrentPrcb->PowerState.ArchitecturalEfficiencyClass;
        *((_QWORD *)&v2 + 1) = 2LL * v27;
        *(_QWORD *)&v2 = (char *)SparePtr + (ArchitecturalEfficiencyClass != 0 ? 8 : 0);
        *(_QWORD *)(v2 + 16LL * v27) += v8;
        v30 = SparePtr[48];
        if ( KiTimelineBitmapTime > v30 )
        {
          LODWORD(v69) = KiTimelineBitmapTime;
          *((_QWORD *)&v2 + 1) = KiTimelineBitmapTime - v30;
          if ( DWORD2(v2) >= 0x20 )
            HIDWORD(v69) = 1;
          else
            HIDWORD(v69) = (SparePtr[49] << (KiTimelineBitmapTime - v30)) | 1;
          *((_QWORD *)SparePtr + 24) = v69;
        }
        else
        {
          v31 = v30 - KiTimelineBitmapTime;
          if ( v31 < 0x20 )
            SparePtr[49] |= 1 << v31;
        }
        if ( !KiEfficiencyClassSystem )
        {
          BamQosLevel = a1->BamQosLevel;
          if ( ((BamQosLevel - 2) & 0xFFFFFFFB) == 0 || (_BYTE)BamQosLevel == 5 )
          {
            *((_QWORD *)&v2 + 1) = 2LL * v27;
            *(_QWORD *)&SparePtr[4 * v27 + 2] += v8;
          }
        }
        if ( a1[1].WaitBlock[1].Object )
        {
          v60 = ArchitecturalEfficiencyClass != 0 ? 8 : 0;
          *(_QWORD *)((char *)&SparePtr[4 * v27 + 32] + v60) += v8;
          v61 = 64LL;
          if ( ArchitecturalEfficiencyClass )
            v61 = 72LL;
          *((_QWORD *)&v2 + 1) = 2LL * v27;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*((_QWORD *)a1[1].WaitBlock[1].Object + 209) + v61 + 16LL * v27),
            v8);
        }
      }
      Size &= ~0x20u;
    }
    if ( (Size & 0x40) != 0 )
    {
      SchedulerAssist = a1->SchedulerAssist;
      if ( SchedulerAssist )
        SchedulerAssist[64] = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(CurrentPrcb, a1, v8, 0LL);
    if ( CurrentPrcb->CyclesByThreadType && a1->Process != (_KPROCESS *)&KiInitialProcess && a1->BamQosLevel < 7u )
    {
      LODWORD(v2) = a1->ExpectedRunTime;
      v65 = 0;
      *((_QWORD *)&v2 + 1) = a1->CurrentRunTime;
      if ( DWORD2(v2) <= (unsigned int)v2 )
        *((_QWORD *)&v2 + 1) = (unsigned int)v2;
      LOBYTE(v65) = DWORD2(v2) >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v66 = a1->HardwareFeedbackClass + KiHgsPlusConfiguration * (v65 + 2 * (unsigned int)a1->BamQosLevel);
      CurrentPrcb->CyclesByThreadType[v66] += v8;
    }
    if ( (Size & 0xBE) != 0 )
    {
      SchedulingGroup = a1->SchedulingGroup;
      if ( SchedulingGroup )
      {
        v56 = (_QWORD *)((char *)&SchedulingGroup->Policy + CurrentPrcb->ScbOffset);
        do
        {
          *v56 += v8;
          v56 = (_QWORD *)v56[52];
        }
        while ( v56 );
      }
      if ( (a1->Header.Size & 8) != 0 && a1->Process != (_KPROCESS *)&KiInitialProcess )
      {
        SchedulerSubNode = CurrentPrcb->SchedulerSubNode;
        *((_QWORD *)&v2 + 1) = a1->Affinity->Bitmap[SchedulerSubNode->Affinity.Group];
        if ( (*((_QWORD *)&v2 + 1) & SchedulerSubNode->Affinity.Mask) != SchedulerSubNode->Affinity.Mask )
          CurrentPrcb->AffinitizedCycles += v8;
      }
      if ( a1->WaitBlock[0].SparePtr )
        KiEndCounterAccumulation(a1, *((_QWORD *)&v2 + 1));
    }
  }
  if ( v68 )
    *v68 = v7;
  v33.QuadPart = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( CurrentPrcb->CycleAccumulationInitialized )
  {
    v37 = KeQueryPerformanceCounter(0LL);
    v38 = CurrentPrcb->QpcToTscIncrementShift;
    v33 = v37;
    v39 = v37;
    if ( v38 )
      v39.QuadPart = v37.QuadPart << v38;
    v34 = ((unsigned __int64)v39.QuadPart * (unsigned __int128)CurrentPrcb->QpcToTscIncrement) >> 64;
    StartCyclesQpc = CurrentPrcb->StartCyclesQpc;
    v36 = v34 - CurrentPrcb->StartCycles;
    v35 = v37.QuadPart - StartCyclesQpc;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v57 = v37;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v58 = (StartCyclesQpc << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v57.QuadPart = v33.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v58 = StartCyclesQpc * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v59 = ((unsigned __int64)(((((unsigned __int64)v57.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                               * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v58 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v59 )
      {
        CurrentPrcb->KernelTime += v59;
        CurrentPrcb->InterruptTime += v59;
      }
    }
  }
  CurrentPrcb->CycleTimeQpc += v35;
  CurrentPrcb->CycleTime += v36;
  if ( (a1->Header.Size & 0x20) != 0 )
  {
    v41 = CurrentPrcb->PowerState.CheckContext.Domain;
    v42 = CurrentPrcb->PowerState.CheckContext.Constraint;
    if ( v41 && v42 )
    {
      if ( v42->Selection.Autonomous )
      {
        SelectedPercent = v42->LatestFrequencyPercent;
      }
      else
      {
        SelectedPercent = v42->Selection.SelectedPercent;
        if ( SelectedPercent >= v41->GuaranteedPercent )
          SelectedPercent = v41->GuaranteedPercent;
      }
    }
    v43 = 0;
    v44 = CurrentPrcb->PowerState.FrequencyBucketThresholds;
    do
    {
      if ( SelectedPercent <= *v44 )
        break;
      ++v43;
      ++v44;
    }
    while ( v43 < 3 );
    LOBYTE(v5) = CurrentPrcb->PowerState.ArchitecturalEfficiencyClass != 0;
    CurrentPrcb->Cycles[v43][v5] += v36;
  }
  if ( (a1->Header.Size & 0x40) != 0 )
  {
    v45 = a1->SchedulerAssist;
    if ( v45 )
      v45[64] = 1;
  }
  CurrentPrcb->StartCyclesQpc = v33.QuadPart;
  CurrentPrcb->StartCycles = v34;
  if ( (a1->Header.Size & 2) != 0 )
  {
    v46 = a1->WaitBlock[0].SparePtr;
    v47 = v46[4];
    if ( v47 )
    {
      if ( KiHwCountersCount )
      {
        v48 = (unsigned int *)&KiHwCounters;
        v49 = (unsigned int)KiHwCountersCount;
        v50 = v46 + 6;
        do
        {
          if ( (v47 & v19) != 0 )
            *v50 = __readpmc(*v48);
          v19 *= 2LL;
          v50 += 3;
          ++v48;
          --v49;
        }
        while ( v49 );
      }
    }
  }
  v51 = CurrentPrcb->InterruptRequest == 0;
  CurrentPrcb->NestingLevel = 0;
  if ( !v51 )
  {
    CurrentPrcb->InterruptRequest = 0;
    HalRequestSoftwareInterrupt(2);
  }
  v52 = KeGetCurrentPrcb();
  v53 = (signed __int32 *)v52->SchedulerAssist;
  if ( v53 )
  {
    _m_prefetchw(v53);
    v63 = *v53;
    do
    {
      v64 = v63;
      v63 = _InterlockedCompareExchange(v53, v63 & 0xFFDFFFFF, v63);
    }
    while ( v64 != v63 );
    if ( (v63 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v52);
  }
  _enable();
  return v70;
}
