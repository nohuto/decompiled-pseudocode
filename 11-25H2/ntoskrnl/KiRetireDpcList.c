/*
 * XREFs of KiRetireDpcList @ 0x1403192F0
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405BEAF0 (KiExecuteSmtIsolationThread.c)
 *     KiExecuteDpcDelegate @ 0x1405C2CE0 (KiExecuteDpcDelegate.c)
 *     KiIdleLoop @ 0x1406A0960 (KiIdleLoop.c)
 *     KxSwapStacksAndRetireDpcList @ 0x1406A7770 (KxSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiRcuReportQuiescentState @ 0x14027BF9C (KiRcuReportQuiescentState.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KiEndCounterAccumulation @ 0x14028E688 (KiEndCounterAccumulation.c)
 *     KiTimerExpiration @ 0x1402EF3C0 (KiTimerExpiration.c)
 *     KiQueryEffectivePriorityThread @ 0x1403188E0 (KiQueryEffectivePriorityThread.c)
 *     KiNormalPriorityReadyScan @ 0x14031A434 (KiNormalPriorityReadyScan.c)
 *     RtlBackoff @ 0x14031A710 (RtlBackoff.c)
 *     PoGetFrequencyBucket @ 0x14031A790 (PoGetFrequencyBucket.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiTimer2Expiration @ 0x140372250 (KiTimer2Expiration.c)
 *     KiSelectActiveTimerTable @ 0x140440290 (KiSelectActiveTimerTable.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BD788 (KiSrcuReportQuiescent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

signed __int16 __fastcall KiRetireDpcList(struct _KPRCB *a1)
{
  struct _KPRCB *v1; // rbx
  unsigned __int64 CurrentThread; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r15
  signed __int64 GraceSequenceQuiescent; // rdx
  LARGE_INTEGER v6; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int8 QpcToTscIncrementShift; // cl
  unsigned __int64 QpcToTscIncrement; // rax
  LARGE_INTEGER v10; // rdx
  unsigned __int64 *v11; // r11
  unsigned __int64 *v12; // r13
  unsigned __int64 v13; // rdx
  LARGE_INTEGER v14; // r8
  unsigned __int128 v15; // rax
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rdx
  LARGE_INTEGER *v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r10
  LARGE_INTEGER *v21; // rax
  int v22; // r12d
  unsigned __int64 v23; // rcx
  char v24; // di
  __int64 v25; // rax
  _QWORD *ExSaPageArray; // r8
  unsigned __int64 v27; // r9
  unsigned int v28; // ecx
  int v29; // edx
  __int64 v30; // rcx
  __int16 v31; // di
  struct _KPRCB *v32; // rcx
  unsigned __int32 *v33; // r8
  struct _KPRCB *v34; // rcx
  signed __int32 *v35; // r8
  volatile signed __int32 *p_Lock; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *v38; // r15
  unsigned int v39; // r14d
  LIST_ENTRY *v40; // r14
  LIST_ENTRY *v41; // rcx
  __int64 v42; // rax
  struct _LIST_ENTRY *v43; // rdx
  char v44; // cl
  bool v45; // zf
  LARGE_INTEGER v46; // rdi
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // r11
  unsigned __int64 v49; // r10
  LARGE_INTEGER v50; // rax
  unsigned __int8 v51; // cl
  unsigned __int64 v52; // rax
  LARGE_INTEGER v53; // rdx
  LARGE_INTEGER *v54; // r13
  unsigned __int64 *v55; // r9
  unsigned __int64 v56; // r8
  _PROC_PERF_DOMAIN *Domain; // rax
  _PROC_PERF_CONSTRAINT *Constraint; // r8
  unsigned int LatestFrequencyPercent; // r8d
  unsigned int v60; // edx
  unsigned __int16 *FrequencyBucketThresholds; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r10
  __int64 v65; // rdi
  __int64 v66; // r8
  unsigned int *v67; // r9
  _QWORD *v68; // r10
  __int64 v69; // r11
  signed __int16 result; // ax
  signed __int16 v71; // tt
  __int16 v72; // r9
  signed __int16 v73; // tt
  unsigned int FrequencyBucket; // eax
  __int64 v75; // r9
  unsigned __int8 ArchitecturalEfficiencyClass; // r11
  __int64 v77; // r10
  __int64 v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rdx
  unsigned int v81; // eax
  unsigned int v82; // ecx
  unsigned int v83; // ecx
  int v84; // ecx
  __int64 v85; // rcx
  _QWORD *v86; // rax
  unsigned __int128 v87; // rax
  LARGE_INTEGER v88; // r8
  int v89; // edx
  LARGE_INTEGER v90; // r10
  unsigned __int64 v91; // r15
  unsigned __int64 v92; // r14
  unsigned __int64 v93; // r11
  LARGE_INTEGER v94; // rax
  unsigned __int8 v95; // cl
  unsigned __int64 v96; // rax
  LARGE_INTEGER v97; // rdx
  unsigned __int64 StartCyclesQpc; // rdx
  unsigned __int64 *v99; // rdx
  __int64 v100; // r11
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // r8
  _QWORD *v104; // r9
  __int64 v105; // r10
  __int64 v106; // r11
  unsigned int *v107; // rbx
  unsigned __int64 *v108; // rcx
  unsigned __int32 v109; // eax
  unsigned __int32 v110; // ett
  LARGE_INTEGER v111; // r8
  unsigned __int128 v112; // rax
  int v113; // edx
  int EffectivePriorityThread; // eax
  signed __int32 v115; // eax
  signed __int32 v116; // ett
  __int64 active; // rax
  unsigned int v118; // r12d
  unsigned __int64 v119; // r15
  __int64 v120; // r10
  __int64 v121; // r8
  __int64 v122; // r9
  bool v123; // r13
  unsigned __int8 v124; // r14
  struct _KPRCB *v125; // rcx
  signed __int32 *v126; // r8
  __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rax
  unsigned int v130; // eax
  signed __int32 v131; // eax
  signed __int32 v132; // ett
  struct _KPRCB *v133; // rcx
  unsigned __int32 *v134; // r8
  struct _KPRCB *v135; // rcx
  unsigned __int32 *v136; // r8
  unsigned __int32 v137; // eax
  unsigned __int32 v138; // ett
  unsigned __int32 v139; // eax
  unsigned __int32 v140; // ett
  bool v141; // al
  struct _KPRCB *v142; // rcx
  signed __int32 *v143; // r8
  signed __int32 v144; // eax
  signed __int32 v145; // ett
  unsigned int v146; // eax
  __int64 v147; // rcx
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // r8
  bool v149; // al
  _LIST_ENTRY *AwaitingCompletion; // rcx
  bool v151; // r8
  struct _KPRCB *v152; // rcx
  signed __int32 *v153; // r8
  signed __int32 v154; // eax
  signed __int32 v155; // ett
  struct _LIST_ENTRY **p_Blink; // rdi
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v158; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v160; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v163; // eax
  signed __int32 v164; // ett
  bool v165; // r8
  _LIST_ENTRY *v166; // rdx
  struct _LIST_ENTRY *v167; // rcx
  struct _LIST_ENTRY *v168; // rax
  signed __int32 *v169; // r8
  signed __int32 v170; // ett
  signed __int32 v171[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 *p_StartCycles; // [rsp+30h] [rbp-D0h]
  unsigned __int64 *p_StartCyclesQpc; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v174; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 *v175; // [rsp+50h] [rbp-B0h]
  __int64 v176; // [rsp+58h] [rbp-A8h]
  int v177; // [rsp+60h] [rbp-A0h]
  __int64 v178; // [rsp+68h] [rbp-98h]
  unsigned __int64 v179; // [rsp+70h] [rbp-90h]
  __int64 v180; // [rsp+78h] [rbp-88h]
  unsigned __int64 v181; // [rsp+80h] [rbp-80h]
  unsigned __int64 v182; // [rsp+88h] [rbp-78h]
  unsigned __int64 v183; // [rsp+98h] [rbp-68h]
  unsigned __int64 v184; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v185; // [rsp+A8h] [rbp-58h]
  struct _KPRCB *v186; // [rsp+B0h] [rbp-50h]
  int v187; // [rsp+C0h] [rbp-40h] BYREF
  char v188[4]; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v189; // [rsp+C8h] [rbp-38h]

  v1 = a1;
  v186 = a1;
  memset_0(v188, 0, 0x18CuLL);
  CurrentThread = (unsigned __int64)v1->CurrentThread;
  v3 = 0LL;
  p_StartCyclesQpc = &v1->StartCyclesQpc;
  v187 = 0;
  v174 = &v1->StartCyclesQpc;
  p_StartCycles = &v1->StartCycles;
  v175 = &v1->StartCycles;
  while ( 1 )
  {
    v1->NestingLevel = 1;
    v4 = 0LL;
    GraceSequenceQuiescent = 0xFFFFFFFFLL;
    v6.QuadPart = 0LL;
    if ( !v1->CycleAccumulationInitialized )
    {
      v12 = p_StartCycles;
      v21 = (LARGE_INTEGER *)p_StartCyclesQpc;
      goto LABEL_11;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QpcToTscIncrementShift = v1->QpcToTscIncrementShift;
    v6 = PerformanceCounter;
    QpcToTscIncrement = v1->QpcToTscIncrement;
    v10 = v6;
    v183 = 0LL;
    if ( QpcToTscIncrementShift )
      v10.QuadPart = v6.QuadPart << QpcToTscIncrementShift;
    v11 = v175;
    v12 = v175;
    p_StartCycles = v175;
    v183 = ((unsigned __int64)v10.QuadPart * (unsigned __int128)QpcToTscIncrement) >> 64;
    v4 = v183 - *v175;
    v3 = v183;
    if ( !KiTickAccumulationFromAccountingPeriods )
    {
      v21 = (LARGE_INTEGER *)p_StartCyclesQpc;
      goto LABEL_10;
    }
    v13 = *v174;
    if ( !MEMORY[0xFFFFF78000000300] )
    {
      v21 = (LARGE_INTEGER *)v174;
      p_StartCycles = v175;
      p_StartCyclesQpc = v174;
LABEL_10:
      GraceSequenceQuiescent = 0xFFFFFFFFLL;
      goto LABEL_11;
    }
    v178 = 0LL;
    v179 = 0LL;
    v14 = v6;
    if ( MEMORY[0xFFFFF78000000369] )
    {
      v15 = (v13 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v14.QuadPart = v6.QuadPart << MEMORY[0xFFFFF78000000369];
    }
    else
    {
      v15 = v13 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    }
    v16 = *((_QWORD *)&v15 + 1);
    v178 = *((_QWORD *)&v15 + 1);
    v17 = ((unsigned __int64)v14.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v18 = (LARGE_INTEGER *)v174;
    v179 = v17;
    p_StartCycles = v175;
    v19 = (v17 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
    v20 = (unsigned __int64)((v16 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount;
    v21 = (LARGE_INTEGER *)v174;
    p_StartCyclesQpc = v174;
    v22 = (v19 >> KiMaximumIncrementShiftCount) - v20;
    if ( (unsigned int)(v19 >> KiMaximumIncrementShiftCount) == (_DWORD)v20 )
      goto LABEL_10;
    if ( (*(_DWORD *)(CurrentThread + 116) & 0x400) != 0
      || (((unsigned __int64)v6.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(CurrentThread + 1100)) )
    {
      v1->KernelTime += v22;
      *(_DWORD *)(CurrentThread + 652) += v22;
    }
    else
    {
      v1->UserTime += v22;
      *(_DWORD *)(CurrentThread + 732) += v22;
    }
    v21 = v18;
    p_StartCycles = v11;
    p_StartCyclesQpc = (unsigned __int64 *)&v18->QuadPart;
    if ( (_KTHREAD *)CurrentThread == v1->IdleThread )
      goto LABEL_10;
    p_StartCycles = v11;
    p_StartCyclesQpc = (unsigned __int64 *)&v18->QuadPart;
    EffectivePriorityThread = KiQueryEffectivePriorityThread(CurrentThread, v1);
    GraceSequenceQuiescent = 0xFFFFFFFFLL;
    if ( EffectivePriorityThread >= 8 )
    {
      v21 = (LARGE_INTEGER *)p_StartCyclesQpc;
    }
    else
    {
      v21 = (LARGE_INTEGER *)v174;
      v1->AvailableTime += v22;
      p_StartCycles = v12;
      p_StartCyclesQpc = (unsigned __int64 *)&v21->QuadPart;
    }
LABEL_11:
    *v21 = v6;
    *v12 = v3;
    *(_QWORD *)(CurrentThread + 72) += v4;
    if ( (_KTHREAD *)CurrentThread != v1->IdleThread )
    {
      v23 = ((v4 * v1->CpuCycleScalingFactor) >> 16) + *(unsigned int *)(CurrentThread + 80);
      if ( v23 > 0xFFFFFFFF )
        LODWORD(v23) = -1;
      *(_DWORD *)(CurrentThread + 80) = v23;
    }
    v24 = *(_BYTE *)(CurrentThread + 2);
    if ( (v24 & 0xBE) != 0 )
    {
      if ( v24 < 0 )
      {
        v25 = *(_QWORD *)(CurrentThread + 544);
        ExSaPageArray = v1->ExSaPageArray;
        v177 = 0;
        v27 = *(unsigned int *)(v25 + 400);
        LODWORD(v25) = (*(_DWORD *)(v25 + 400) >> 13) & 0x3FFFF;
        _BitScanReverse(&v28, v25);
        v29 = 1 << v28;
        v30 = v28 - 2;
        v177 = v30;
        GraceSequenceQuiescent = *(_QWORD *)(ExSaPageArray[v30] + 8LL * ((unsigned int)v25 ^ v29) + 8);
        *(_QWORD *)(GraceSequenceQuiescent + 8 * ((v27 >> 4) & 0x1FF)) += v4;
        v24 &= ~0x80u;
      }
      if ( (v24 & 0x10) != 0 )
      {
        GraceSequenceQuiescent = 8LL * *(unsigned __int8 *)(CurrentThread + 124) + 34440;
        *(_QWORD *)((char *)&v1->MxCsr + GraceSequenceQuiescent) += v4;
        v24 &= ~0x10u;
      }
      if ( (v24 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(CurrentThread + 1672) )
        {
          FrequencyBucket = PoGetFrequencyBucket(v1);
          ArchitecturalEfficiencyClass = v1->PowerState.ArchitecturalEfficiencyClass;
          v77 = FrequencyBucket;
          v176 = 0LL;
          v78 = 2LL * FrequencyBucket;
          v79 = v75 + (ArchitecturalEfficiencyClass != 0 ? 8 : 0);
          v80 = *(_QWORD *)(v79 + 16LL * FrequencyBucket);
          v81 = KiTimelineBitmapTime;
          GraceSequenceQuiescent = v4 + v80;
          *(_QWORD *)(v79 + 8 * v78) = GraceSequenceQuiescent;
          v82 = *(_DWORD *)(v75 + 192);
          if ( v81 > v82 )
          {
            LODWORD(v176) = v81;
            GraceSequenceQuiescent = v81 - v82;
            if ( (unsigned int)GraceSequenceQuiescent >= 0x20 )
              HIDWORD(v176) = 1;
            else
              HIDWORD(v176) = (*(_DWORD *)(v75 + 196) << (v81 - v82)) | 1;
            *(_QWORD *)(v75 + 192) = v176;
          }
          else
          {
            v83 = v82 - v81;
            if ( v83 < 0x20 )
              *(_DWORD *)(v75 + 196) |= 1 << v83;
          }
          if ( !KiEfficiencyClassSystem )
          {
            v84 = *(unsigned __int8 *)(CurrentThread + 516);
            if ( ((v84 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v84 == 5 )
            {
              GraceSequenceQuiescent = 2 * v77;
              *(_QWORD *)(v75 + 16 * v77 + 8) += v4;
            }
          }
          if ( *(_QWORD *)(CurrentThread + 1616) )
          {
            v127 = ArchitecturalEfficiencyClass != 0 ? 8 : 0;
            *(_QWORD *)(v127 + v75 + 16 * (v77 + 8)) += v4;
            v128 = 64LL;
            if ( ArchitecturalEfficiencyClass )
              v128 = 72LL;
            GraceSequenceQuiescent = 2 * v77;
            _InterlockedAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(CurrentThread + 1616) + 1672LL) + v128 + 16 * v77),
              v4);
          }
        }
        v24 &= ~0x20u;
      }
      if ( (v24 & 0x40) != 0 )
      {
        v129 = *(_QWORD *)(CurrentThread + 968);
        if ( v129 )
          *(_BYTE *)(v129 + 64) = 0;
      }
      if ( KiHgsPlusEnabled )
        KiUpdateThreadHgsFeedback((__int64)v1, CurrentThread, v4, 0);
      if ( v1->CyclesByThreadType
        && *(_UNKNOWN **)(CurrentThread + 544) != &KiInitialProcess
        && *(unsigned __int8 *)(CurrentThread + 516) < 7u )
      {
        v146 = *(_DWORD *)(CurrentThread + 84);
        GraceSequenceQuiescent = *(unsigned int *)(CurrentThread + 80);
        if ( (unsigned int)GraceSequenceQuiescent <= v146 )
          GraceSequenceQuiescent = v146;
        v147 = *(unsigned __int8 *)(CurrentThread + 517)
             + KiHgsPlusConfiguration
             * (((unsigned int)GraceSequenceQuiescent >= KiDynamicHeteroCpuPolicyExpectedCycles)
              + 2 * (unsigned int)*(unsigned __int8 *)(CurrentThread + 516));
        v1->CyclesByThreadType[v147] += v4;
      }
      if ( (v24 & 0xBE) != 0 )
      {
        v85 = *(_QWORD *)(CurrentThread + 104);
        if ( v85 )
        {
          v86 = (_QWORD *)(v85 + v1->ScbOffset);
          do
          {
            *v86 += v4;
            v86 = (_QWORD *)v86[52];
          }
          while ( v86 );
        }
        if ( (*(_BYTE *)(CurrentThread + 2) & 8) != 0 && *(_UNKNOWN **)(CurrentThread + 544) != &KiInitialProcess )
        {
          SchedulerSubNode = v1->SchedulerSubNode;
          GraceSequenceQuiescent = *(_QWORD *)(*(_QWORD *)(CurrentThread + 576)
                                             + 8LL * SchedulerSubNode->Affinity.Group
                                             + 8);
          if ( (GraceSequenceQuiescent & SchedulerSubNode->Affinity.Mask) != SchedulerSubNode->Affinity.Mask )
            v1->AffinitizedCycles += v4;
        }
        if ( *(_QWORD *)(CurrentThread + 360) )
          KiEndCounterAccumulation(CurrentThread);
      }
    }
    if ( v1->NestingLevel <= 1u )
    {
      if ( !v1->RcuData.AwaitingCompletion )
        goto LABEL_29;
      v149 = KeDisableInterrupts();
      AwaitingCompletion = v1->RcuData.AwaitingCompletion;
      v151 = v149;
      if ( AwaitingCompletion )
      {
        p_Blink = &AwaitingCompletion[-1].Blink;
        Flink = AwaitingCompletion->Flink;
        if ( AwaitingCompletion[-1].Blink )
        {
          if ( AwaitingCompletion != Flink )
            v1->RcuData.AwaitingCompletion = Flink;
        }
        else
        {
          if ( Flink == AwaitingCompletion )
          {
            v1->RcuData.AwaitingCompletion = 0LL;
          }
          else
          {
            v1->RcuData.AwaitingCompletion = Flink;
            v158 = AwaitingCompletion->Flink;
            Blink = AwaitingCompletion->Blink;
            if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
LABEL_46:
              __fastfail(3u);
            Blink->Flink = v158;
            v158->Blink = Blink;
          }
          v160 = p_Blink[7];
          AwaitingCompletion->Flink = 0LL;
          p_Blink[3] = v160[3].Blink;
        }
        if ( v151 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v163 = *SchedulerAssist;
            do
            {
              v164 = v163;
              v163 = _InterlockedCompareExchange(SchedulerAssist, v163 & 0xFFDFFFFF, v163);
            }
            while ( v164 != v163 );
            if ( (v163 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
        if ( p_Blink[3] == p_Blink[4] )
          goto LABEL_29;
        if ( ((__int64)p_Blink[6]->Flink & (__int64)p_Blink[5][2].Blink) == 0 )
        {
          if ( (unsigned int)KiSrcuReportQuiescent(p_Blink, p_Blink[3]) )
            KiSrcuFlushCompleted(p_Blink[7]);
          goto LABEL_29;
        }
        v165 = KeDisableInterrupts();
        if ( !p_Blink[1] )
        {
          v166 = v1->RcuData.AwaitingCompletion;
          v167 = (struct _LIST_ENTRY *)(p_Blink + 1);
          if ( v166 )
          {
            v168 = v166->Blink;
            if ( v168->Flink != v166 )
              goto LABEL_46;
            v167->Flink = v166;
            p_Blink[2] = v168;
            v168->Flink = v167;
            v166->Blink = v167;
          }
          else
          {
            p_Blink[2] = (struct _LIST_ENTRY *)(p_Blink + 1);
            v167->Flink = v167;
            v1->RcuData.AwaitingCompletion = (_LIST_ENTRY *)(p_Blink + 1);
          }
        }
        if ( !v165 )
          goto LABEL_29;
        v152 = KeGetCurrentPrcb();
        v169 = (signed __int32 *)v152->SchedulerAssist;
        if ( v169 )
        {
          _m_prefetchw(v169);
          v154 = *v169;
          do
          {
            v170 = v154;
            v154 = _InterlockedCompareExchange(v169, v154 & 0xFFDFFFFF, v154);
          }
          while ( v170 != v154 );
          goto LABEL_233;
        }
LABEL_235:
        _enable();
      }
      else if ( v149 )
      {
        v152 = KeGetCurrentPrcb();
        v153 = (signed __int32 *)v152->SchedulerAssist;
        if ( v153 )
        {
          _m_prefetchw(v153);
          v154 = *v153;
          do
          {
            v155 = v154;
            v154 = _InterlockedCompareExchange(v153, v154 & 0xFFDFFFFF, v154);
          }
          while ( v155 != v154 );
LABEL_233:
          if ( (v154 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v152);
        }
        goto LABEL_235;
      }
LABEL_29:
      if ( v1->RcuData.GracePeriodNeeded && !v1->RcuData.NestingLevel )
      {
        v141 = KeDisableInterrupts();
        if ( v1->RcuData.GracePeriodNeeded && !v1->RcuData.NestingLevel )
        {
          v1->RcuData.GracePeriodNeeded = 0;
          _InterlockedOr(v171, 0);
          v1->RcuData.GraceSequenceQuiescent = qword_140F204A8;
        }
        if ( v141 )
        {
          v142 = KeGetCurrentPrcb();
          v143 = (signed __int32 *)v142->SchedulerAssist;
          if ( v143 )
          {
            _m_prefetchw(v143);
            v144 = *v143;
            do
            {
              v145 = v144;
              v144 = _InterlockedCompareExchange(v143, v144 & 0xFFDFFFFF, v144);
            }
            while ( v145 != v144 );
            if ( (v144 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v142);
          }
          _enable();
        }
      }
      GraceSequenceQuiescent = v1->RcuData.GraceSequenceQuiescent;
      if ( GraceSequenceQuiescent != v1->RcuData.GraceSequenceReported )
      {
        v108 = (unsigned __int64 *)((char *)&KiRcuData + 32 * v1->Number);
        if ( (*v108 & *(_QWORD *)(v108[1] + 56)) == 0 )
        {
          if ( (unsigned int)KiRcuReportQuiescentState(v108, GraceSequenceQuiescent) )
            KiRcuFlushCompleted(v1->RcuData.ExpediteReporting);
        }
      }
    }
    v31 = v1->DpcRequestSlot[0];
    v1->DpcRequestSlot[0] = 1;
    if ( (v31 & 8) != 0 )
    {
      LOBYTE(GraceSequenceQuiescent) = 1;
      v31 &= ~8u;
      active = KiSelectActiveTimerTable(v1, GraceSequenceQuiescent);
      GraceSequenceQuiescent = active;
      if ( active )
      {
        v118 = *(_DWORD *)(active + 16912);
        v119 = MEMORY[0xFFFFF78000000008];
        v120 = KiLastNonHrTimerExpiration;
        v121 = KiLastPseudoHrTimerExpiration;
        v122 = *(_QWORD *)(active + 16896);
        v123 = KiLastPseudoHrTimerExpiration != v122;
        v124 = KiLastNonHrTimerExpiration != *(_QWORD *)(active + 16904);
        if ( KiGlobalTimerResolutionRequests )
          v124 = KiLastPseudoHrTimerExpiration != v122;
        if ( KiLastPseudoHrTimerExpiration != v122 )
        {
          *(_QWORD *)(active + 16896) = KiLastPseudoHrTimerExpiration;
          *(_DWORD *)(active + 16912) = v119 >> 18;
        }
        if ( v124 )
        {
          v130 = *(_DWORD *)(active + 16916);
          *(_QWORD *)(GraceSequenceQuiescent + 16904) = v120;
          if ( v118 >= v130 )
            v118 = v130;
          *(_DWORD *)(GraceSequenceQuiescent + 16916) = v119 >> 18;
        }
        if ( v121 != v122 || v124 )
        {
          v125 = KeGetCurrentPrcb();
          v126 = (signed __int32 *)v125->SchedulerAssist;
          if ( v126 )
          {
            _m_prefetchw(v126);
            v131 = *v126;
            do
            {
              v132 = v131;
              v131 = _InterlockedCompareExchange(v126, v131 & 0xFFDFFFFF, v131);
            }
            while ( v132 != v131 );
            if ( (v131 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v125);
          }
          _enable();
          v189 = MEMORY[0xFFFFF78000000014];
          KiTimerExpiration((__int64)v1, v118, v119, v124, &v187);
        }
        else
        {
          v133 = KeGetCurrentPrcb();
          v134 = (unsigned __int32 *)v133->SchedulerAssist;
          if ( v134 )
          {
            _m_prefetchw(v134);
            v137 = *v134;
            do
            {
              GraceSequenceQuiescent = v137;
              LODWORD(GraceSequenceQuiescent) = v137 & 0xFFDFFFFF;
              v138 = v137;
              v137 = _InterlockedCompareExchange((volatile signed __int32 *)v134, v137 & 0xFFDFFFFF, v137);
            }
            while ( v138 != v137 );
            if ( (v137 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v133);
          }
          _enable();
          v189 = MEMORY[0xFFFFF78000000014];
        }
        if ( v1->ClockOwner )
          KiTimer2Expiration((_DWORD)v1, v119, v123, v124, (__int64)&v187);
        _disable();
      }
      else
      {
        v135 = KeGetCurrentPrcb();
        v136 = (unsigned __int32 *)v135->SchedulerAssist;
        if ( v136 )
        {
          _m_prefetchw(v136);
          v139 = *v136;
          do
          {
            GraceSequenceQuiescent = v139;
            LODWORD(GraceSequenceQuiescent) = v139 & 0xFFDFFFFF;
            v140 = v139;
            v139 = _InterlockedCompareExchange((volatile signed __int32 *)v136, v139 & 0xFFDFFFFF, v139);
          }
          while ( v140 != v139 );
          if ( (v139 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v135);
        }
        _enable();
        v189 = MEMORY[0xFFFFF78000000014];
        _disable();
      }
    }
    if ( (v31 & 0x40) != 0 )
    {
      v32 = KeGetCurrentPrcb();
      v31 &= ~0x40u;
      v33 = (unsigned __int32 *)v32->SchedulerAssist;
      if ( v33 )
      {
        _m_prefetchw(v33);
        v109 = *v33;
        do
        {
          GraceSequenceQuiescent = v109;
          LODWORD(GraceSequenceQuiescent) = v109 & 0xFFDFFFFF;
          v110 = v109;
          v109 = _InterlockedCompareExchange((volatile signed __int32 *)v33, v109 & 0xFFDFFFFF, v109);
        }
        while ( v110 != v109 );
        if ( (v109 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v32);
      }
      _enable();
      KiNormalPriorityReadyScan(v1, GraceSequenceQuiescent);
      _disable();
    }
    if ( !KiExecuteAllDpcs(v1, CurrentThread, &v187, 0LL) )
      break;
    if ( (v31 & 4) != 0 )
    {
      v34 = KeGetCurrentPrcb();
      v35 = (signed __int32 *)v34->SchedulerAssist;
      if ( v35 )
      {
        _m_prefetchw(v35);
        v115 = *v35;
        do
        {
          v116 = v115;
          v115 = _InterlockedCompareExchange(v35, v115 & 0xFFDFFFFF, v115);
        }
        while ( v116 != v115 );
        if ( (v115 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v34);
      }
      _enable();
      p_Lock = &v1->DpcGate.Header.Lock;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      v38 = KeGetCurrentPrcb();
      v39 = 0;
      if ( _interlockedbittestandset(p_Lock, 7u) )
      {
        do
        {
          if ( (++v39 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v34) )
          {
            HvlNotifyLongSpinWait(v39);
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
        v40 = v1->DpcGate.Header.WaitListHead.Flink;
        v1->DpcGate.Header.SignalState = 1;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v40 == &v1->DpcGate.Header.WaitListHead )
              goto LABEL_50;
            v41 = v40->Flink;
            v42 = (__int64)v40;
            v40 = v41;
            v43 = *(struct _LIST_ENTRY **)(v42 + 8);
            if ( v41->Blink != (struct _LIST_ENTRY *)v42 || v43->Flink != (struct _LIST_ENTRY *)v42 )
              goto LABEL_46;
            v43->Flink = v41;
            v41->Blink = v43;
            v44 = *(_BYTE *)(v42 + 16);
            if ( v44 != 1 )
              break;
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)v38, v42, *(unsigned __int16 *)(v42 + 18), 0LL) )
            {
LABEL_49:
              v45 = v1->DpcGate.Header.SignalState-- == 1;
              if ( v45 )
                goto LABEL_50;
            }
          }
          if ( v44 == 2 )
          {
            *(_BYTE *)(v42 + 17) = 5;
            KiInsertQueueInternal(*(_QWORD *)(v42 + 24), (__int64 *)v42);
            goto LABEL_49;
          }
          if ( v44 == 4 )
          {
            *(_BYTE *)(v42 + 17) = 5;
            v1->DpcGate.Header.SignalState = 0;
            KeInsertQueueDpc(*(PRKDPC *)(v42 + 24), &v1->DpcGate, (PVOID)v42);
          }
          else
          {
            KiTryUnwaitThread((__int64)v38, v42, 256LL, 0LL);
          }
        }
      }
LABEL_50:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      KiExitDispatcher(v38, 0LL, 1u, 0, CurrentIrql);
      _disable();
    }
    v3 = 0LL;
    v46.QuadPart = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    if ( v1->CycleAccumulationInitialized )
    {
      v50 = KeQueryPerformanceCounter(0LL);
      v51 = v1->QpcToTscIncrementShift;
      v46 = v50;
      v52 = v1->QpcToTscIncrement;
      v53 = v46;
      v184 = 0LL;
      if ( v51 )
        v53.QuadPart = v46.QuadPart << v51;
      v54 = (LARGE_INTEGER *)p_StartCyclesQpc;
      v55 = p_StartCycles;
      v56 = *p_StartCyclesQpc;
      v184 = ((unsigned __int64)v53.QuadPart * (unsigned __int128)v52) >> 64;
      v49 = v184 - *p_StartCycles;
      v48 = v46.QuadPart - v56;
      v47 = v184;
      if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
      {
        v180 = 0LL;
        v181 = 0LL;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v87 = (v56 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v88.QuadPart = v46.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v87 = v56 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v88 = v46;
        }
        v180 = *((_QWORD *)&v87 + 1);
        v181 = ((unsigned __int64)v88.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v89 = ((unsigned __int64)((v181 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v87 + 1)
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        v55 = p_StartCycles;
        if ( v89 )
        {
          v1->KernelTime += v89;
          v1->DpcTime += v89;
        }
        v3 = 0LL;
      }
    }
    else
    {
      v55 = p_StartCycles;
      v54 = (LARGE_INTEGER *)p_StartCyclesQpc;
    }
    v1->CycleTimeQpc += v48;
    v1->CycleTime += v49;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x20) != 0 )
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
      v60 = 0;
      FrequencyBucketThresholds = v1->PowerState.FrequencyBucketThresholds;
      do
      {
        if ( LatestFrequencyPercent <= *FrequencyBucketThresholds )
          break;
        ++v60;
        ++FrequencyBucketThresholds;
      }
      while ( v60 < 3 );
      v62 = (v1->PowerState.ArchitecturalEfficiencyClass != 0) + 2LL * v60 + 4336;
      *((_QWORD *)&v1->MxCsr + v62) += v49;
    }
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x40) != 0 )
    {
      v63 = *(_QWORD *)(CurrentThread + 968);
      if ( v63 )
        *(_BYTE *)(v63 + 64) = 1;
    }
    *v54 = v46;
    *v55 = v47;
    if ( (*(_BYTE *)(CurrentThread + 2) & 2) != 0 )
    {
      v64 = *(_QWORD *)(CurrentThread + 360);
      v65 = *(_QWORD *)(v64 + 32);
      if ( v65 )
      {
        v66 = 1LL;
        if ( KiHwCountersCount )
        {
          v67 = (unsigned int *)&KiHwCounters;
          v68 = (_QWORD *)(v64 + 48);
          v69 = (unsigned int)KiHwCountersCount;
          do
          {
            if ( (v65 & v66) != 0 )
              *v68 = __readpmc(*v67);
            v66 *= 2LL;
            v68 += 3;
            ++v67;
            --v69;
          }
          while ( v69 );
        }
      }
    }
    v45 = v1->InterruptRequest == 0;
    v1->NestingLevel = 0;
    if ( !v45 )
      v1->InterruptRequest = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)&v1->14524, 0, 1);
    if ( result == 1 )
    {
      v1->DpcData[0].ActiveDpc = 0LL;
      return result;
    }
  }
  v90.QuadPart = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  if ( v1->CycleAccumulationInitialized )
  {
    v94 = KeQueryPerformanceCounter(0LL);
    v95 = v1->QpcToTscIncrementShift;
    v90 = v94;
    v96 = v1->QpcToTscIncrement;
    v97 = v90;
    v185 = 0LL;
    if ( v95 )
      v97.QuadPart = v90.QuadPart << v95;
    v91 = ((unsigned __int64)v97.QuadPart * (unsigned __int128)v96) >> 64;
    v185 = v91;
    StartCyclesQpc = v1->StartCyclesQpc;
    v93 = v91 - v1->StartCycles;
    v92 = v90.QuadPart - StartCyclesQpc;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v175 = 0LL;
      v182 = 0LL;
      v111 = v90;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v112 = (StartCyclesQpc << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v111.QuadPart = v90.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v112 = StartCyclesQpc * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v175 = (unsigned __int64 *)*((_QWORD *)&v112 + 1);
      v182 = ((unsigned __int64)v111.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v113 = ((unsigned __int64)((v182 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
           - ((unsigned __int64)((*((unsigned __int64 *)&v112 + 1)
                                * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v113 )
      {
        v1->KernelTime += v113;
        v1->DpcTime += v113;
      }
    }
  }
  v1->CycleTimeQpc += v92;
  v1->CycleTime += v93;
  if ( (*(_BYTE *)(CurrentThread + 2) & 0x20) != 0 )
  {
    v99 = &v1->Cycles[(unsigned int)PoGetFrequencyBucket(v1)][v1->PowerState.ArchitecturalEfficiencyClass != 0];
    *v99 += v100;
  }
  if ( (*(_BYTE *)(CurrentThread + 2) & 0x40) != 0 )
  {
    v101 = *(_QWORD *)(CurrentThread + 968);
    if ( v101 )
      *(_BYTE *)(v101 + 64) = 1;
  }
  v1->StartCyclesQpc = v90.QuadPart;
  v1->StartCycles = v91;
  if ( (*(_BYTE *)(CurrentThread + 2) & 2) != 0 )
  {
    v102 = *(_QWORD *)(CurrentThread + 360);
    v103 = *(_QWORD *)(v102 + 32);
    if ( v103 )
    {
      if ( KiHwCountersCount )
      {
        v104 = (_QWORD *)(v102 + 48);
        v105 = (unsigned int)KiHwCountersCount;
        v106 = 1LL;
        v107 = (unsigned int *)&KiHwCounters;
        do
        {
          if ( (v103 & v106) != 0 )
            *v104 = __readpmc(*v107);
          v106 *= 2LL;
          v104 += 3;
          ++v107;
          --v105;
        }
        while ( v105 );
        v1 = v186;
      }
    }
  }
  v1->NestingLevel = 0;
  if ( v1->InterruptRequest )
    v1->InterruptRequest = 0;
  LODWORD(v174) = 0;
  _m_prefetchw(&v1->14524);
  v71 = v1->DpcRequestSlot[0];
  result = _InterlockedCompareExchange16((volatile signed __int16 *)&v1->14524, (v31 | v71) & 0xFF7E | 0x80, v71);
  if ( v71 != result )
  {
    do
    {
      RtlBackoff(&v174);
      _m_prefetchw(&v1->14524);
      v73 = v1->DpcRequestSlot[0];
      result = _InterlockedCompareExchange16((volatile signed __int16 *)&v1->14524, v72 | (v31 | v73) & 0xFFFE, v73);
    }
    while ( v73 != result );
  }
  v1->DpcData[0].ActiveDpc = 0LL;
  return result;
}
