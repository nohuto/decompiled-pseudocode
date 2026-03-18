/*
 * XREFs of KiRetireDpcList @ 0x140251EB0
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405C2BD0 (KiExecuteSmtIsolationThread.c)
 *     KiExecuteDpcDelegate @ 0x1405C7080 (KiExecuteDpcDelegate.c)
 *     KiIdleLoop @ 0x1406ABC30 (KiIdleLoop.c)
 *     KxSwapStacksAndRetireDpcList @ 0x1406B2A40 (KxSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiNormalPriorityReadyScan @ 0x140251B60 (KiNormalPriorityReadyScan.c)
 *     PoGetFrequencyBucket @ 0x140251E40 (PoGetFrequencyBucket.c)
 *     RtlBackoff @ 0x140253B30 (RtlBackoff.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiTimerExpiration @ 0x140336410 (KiTimerExpiration.c)
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KiQueryEffectivePriorityThread @ 0x14034BFE0 (KiQueryEffectivePriorityThread.c)
 *     KiEndCounterAccumulation @ 0x14034C52C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14034E8CC (KiUpdateThreadHgsFeedback.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KiTimer2Expiration @ 0x1403C1420 (KiTimer2Expiration.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiSelectActiveTimerTable @ 0x14043FFE0 (KiSelectActiveTimerTable.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

signed __int16 __fastcall KiRetireDpcList(struct _KPRCB *a1)
{
  struct _KPRCB *v1; // rbx
  __int64 ExSaPageArray; // r8
  _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v4; // r12
  unsigned __int64 *v5; // r15
  __int64 v6; // r13
  __int64 CurrentRunTime; // rdx
  LARGE_INTEGER v8; // rdi
  unsigned __int64 v9; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int8 QpcToTscIncrementShift; // cl
  LARGE_INTEGER v12; // rdx
  unsigned __int64 *v13; // r11
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  LARGE_INTEGER v16; // r8
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r10
  LARGE_INTEGER *v22; // rcx
  int v23; // r15d
  unsigned __int64 BamQosLevel; // rcx
  char Size; // di
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // r9
  int v29; // edx
  __int64 v30; // rcx
  _DWORD *SparePtr; // r9
  _PROC_PERF_DOMAIN *Domain; // rax
  _PROC_PERF_CONSTRAINT *Constraint; // rdx
  unsigned int LatestFrequencyPercent; // edx
  unsigned __int16 *FrequencyBucketThresholds; // rcx
  unsigned __int8 ArchitecturalEfficiencyClass; // r10
  __int64 v37; // rax
  __int16 v38; // di
  struct _KPRCB *v39; // rcx
  signed __int32 *v40; // r8
  struct _KPRCB *v41; // rcx
  signed __int32 *v42; // r8
  volatile signed __int32 *p_Lock; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *v45; // r12
  unsigned int v46; // r14d
  LIST_ENTRY *Flink; // r14
  LIST_ENTRY *v48; // rcx
  LIST_ENTRY *v49; // rax
  struct _LIST_ENTRY *Blink; // rdx
  char v51; // cl
  bool v52; // zf
  LARGE_INTEGER v53; // rdi
  unsigned __int64 v54; // r15
  LONGLONG v55; // r11
  unsigned __int64 v56; // r10
  LARGE_INTEGER v57; // rax
  unsigned __int8 v58; // cl
  unsigned __int64 QpcToTscIncrement; // rax
  LARGE_INTEGER v60; // rdx
  LARGE_INTEGER *v61; // r14
  unsigned __int64 *v62; // r9
  _PROC_PERF_DOMAIN *v63; // rax
  _PROC_PERF_CONSTRAINT *v64; // r8
  unsigned int GuaranteedPercent; // ecx
  unsigned int v66; // edx
  unsigned __int16 *v67; // rcx
  __int64 v68; // rax
  _BYTE *v69; // rax
  _QWORD *v70; // rcx
  __int64 v71; // r9
  unsigned int *v72; // r10
  __int64 v73; // rdi
  _QWORD *v74; // r11
  signed __int16 result; // ax
  signed __int16 v76; // tt
  __int16 v77; // r9
  signed __int16 v78; // tt
  _QWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int128 v82; // rax
  LARGE_INTEGER v83; // r8
  int v84; // edx
  LARGE_INTEGER v85; // r10
  unsigned __int64 v86; // r15
  unsigned __int64 v87; // r14
  unsigned __int64 v88; // r11
  LARGE_INTEGER v89; // rax
  unsigned __int8 v90; // cl
  unsigned __int64 v91; // rax
  LARGE_INTEGER v92; // rdx
  unsigned __int64 StartCyclesQpc; // rdx
  unsigned __int64 *v94; // rdx
  __int64 v95; // r11
  _BYTE *v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // r10
  _QWORD *v99; // r8
  __int64 v100; // r9
  unsigned int *v101; // rbx
  _QWORD *v102; // rcx
  LARGE_INTEGER v103; // r8
  unsigned __int64 *v104; // rdx
  int v105; // edx
  _BYTE *SchedulerAssist; // rax
  int EffectivePriorityThread; // eax
  __int64 active; // rax
  __int64 v109; // rdx
  unsigned int v110; // r13d
  unsigned __int64 v111; // r15
  __int64 v112; // r10
  __int64 v113; // r8
  __int64 v114; // r9
  bool v115; // r12
  bool v116; // r14
  struct _KPRCB *v117; // rcx
  signed __int32 *v118; // r8
  signed __int32 v119; // eax
  signed __int32 v120; // ett
  signed __int32 v121; // eax
  signed __int32 v122; // ett
  unsigned int v123; // eax
  struct _KPRCB *v124; // rcx
  signed __int32 *v125; // r8
  struct _KPRCB *v126; // rcx
  signed __int32 *v127; // r8
  signed __int32 v128; // eax
  signed __int32 v129; // ett
  signed __int32 v130; // eax
  signed __int32 v131; // ett
  signed __int32 v132; // eax
  signed __int32 v133; // ett
  char v134; // al
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v136; // r8
  signed __int32 v137; // eax
  signed __int32 v138; // ett
  unsigned int ExpectedRunTime; // eax
  unsigned __int8 v140; // al
  unsigned __int32 v141; // eax
  unsigned __int32 v142; // ett
  _QWORD *v143; // rdi
  _LIST_ENTRY *v144; // rax
  __int64 *v145; // rax
  __int64 v146; // rax
  unsigned __int32 *v147; // r8
  unsigned __int32 v148; // eax
  unsigned __int32 v149; // ett
  _QWORD *v150; // rax
  __int64 v151; // rdx
  unsigned __int64 *v152; // rax
  unsigned __int32 v153; // ett
  signed __int32 v154[8]; // [rsp+0h] [rbp-100h] BYREF
  char v155[16]; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *p_StartCycles; // [rsp+30h] [rbp-D0h]
  __int64 *p_StartCyclesQpc; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v158; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 *v159; // [rsp+50h] [rbp-B0h]
  __int64 v160; // [rsp+58h] [rbp-A8h]
  int v161; // [rsp+60h] [rbp-A0h]
  __int64 v162; // [rsp+68h] [rbp-98h]
  unsigned __int64 v163; // [rsp+70h] [rbp-90h]
  __int64 v164; // [rsp+78h] [rbp-88h]
  __int64 v165; // [rsp+80h] [rbp-80h]
  unsigned __int64 v166; // [rsp+88h] [rbp-78h]
  unsigned __int64 v167; // [rsp+98h] [rbp-68h]
  unsigned __int64 v168; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v169; // [rsp+A8h] [rbp-58h]
  struct _KPRCB *v170; // [rsp+B0h] [rbp-50h]
  int v171; // [rsp+C0h] [rbp-40h] BYREF
  char v172[4]; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v173; // [rsp+C8h] [rbp-38h]

  v1 = a1;
  v170 = a1;
  memset_0(v172, 0, 0x18CuLL);
  CurrentThread = v1->CurrentThread;
  v4 = 0LL;
  p_StartCyclesQpc = (__int64 *)&v1->StartCyclesQpc;
  v171 = 0;
  v5 = &v1->StartCyclesQpc;
  v158 = &v1->StartCyclesQpc;
  p_StartCycles = &v1->StartCycles;
  v6 = 1LL;
  v159 = &v1->StartCycles;
  while ( 1 )
  {
    v1->NestingLevel = 1;
    CurrentRunTime = 0xFFFFFFFFLL;
    v8.QuadPart = 0LL;
    v9 = 0LL;
    if ( !v1->CycleAccumulationInitialized )
    {
LABEL_136:
      v14 = p_StartCycles;
      v22 = (LARGE_INTEGER *)p_StartCyclesQpc;
      goto LABEL_11;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QpcToTscIncrementShift = v1->QpcToTscIncrementShift;
    v167 = 0LL;
    v8 = PerformanceCounter;
    v12 = PerformanceCounter;
    if ( QpcToTscIncrementShift )
      v12.QuadPart = PerformanceCounter.QuadPart << QpcToTscIncrementShift;
    v13 = v159;
    v14 = v159;
    v167 = ((unsigned __int64)v12.QuadPart * (unsigned __int128)v1->QpcToTscIncrement) >> 64;
    v4 = v167 - *v159;
    v9 = v167;
    p_StartCycles = v159;
    if ( !KiTickAccumulationFromAccountingPeriods )
    {
      v22 = (LARGE_INTEGER *)p_StartCyclesQpc;
LABEL_10:
      CurrentRunTime = 0xFFFFFFFFLL;
      goto LABEL_11;
    }
    v15 = *v5;
    if ( !MEMORY[0xFFFFF78000000300] )
    {
      v14 = v159;
      v22 = (LARGE_INTEGER *)v5;
      p_StartCycles = v159;
      p_StartCyclesQpc = (__int64 *)v5;
      goto LABEL_10;
    }
    v162 = 0LL;
    v163 = 0LL;
    v16 = v8;
    if ( MEMORY[0xFFFFF78000000369] )
    {
      v17 = (v15 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v16.QuadPart = v8.QuadPart << MEMORY[0xFFFFF78000000369];
    }
    else
    {
      v17 = v15 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    }
    v18 = *((_QWORD *)&v17 + 1);
    v162 = *((_QWORD *)&v17 + 1);
    v19 = ((unsigned __int64)v16.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    ExSaPageArray = (__int64)v158;
    v163 = v19;
    v20 = (v19 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
    v21 = (unsigned __int64)((v18 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount;
    v14 = v159;
    p_StartCycles = v159;
    v22 = (LARGE_INTEGER *)v158;
    p_StartCyclesQpc = (__int64 *)v158;
    v23 = (v20 >> KiMaximumIncrementShiftCount) - v21;
    if ( (unsigned int)(v20 >> KiMaximumIncrementShiftCount) == (_DWORD)v21 )
      goto LABEL_10;
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || (((unsigned __int64)v8.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(CurrentThread->ModeHistory) )
    {
      v1->KernelTime += v23;
      CurrentThread->SchedulerApc.SpareLong0 += v23;
    }
    else
    {
      v1->UserTime += v23;
      CurrentThread->UserTime += v23;
    }
    v14 = v13;
    p_StartCyclesQpc = (__int64 *)v22;
    p_StartCycles = v13;
    if ( CurrentThread == v1->IdleThread )
      goto LABEL_10;
    p_StartCycles = v13;
    p_StartCyclesQpc = (__int64 *)ExSaPageArray;
    EffectivePriorityThread = KiQueryEffectivePriorityThread(CurrentThread, v1);
    CurrentRunTime = 0xFFFFFFFFLL;
    if ( EffectivePriorityThread >= 8 )
      goto LABEL_136;
    v1->AvailableTime += v23;
    v14 = v159;
    v22 = (LARGE_INTEGER *)v158;
    p_StartCycles = v159;
    p_StartCyclesQpc = (__int64 *)v158;
LABEL_11:
    *v22 = v8;
    *v14 = v9;
    BamQosLevel = v4 + CurrentThread->CycleTime;
    CurrentThread->CycleTime = BamQosLevel;
    if ( CurrentThread != v1->IdleThread )
    {
      BamQosLevel = ((v4 * v1->CpuCycleScalingFactor) >> 16) + CurrentThread->CurrentRunTime;
      if ( BamQosLevel > 0xFFFFFFFF )
        BamQosLevel = 0xFFFFFFFFLL;
      CurrentThread->CurrentRunTime = BamQosLevel;
    }
    Size = CurrentThread->Header.Size;
    if ( (Size & 0xBE) != 0 )
    {
      if ( Size < 0 )
      {
        ExSaPageArray = (__int64)v1->ExSaPageArray;
        v26 = (LODWORD(CurrentThread->Process->PerProcessorCycleTimes) >> 13) & 0x3FFFF;
        _BitScanReverse(&v27, v26);
        v28 = (LODWORD(CurrentThread->Process->PerProcessorCycleTimes) >> 4) & 0x1FF;
        v29 = 1 << v27;
        v30 = v27 - 2;
        v161 = v30;
        BamQosLevel = *(_QWORD *)(ExSaPageArray + 8 * v30);
        CurrentRunTime = *(_QWORD *)(BamQosLevel + 8LL * (v26 ^ v29) + 8);
        *(_QWORD *)(CurrentRunTime + 8 * v28) += v4;
        Size &= ~0x80u;
      }
      if ( (Size & 0x10) != 0 )
      {
        CurrentRunTime = 8LL * (unsigned __int8)CurrentThread->Tag + 34440;
        BamQosLevel = v4 + *(_QWORD *)((char *)&v1->MxCsr + CurrentRunTime);
        *(_QWORD *)((char *)&v1->MxCsr + CurrentRunTime) = BamQosLevel;
        Size &= ~0x10u;
      }
      if ( (Size & 0x20) != 0 )
      {
        SparePtr = CurrentThread[1].WaitBlock[2].SparePtr;
        if ( SparePtr )
        {
          Domain = v1->PowerState.CheckContext.Domain;
          Constraint = v1->PowerState.CheckContext.Constraint;
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
          ExSaPageArray = 0LL;
          FrequencyBucketThresholds = v1->PowerState.FrequencyBucketThresholds;
          do
          {
            if ( LatestFrequencyPercent <= *FrequencyBucketThresholds )
              break;
            ExSaPageArray = (unsigned int)(ExSaPageArray + 1);
            ++FrequencyBucketThresholds;
          }
          while ( (unsigned int)ExSaPageArray < 3 );
          ArchitecturalEfficiencyClass = v1->PowerState.ArchitecturalEfficiencyClass;
          v160 = 0LL;
          CurrentRunTime = 2LL * (unsigned int)ExSaPageArray;
          v37 = (__int64)SparePtr + (ArchitecturalEfficiencyClass != 0 ? 8 : 0);
          *(_QWORD *)(v37 + 16LL * (unsigned int)ExSaPageArray) += v4;
          BamQosLevel = (unsigned int)SparePtr[48];
          if ( KiTimelineBitmapTime > (unsigned int)BamQosLevel )
          {
            LODWORD(v160) = KiTimelineBitmapTime;
            CurrentRunTime = (unsigned int)(KiTimelineBitmapTime - BamQosLevel);
            if ( (unsigned int)CurrentRunTime >= 0x20 )
            {
              HIDWORD(v160) = 1;
            }
            else
            {
              BamQosLevel = (unsigned int)CurrentRunTime;
              HIDWORD(v160) = (SparePtr[49] << CurrentRunTime) | 1;
            }
            *((_QWORD *)SparePtr + 24) = v160;
          }
          else
          {
            BamQosLevel = (unsigned int)(BamQosLevel - KiTimelineBitmapTime);
            if ( (unsigned int)BamQosLevel < 0x20 )
              SparePtr[49] |= 1 << BamQosLevel;
          }
          if ( !KiEfficiencyClassSystem )
          {
            BamQosLevel = CurrentThread->BamQosLevel;
            if ( (((_DWORD)BamQosLevel - 2) & 0xFFFFFFFB) == 0 || (_BYTE)BamQosLevel == 5 )
            {
              CurrentRunTime = 2LL * (unsigned int)ExSaPageArray;
              BamQosLevel = v4 + *(_QWORD *)&SparePtr[4 * (unsigned int)ExSaPageArray + 2];
              *(_QWORD *)&SparePtr[4 * (unsigned int)ExSaPageArray + 2] = BamQosLevel;
            }
          }
          if ( CurrentThread[1].WaitBlock[1].Object )
          {
            v80 = ArchitecturalEfficiencyClass != 0 ? 8 : 0;
            *(_QWORD *)((char *)&SparePtr[4 * (unsigned int)ExSaPageArray + 32] + v80) += v4;
            BamQosLevel = *((_QWORD *)CurrentThread[1].WaitBlock[1].Object + 209);
            v81 = 64LL;
            if ( ArchitecturalEfficiencyClass )
              v81 = 72LL;
            CurrentRunTime = 2LL * (unsigned int)ExSaPageArray;
            _InterlockedAdd64((volatile signed __int64 *)(BamQosLevel + v81 + 16LL * (unsigned int)ExSaPageArray), v4);
          }
        }
        Size &= ~0x20u;
      }
      if ( (Size & 0x40) != 0 )
      {
        SchedulerAssist = CurrentThread->SchedulerAssist;
        if ( SchedulerAssist )
          SchedulerAssist[64] = 0;
      }
      if ( KiHgsPlusEnabled )
        KiUpdateThreadHgsFeedback(v1, CurrentThread, v4, 0LL);
      if ( v1->CyclesByThreadType )
      {
        if ( CurrentThread->Process != (_KPROCESS *)&KiInitialProcess )
        {
          ExSaPageArray = CurrentThread->BamQosLevel;
          if ( CurrentThread->BamQosLevel < 7u )
          {
            ExpectedRunTime = CurrentThread->ExpectedRunTime;
            CurrentRunTime = CurrentThread->CurrentRunTime;
            if ( (unsigned int)CurrentRunTime <= ExpectedRunTime )
              CurrentRunTime = ExpectedRunTime;
            BamQosLevel = CurrentThread->HardwareFeedbackClass
                        + KiHgsPlusConfiguration
                        * ((unsigned int)((unsigned int)CurrentRunTime >= KiDynamicHeteroCpuPolicyExpectedCycles)
                         + 2 * (_DWORD)ExSaPageArray);
            v1->CyclesByThreadType[BamQosLevel] += v4;
          }
        }
      }
      if ( (Size & 0xBE) != 0 )
      {
        BamQosLevel = (unsigned __int64)CurrentThread->SchedulingGroup;
        if ( BamQosLevel )
        {
          v79 = (_QWORD *)(BamQosLevel + v1->ScbOffset);
          do
          {
            *v79 += v4;
            v79 = (_QWORD *)v79[52];
          }
          while ( v79 );
        }
        if ( (CurrentThread->Header.Size & 8) != 0 && CurrentThread->Process != (_KPROCESS *)&KiInitialProcess )
        {
          ExSaPageArray = (__int64)v1->SchedulerSubNode;
          CurrentRunTime = CurrentThread->Affinity->Bitmap[*(unsigned __int16 *)(ExSaPageArray + 136)];
          BamQosLevel = *(_QWORD *)(ExSaPageArray + 128);
          if ( (CurrentRunTime & BamQosLevel) != BamQosLevel )
            v1->AffinitizedCycles += v4;
        }
        if ( CurrentThread->WaitBlock[0].SparePtr )
          KiEndCounterAccumulation(CurrentThread, CurrentRunTime);
      }
    }
    if ( v1->NestingLevel <= 1u )
    {
      if ( !v1->RcuData.AwaitingCompletion )
        goto LABEL_47;
      v140 = KeDisableInterrupts(BamQosLevel, CurrentRunTime, ExSaPageArray);
      BamQosLevel = (unsigned __int64)v1->RcuData.AwaitingCompletion;
      ExSaPageArray = v140;
      if ( BamQosLevel )
      {
        v143 = (_QWORD *)(BamQosLevel - 8);
        v144 = *(_LIST_ENTRY **)BamQosLevel;
        if ( *(_QWORD *)(BamQosLevel - 8) )
        {
          if ( (_LIST_ENTRY *)BamQosLevel != v144 )
            v1->RcuData.AwaitingCompletion = v144;
        }
        else
        {
          if ( v144 == (_LIST_ENTRY *)BamQosLevel )
          {
            v1->RcuData.AwaitingCompletion = 0LL;
          }
          else
          {
            v1->RcuData.AwaitingCompletion = v144;
            CurrentRunTime = *(_QWORD *)BamQosLevel;
            v145 = *(__int64 **)(BamQosLevel + 8);
            if ( *(_QWORD *)(*(_QWORD *)BamQosLevel + 8LL) != BamQosLevel || *v145 != BamQosLevel )
LABEL_64:
              __fastfail(3u);
            *v145 = CurrentRunTime;
            *(_QWORD *)(CurrentRunTime + 8) = v145;
          }
          v146 = v143[7];
          *(_QWORD *)BamQosLevel = 0LL;
          v143[3] = *(_QWORD *)(v146 + 56);
        }
        if ( (_BYTE)ExSaPageArray )
        {
          BamQosLevel = (unsigned __int64)KeGetCurrentPrcb();
          v147 = *(unsigned __int32 **)(BamQosLevel + 36536);
          if ( v147 )
          {
            _m_prefetchw(v147);
            v148 = *v147;
            do
            {
              CurrentRunTime = v148;
              LODWORD(CurrentRunTime) = v148 & 0xFFDFFFFF;
              v149 = v148;
              v148 = _InterlockedCompareExchange((volatile signed __int32 *)v147, v148 & 0xFFDFFFFF, v148);
            }
            while ( v149 != v148 );
            if ( (v148 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(BamQosLevel);
          }
          _enable();
        }
        ExSaPageArray = v143[3];
        if ( ExSaPageArray == v143[4] )
          goto LABEL_47;
        v150 = (_QWORD *)v143[6];
        v151 = v143[5];
        if ( (*v150 & *(_QWORD *)(v151 + 40)) == 0LL )
        {
          if ( (unsigned int)KiSrcuReportQuiescent(v143, v143[3]) )
            KiSrcuFlushCompleted(v143[7]);
          goto LABEL_47;
        }
        ExSaPageArray = (unsigned __int8)KeDisableInterrupts(*v150, v151, ExSaPageArray);
        if ( !v143[1] )
        {
          CurrentRunTime = (__int64)v1->RcuData.AwaitingCompletion;
          BamQosLevel = (unsigned __int64)(v143 + 1);
          if ( CurrentRunTime )
          {
            v152 = *(unsigned __int64 **)(CurrentRunTime + 8);
            if ( *v152 != CurrentRunTime )
              goto LABEL_64;
            *(_QWORD *)BamQosLevel = CurrentRunTime;
            v143[2] = v152;
            *v152 = BamQosLevel;
            *(_QWORD *)(CurrentRunTime + 8) = BamQosLevel;
          }
          else
          {
            v143[2] = v143 + 1;
            *(_QWORD *)BamQosLevel = BamQosLevel;
            BamQosLevel = (unsigned __int64)(v143 + 1);
            v1->RcuData.AwaitingCompletion = (_LIST_ENTRY *)(v143 + 1);
          }
        }
        if ( !(_BYTE)ExSaPageArray )
          goto LABEL_47;
        BamQosLevel = (unsigned __int64)KeGetCurrentPrcb();
        ExSaPageArray = *(_QWORD *)(BamQosLevel + 36536);
        if ( ExSaPageArray )
        {
          _m_prefetchw((const void *)ExSaPageArray);
          v141 = *(_DWORD *)ExSaPageArray;
          do
          {
            CurrentRunTime = v141;
            LODWORD(CurrentRunTime) = v141 & 0xFFDFFFFF;
            v153 = v141;
            v141 = _InterlockedCompareExchange((volatile signed __int32 *)ExSaPageArray, v141 & 0xFFDFFFFF, v141);
          }
          while ( v153 != v141 );
          goto LABEL_243;
        }
LABEL_245:
        _enable();
      }
      else if ( v140 )
      {
        BamQosLevel = (unsigned __int64)KeGetCurrentPrcb();
        ExSaPageArray = *(_QWORD *)(BamQosLevel + 36536);
        if ( ExSaPageArray )
        {
          _m_prefetchw((const void *)ExSaPageArray);
          v141 = *(_DWORD *)ExSaPageArray;
          do
          {
            CurrentRunTime = v141;
            LODWORD(CurrentRunTime) = v141 & 0xFFDFFFFF;
            v142 = v141;
            v141 = _InterlockedCompareExchange((volatile signed __int32 *)ExSaPageArray, v141 & 0xFFDFFFFF, v141);
          }
          while ( v142 != v141 );
LABEL_243:
          if ( (v141 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(BamQosLevel);
        }
        goto LABEL_245;
      }
LABEL_47:
      if ( v1->RcuData.GracePeriodNeeded && !v1->RcuData.NestingLevel )
      {
        v134 = KeDisableInterrupts(BamQosLevel, CurrentRunTime, ExSaPageArray);
        if ( v1->RcuData.GracePeriodNeeded && !v1->RcuData.NestingLevel )
        {
          v1->RcuData.GracePeriodNeeded = 0;
          _InterlockedOr(v154, 0);
          v1->RcuData.GraceSequenceQuiescent = qword_140F20C48;
        }
        if ( v134 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v136 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( v136 )
          {
            _m_prefetchw(v136);
            v137 = *v136;
            do
            {
              v138 = v137;
              v137 = _InterlockedCompareExchange(v136, v137 & 0xFFDFFFFF, v137);
            }
            while ( v138 != v137 );
            if ( (v137 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          _enable();
        }
      }
      CurrentRunTime = v1->RcuData.GraceSequenceQuiescent;
      if ( CurrentRunTime != v1->RcuData.GraceSequenceReported )
      {
        v102 = (_QWORD *)((char *)&KiRcuData + 32 * v1->Number);
        if ( (*v102 & *(_QWORD *)(v102[1] + 56LL)) == 0LL )
        {
          if ( (unsigned int)KiRcuReportQuiescentState() )
            KiRcuFlushCompleted(v1->RcuData.ExpediteReporting);
        }
      }
    }
    v38 = v1->DpcRequestSlot[0];
    v1->DpcRequestSlot[0] = 1;
    if ( (v38 & 8) != 0 )
    {
      LOBYTE(CurrentRunTime) = 1;
      v38 &= ~8u;
      active = KiSelectActiveTimerTable(v1, CurrentRunTime);
      v109 = active;
      if ( active )
      {
        v110 = *(_DWORD *)(active + 16912);
        v111 = MEMORY[0xFFFFF78000000008];
        v112 = KiLastNonHrTimerExpiration;
        v113 = KiLastPseudoHrTimerExpiration;
        v114 = *(_QWORD *)(active + 16896);
        v115 = KiLastPseudoHrTimerExpiration != v114;
        v116 = KiLastNonHrTimerExpiration != *(_QWORD *)(active + 16904);
        if ( KiGlobalTimerResolutionRequests )
          v116 = KiLastPseudoHrTimerExpiration != v114;
        if ( KiLastPseudoHrTimerExpiration != v114 )
        {
          *(_QWORD *)(active + 16896) = KiLastPseudoHrTimerExpiration;
          *(_DWORD *)(active + 16912) = v111 >> 18;
        }
        if ( v116 )
        {
          v123 = *(_DWORD *)(active + 16916);
          *(_QWORD *)(v109 + 16904) = v112;
          if ( v110 >= v123 )
            v110 = v123;
          *(_DWORD *)(v109 + 16916) = v111 >> 18;
        }
        if ( v113 != v114 || v116 )
        {
          v117 = KeGetCurrentPrcb();
          v118 = (signed __int32 *)v117->SchedulerAssist;
          if ( v118 )
          {
            _m_prefetchw(v118);
            v128 = *v118;
            do
            {
              v129 = v128;
              v128 = _InterlockedCompareExchange(v118, v128 & 0xFFDFFFFF, v128);
            }
            while ( v129 != v128 );
            if ( (v128 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v117);
          }
          _enable();
          v173 = MEMORY[0xFFFFF78000000014];
          KiTimerExpiration((_DWORD)v1, v110, v111, v116, (__int64)&v171);
        }
        else
        {
          v124 = KeGetCurrentPrcb();
          v125 = (signed __int32 *)v124->SchedulerAssist;
          if ( v125 )
          {
            _m_prefetchw(v125);
            v130 = *v125;
            do
            {
              v131 = v130;
              v130 = _InterlockedCompareExchange(v125, v130 & 0xFFDFFFFF, v130);
            }
            while ( v131 != v130 );
            if ( (v130 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v124);
          }
          _enable();
          v173 = MEMORY[0xFFFFF78000000014];
        }
        if ( v1->ClockOwner )
          KiTimer2Expiration((_DWORD)v1, v111, v115, v116, (__int64)&v171);
        v6 = 1LL;
        _disable();
      }
      else
      {
        v126 = KeGetCurrentPrcb();
        v127 = (signed __int32 *)v126->SchedulerAssist;
        if ( v127 )
        {
          _m_prefetchw(v127);
          v132 = *v127;
          do
          {
            v133 = v132;
            v132 = _InterlockedCompareExchange(v127, v132 & 0xFFDFFFFF, v132);
          }
          while ( v133 != v132 );
          if ( (v132 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v126);
        }
        _enable();
        v173 = MEMORY[0xFFFFF78000000014];
        _disable();
      }
    }
    if ( (v38 & 0x40) != 0 )
    {
      v39 = KeGetCurrentPrcb();
      v38 &= ~0x40u;
      v40 = (signed __int32 *)v39->SchedulerAssist;
      if ( v40 )
      {
        _m_prefetchw(v40);
        v119 = *v40;
        do
        {
          v120 = v119;
          v119 = _InterlockedCompareExchange(v40, v119 & 0xFFDFFFFF, v119);
        }
        while ( v120 != v119 );
        if ( (v119 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
      _enable();
      KiNormalPriorityReadyScan(v1);
      _disable();
    }
    if ( !(unsigned __int8)KiExecuteAllDpcs(v1) )
      break;
    if ( (v38 & 4) != 0 )
    {
      v41 = KeGetCurrentPrcb();
      v42 = (signed __int32 *)v41->SchedulerAssist;
      if ( v42 )
      {
        _m_prefetchw(v42);
        v121 = *v42;
        do
        {
          v122 = v121;
          v121 = _InterlockedCompareExchange(v42, v121 & 0xFFDFFFFF, v121);
        }
        while ( v122 != v121 );
        if ( (v121 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
      _enable();
      p_Lock = &v1->DpcGate.Header.Lock;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, v42);
      v45 = KeGetCurrentPrcb();
      v46 = 0;
      if ( _interlockedbittestandset(p_Lock, 7u) )
      {
        do
        {
          if ( (++v46 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v41) )
          {
            HvlNotifyLongSpinWait(v46);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*p_Lock & 0x80u) != 0 || _interlockedbittestandset(p_Lock, 7u) );
      }
      if ( !v1->DpcGate.Header.SignalState )
      {
        Flink = v1->DpcGate.Header.WaitListHead.Flink;
        v1->DpcGate.Header.SignalState = 1;
        while ( Flink != &v1->DpcGate.Header.WaitListHead )
        {
          v48 = Flink->Flink;
          v49 = Flink;
          Flink = v48;
          Blink = v49->Blink;
          if ( v48->Blink != v49 || Blink->Flink != v49 )
            goto LABEL_64;
          Blink->Flink = v48;
          v48->Blink = Blink;
          v51 = (char)v49[1].Flink;
          switch ( v51 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread(v45, v49, WORD1(v49[1].Flink), 0LL) )
              {
                v52 = v1->DpcGate.Header.SignalState-- == 1;
                if ( v52 )
                  goto LABEL_68;
              }
              break;
            case 2:
              BYTE1(v49[1].Flink) = 5;
              KiInsertQueueInternal(v49[1].Blink, v49);
              v52 = v1->DpcGate.Header.SignalState-- == 1;
              if ( v52 )
                goto LABEL_68;
              break;
            case 4:
              BYTE1(v49[1].Flink) = 5;
              v1->DpcGate.Header.SignalState = 0;
              KeInsertQueueDpc((PRKDPC)v49[1].Blink, &v1->DpcGate, v49);
              break;
            default:
              KiTryUnwaitThread(v45, v49, 256LL, 0LL);
              break;
          }
        }
      }
LABEL_68:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      v155[0] = CurrentIrql;
      v6 = 1LL;
      KiExitDispatcher(v45, v155[0]);
      _disable();
    }
    v4 = 0LL;
    v53.QuadPart = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    if ( v1->CycleAccumulationInitialized )
    {
      v57 = KeQueryPerformanceCounter(0LL);
      v58 = v1->QpcToTscIncrementShift;
      v53 = v57;
      QpcToTscIncrement = v1->QpcToTscIncrement;
      v60 = v53;
      v168 = 0LL;
      if ( v58 )
        v60.QuadPart = v53.QuadPart << v58;
      v61 = (LARGE_INTEGER *)p_StartCyclesQpc;
      v62 = p_StartCycles;
      ExSaPageArray = *p_StartCyclesQpc;
      v168 = ((unsigned __int64)v60.QuadPart * (unsigned __int128)QpcToTscIncrement) >> 64;
      v56 = v168 - *p_StartCycles;
      v55 = v53.QuadPart - ExSaPageArray;
      v54 = v168;
      if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
      {
        v164 = 0LL;
        v165 = 0LL;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v82 = (unsigned __int64)(ExSaPageArray << MEMORY[0xFFFFF78000000369])
              * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v83.QuadPart = v53.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v82 = (unsigned __int64)ExSaPageArray * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v83 = v53;
        }
        v164 = *((_QWORD *)&v82 + 1);
        ExSaPageArray = ((unsigned __int64)v83.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v165 = ExSaPageArray;
        v61 = (LARGE_INTEGER *)p_StartCyclesQpc;
        v84 = ((unsigned __int64)(((unsigned __int64)ExSaPageArray
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v82 + 1)
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        v62 = p_StartCycles;
        if ( v84 )
        {
          v1->KernelTime += v84;
          v1->DpcTime += v84;
        }
      }
    }
    else
    {
      v62 = p_StartCycles;
      v61 = (LARGE_INTEGER *)p_StartCyclesQpc;
    }
    v1->CycleTimeQpc += v55;
    v1->CycleTime += v56;
    if ( (CurrentThread->Header.Size & 0x20) != 0 )
    {
      v63 = v1->PowerState.CheckContext.Domain;
      v64 = v1->PowerState.CheckContext.Constraint;
      if ( v63 && v64 )
      {
        if ( v64->Selection.Autonomous )
        {
          ExSaPageArray = v64->LatestFrequencyPercent;
        }
        else
        {
          ExSaPageArray = v64->Selection.SelectedPercent;
          GuaranteedPercent = v63->GuaranteedPercent;
          if ( (unsigned int)ExSaPageArray >= GuaranteedPercent )
            ExSaPageArray = GuaranteedPercent;
        }
      }
      else
      {
        ExSaPageArray = 100LL;
      }
      v66 = 0;
      v67 = v1->PowerState.FrequencyBucketThresholds;
      do
      {
        if ( (unsigned int)ExSaPageArray <= *v67 )
          break;
        ++v66;
        ++v67;
      }
      while ( v66 < 3 );
      v68 = (v1->PowerState.ArchitecturalEfficiencyClass != 0) + 2LL * v66 + 4336;
      *((_QWORD *)&v1->MxCsr + v68) += v56;
    }
    if ( (CurrentThread->Header.Size & 0x40) != 0 )
    {
      v69 = CurrentThread->SchedulerAssist;
      if ( v69 )
        v69[64] = 1;
    }
    *v61 = v53;
    *v62 = v54;
    if ( (CurrentThread->Header.Size & 2) != 0 )
    {
      v70 = CurrentThread->WaitBlock[0].SparePtr;
      v71 = v70[4];
      if ( v71 )
      {
        ExSaPageArray = 1LL;
        if ( KiHwCountersCount )
        {
          v72 = (unsigned int *)&KiHwCounters;
          v73 = (unsigned int)KiHwCountersCount;
          v74 = v70 + 6;
          do
          {
            if ( (v71 & ExSaPageArray) != 0 )
              *v74 = __readpmc(*v72);
            ExSaPageArray *= 2LL;
            v74 += 3;
            ++v72;
            --v73;
          }
          while ( v73 );
        }
      }
    }
    v1->NestingLevel = 0;
    if ( v1->InterruptRequest )
      v1->InterruptRequest = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)&v1->14524, 0, 1);
    if ( result == 1 )
      goto LABEL_102;
    v5 = v158;
  }
  v85.QuadPart = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  if ( v1->CycleAccumulationInitialized )
  {
    v89 = KeQueryPerformanceCounter(0LL);
    v90 = v1->QpcToTscIncrementShift;
    v85 = v89;
    v91 = v1->QpcToTscIncrement;
    v92 = v85;
    v169 = 0LL;
    if ( v90 )
      v92.QuadPart = v85.QuadPart << v90;
    v86 = ((unsigned __int64)v92.QuadPart * (unsigned __int128)v91) >> 64;
    v169 = v86;
    StartCyclesQpc = v1->StartCyclesQpc;
    v88 = v86 - v1->StartCycles;
    v87 = v85.QuadPart - StartCyclesQpc;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v159 = 0LL;
      v103 = v85;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v104 = (unsigned __int64 *)(((StartCyclesQpc << MEMORY[0xFFFFF78000000369])
                                   * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64);
        v103.QuadPart = v85.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v104 = (unsigned __int64 *)((StartCyclesQpc * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64);
      }
      v159 = v104;
      v166 = ((unsigned __int64)v103.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v105 = ((unsigned __int64)((v166 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
           - ((unsigned __int64)(((unsigned __int64)v104
                                * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v105 )
      {
        v1->KernelTime += v105;
        v1->DpcTime += v105;
      }
    }
  }
  v1->CycleTimeQpc += v87;
  v1->CycleTime += v88;
  if ( (CurrentThread->Header.Size & 0x20) != 0 )
  {
    v94 = &v1->Cycles[(unsigned int)PoGetFrequencyBucket((__int64)v1)][v1->PowerState.ArchitecturalEfficiencyClass != 0];
    *v94 += v95;
  }
  if ( (CurrentThread->Header.Size & 0x40) != 0 )
  {
    v96 = CurrentThread->SchedulerAssist;
    if ( v96 )
      v96[64] = 1;
  }
  v1->StartCyclesQpc = v85.QuadPart;
  v1->StartCycles = v86;
  if ( (CurrentThread->Header.Size & 2) != 0 )
  {
    v97 = CurrentThread->WaitBlock[0].SparePtr;
    v98 = v97[4];
    if ( v98 )
    {
      if ( KiHwCountersCount )
      {
        v99 = v97 + 6;
        v100 = (unsigned int)KiHwCountersCount;
        v101 = (unsigned int *)&KiHwCounters;
        do
        {
          if ( (v98 & v6) != 0 )
            *v99 = __readpmc(*v101);
          v6 *= 2LL;
          v99 += 3;
          ++v101;
          --v100;
        }
        while ( v100 );
        v1 = v170;
      }
    }
  }
  v52 = v1->InterruptRequest == 0;
  v1->NestingLevel = 0;
  if ( !v52 )
    v1->InterruptRequest = 0;
  LODWORD(v158) = 0;
  _m_prefetchw(&v1->14524);
  v76 = v1->DpcRequestSlot[0];
  result = _InterlockedCompareExchange16((volatile signed __int16 *)&v1->14524, (v38 | v76) & 0xFF7E | 0x80, v76);
  if ( v76 != result )
  {
    do
    {
      RtlBackoff(&v158);
      _m_prefetchw(&v1->14524);
      v78 = v1->DpcRequestSlot[0];
      result = _InterlockedCompareExchange16((volatile signed __int16 *)&v1->14524, v77 | (v38 | v78) & 0xFFFE, v78);
    }
    while ( v78 != result );
  }
LABEL_102:
  v1->DpcData[0].ActiveDpc = 0LL;
  return result;
}
