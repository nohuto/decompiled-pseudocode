/*
 * XREFs of KiSearchForNewThreadsOnTarget @ 0x1403BD660
 * Callers:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1404E0D30 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     KiSendSoftwareInterruptAffinity @ 0x1402852DC (KiSendSoftwareInterruptAffinity.c)
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSearchForNewThreadsInStandby @ 0x1402A3718 (KiSearchForNewThreadsInStandby.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x1402A37F0 (KiIsIsolationUnitIdleByHandle.c)
 *     EtwTraceScheduleThread @ 0x1402A6768 (EtwTraceScheduleThread.c)
 *     KiScheduleThreadToRescheduleContext @ 0x1402A7A00 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiDetermineNextScbForScbReadyQueueEnumerator @ 0x1402A85EC (KiDetermineNextScbForScbReadyQueueEnumerator.c)
 *     KiAdvanceReadyListEnumerator @ 0x1402A86D0 (KiAdvanceReadyListEnumerator.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckThreadAffinity @ 0x1402A8770 (KiCheckThreadAffinity.c)
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x1402D8A9C (KiRemoveCurrentThreadScbReadyQueueEnumerator.c)
 *     KiRemoveCurrentThreadSharedReadyQueueEnumerator @ 0x1402D8B1C (KiRemoveCurrentThreadSharedReadyQueueEnumerator.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1402D8C40 (KiRemoveThreadFromReadyQueue.c)
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x140368B7C (KiFindRankBiasedIdleSmtSet.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 *     KiTryAcquirePrcbLocksForIsolationUnit @ 0x14044E208 (KiTryAcquirePrcbLocksForIsolationUnit.c)
 *     KiReduceToUnderMaxQuotaSet @ 0x1404623CC (KiReduceToUnderMaxQuotaSet.c)
 *     KiIsThreadRankBiased @ 0x1404F4A2C (KiIsThreadRankBiased.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F74FC (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiSearchForNewThreadsOnTarget(
        struct _KPRCB *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v9; // eax
  unsigned int v10; // esi
  unsigned __int64 v11; // rbx
  unsigned int v12; // edx
  _KI_RESCHEDULE_CONTEXT *v13; // r9
  unsigned __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r12
  _QWORD *v17; // r15
  unsigned int v18; // eax
  _QWORD **v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rcx
  _WORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  int v26; // eax
  unsigned int v27; // r8d
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // r9
  unsigned int v34; // eax
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  _KI_RESCHEDULE_CONTEXT *v50; // rsi
  __int64 v51; // rdx
  _KI_RESCHEDULE_CONTEXT *v52; // r13
  char v53; // r15
  char v54; // r12
  unsigned int v55; // esi
  _KCORE_CONTROL_BLOCK *v56; // rcx
  unsigned __int8 v57; // al
  unsigned __int64 *v58; // r8
  int v59; // edx
  unsigned __int64 v60; // r9
  unsigned int v61; // ebx
  unsigned __int8 *v62; // r12
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // rsi
  unsigned __int8 v65; // al
  unsigned int v66; // edx
  _KAFFINITY_EX *v67; // r15
  int *v68; // rcx
  int v69; // ecx
  void **v70; // rdx
  bool v71; // zf
  _DWORD *v72; // rcx
  __int64 v73; // r15
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned int v77; // eax
  __int64 v78; // r12
  __int64 ScbForScbReadyQueueEnumerator; // rax
  __int64 v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // r15
  __int64 v84; // rax
  _WORD *v85; // rcx
  __int64 v86; // rsi
  int v87; // eax
  unsigned int v88; // r8d
  int v89; // edx
  __int64 v90; // rcx
  __int64 v91; // r13
  unsigned __int64 v92; // rsi
  __int64 v93; // rcx
  __int64 v94; // r9
  __int64 v95; // rsi
  unsigned int v96; // eax
  __int64 v97; // r9
  unsigned __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rcx
  _DWORD *v101; // r8
  unsigned __int64 v102; // r15
  unsigned __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r12
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rax
  unsigned __int64 v109; // rdx
  __int64 v110; // rcx
  _KI_RESCHEDULE_CONTEXT *v111; // r15
  char v112; // r12
  char v113; // r13
  unsigned int v114; // esi
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v116; // al
  unsigned __int64 *v117; // r8
  int v118; // edx
  unsigned __int64 v119; // r9
  unsigned int v120; // r13d
  unsigned __int8 v121; // al
  struct _KPRCB *Prcb; // rsi
  unsigned __int8 *v123; // r12
  unsigned __int8 v124; // al
  unsigned int v125; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  int *SchedulerAssist; // rdx
  int v128; // edx
  void **p_SchedulerAssist; // rcx
  _DWORD *v130; // rdx
  __int64 Number; // r15
  unsigned __int64 v132; // rcx
  unsigned __int64 *v133; // r8
  int v134; // edx
  unsigned __int8 TargetType; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v137; // edx
  unsigned __int8 Level; // r8
  struct _SINGLE_LIST_ENTRY *v139; // rdx
  int v140; // eax
  _QWORD *v141; // rdx
  unsigned int v142; // ebx
  unsigned int v143; // eax
  __int64 v144; // r12
  unsigned int v145; // r13d
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rsi
  _WORD *v149; // rbx
  __int64 v150; // rbx
  int v151; // eax
  unsigned int v152; // r8d
  int v153; // edx
  int v154; // ecx
  __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rbx
  unsigned __int64 v158; // r9
  __int64 v159; // rbx
  unsigned __int64 v160; // rcx
  int v161; // eax
  __int64 v162; // rcx
  unsigned __int64 v163; // r11
  _DWORD *v164; // r8
  _QWORD *v165; // r15
  unsigned __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rsi
  unsigned int v169; // eax
  unsigned __int64 v170; // rcx
  unsigned __int8 *v171; // rax
  unsigned int v172; // r8d
  _QWORD *v173; // r9
  unsigned int v174; // eax
  _QWORD *v175; // rdx
  unsigned __int64 v176; // r9
  __int64 *v177; // rdx
  unsigned int v178; // r10d
  __int64 v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // r11
  _KI_RESCHEDULE_CONTEXT *v182; // r15
  char v183; // r10
  unsigned __int64 *v184; // r9
  int v185; // r8d
  unsigned __int8 *v186; // rax
  unsigned __int8 *v187; // rax
  int v188; // r8d
  __int64 v189; // r9
  __int64 v190; // rax
  __int64 v191; // rax
  unsigned __int64 v192; // r9
  unsigned __int64 *v193; // r8
  int v194; // edx
  unsigned __int64 *v195; // r8
  __int64 v196; // rax
  int v197; // edx
  unsigned __int64 v198; // r9
  unsigned __int64 v199; // rcx
  int v200; // eax
  __int64 v201; // rcx
  unsigned int i; // ebx
  __int64 v203; // rax
  __int64 v204; // rdx
  unsigned int v205; // [rsp+30h] [rbp-D0h]
  __int64 v206; // [rsp+38h] [rbp-C8h]
  __int64 v207; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v208; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v209; // [rsp+48h] [rbp-B8h] BYREF
  struct _SINGLE_LIST_ENTRY v210; // [rsp+50h] [rbp-B0h] BYREF
  struct _SINGLE_LIST_ENTRY v211; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v212; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v213; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v214; // [rsp+70h] [rbp-90h]
  _QWORD v215[3]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v216; // [rsp+90h] [rbp-70h] BYREF
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // [rsp+98h] [rbp-68h]
  _DWORD *v218; // [rsp+A0h] [rbp-60h]
  __int64 v219; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v220; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v221; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v222; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v223; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v224; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v225; // [rsp+F0h] [rbp-10h]
  unsigned int v226; // [rsp+F8h] [rbp-8h]
  int v227; // [rsp+FCh] [rbp-4h]
  int v228; // [rsp+100h] [rbp+0h]
  int v229; // [rsp+104h] [rbp+4h]
  int v230; // [rsp+108h] [rbp+8h]
  unsigned int v231; // [rsp+10Ch] [rbp+Ch]
  unsigned int v232; // [rsp+110h] [rbp+10h]
  int v233; // [rsp+114h] [rbp+14h]
  int v234; // [rsp+118h] [rbp+18h]
  unsigned int v235; // [rsp+11Ch] [rbp+1Ch]
  unsigned int v236; // [rsp+120h] [rbp+20h]
  int v237; // [rsp+124h] [rbp+24h]
  int v238; // [rsp+128h] [rbp+28h]
  int v239; // [rsp+12Ch] [rbp+2Ch]
  __int64 v240; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v241[3]; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v242; // [rsp+150h] [rbp+50h]
  _QWORD v243[2]; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v244; // [rsp+168h] [rbp+68h] BYREF
  unsigned __int64 v245; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v246; // [rsp+178h] [rbp+78h] BYREF
  __int64 v247; // [rsp+180h] [rbp+80h] BYREF
  unsigned int SingleTargetIndex; // [rsp+188h] [rbp+88h]
  __int64 v249; // [rsp+18Ch] [rbp+8Ch]
  unsigned __int64 v250; // [rsp+198h] [rbp+98h] BYREF
  unsigned __int64 v251; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v252; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v255; // [rsp+210h] [rbp+110h]
  __int64 v256; // [rsp+210h] [rbp+110h]

  v6 = a3;
  v7 = a2;
  if ( a5 )
  {
    if ( a1 == (struct _KPRCB *)a5 )
      return;
    KiSearchForNewThreadsInStandby((__int64)a1, a5, a2, a4);
    v225 = 0LL;
    v9 = *(_DWORD *)(a5 + 33752);
    StaticRescheduleContext = 0LL;
    v210.Next = 0LL;
    v214 = 0LL;
    memset(v215, 0, sizeof(v215));
    BYTE4(v215[0]) = 32;
    v224 = 0LL;
    BYTE4(v224) = 32;
    v223 = 0LL;
    if ( !v9 && !*(_QWORD *)(a5 + 33840) )
      goto LABEL_229;
    v10 = 0;
    v11 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    v242 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a5 + 48), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a5 + 48) );
    }
    v12 = *(_DWORD *)(a5 + 33752);
    v13 = (_KI_RESCHEDULE_CONTEXT *)(a5 + 33856);
    StaticRescheduleContext = (_KI_RESCHEDULE_CONTEXT *)(a5 + 33856);
    v14 = a5 + 33856;
    v215[2] = a5 + 33856;
    v214 = a5;
    LODWORD(v215[0]) = v12;
    if ( v12 )
    {
      _BitScanReverse(&v15, v12);
      v231 = v15;
      v215[1] = (char *)v13 + 16 * v15;
      BYTE4(v215[0]) = v15;
    }
    else
    {
      v215[1] = 0LL;
    }
    v219 = 0LL;
    v16 = 0LL;
    v205 = 0;
    v206 = 0LL;
    while ( 1 )
    {
      v212 = 0LL;
      if ( !v215[1] )
        goto LABEL_117;
      v17 = *(_QWORD **)v215[1];
      v215[1] = v17;
      if ( v17 == (_QWORD *)(v14 + 16LL * BYTE4(v215[0])) )
      {
        while ( 1 )
        {
          v12 &= ~(1 << SBYTE4(v215[0]));
          LODWORD(v215[0]) = v12;
          if ( !v12 )
            break;
          _BitScanReverse(&v18, v12);
          v19 = (_QWORD **)((char *)v13 + 16 * (unsigned __int8)v18);
          v232 = v18;
          BYTE4(v215[0]) = v18;
          v17 = *v19;
          v215[1] = v17;
          if ( v17 != v19 )
            goto LABEL_22;
        }
        BYTE4(v215[0]) = 0;
        v215[1] = 0LL;
LABEL_117:
        v20 = a2;
LABEL_118:
        v74 = 0LL;
        v223 = a5;
        v75 = *(_QWORD *)(a5 + 33848);
        if ( (v75 & 1) != 0 )
        {
          if ( v75 == 1 )
          {
LABEL_126:
            v220 = 0LL;
            v78 = 0LL;
            v255 = 0;
            v207 = 0LL;
            while ( 1 )
            {
              v221 = 0LL;
              if ( !v74 )
                goto LABEL_223;
              while ( (int)KiAdvanceReadyListEnumerator((__int64)&v224, &v221) < 0 )
              {
                ScbForScbReadyQueueEnumerator = KiDetermineNextScbForScbReadyQueueEnumerator(*((_QWORD **)&v223 + 1));
                *((_QWORD *)&v223 + 1) = ScbForScbReadyQueueEnumerator;
                if ( !ScbForScbReadyQueueEnumerator )
                  goto LABEL_223;
                v80 = ScbForScbReadyQueueEnumerator + 144;
                v81 = *(unsigned __int16 *)(ScbForScbReadyQueueEnumerator + 120);
                LODWORD(v224) = v81;
                v225 = v80;
                if ( v81 )
                {
                  _BitScanReverse(&v81, v81);
                  v236 = v81;
                  *((_QWORD *)&v224 + 1) = v80 + 16LL * v81;
                  BYTE4(v224) = v81;
                }
                else
                {
                  BYTE4(v224) = 32;
                  *((_QWORD *)&v224 + 1) = 0LL;
                }
              }
              v82 = a3 & *(_QWORD *)(v20 + 8);
              if ( !v82 || (v216 = v82 & ~v78) == 0 )
              {
LABEL_223:
                if ( v11 )
                {
                  v132 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
                  v246 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( (v11 & 1) != 0 )
                  {
                    v133 = (unsigned __int64 *)(*(_QWORD *)(v132 + 36440) + 8LL);
                    v134 = **(unsigned __int8 **)(v132 + 36440);
                    if ( **(_BYTE **)(v132 + 36440) )
                      goto LABEL_228;
                  }
                  else
                  {
                    v133 = &v246;
                    v134 = 1;
                    do
LABEL_228:
                      _InterlockedAnd64((volatile signed __int64 *)(v133[--v134] + 48), 0LL);
                    while ( v134 );
                  }
                }
LABEL_229:
                TargetType = a1->DeferredDispatchInterrupts.TargetType;
                if ( TargetType )
                {
                  if ( TargetType == 1 )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v137 = 31;
                    Level = a1->DeferredDispatchInterrupts.Level;
                    SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                    ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
                    v247 = 6LL;
                    v249 = 0LL;
                    if ( Level != 1 )
                      v137 = 47;
                    HalpInterruptSendIpi((unsigned int *)&v247, v137);
                  }
                  else
                  {
                    KiSendSoftwareInterruptAffinity(
                      &a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count,
                      a1->DeferredDispatchInterrupts.Level);
                  }
                  if ( a1->DeferredDispatchInterrupts.TargetType == 2 )
                  {
                    *(_QWORD *)&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = 2097153LL;
                    memset_0(
                      &a1->DeferredDispatchInterrupts.MultipleTargetAffinity.8,
                      0,
                      sizeof(a1->DeferredDispatchInterrupts.MultipleTargetAffinity.8));
                  }
                  a1->DeferredDispatchInterrupts.TargetType = 0;
                  a1->DeferredDispatchInterrupts.SingleTargetIndex = 0xFFFF;
                }
                if ( v210.Next )
                {
                  v139 = &v210;
                  goto LABEL_356;
                }
                return;
              }
              v83 = v221;
              v84 = *(unsigned __int16 *)(v20 + 136);
              v85 = *(_WORD **)(v221 + 576);
              if ( (unsigned __int16)v84 >= *v85 )
                v86 = 0LL;
              else
                v86 = *(_QWORD *)&v85[4 * v84 + 4];
              v87 = KiComputeThreadQos(v221);
              v88 = *(_DWORD *)(v83 + 80);
              v89 = 0;
              if ( v88 <= *(_DWORD *)(v83 + 84) )
                v88 = *(_DWORD *)(v83 + 84);
              LOBYTE(v89) = v88 >= KiDynamicHeteroCpuPolicyExpectedCycles;
              v90 = *(_QWORD *)(*(_QWORD *)(a2 + 192)
                              + 24LL
                              * (*(unsigned __int8 *)(v83 + 517)
                               + (unsigned int)*(unsigned __int8 *)(a2 + 185) * (v89 + 2 * v87))
                              + 16);
              if ( (v90 & v86) != 0 )
                v86 &= v90;
              v91 = v221;
              v92 = v86 & *(_QWORD *)(a2 + 8LL * ((*(_DWORD *)(v221 + 120) >> 1) & 1) + 16) & v216;
              v216 = v92;
              if ( *(_QWORD *)(v221 + 104) )
              {
                if ( KiIsThreadConstrainedBySchedulingGroup(v221) && !KiShouldPreemptionBeDeferred(v93) )
                {
                  v92 = KiReduceToUnderMaxQuotaSet(*(unsigned __int16 *)(v94 + 136), v92);
                  v216 = v92;
                  if ( KiPerfIsoEnabled )
                  {
                    if ( (unsigned __int8)KiIsThreadRankBiased(v91, a1) )
                    {
                      KiFindRankBiasedIdleSmtSet(a2, &v216);
                      v92 = v216;
                    }
                  }
                }
              }
              if ( !v92 )
              {
                v95 = v221;
                if ( *(_QWORD *)(v221 + 568) != KiCpuSetSequence && (*(_DWORD *)(v221 + 116) & 8) == 0 )
                {
                  KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v223);
                  KiInsertDeferredReadyList((__int64 *)&v210, v95);
                }
                v96 = ++v255;
                goto LABEL_221;
              }
              if ( KiCheckThreadAffinity(v91) )
              {
                v101 = (_DWORD *)(v91 + 120);
                v102 = v92;
                v218 = (_DWORD *)(v91 + 120);
                StaticRescheduleContext = (_KI_RESCHEDULE_CONTEXT *)(v91 + 104);
                do
                {
                  _BitScanReverse64(&v103, v102);
                  v104 = (unsigned int)v103 + (*(unsigned __int16 *)(v97 + 136) << 6);
                  v238 = v103;
                  v105 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + v104)];
                  if ( (unsigned __int8)KiTryAcquirePrcbLocksForIsolationUnit(v105, (*v101 >> 1) & 1, &v220) )
                  {
                    if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v220) )
                    {
                      v91 = v221;
                      if ( !*(_QWORD *)&StaticRescheduleContext->ProcessorCount
                        || !KiIsThreadConstrainedBySchedulingGroup(v221)
                        || KiShouldPreemptionBeDeferred(v106)
                        || !KiCheckForMaxOverQuotaScb(v107) )
                      {
                        KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v223);
                        StaticRescheduleContext = a1->StaticRescheduleContext;
                        v111 = StaticRescheduleContext;
                        memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
                        KiStartRescheduleContext((__int64)v111, &v220);
                        KiScheduleThreadToRescheduleContext(&v111->ProcessorCount, v91, v105, 0, (__int64)&v210);
                        v112 = 0;
                        v113 = 0;
                        v114 = 0;
                        if ( (WORD2(xmmword_140FC6B50) & 0x400) != 0 )
                          v113 = 2;
                        if ( v111->ProcessorCount )
                        {
                          do
                          {
                            v112 |= KiCommitRescheduleContextEntry(
                                      (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v111->ProcessorEntries
                                                                            + 32 * v114
                                                                            + 8 * v114),
                                      a1,
                                      v113,
                                      &v210);
                            ++v114;
                          }
                          while ( v114 < v111->ProcessorCount );
                        }
                        if ( v111->IsolationWidth == KiIsolationWidthCore )
                        {
                          CoreControlBlock = v111->ProcessorEntries[0].Prcb->CoreControlBlock;
                          v116 = CoreControlBlock->ScanStartIndex + 1;
                          CoreControlBlock->ScanStartIndex = v116;
                          if ( v116 >= CoreControlBlock->ProcessorCount )
                            CoreControlBlock->ScanStartIndex = 0;
                        }
                        v117 = 0LL;
                        v118 = 0;
                        v119 = v220 & 0xFFFFFFFFFFFFFFFEuLL;
                        v250 = v220 & 0xFFFFFFFFFFFFFFFEuLL;
                        if ( (v220 & 1) == 0 )
                        {
                          v117 = &v250;
                          v118 = 1;
                          goto LABEL_186;
                        }
                        if ( (v220 & 1) == 1 )
                        {
                          v117 = (unsigned __int64 *)(*(_QWORD *)(v119 + 36440) + 8LL);
                          v118 = **(unsigned __int8 **)(v119 + 36440);
                        }
                        while ( v118 )
LABEL_186:
                          _InterlockedAnd64((volatile signed __int64 *)(v117[--v118] + 48), 0LL);
                        v220 = 0LL;
                        if ( v112 )
                        {
                          v120 = 0;
                          if ( v111->ProcessorCount )
                          {
                            while ( 2 )
                            {
                              v121 = v111->ProcessorEntries[v120].___u6[0];
                              Prcb = v111->ProcessorEntries[v120].Prcb;
                              v123 = &v111->ProcessorCount + 40 * v120;
                              if ( (v121 & 0x10) != 0 || (v121 & 8) != 0 && Prcb->IdleHalt )
                              {
                                v124 = a1->DeferredDispatchInterrupts.TargetType;
                                if ( !v124 )
                                {
                                  a1->DeferredDispatchInterrupts.TargetType = 1;
                                  a1->DeferredDispatchInterrupts.SingleTargetIndex = Prcb->Number;
                                  goto LABEL_199;
                                }
                                if ( v124 == 1 )
                                {
                                  v125 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                                  if ( v125 != Prcb->Number )
                                  {
                                    p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                                    a1->DeferredDispatchInterrupts.TargetType = 2;
                                    KeAddProcessorAffinityEx(
                                      &a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count,
                                      v125);
                                    goto LABEL_198;
                                  }
                                }
                                else
                                {
                                  p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
LABEL_198:
                                  KeAddGroupAffinityEx(
                                    &p_MultipleTargetAffinity->Count,
                                    Prcb->Group,
                                    Prcb->GroupSetMember);
                                }
                              }
LABEL_199:
                              if ( (v123[51] & 2) != 0 )
                                EtwTraceScheduleThread(*((_QWORD *)v123 + 5), (__int64)Prcb, 0LL);
                              if ( (v123[51] & 4) != 0 )
                              {
                                SchedulerAssist = (int *)Prcb->SchedulerAssist;
                                if ( SchedulerAssist )
                                {
                                  if ( a1->SchedulerAssist && a1 != Prcb )
                                  {
                                    v128 = *SchedulerAssist;
                                    p_SchedulerAssist = &a1->SchedulerAssist;
                                    if ( (v128 & 0x40000) != 0 )
                                      p_SchedulerAssist = &a1->SchedulerAssist;
                                    if ( (v128 & 0x100000) != 0
                                      || (p_SchedulerAssist = &a1->SchedulerAssist, (v128 & 0x40000) != 0)
                                      && (unsigned __int8)v128 < (char)v123[52] )
                                    {
                                      v71 = HvlpVirtualProcessorsIdentityMapped == 0;
                                      v130 = *p_SchedulerAssist;
                                      *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                                      Number = Prcb->Number;
                                      if ( v71 )
                                        LODWORD(Number) = (unsigned __int8)byte_140FCD2A1[2 * Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                                      v130[2] = Number;
                                      if ( (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
                                        EtwTraceXSchedulerPriorityKickSend(Prcb->Number, 2LL);
                                      __writemsr(0x400000C2u, (unsigned int)Number);
                                    }
                                  }
                                }
                              }
                              if ( (v123[51] & 1) != 0 )
                                _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v123 + 5) + 868LL));
                              v111 = StaticRescheduleContext;
                              if ( ++v120 >= StaticRescheduleContext->ProcessorCount )
                              {
                                v11 = v242;
                                break;
                              }
                              continue;
                            }
                          }
                        }
LABEL_219:
                        v78 = v207;
                        goto LABEL_220;
                      }
                      v92 = v216;
                    }
                    v108 = ~*(_QWORD *)(v105 + 200);
                    v92 &= v108;
                    v102 &= v108;
                    v216 = v92;
                    KiReleasePrcbLocksForIsolationUnit(&v220);
                  }
                  else
                  {
                    v102 &= ~*(_QWORD *)(v105 + 200);
                  }
                  v101 = v218;
                  v97 = a2;
                }
                while ( v102 );
                if ( !v92 )
                {
                  ++v255;
                  goto LABEL_219;
                }
                v78 = v207;
                _BitScanReverse64(&v109, v92);
                v110 = (unsigned int)v109 + (*(unsigned __int16 *)(a2 + 136) << 6);
                v239 = v109;
                v100 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + v110)];
                if ( (*(_DWORD *)(v91 + 120) & 2) == 0 )
                {
                  v78 = *(_QWORD *)(v100 + 200) | v207;
                  goto LABEL_157;
                }
              }
              else
              {
                _BitScanReverse64(&v98, v92);
                v99 = (unsigned int)v98 + (*(unsigned __int16 *)(v97 + 136) << 6);
                v237 = v98;
                v100 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + v99)];
                if ( (*(_DWORD *)(v91 + 120) & 2) == 0 )
                {
                  v78 |= *(_QWORD *)(v100 + 200);
                  goto LABEL_157;
                }
              }
              v78 |= *(_QWORD *)(v100 + 36448);
LABEL_157:
              v207 = v78;
              KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v223);
              KiInsertDeferredReadyList((__int64 *)&v210, v91);
LABEL_220:
              v96 = v255;
LABEL_221:
              if ( v96 >= 0x40 )
                goto LABEL_223;
              v74 = *((_QWORD *)&v223 + 1);
              v20 = a2;
            }
          }
          v76 = v75 ^ ((a5 + 33840) | 1);
        }
        else
        {
          v76 = *(_QWORD *)(a5 + 33848);
        }
        if ( v76 )
        {
          v74 = v76 - 88;
          v77 = *(unsigned __int16 *)(v76 + 32);
          *((_QWORD *)&v223 + 1) = v74;
          LODWORD(v224) = v77;
          v225 = v74 + 144;
          if ( v77 )
          {
            _BitScanReverse(&v77, v77);
            v235 = v77;
            *((_QWORD *)&v224 + 1) = v74 + 144 + 16LL * v77;
            BYTE4(v224) = v77;
          }
          else
          {
            BYTE4(v224) = 32;
            *((_QWORD *)&v224 + 1) = 0LL;
          }
        }
        goto LABEL_126;
      }
LABEL_22:
      v20 = a2;
      v21 = (__int64)(v17 - 27);
      v22 = a3 & *(_QWORD *)(a2 + 8);
      if ( !v22 )
        goto LABEL_118;
      v212 = v22 & ~v16;
      if ( !v212 )
        goto LABEL_118;
      v23 = *(_WORD **)(v21 + 576);
      v24 = *(unsigned __int16 *)(a2 + 136);
      if ( (unsigned __int16)v24 >= *v23 )
        v25 = 0LL;
      else
        v25 = *(_QWORD *)&v23[4 * v24 + 4];
      v26 = KiComputeThreadQos((__int64)(v17 - 27));
      v27 = *(_DWORD *)(v21 + 80);
      v28 = 0;
      if ( v27 <= *(_DWORD *)(v21 + 84) )
        v27 = *(_DWORD *)(v21 + 84);
      LOBYTE(v28) = v27 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v29 = *(_QWORD *)(a2 + 192)
          + 24LL * (*(unsigned __int8 *)(v21 + 517) + (unsigned int)*(unsigned __int8 *)(a2 + 185) * (v28 + 2 * v26));
      if ( (v25 & *(_QWORD *)(v29 + 16)) != 0 )
        v25 &= *(_QWORD *)(v29 + 16);
      v30 = *(_QWORD *)(v21 + 104);
      v31 = v25 & *(_QWORD *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(v21 + 120) >> 1) & 1) + 16) & v212;
      v212 = v31;
      if ( v30 )
      {
        if ( KiIsThreadConstrainedBySchedulingGroup((__int64)(v17 - 27)) && !KiShouldPreemptionBeDeferred(v32) )
        {
          v31 = KiReduceToUnderMaxQuotaSet(*(unsigned __int16 *)(v33 + 136), v31);
          v212 = v31;
          if ( KiPerfIsoEnabled )
          {
            if ( (unsigned __int8)KiIsThreadRankBiased(v17 - 27, a1) )
            {
              KiFindRankBiasedIdleSmtSet(a2, &v212);
              v31 = v212;
            }
          }
        }
      }
      if ( v31 )
        break;
      if ( *(_QWORD *)(v21 + 568) != KiCpuSetSequence && (*(_DWORD *)(v21 + 116) & 8) == 0 )
      {
        v215[1] = *(_QWORD *)(v215[1] + 8LL);
        KiRemoveThreadFromReadyQueue(v214, v17, SBYTE4(v215[0]));
        KiInsertDeferredReadyList((__int64 *)&v210, (__int64)(v17 - 27));
      }
      v34 = ++v205;
LABEL_114:
      if ( v34 >= 0x40 )
        goto LABEL_117;
      v14 = v215[2];
      v12 = v215[0];
      v13 = StaticRescheduleContext;
    }
    if ( KiCheckThreadAffinity((__int64)(v17 - 27)) )
    {
      v40 = v31;
      do
      {
        _BitScanReverse64(&v41, v40);
        v42 = (unsigned int)v41 + (*(unsigned __int16 *)(v35 + 136) << 6);
        v234 = v41;
        v43 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + v42)];
        if ( (unsigned __int8)KiTryAcquirePrcbLocksForIsolationUnit(v43, (*(_DWORD *)(v21 + 120) >> 1) & 1, &v219) )
        {
          if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v219) )
          {
            if ( !*(_QWORD *)(v21 + 104)
              || !KiIsThreadConstrainedBySchedulingGroup(v21)
              || KiShouldPreemptionBeDeferred(v44)
              || !KiCheckForMaxOverQuotaScb(v45) )
            {
              v215[1] = *(_QWORD *)(v215[1] + 8LL);
              KiRemoveThreadFromReadyQueue(v214, (_QWORD *)(v21 + 216), SBYTE4(v215[0]));
              v50 = a1->StaticRescheduleContext;
              memset_0(v50, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
              KiStartRescheduleContext((__int64)v50, &v219);
              v51 = v21;
              v52 = v50;
              KiScheduleThreadToRescheduleContext(&v50->ProcessorCount, v51, v43, 0, (__int64)&v210);
              v53 = 0;
              v54 = 0;
              v55 = 0;
              if ( (WORD2(xmmword_140FC6B50) & 0x400) != 0 )
                v54 = 2;
              if ( v52->ProcessorCount )
              {
                do
                {
                  v53 |= KiCommitRescheduleContextEntry(
                           (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v52->ProcessorEntries + 32 * v55 + 8 * v55),
                           a1,
                           v54,
                           &v210);
                  ++v55;
                }
                while ( v55 < v52->ProcessorCount );
              }
              if ( v52->IsolationWidth == KiIsolationWidthCore )
              {
                v56 = v52->ProcessorEntries[0].Prcb->CoreControlBlock;
                v57 = v56->ScanStartIndex + 1;
                v56->ScanStartIndex = v57;
                if ( v57 >= v56->ProcessorCount )
                  v56->ScanStartIndex = 0;
              }
              v58 = 0LL;
              v59 = 0;
              v60 = v219 & 0xFFFFFFFFFFFFFFFEuLL;
              v251 = v219 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v219 & 1) == 0 )
              {
                v58 = &v251;
                v59 = 1;
                goto LABEL_78;
              }
              if ( (v219 & 1) == 1 )
              {
                v58 = (unsigned __int64 *)(*(_QWORD *)(v60 + 36440) + 8LL);
                v59 = **(unsigned __int8 **)(v60 + 36440);
              }
              while ( v59 )
LABEL_78:
                _InterlockedAnd64((volatile signed __int64 *)(v58[--v59] + 48), 0LL);
              v219 = 0LL;
              if ( !v53 || !v52->ProcessorCount )
              {
LABEL_112:
                v16 = v206;
                goto LABEL_113;
              }
              v61 = 0;
              while ( 2 )
              {
                v62 = &v52->ProcessorCount + 40 * v61;
                v63 = v62[51];
                v64 = (struct _KPRCB *)*((_QWORD *)v62 + 2);
                if ( (v63 & 0x10) != 0 || (v63 & 8) != 0 && v64->IdleHalt )
                {
                  v65 = a1->DeferredDispatchInterrupts.TargetType;
                  if ( !v65 )
                  {
                    a1->DeferredDispatchInterrupts.TargetType = 1;
                    a1->DeferredDispatchInterrupts.SingleTargetIndex = v64->Number;
                    goto LABEL_92;
                  }
                  if ( v65 == 1 )
                  {
                    v66 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                    if ( v66 != v64->Number )
                    {
                      v67 = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                      a1->DeferredDispatchInterrupts.TargetType = 2;
                      KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, v66);
                      goto LABEL_91;
                    }
                  }
                  else
                  {
                    v67 = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
LABEL_91:
                    KeAddGroupAffinityEx(&v67->Count, v64->Group, v64->GroupSetMember);
                  }
                }
LABEL_92:
                if ( (v62[51] & 2) != 0 )
                  EtwTraceScheduleThread(*((_QWORD *)v62 + 5), (__int64)v64, 0LL);
                if ( (v62[51] & 4) != 0 )
                {
                  v68 = (int *)v64->SchedulerAssist;
                  if ( v68 )
                  {
                    if ( a1->SchedulerAssist && a1 != v64 )
                    {
                      v69 = *v68;
                      v70 = &a1->SchedulerAssist;
                      if ( (v69 & 0x40000) != 0 )
                        v70 = &a1->SchedulerAssist;
                      if ( (v69 & 0x100000) != 0
                        || (v70 = &a1->SchedulerAssist, (v69 & 0x40000) != 0) && (unsigned __int8)v69 < (char)v62[52] )
                      {
                        v71 = HvlpVirtualProcessorsIdentityMapped == 0;
                        v72 = *v70;
                        *((_DWORD *)*v70 + 3) = 2;
                        v73 = v64->Number;
                        if ( v71 )
                          LODWORD(v73) = (unsigned __int8)byte_140FCD2A1[2 * v73] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v73] << 6);
                        v72[2] = v73;
                        if ( (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
                          EtwTraceXSchedulerPriorityKickSend(v64->Number, 2LL);
                        __writemsr(0x400000C2u, (unsigned int)v73);
                      }
                    }
                  }
                }
                if ( (v62[51] & 1) != 0 )
                  _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v62 + 5) + 868LL));
                if ( ++v61 >= v52->ProcessorCount )
                {
                  v11 = v242;
                  goto LABEL_112;
                }
                continue;
              }
            }
            v31 = v212;
          }
          v46 = ~*(_QWORD *)(v43 + 200);
          v31 &= v46;
          v40 &= v46;
          v212 = v31;
          KiReleasePrcbLocksForIsolationUnit(&v219);
        }
        else
        {
          v40 &= ~*(_QWORD *)(v43 + 200);
        }
        v35 = a2;
      }
      while ( v40 );
      if ( !v31 )
      {
        ++v205;
        goto LABEL_112;
      }
      _BitScanReverse64(&v47, v31);
      v48 = (unsigned int)v47 + (*(unsigned __int16 *)(a2 + 136) << 6);
      v230 = v47;
      v49 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + v48)];
      if ( (*(_DWORD *)(v21 + 120) & 2) != 0 )
        v16 = *(_QWORD *)(v49 + 36448) | v206;
      else
        v16 = *(_QWORD *)(v49 + 200) | v206;
      v39 = (_QWORD *)(v21 + 216);
    }
    else
    {
      _BitScanReverse64(&v36, v31);
      v37 = (unsigned int)v36 + (*(unsigned __int16 *)(v35 + 136) << 6);
      v233 = v36;
      v38 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + v37)];
      if ( (*(_DWORD *)(v21 + 120) & 2) != 0 )
        v16 |= *(_QWORD *)(v38 + 36448);
      else
        v16 |= *(_QWORD *)(v38 + 200);
      v39 = v17;
    }
    v206 = v16;
    v215[1] = *(_QWORD *)(v215[1] + 8LL);
    KiRemoveThreadFromReadyQueue(v214, v39, SBYTE4(v215[0]));
    KiInsertDeferredReadyList((__int64 *)&v210, v21);
LABEL_113:
    v34 = v205;
    goto LABEL_114;
  }
  v140 = *(_DWORD *)(a6 + 8);
  v211.Next = 0LL;
  v240 = 0LL;
  memset(v241, 0, sizeof(v241));
  BYTE4(v241[0]) = 32;
  v222 = 0LL;
  if ( (v140 & 0xFFFFFFFE) == 0 )
    goto LABEL_354;
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    *((_QWORD *)&v222 + 1) = a6;
    *(_QWORD *)&v222 = 0LL;
    v141 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a6, (__int64)&v222);
    if ( v141 )
      KxWaitForLockOwnerShip((__int64)&v222, v141);
  }
  else
  {
    v142 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a6, 0LL) )
    {
      do
      {
        if ( (++v142 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v142);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)a6 );
    }
    v6 = a3;
  }
  v71 = (*(_DWORD *)(a6 + 8) & 0xFFFFFFFE) == 0;
  v143 = *(_DWORD *)(a6 + 8) & 0xFFFFFFFE;
  v240 = a6;
  LODWORD(v241[0]) = v143;
  v241[2] = a6 + 64;
  if ( v71 )
  {
    v241[1] = 0LL;
  }
  else
  {
    _BitScanReverse(&v143, v143);
    v226 = v143;
    v241[1] = a6 + 64 + 16LL * v143;
    BYTE4(v241[0]) = v143;
  }
  v213 = 0LL;
  v144 = 0LL;
  v145 = 0;
  do
  {
    v209 = 0LL;
    if ( (int)KiAdvanceReadyListEnumerator((__int64)v241, &v209) < 0 )
      break;
    v146 = v6 & *(_QWORD *)(v7 + 8);
    if ( !v146 )
      break;
    v208 = v146 & ~v144;
    if ( !v208 )
      break;
    v147 = *(unsigned __int16 *)(v7 + 136);
    v148 = v209;
    v149 = *(_WORD **)(v209 + 576);
    if ( (unsigned __int16)v147 >= *v149 )
      v150 = 0LL;
    else
      v150 = *(_QWORD *)&v149[4 * v147 + 4];
    v151 = KiComputeThreadQos(v209);
    v152 = *(_DWORD *)(v148 + 80);
    v153 = 0;
    if ( v152 <= *(_DWORD *)(v148 + 84) )
      v152 = *(_DWORD *)(v148 + 84);
    v154 = *(unsigned __int8 *)(v148 + 517);
    v7 = a2;
    LOBYTE(v153) = v152 >= KiDynamicHeteroCpuPolicyExpectedCycles;
    v155 = *(_QWORD *)(*(_QWORD *)(a2 + 192)
                     + 24LL * (v154 + (unsigned int)*(unsigned __int8 *)(a2 + 185) * (v153 + 2 * v151))
                     + 16);
    if ( (v155 & v150) != 0 )
      v150 &= v155;
    v156 = v150 & *(_QWORD *)(a2 + 8LL * ((*(_DWORD *)(v209 + 120) >> 1) & 1) + 16);
    v157 = v209;
    v158 = v156 & v208;
    v208 &= v156;
    if ( *(_QWORD *)(v209 + 104) )
    {
      if ( *(char *)(v209 + 195) < 16
        && (*(_DWORD *)(v209 + 120) & 0x200) == 0
        && !*(_DWORD *)(v209 + 484)
        && *(_BYTE *)(v209 + 390) != 1 )
      {
        v158 = KiReduceToUnderMaxQuotaSet(*(unsigned __int16 *)(a2 + 136), v158);
        v208 = v158;
        if ( KiPerfIsoEnabled )
        {
          if ( (unsigned __int8)KiIsThreadRankBiased(v157, a1) )
          {
            KiFindRankBiasedIdleSmtSet(a2, &v208);
            v158 = v208;
          }
        }
      }
    }
    v159 = v209;
    if ( !v158 )
    {
      if ( *(_QWORD *)(v209 + 568) != KiCpuSetSequence && (*(_DWORD *)(v209 + 116) & 8) == 0 )
      {
        KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v240, v209);
        KiEnterDeferredReadyState(v159);
        *(struct _SINGLE_LIST_ENTRY *)(v159 + 216) = v211;
        v211.Next = (struct _SINGLE_LIST_ENTRY *)(v159 + 216);
      }
      ++v145;
      goto LABEL_346;
    }
    if ( *(_QWORD *)(v209 + 568) != KiCpuSetSequence && (*(_DWORD *)(v209 + 116) & 8) == 0 )
    {
      _BitScanReverse64(&v160, v208);
      v161 = *(unsigned __int16 *)(a2 + 136) << 6;
      v227 = v160;
      v162 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (unsigned int)(v161 + v160))];
      if ( (*(_DWORD *)(v209 + 120) & 2) != 0 )
        v144 |= *(_QWORD *)(v162 + 36448);
      else
        v144 |= *(_QWORD *)(v162 + 200);
      KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v240, v209);
      KiEnterDeferredReadyState(v159);
      *(struct _SINGLE_LIST_ENTRY *)(v159 + 216) = v211;
      v211.Next = (struct _SINGLE_LIST_ENTRY *)(v159 + 216);
      v209 = 0LL;
      goto LABEL_346;
    }
    v163 = v208;
    v164 = (_DWORD *)(v209 + 120);
    v256 = v209 + 120;
    v165 = (_QWORD *)(v209 + 104);
    while ( 1 )
    {
      _BitScanReverse64(&v166, v163);
      v167 = (unsigned int)v166 + (*(unsigned __int16 *)(v7 + 136) << 6);
      v228 = v166;
      v168 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + v167)];
      v169 = (*v164 >> 1) & 1;
      v243[0] = v168;
      v170 = v169 | v168 & 0xFFFFFFFFFFFFFFFEuLL;
      v213 = v170;
      if ( v169 )
      {
        v171 = *(unsigned __int8 **)(v168 + 36440);
        v172 = *v171;
        v173 = v171 + 8;
        v174 = 0;
        if ( !v172 )
          goto LABEL_296;
      }
      else
      {
        v173 = v243;
        v172 = 1;
        v174 = 0;
      }
      v175 = v173;
      do
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(*v175 + 48LL), 0LL) )
          break;
        ++v174;
        ++v175;
      }
      while ( v174 < v172 );
      v170 = v213;
      v159 = v209;
LABEL_296:
      if ( v174 != v172 )
      {
        if ( v174 )
        {
          do
            _InterlockedAnd64((volatile signed __int64 *)(v173[--v174] + 48LL), 0LL);
          while ( v174 );
          v159 = v209;
        }
        v163 &= ~*(_QWORD *)(v168 + 200);
        goto LABEL_333;
      }
      v176 = v170 & 0xFFFFFFFFFFFFFFFEuLL;
      v177 = 0LL;
      v243[1] = v170 & 0xFFFFFFFFFFFFFFFEuLL;
      v178 = 0;
      if ( (v170 & 1) != 0 )
        break;
      if ( (*(_BYTE *)(v176 + 35) & 1) == 0 )
        goto LABEL_303;
LABEL_319:
      v191 = ~*(_QWORD *)(v168 + 200);
      v192 = v170 & 0xFFFFFFFFFFFFFFFEuLL;
      v208 &= v191;
      v163 &= v191;
      v244 = v170 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v170 & 1) == 0 )
      {
        v193 = &v244;
        v194 = 1;
        do
LABEL_323:
          _InterlockedAnd64((volatile signed __int64 *)(v193[--v194] + 48), 0LL);
        while ( v194 );
LABEL_332:
        v159 = v209;
        goto LABEL_333;
      }
      v193 = (unsigned __int64 *)(*(_QWORD *)(v192 + 36440) + 8LL);
      v194 = **(unsigned __int8 **)(v192 + 36440);
      if ( **(_BYTE **)(v192 + 36440) )
        goto LABEL_323;
LABEL_333:
      v164 = (_DWORD *)v256;
      v7 = a2;
      v213 = 0LL;
      if ( !v163 )
      {
        if ( v208 )
        {
          _BitScanReverse64(&v199, v208);
          v200 = *(unsigned __int16 *)(a2 + 136) << 6;
          v229 = v199;
          v201 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (unsigned int)(v200 + v199))];
          if ( (*(_DWORD *)(v159 + 120) & 2) != 0 )
            v144 |= *(_QWORD *)(v201 + 36448);
          else
            v144 |= *(_QWORD *)(v201 + 200);
          KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v240, v159);
          KiEnterDeferredReadyState(v159);
          *(struct _SINGLE_LIST_ENTRY *)(v159 + 216) = v211;
          v211.Next = (struct _SINGLE_LIST_ENTRY *)(v159 + 216);
        }
        else
        {
          ++v145;
        }
        goto LABEL_346;
      }
    }
    if ( (v170 & 1) == 1 )
    {
      v187 = *(unsigned __int8 **)(v176 + 36440);
      v178 = *v187;
      v177 = (__int64 *)(v187 + 8);
    }
    LOBYTE(v188) = 1;
    if ( v178 )
    {
      v189 = v178;
      do
      {
        v190 = *v177++;
        v188 = ((*(_BYTE *)(v190 + 35) & 1) == 0) & (unsigned __int8)v188;
        --v189;
      }
      while ( v189 );
      if ( !v188 )
        goto LABEL_319;
    }
LABEL_303:
    v159 = v209;
    if ( *v165 && KiIsThreadConstrainedBySchedulingGroup(v209) && !KiShouldPreemptionBeDeferred(v179) )
    {
      while ( (*(_BYTE *)(v180 + 112) & 2) == 0 )
      {
        v180 = *(_QWORD *)(v180 + 416);
        if ( !v180 )
          goto LABEL_308;
      }
      v195 = 0LL;
      v196 = ~*(_QWORD *)(v168 + 200);
      v197 = 0;
      v208 &= v196;
      v163 = v196 & v181;
      v198 = v213 & 0xFFFFFFFFFFFFFFFEuLL;
      v245 = v213 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v213 & 1) != 0 )
      {
        if ( (v213 & 1) == 1 )
        {
          v195 = (unsigned __int64 *)(*(_QWORD *)(v198 + 36440) + 8LL);
          v197 = **(unsigned __int8 **)(v198 + 36440);
        }
        if ( !v197 )
          goto LABEL_333;
      }
      else
      {
        v195 = &v245;
        v197 = 1;
      }
      do
        _InterlockedAnd64((volatile signed __int64 *)(v195[--v197] + 48), 0LL);
      while ( v197 );
      goto LABEL_332;
    }
LABEL_308:
    KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v240, v159);
    v182 = a1->StaticRescheduleContext;
    memset_0(v182, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)v182, &v213);
    KiScheduleThreadToRescheduleContext(&v182->ProcessorCount, v159, v168, 0, (__int64)&v211);
    v183 = KiCommitRescheduleContext(&v182->ProcessorCount, a1, 0, &v211);
    v184 = 0LL;
    v185 = 0;
    v252 = v213 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v213 & 1) == 0 )
    {
      v184 = &v252;
      v185 = 1;
      goto LABEL_341;
    }
    if ( (v213 & 1) == 1 )
    {
      v186 = *(unsigned __int8 **)((v213 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
      v184 = (unsigned __int64 *)(v186 + 8);
      v185 = *v186;
    }
    while ( v185 )
LABEL_341:
      _InterlockedAnd64((volatile signed __int64 *)(v184[--v185] + 48), 0LL);
    v213 = 0LL;
    if ( v183 )
    {
      for ( i = 0; i < v182->ProcessorCount; ++i )
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v182->ProcessorEntries + 32 * i + 8 * i),
          a1,
          0LL,
          0LL);
    }
    v7 = a2;
LABEL_346:
    v6 = a3;
  }
  while ( v145 < 0x40 );
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    _m_prefetchw(&v222);
    v203 = v222;
    if ( (_QWORD)v222 )
    {
LABEL_351:
      *(_QWORD *)&v222 = 0LL;
      v204 = *((_QWORD *)&v222 + 1);
      if ( (((unsigned __int8)v204 ^ (unsigned __int8)_InterlockedExchange64(
                                                        (volatile __int64 *)(v203 + 8),
                                                        *((__int64 *)&v222 + 1))) & 4) != 0 )
        KeWakeAddressAll(v203 + 8, v204);
    }
    else if ( (__int128 *)_InterlockedCompareExchange64(
                            *((volatile signed __int64 **)&v222 + 1),
                            0LL,
                            (signed __int64)&v222) != &v222 )
    {
      v203 = KxWaitForLockChainValid((__int64 *)&v222);
      goto LABEL_351;
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)a6, 0LL);
  }
LABEL_354:
  KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
  if ( v211.Next )
  {
    v139 = &v211;
LABEL_356:
    KiReadyDeferredReadyList((__int64)a1, v139);
  }
}
