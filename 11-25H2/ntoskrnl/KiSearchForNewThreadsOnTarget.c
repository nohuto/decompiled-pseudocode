/*
 * XREFs of KiSearchForNewThreadsOnTarget @ 0x1403D04C0
 * Callers:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1403CFC10 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1404EFD38 (KiSearchForNewThreadsWithinL0SearchContext.c)
 * Callees:
 *     KiSendSoftwareInterruptAffinity @ 0x140253D64 (KiSendSoftwareInterruptAffinity.c)
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReduceToUnderMaxQuotaSet @ 0x1402F4704 (KiReduceToUnderMaxQuotaSet.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140315420 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiCheckThreadAffinity @ 0x140316A80 (KiCheckThreadAffinity.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiMayStealStandbyThread @ 0x14032E5D0 (KiMayStealStandbyThread.c)
 *     KiAttemptToStealStandbyThread @ 0x14032E858 (KiAttemptToStealStandbyThread.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x14032EC90 (KiIsIsolationUnitIdleByHandle.c)
 *     KiShouldPreemptionBeDeferred @ 0x140350F00 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiInsertDeferredReadyList @ 0x140352190 (KiInsertDeferredReadyList.c)
 *     KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x1403521F4 (KiRemoveCurrentThreadScbReadyQueueEnumerator.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140352274 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1403527C0 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiAdvanceReadyListEnumerator @ 0x140353810 (KiAdvanceReadyListEnumerator.c)
 *     KiDetermineNextScbForScbReadyQueueEnumerator @ 0x140353884 (KiDetermineNextScbForScbReadyQueueEnumerator.c)
 *     KiStartReadyListEnumerator @ 0x140353A68 (KiStartReadyListEnumerator.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x1403F777C (KiFindRankBiasedIdleSmtSet.c)
 *     KiTryAcquirePrcbLocksForIsolationUnit @ 0x14045A968 (KiTryAcquirePrcbLocksForIsolationUnit.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiIsThreadRankBiased @ 0x1404F45DC (KiIsThreadRankBiased.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F7354 (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall KiSearchForNewThreadsOnTarget(
        struct _KPRCB *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _KPRCB *a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  _KTHREAD *NextThread; // rax
  __int64 v11; // rbx
  char GroupIndex; // cl
  unsigned __int64 v13; // rax
  int v14; // edx
  struct _KPRCB *v15; // rdx
  __int64 v16; // rdx
  unsigned int ReadySummary; // eax
  int v18; // esi
  unsigned __int64 v19; // rbx
  unsigned int v20; // edx
  _LIST_ENTRY *DispatcherReadyListHead; // r9
  _LIST_ENTRY *v22; // r8
  unsigned int v23; // eax
  __int64 v24; // r12
  _LIST_ENTRY *Flink; // r15
  unsigned int v26; // eax
  _LIST_ENTRY *v27; // rcx
  __int64 v28; // rsi
  __int64 p_Blink; // r13
  __int64 v30; // rcx
  _WORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // eax
  unsigned int v35; // r8d
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // eax
  __int64 v44; // r9
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  _LIST_ENTRY *v48; // rdx
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  _KI_RESCHEDULE_CONTEXT *v59; // rsi
  __int64 v60; // rdx
  _KI_RESCHEDULE_CONTEXT *v61; // r13
  char v62; // r15
  char v63; // r12
  unsigned int v64; // esi
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v66; // al
  unsigned __int64 *v67; // r8
  int v68; // edx
  unsigned __int64 v69; // r9
  unsigned int v70; // ebx
  unsigned __int8 *v71; // r12
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // rsi
  unsigned __int8 v74; // al
  unsigned int v75; // edx
  _KAFFINITY_EX *v76; // r15
  int *v77; // rcx
  int v78; // ecx
  void **v79; // rdx
  bool v80; // zf
  _DWORD *v81; // rcx
  __int64 v82; // r15
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 v84; // rax
  unsigned int v85; // edx
  __int64 v86; // r12
  __int64 ScbForScbReadyQueueEnumerator; // rax
  __int64 v88; // rdx
  unsigned int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // r15
  __int64 v92; // rax
  _WORD *v93; // rcx
  __int64 v94; // rsi
  int v95; // eax
  unsigned int v96; // r8d
  int v97; // edx
  __int64 v98; // rdx
  __int64 v99; // r13
  unsigned __int64 v100; // rsi
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rsi
  unsigned int v105; // eax
  __int64 v106; // r9
  unsigned __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rcx
  _DWORD *v110; // r8
  unsigned __int64 v111; // r15
  unsigned __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r12
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rax
  unsigned __int64 v118; // rdx
  __int64 v119; // rcx
  unsigned __int8 *v120; // r15
  char v121; // r12
  char v122; // r13
  unsigned int v123; // esi
  unsigned __int8 *v124; // rcx
  unsigned __int8 v125; // al
  unsigned __int64 *v126; // r8
  int v127; // edx
  unsigned __int64 v128; // r9
  int v129; // r13d
  unsigned __int8 v130; // al
  struct _KPRCB *v131; // rsi
  unsigned __int8 *v132; // r12
  unsigned __int8 v133; // al
  unsigned int v134; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  int *SchedulerAssist; // rdx
  int v137; // edx
  void **p_SchedulerAssist; // rcx
  _DWORD *v139; // rdx
  __int64 Number; // r15
  unsigned __int64 v141; // rcx
  unsigned __int64 *v142; // r8
  int v143; // edx
  unsigned __int8 TargetType; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v146; // edx
  unsigned __int8 Level; // r8
  struct _SINGLE_LIST_ENTRY *v148; // rdx
  int v149; // eax
  struct _KPRCB **v150; // rdx
  int v151; // ebx
  unsigned int v152; // eax
  __int64 v153; // r12
  unsigned int v154; // r13d
  __int64 v155; // rcx
  __int64 v156; // rsi
  __int64 v157; // rax
  _WORD *v158; // rbx
  __int64 v159; // rbx
  int v160; // eax
  unsigned int v161; // r8d
  int v162; // edx
  __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rbx
  unsigned __int64 v166; // r9
  __int64 v167; // r8
  __int64 v168; // rbx
  unsigned __int64 v169; // rcx
  int v170; // eax
  __int64 v171; // rcx
  unsigned __int64 v172; // r11
  struct _KPRCB *v173; // r8
  _QWORD *v174; // r15
  unsigned __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rsi
  unsigned __int64 v178; // rcx
  unsigned __int8 *v179; // rax
  unsigned int v180; // r8d
  _QWORD *v181; // r9
  unsigned int v182; // eax
  _QWORD *v183; // rdx
  unsigned __int64 v184; // r9
  __int64 *v185; // rdx
  unsigned int v186; // r10d
  __int64 v187; // rcx
  __int64 v188; // rdx
  __int64 v189; // r11
  _KI_RESCHEDULE_CONTEXT *v190; // r15
  char v191; // r10
  unsigned __int64 *v192; // r9
  int v193; // r8d
  unsigned __int8 *v194; // rax
  unsigned __int8 *v195; // rax
  int v196; // r8d
  __int64 v197; // r9
  __int64 v198; // rax
  __int64 v199; // rax
  unsigned __int64 v200; // r9
  unsigned __int64 *v201; // r8
  int v202; // edx
  unsigned __int64 *v203; // r8
  __int64 v204; // rax
  int v205; // edx
  unsigned __int64 v206; // r9
  unsigned __int64 v207; // rcx
  int v208; // eax
  __int64 v209; // rcx
  unsigned int i; // ebx
  __int64 v211; // rax
  __int64 v212; // rdx
  unsigned int v213; // [rsp+30h] [rbp-D0h]
  __int64 v214; // [rsp+38h] [rbp-C8h]
  __int64 v215; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v216; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v217; // [rsp+48h] [rbp-B8h] BYREF
  struct _SINGLE_LIST_ENTRY v218; // [rsp+50h] [rbp-B0h] BYREF
  struct _SINGLE_LIST_ENTRY v219; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v220; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v221; // [rsp+68h] [rbp-98h] BYREF
  struct _KPRCB *v222; // [rsp+70h] [rbp-90h]
  _QWORD v223[3]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v224; // [rsp+90h] [rbp-70h] BYREF
  _LIST_ENTRY *StaticRescheduleContext; // [rsp+98h] [rbp-68h]
  _DWORD *v226; // [rsp+A0h] [rbp-60h]
  __int64 v227; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v228; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v229; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v230; // [rsp+C0h] [rbp-40h]
  _QWORD v231[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v232; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v233; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v234; // [rsp+100h] [rbp+0h] BYREF
  __int64 v235; // [rsp+110h] [rbp+10h]
  int v236; // [rsp+118h] [rbp+18h]
  int v237; // [rsp+11Ch] [rbp+1Ch]
  int v238; // [rsp+120h] [rbp+20h]
  int v239; // [rsp+124h] [rbp+24h]
  int v240; // [rsp+128h] [rbp+28h]
  unsigned int v241; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v242; // [rsp+130h] [rbp+30h]
  int v243; // [rsp+134h] [rbp+34h]
  int v244; // [rsp+138h] [rbp+38h]
  unsigned int v245; // [rsp+13Ch] [rbp+3Ch]
  int v246; // [rsp+140h] [rbp+40h]
  int v247; // [rsp+144h] [rbp+44h]
  int v248; // [rsp+148h] [rbp+48h]
  unsigned int v249; // [rsp+14Ch] [rbp+4Ch]
  unsigned __int64 v250; // [rsp+150h] [rbp+50h]
  _QWORD v251[2]; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v252; // [rsp+168h] [rbp+68h] BYREF
  unsigned __int64 v253; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v254; // [rsp+178h] [rbp+78h] BYREF
  __int64 v255; // [rsp+180h] [rbp+80h] BYREF
  unsigned int SingleTargetIndex; // [rsp+188h] [rbp+88h]
  __int64 v257; // [rsp+18Ch] [rbp+8Ch]
  unsigned __int64 v258; // [rsp+198h] [rbp+98h] BYREF
  unsigned __int64 v259; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v260; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v263; // [rsp+210h] [rbp+110h]
  struct _KPRCB *v264; // [rsp+210h] [rbp+110h]

  v7 = a3;
  v8 = a2;
  if ( a5 )
  {
    if ( a1 == a5 )
      return;
    if ( !(unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(a1)
      || (NextThread = a5->NextThread) != 0LL
      && NextThread != a5->IdleThread
      && NextThread != a5->DpcDelegateThread
      && NextThread != a5->SmtIsolationThread
      && (*(_BYTE *)&a5->PriorityState->0 & 0x7Fu) >= 0x10 )
    {
      v11 = a4 & *(_QWORD *)(v8 + 8);
      if ( v11 )
      {
        do
        {
          GroupIndex = a1->GroupIndex;
          _BitScanForward64(&v13, __ROR8__(v11, GroupIndex));
          v240 = v13;
          v14 = ((_BYTE)v13 + GroupIndex) & 0x3F;
          v11 &= ~(1LL << v14);
          v15 = (struct _KPRCB *)KiProcessorBlock[*((unsigned int *)qword_140F216A8
                                                  + 64 * *(unsigned __int16 *)(v8 + 136)
                                                  + v14)];
        }
        while ( (a5 == v15
              || !KiMayStealStandbyThread((__int64)a5, (__int64)v15)
              || !KiAttemptToStealStandbyThread(a1, a5, v16))
             && v11 );
      }
    }
    StaticRescheduleContext = 0LL;
    v218.Next = 0LL;
    v235 = 0LL;
    ReadySummary = a5->ReadySummary;
    v222 = 0LL;
    memset(v223, 0, sizeof(v223));
    BYTE4(v223[0]) = 32;
    v234 = 0LL;
    BYTE4(v234) = 32;
    v233 = 0LL;
    if ( !ReadySummary && !a5->ScbQueue.Root )
      goto LABEL_238;
    v18 = 0;
    v19 = (unsigned __int64)a5 & 0xFFFFFFFFFFFFFFFEuLL;
    v250 = (unsigned __int64)a5 & 0xFFFFFFFFFFFFFFFEuLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&a5->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( a5->PrcbLock );
    }
    v20 = a5->ReadySummary;
    DispatcherReadyListHead = a5->DispatcherReadyListHead;
    StaticRescheduleContext = a5->DispatcherReadyListHead;
    v22 = a5->DispatcherReadyListHead;
    v223[2] = a5->DispatcherReadyListHead;
    v222 = a5;
    LODWORD(v223[0]) = v20;
    if ( v20 )
    {
      _BitScanReverse(&v23, v20);
      v241 = v23;
      v223[1] = &DispatcherReadyListHead[v23];
      BYTE4(v223[0]) = v23;
    }
    else
    {
      v223[1] = 0LL;
    }
    v227 = 0LL;
    v24 = 0LL;
    v213 = 0;
    v214 = 0LL;
    while ( 1 )
    {
      v220 = 0LL;
      if ( !v223[1] )
        goto LABEL_128;
      Flink = *(_LIST_ENTRY **)v223[1];
      v223[1] = Flink;
      if ( Flink == &v22[BYTE4(v223[0])] )
      {
        while ( 1 )
        {
          v20 &= ~(1 << SBYTE4(v223[0]));
          LODWORD(v223[0]) = v20;
          if ( !v20 )
            break;
          _BitScanReverse(&v26, v20);
          v27 = &DispatcherReadyListHead[(unsigned __int8)v26];
          v242 = v26;
          BYTE4(v223[0]) = v26;
          Flink = v27->Flink;
          v223[1] = Flink;
          if ( Flink != v27 )
            goto LABEL_33;
        }
        BYTE4(v223[0]) = 0;
        v223[1] = 0LL;
LABEL_128:
        v28 = a2;
LABEL_129:
        v233 = (unsigned __int64)a5;
        Min = a5->ScbQueue.Min;
        if ( ((unsigned __int8)Min & 1) != 0 )
        {
          if ( Min == (_RTL_BALANCED_NODE *)1 )
          {
LABEL_135:
            v228 = 0LL;
            v86 = 0LL;
            v263 = 0;
            v215 = 0LL;
            while ( 1 )
            {
              v229 = 0LL;
              if ( !*((_QWORD *)&v233 + 1) )
                goto LABEL_232;
              while ( (int)KiAdvanceReadyListEnumerator((__int64)&v234, &v229) < 0 )
              {
                ScbForScbReadyQueueEnumerator = KiDetermineNextScbForScbReadyQueueEnumerator(*((_QWORD **)&v233 + 1));
                *((_QWORD *)&v233 + 1) = ScbForScbReadyQueueEnumerator;
                if ( !ScbForScbReadyQueueEnumerator )
                  goto LABEL_232;
                v88 = ScbForScbReadyQueueEnumerator + 144;
                v89 = *(unsigned __int16 *)(ScbForScbReadyQueueEnumerator + 120);
                LODWORD(v234) = v89;
                v235 = v88;
                if ( v89 )
                {
                  _BitScanReverse(&v89, v89);
                  v245 = v89;
                  *((_QWORD *)&v234 + 1) = v88 + 16LL * v89;
                  BYTE4(v234) = v89;
                }
                else
                {
                  BYTE4(v234) = 32;
                  *((_QWORD *)&v234 + 1) = 0LL;
                }
              }
              v90 = a3 & *(_QWORD *)(v28 + 8);
              if ( !v90 || (v224 = v90 & ~v86) == 0 )
              {
LABEL_232:
                if ( v19 )
                {
                  v141 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
                  v254 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( (v19 & 1) != 0 )
                  {
                    v142 = (unsigned __int64 *)(*(_QWORD *)(v141 + 36440) + 8LL);
                    v143 = **(unsigned __int8 **)(v141 + 36440);
                    if ( **(_BYTE **)(v141 + 36440) )
                      goto LABEL_237;
                  }
                  else
                  {
                    v142 = &v254;
                    v143 = 1;
                    do
LABEL_237:
                      _InterlockedAnd64((volatile signed __int64 *)(v142[--v143] + 48), 0LL);
                    while ( v143 );
                  }
                }
LABEL_238:
                TargetType = a1->DeferredDispatchInterrupts.TargetType;
                if ( TargetType )
                {
                  if ( TargetType == 1 )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v146 = 31;
                    Level = a1->DeferredDispatchInterrupts.Level;
                    SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                    ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
                    v255 = 6LL;
                    v257 = 0LL;
                    if ( Level != 1 )
                      v146 = 47;
                    HalpInterruptSendIpi(&v255, v146);
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
                if ( v218.Next )
                {
                  v148 = &v218;
                  goto LABEL_365;
                }
                return;
              }
              v91 = v229;
              v92 = *(unsigned __int16 *)(v28 + 136);
              v93 = *(_WORD **)(v229 + 576);
              if ( (unsigned __int16)v92 >= *v93 )
                v94 = 0LL;
              else
                v94 = *(_QWORD *)&v93[4 * v92 + 4];
              v95 = KiComputeThreadQos(v229);
              v96 = *(_DWORD *)(v91 + 80);
              v97 = 0;
              if ( v96 <= *(_DWORD *)(v91 + 84) )
                v96 = *(_DWORD *)(v91 + 84);
              LOBYTE(v97) = v96 >= KiDynamicHeteroCpuPolicyExpectedCycles;
              v98 = *(_QWORD *)(a2 + 192)
                  + 24LL
                  * (*(unsigned __int8 *)(v91 + 517) + (unsigned int)*(unsigned __int8 *)(a2 + 185) * (v97 + 2 * v95));
              if ( (v94 & *(_QWORD *)(v98 + 16)) != 0 )
                v94 &= *(_QWORD *)(v98 + 16);
              v99 = v229;
              v100 = v94 & *(_QWORD *)(a2 + 8LL * ((*(_DWORD *)(v229 + 120) >> 1) & 1) + 16) & v224;
              v224 = v100;
              if ( *(_QWORD *)(v229 + 104) )
              {
                if ( KiIsThreadConstrainedBySchedulingGroup(v229) && !KiShouldPreemptionBeDeferred(v101) )
                {
                  v100 = KiReduceToUnderMaxQuotaSet(*(_WORD *)(v103 + 136), v100, v102);
                  v224 = v100;
                  if ( KiPerfIsoEnabled )
                  {
                    if ( (unsigned __int8)KiIsThreadRankBiased(v99, a1) )
                    {
                      KiFindRankBiasedIdleSmtSet(a2, &v224);
                      v100 = v224;
                    }
                  }
                }
              }
              if ( !v100 )
              {
                v104 = v229;
                if ( *(_QWORD *)(v229 + 568) != KiCpuSetSequence && (*(_DWORD *)(v229 + 116) & 8) == 0 )
                {
                  KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v233, v229);
                  KiInsertDeferredReadyList((__int64 *)&v218, v104);
                }
                v105 = ++v263;
                goto LABEL_230;
              }
              if ( KiCheckThreadAffinity(v99) )
              {
                v110 = (_DWORD *)(v99 + 120);
                v111 = v100;
                v226 = (_DWORD *)(v99 + 120);
                StaticRescheduleContext = (_LIST_ENTRY *)(v99 + 104);
                do
                {
                  _BitScanReverse64(&v112, v111);
                  v113 = (unsigned int)v112 + (*(unsigned __int16 *)(v106 + 136) << 6);
                  v247 = v112;
                  v114 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + v113)];
                  if ( (unsigned __int8)KiTryAcquirePrcbLocksForIsolationUnit(v114, (*v110 >> 1) & 1, &v228) )
                  {
                    if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v228) )
                    {
                      v99 = v229;
                      if ( !StaticRescheduleContext->Flink
                        || !KiIsThreadConstrainedBySchedulingGroup(v229)
                        || KiShouldPreemptionBeDeferred(v115)
                        || !KiCheckForMaxOverQuotaScb(v116) )
                      {
                        KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v233, v99);
                        StaticRescheduleContext = (_LIST_ENTRY *)a1->StaticRescheduleContext;
                        v120 = (unsigned __int8 *)StaticRescheduleContext;
                        memset_0(StaticRescheduleContext, 0, 0xF0uLL);
                        KiStartRescheduleContext((__int64)v120, &v228);
                        KiScheduleThreadToRescheduleContext(v120, v99, v114, 0, (__int64)&v218);
                        v121 = 0;
                        v122 = 0;
                        v123 = 0;
                        if ( (WORD2(xmmword_140FC5B10) & 0x400) != 0 )
                          v122 = 2;
                        if ( *v120 )
                        {
                          do
                          {
                            v121 |= KiCommitRescheduleContextEntry(
                                      (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)&v120[32 * v123 + 16 + 8 * v123],
                                      a1,
                                      v122,
                                      &v218);
                            ++v123;
                          }
                          while ( v123 < *v120 );
                        }
                        if ( *((_DWORD *)v120 + 2) == 1 )
                        {
                          v124 = *(unsigned __int8 **)(*((_QWORD *)v120 + 2) + 36440LL);
                          v125 = v124[1] + 1;
                          v124[1] = v125;
                          if ( v125 >= *v124 )
                            v124[1] = 0;
                        }
                        v126 = 0LL;
                        v127 = 0;
                        v128 = v228 & 0xFFFFFFFFFFFFFFFEuLL;
                        v258 = v228 & 0xFFFFFFFFFFFFFFFEuLL;
                        if ( (v228 & 1) == 0 )
                        {
                          v126 = &v258;
                          v127 = 1;
                          goto LABEL_195;
                        }
                        if ( (v228 & 1) == 1 )
                        {
                          v126 = (unsigned __int64 *)(*(_QWORD *)(v128 + 36440) + 8LL);
                          v127 = **(unsigned __int8 **)(v128 + 36440);
                        }
                        while ( v127 )
LABEL_195:
                          _InterlockedAnd64((volatile signed __int64 *)(v126[--v127] + 48), 0LL);
                        v228 = 0LL;
                        if ( v121 )
                        {
                          v129 = 0;
                          if ( *v120 )
                          {
                            while ( 2 )
                            {
                              v130 = v120[40 * v129 + 51];
                              v131 = *(struct _KPRCB **)&v120[40 * v129 + 16];
                              v132 = &v120[40 * v129];
                              if ( (v130 & 0x10) != 0 || (v130 & 8) != 0 && v131->IdleHalt )
                              {
                                v133 = a1->DeferredDispatchInterrupts.TargetType;
                                if ( !v133 )
                                {
                                  a1->DeferredDispatchInterrupts.TargetType = 1;
                                  a1->DeferredDispatchInterrupts.SingleTargetIndex = v131->Number;
                                  goto LABEL_208;
                                }
                                if ( v133 == 1 )
                                {
                                  v134 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                                  if ( v134 != v131->Number )
                                  {
                                    p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                                    a1->DeferredDispatchInterrupts.TargetType = 2;
                                    KeAddProcessorAffinityEx(
                                      &a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count,
                                      v134);
                                    goto LABEL_207;
                                  }
                                }
                                else
                                {
                                  p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
LABEL_207:
                                  KeAddGroupAffinityEx(
                                    &p_MultipleTargetAffinity->Count,
                                    v131->Group,
                                    v131->GroupSetMember);
                                }
                              }
LABEL_208:
                              if ( (v132[51] & 2) != 0 )
                                EtwTraceScheduleThread(*((_QWORD *)v132 + 5), (__int64)v131, 0LL);
                              if ( (v132[51] & 4) != 0 )
                              {
                                SchedulerAssist = (int *)v131->SchedulerAssist;
                                if ( SchedulerAssist )
                                {
                                  if ( a1->SchedulerAssist && a1 != v131 )
                                  {
                                    v137 = *SchedulerAssist;
                                    p_SchedulerAssist = &a1->SchedulerAssist;
                                    if ( (v137 & 0x40000) != 0 )
                                      p_SchedulerAssist = &a1->SchedulerAssist;
                                    if ( (v137 & 0x100000) != 0
                                      || (p_SchedulerAssist = &a1->SchedulerAssist, (v137 & 0x40000) != 0)
                                      && (unsigned __int8)v137 < (char)v132[52] )
                                    {
                                      v80 = HvlpVirtualProcessorsIdentityMapped == 0;
                                      v139 = *p_SchedulerAssist;
                                      *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                                      Number = v131->Number;
                                      if ( v80 )
                                        LODWORD(Number) = (unsigned __int8)byte_140FCC261[2 * Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                                      v139[2] = Number;
                                      if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                                        EtwTraceXSchedulerPriorityKickSend(v131->Number, 2LL);
                                      __writemsr(0x400000C2u, (unsigned int)Number);
                                    }
                                  }
                                }
                              }
                              if ( (v132[51] & 1) != 0 )
                                _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v132 + 5) + 868LL));
                              v120 = (unsigned __int8 *)StaticRescheduleContext;
                              if ( ++v129 >= (unsigned int)LOBYTE(StaticRescheduleContext->Flink) )
                              {
                                v19 = v250;
                                break;
                              }
                              continue;
                            }
                          }
                        }
LABEL_228:
                        v86 = v215;
                        goto LABEL_229;
                      }
                      v100 = v224;
                    }
                    v117 = ~*(_QWORD *)(v114 + 200);
                    v100 &= v117;
                    v111 &= v117;
                    v224 = v100;
                    KiReleasePrcbLocksForIsolationUnit(&v228);
                  }
                  else
                  {
                    v111 &= ~*(_QWORD *)(v114 + 200);
                  }
                  v110 = v226;
                  v106 = a2;
                }
                while ( v111 );
                if ( !v100 )
                {
                  ++v263;
                  goto LABEL_228;
                }
                v86 = v215;
                _BitScanReverse64(&v118, v100);
                v119 = (unsigned int)v118 + (*(unsigned __int16 *)(a2 + 136) << 6);
                v248 = v118;
                v109 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + v119)];
                if ( (*(_DWORD *)(v99 + 120) & 2) == 0 )
                {
                  v86 = *(_QWORD *)(v109 + 200) | v215;
                  goto LABEL_166;
                }
              }
              else
              {
                _BitScanReverse64(&v107, v100);
                v108 = (unsigned int)v107 + (*(unsigned __int16 *)(v106 + 136) << 6);
                v246 = v107;
                v109 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + v108)];
                if ( (*(_DWORD *)(v99 + 120) & 2) == 0 )
                {
                  v86 |= *(_QWORD *)(v109 + 200);
                  goto LABEL_166;
                }
              }
              v86 |= *(_QWORD *)(v109 + 36448);
LABEL_166:
              v215 = v86;
              KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v233, v99);
              KiInsertDeferredReadyList((__int64 *)&v218, v99);
LABEL_229:
              v105 = v263;
LABEL_230:
              if ( v105 >= 0x40 )
                goto LABEL_232;
              v28 = a2;
            }
          }
          v84 = (unsigned __int64)Min ^ ((unsigned __int64)&a5->ScbQueue | 1);
        }
        else
        {
          v84 = (unsigned __int64)a5->ScbQueue.Min;
        }
        if ( v84 )
        {
          v85 = *(unsigned __int16 *)(v84 + 32);
          *((_QWORD *)&v233 + 1) = v84 - 88;
          KiStartReadyListEnumerator((__int64)&v234, v85, v84 - 88 + 144);
        }
        goto LABEL_135;
      }
LABEL_33:
      v28 = a2;
      p_Blink = (__int64)&Flink[-14].Blink;
      v30 = a3 & *(_QWORD *)(a2 + 8);
      if ( !v30 )
        goto LABEL_129;
      v220 = v30 & ~v24;
      if ( !v220 )
        goto LABEL_129;
      v31 = *(_WORD **)(p_Blink + 576);
      v32 = *(unsigned __int16 *)(a2 + 136);
      if ( (unsigned __int16)v32 >= *v31 )
        v33 = 0LL;
      else
        v33 = *(_QWORD *)&v31[4 * v32 + 4];
      v34 = KiComputeThreadQos((__int64)&Flink[-14].Blink);
      v35 = *(_DWORD *)(p_Blink + 80);
      v36 = 0;
      if ( v35 <= *(_DWORD *)(p_Blink + 84) )
        v35 = *(_DWORD *)(p_Blink + 84);
      LOBYTE(v36) = v35 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v37 = *(_QWORD *)(a2 + 192)
          + 24LL
          * (*(unsigned __int8 *)(p_Blink + 517) + (unsigned int)*(unsigned __int8 *)(a2 + 185) * (v36 + 2 * v34));
      if ( (v33 & *(_QWORD *)(v37 + 16)) != 0 )
        v33 &= *(_QWORD *)(v37 + 16);
      v38 = *(_QWORD *)(p_Blink + 104);
      v39 = v33 & *(_QWORD *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(p_Blink + 120) >> 1) & 1) + 16) & v220;
      v220 = v39;
      if ( v38 )
      {
        if ( KiIsThreadConstrainedBySchedulingGroup((__int64)&Flink[-14].Blink) && !KiShouldPreemptionBeDeferred(v40) )
        {
          v39 = KiReduceToUnderMaxQuotaSet(*(_WORD *)(v42 + 136), v39, v41);
          v220 = v39;
          if ( KiPerfIsoEnabled )
          {
            if ( (unsigned __int8)KiIsThreadRankBiased(&Flink[-14].Blink, a1) )
            {
              KiFindRankBiasedIdleSmtSet(a2, &v220);
              v39 = v220;
            }
          }
        }
      }
      if ( v39 )
        break;
      if ( *(_QWORD *)(p_Blink + 568) != KiCpuSetSequence && (*(_DWORD *)(p_Blink + 116) & 8) == 0 )
      {
        v223[1] = *(_QWORD *)(v223[1] + 8LL);
        KiRemoveThreadFromReadyQueue((__int64)v222, Flink, SBYTE4(v223[0]));
        KiInsertDeferredReadyList((__int64 *)&v218, (__int64)&Flink[-14].Blink);
      }
      v43 = ++v213;
LABEL_125:
      if ( v43 >= 0x40 )
        goto LABEL_128;
      v22 = (_LIST_ENTRY *)v223[2];
      v20 = v223[0];
      DispatcherReadyListHead = StaticRescheduleContext;
    }
    if ( KiCheckThreadAffinity((__int64)&Flink[-14].Blink) )
    {
      v49 = v39;
      do
      {
        _BitScanReverse64(&v50, v49);
        v51 = (unsigned int)v50 + (*(unsigned __int16 *)(v44 + 136) << 6);
        v239 = v50;
        v52 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + v51)];
        if ( (unsigned __int8)KiTryAcquirePrcbLocksForIsolationUnit(v52, (*(_DWORD *)(p_Blink + 120) >> 1) & 1, &v227) )
        {
          if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v227) )
          {
            if ( !*(_QWORD *)(p_Blink + 104)
              || !KiIsThreadConstrainedBySchedulingGroup(p_Blink)
              || KiShouldPreemptionBeDeferred(v53)
              || !KiCheckForMaxOverQuotaScb(v54) )
            {
              v223[1] = *(_QWORD *)(v223[1] + 8LL);
              KiRemoveThreadFromReadyQueue((__int64)v222, (_QWORD *)(p_Blink + 216), SBYTE4(v223[0]));
              v59 = a1->StaticRescheduleContext;
              memset_0(v59, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
              KiStartRescheduleContext((__int64)v59, &v227);
              v60 = p_Blink;
              v61 = v59;
              KiScheduleThreadToRescheduleContext(&v59->ProcessorCount, v60, v52, 0, (__int64)&v218);
              v62 = 0;
              v63 = 0;
              v64 = 0;
              if ( (WORD2(xmmword_140FC5B10) & 0x400) != 0 )
                v63 = 2;
              if ( v61->ProcessorCount )
              {
                do
                {
                  v62 |= KiCommitRescheduleContextEntry(
                           (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v61->ProcessorEntries + 32 * v64 + 8 * v64),
                           a1,
                           v63,
                           &v218);
                  ++v64;
                }
                while ( v64 < v61->ProcessorCount );
              }
              if ( v61->IsolationWidth == KiIsolationWidthCore )
              {
                CoreControlBlock = v61->ProcessorEntries[0].Prcb->CoreControlBlock;
                v66 = CoreControlBlock->ScanStartIndex + 1;
                CoreControlBlock->ScanStartIndex = v66;
                if ( v66 >= CoreControlBlock->ProcessorCount )
                  CoreControlBlock->ScanStartIndex = 0;
              }
              v67 = 0LL;
              v68 = 0;
              v69 = v227 & 0xFFFFFFFFFFFFFFFEuLL;
              v259 = v227 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v227 & 1) == 0 )
              {
                v67 = &v259;
                v68 = 1;
                goto LABEL_89;
              }
              if ( (v227 & 1) == 1 )
              {
                v67 = (unsigned __int64 *)(*(_QWORD *)(v69 + 36440) + 8LL);
                v68 = **(unsigned __int8 **)(v69 + 36440);
              }
              while ( v68 )
LABEL_89:
                _InterlockedAnd64((volatile signed __int64 *)(v67[--v68] + 48), 0LL);
              v227 = 0LL;
              if ( !v62 || !v61->ProcessorCount )
              {
LABEL_123:
                v24 = v214;
                goto LABEL_124;
              }
              v70 = 0;
              while ( 2 )
              {
                v71 = &v61->ProcessorCount + 40 * v70;
                v72 = v71[51];
                v73 = (struct _KPRCB *)*((_QWORD *)v71 + 2);
                if ( (v72 & 0x10) != 0 || (v72 & 8) != 0 && v73->IdleHalt )
                {
                  v74 = a1->DeferredDispatchInterrupts.TargetType;
                  if ( !v74 )
                  {
                    a1->DeferredDispatchInterrupts.TargetType = 1;
                    a1->DeferredDispatchInterrupts.SingleTargetIndex = v73->Number;
                    goto LABEL_103;
                  }
                  if ( v74 == 1 )
                  {
                    v75 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                    if ( v75 != v73->Number )
                    {
                      v76 = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                      a1->DeferredDispatchInterrupts.TargetType = 2;
                      KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, v75);
                      goto LABEL_102;
                    }
                  }
                  else
                  {
                    v76 = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
LABEL_102:
                    KeAddGroupAffinityEx(&v76->Count, v73->Group, v73->GroupSetMember);
                  }
                }
LABEL_103:
                if ( (v71[51] & 2) != 0 )
                  EtwTraceScheduleThread(*((_QWORD *)v71 + 5), (__int64)v73, 0LL);
                if ( (v71[51] & 4) != 0 )
                {
                  v77 = (int *)v73->SchedulerAssist;
                  if ( v77 )
                  {
                    if ( a1->SchedulerAssist && a1 != v73 )
                    {
                      v78 = *v77;
                      v79 = &a1->SchedulerAssist;
                      if ( (v78 & 0x40000) != 0 )
                        v79 = &a1->SchedulerAssist;
                      if ( (v78 & 0x100000) != 0
                        || (v79 = &a1->SchedulerAssist, (v78 & 0x40000) != 0) && (unsigned __int8)v78 < (char)v71[52] )
                      {
                        v80 = HvlpVirtualProcessorsIdentityMapped == 0;
                        v81 = *v79;
                        *((_DWORD *)*v79 + 3) = 2;
                        v82 = v73->Number;
                        if ( v80 )
                          LODWORD(v82) = (unsigned __int8)byte_140FCC261[2 * v82] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v82] << 6);
                        v81[2] = v82;
                        if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                          EtwTraceXSchedulerPriorityKickSend(v73->Number, 2LL);
                        __writemsr(0x400000C2u, (unsigned int)v82);
                      }
                    }
                  }
                }
                if ( (v71[51] & 1) != 0 )
                  _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v71 + 5) + 868LL));
                if ( ++v70 >= v61->ProcessorCount )
                {
                  v19 = v250;
                  goto LABEL_123;
                }
                continue;
              }
            }
            v39 = v220;
          }
          v55 = ~*(_QWORD *)(v52 + 200);
          v39 &= v55;
          v49 &= v55;
          v220 = v39;
          KiReleasePrcbLocksForIsolationUnit(&v227);
        }
        else
        {
          v49 &= ~*(_QWORD *)(v52 + 200);
        }
        v44 = a2;
      }
      while ( v49 );
      if ( !v39 )
      {
        ++v213;
        goto LABEL_123;
      }
      _BitScanReverse64(&v56, v39);
      v57 = (unsigned int)v56 + (*(unsigned __int16 *)(a2 + 136) << 6);
      v244 = v56;
      v58 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + v57)];
      if ( (*(_DWORD *)(p_Blink + 120) & 2) != 0 )
        v24 = *(_QWORD *)(v58 + 36448) | v214;
      else
        v24 = *(_QWORD *)(v58 + 200) | v214;
      v48 = (_LIST_ENTRY *)(p_Blink + 216);
    }
    else
    {
      _BitScanReverse64(&v45, v39);
      v46 = (unsigned int)v45 + (*(unsigned __int16 *)(v44 + 136) << 6);
      v243 = v45;
      v47 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + v46)];
      if ( (*(_DWORD *)(p_Blink + 120) & 2) != 0 )
        v24 |= *(_QWORD *)(v47 + 36448);
      else
        v24 |= *(_QWORD *)(v47 + 200);
      v48 = Flink;
    }
    v214 = v24;
    v223[1] = *(_QWORD *)(v223[1] + 8LL);
    KiRemoveThreadFromReadyQueue((__int64)v222, v48, SBYTE4(v223[0]));
    KiInsertDeferredReadyList((__int64 *)&v218, p_Blink);
LABEL_124:
    v43 = v213;
    goto LABEL_125;
  }
  v149 = *(_DWORD *)(a6 + 8);
  v219.Next = 0LL;
  v230 = 0LL;
  memset(v231, 0, sizeof(v231));
  BYTE4(v231[0]) = 32;
  v232 = 0LL;
  if ( (v149 & 0xFFFFFFFE) == 0 )
    goto LABEL_363;
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    *((_QWORD *)&v232 + 1) = a6;
    *(_QWORD *)&v232 = 0LL;
    v150 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)a6, (__int64)&v232);
    if ( v150 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&v232, v150);
  }
  else
  {
    v151 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a6, 0LL) )
    {
      do
      {
        if ( (++v151 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)a6 );
    }
    v7 = a3;
  }
  v80 = (*(_DWORD *)(a6 + 8) & 0xFFFFFFFE) == 0;
  v152 = *(_DWORD *)(a6 + 8) & 0xFFFFFFFE;
  v230 = a6;
  LODWORD(v231[0]) = v152;
  v231[2] = a6 + 64;
  if ( v80 )
  {
    v231[1] = 0LL;
  }
  else
  {
    _BitScanReverse(&v152, v152);
    v249 = v152;
    v231[1] = a6 + 64 + 16LL * v152;
    BYTE4(v231[0]) = v152;
  }
  v221 = 0LL;
  v153 = 0LL;
  v154 = 0;
  do
  {
    v217 = 0LL;
    if ( (int)KiAdvanceReadyListEnumerator((__int64)v231, &v217) < 0 )
      break;
    v155 = v7 & *(_QWORD *)(v8 + 8);
    if ( !v155 )
      break;
    v216 = v155 & ~v153;
    if ( !v216 )
      break;
    v156 = v217;
    v157 = *(unsigned __int16 *)(v8 + 136);
    v158 = *(_WORD **)(v217 + 576);
    if ( (unsigned __int16)v157 >= *v158 )
      v159 = 0LL;
    else
      v159 = *(_QWORD *)&v158[4 * v157 + 4];
    v160 = KiComputeThreadQos(v217);
    v161 = *(_DWORD *)(v156 + 80);
    v162 = 0;
    if ( v161 <= *(_DWORD *)(v156 + 84) )
      v161 = *(_DWORD *)(v156 + 84);
    LOBYTE(v162) = v161 >= KiDynamicHeteroCpuPolicyExpectedCycles;
    v163 = *(_QWORD *)(v8 + 192)
         + 24LL * (*(unsigned __int8 *)(v156 + 517) + (unsigned int)*(unsigned __int8 *)(v8 + 185) * (v162 + 2 * v160));
    if ( (v159 & *(_QWORD *)(v163 + 16)) != 0 )
      v159 &= *(_QWORD *)(v163 + 16);
    v164 = v159 & *(_QWORD *)(v8 + 8LL * ((*(_DWORD *)(v217 + 120) >> 1) & 1) + 16);
    v165 = v217;
    v166 = v164 & v216;
    v216 &= v164;
    v167 = *(_QWORD *)(v217 + 104);
    if ( v167 )
    {
      if ( *(char *)(v217 + 195) < 16
        && (*(_DWORD *)(v217 + 120) & 0x200) == 0
        && !*(_DWORD *)(v217 + 484)
        && *(_BYTE *)(v217 + 390) != 1 )
      {
        v166 = KiReduceToUnderMaxQuotaSet(*(_WORD *)(v8 + 136), v166, v167);
        v216 = v166;
        if ( KiPerfIsoEnabled )
        {
          if ( (unsigned __int8)KiIsThreadRankBiased(v165, a1) )
          {
            KiFindRankBiasedIdleSmtSet(v8, &v216);
            v166 = v216;
          }
        }
      }
    }
    v168 = v217;
    if ( !v166 )
    {
      if ( *(_QWORD *)(v217 + 568) != KiCpuSetSequence && (*(_DWORD *)(v217 + 116) & 8) == 0 )
      {
        v231[1] = *(_QWORD *)(v231[1] + 8LL);
        KiRemoveThreadFromSharedReadyQueue(v230, v217, SBYTE4(v231[0]));
        KiEnterDeferredReadyState(v168);
        *(struct _SINGLE_LIST_ENTRY *)(v168 + 216) = v219;
        v219.Next = (struct _SINGLE_LIST_ENTRY *)(v168 + 216);
      }
      ++v154;
      goto LABEL_355;
    }
    if ( *(_QWORD *)(v217 + 568) != KiCpuSetSequence && (*(_DWORD *)(v217 + 116) & 8) == 0 )
    {
      _BitScanReverse64(&v169, v216);
      v170 = *(unsigned __int16 *)(v8 + 136) << 6;
      v236 = v169;
      v171 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + (unsigned int)(v170 + v169))];
      if ( (*(_DWORD *)(v217 + 120) & 2) != 0 )
        v153 |= *(_QWORD *)(v171 + 36448);
      else
        v153 |= *(_QWORD *)(v171 + 200);
      v231[1] = *(_QWORD *)(v231[1] + 8LL);
      KiRemoveThreadFromSharedReadyQueue(v230, v217, SBYTE4(v231[0]));
      KiEnterDeferredReadyState(v168);
      *(struct _SINGLE_LIST_ENTRY *)(v168 + 216) = v219;
      v219.Next = (struct _SINGLE_LIST_ENTRY *)(v168 + 216);
      v217 = 0LL;
      goto LABEL_355;
    }
    v172 = v216;
    v173 = (struct _KPRCB *)(v217 + 120);
    v264 = (struct _KPRCB *)(v217 + 120);
    v174 = (_QWORD *)(v217 + 104);
    while ( 1 )
    {
      _BitScanReverse64(&v175, v172);
      v176 = (unsigned int)v175 + (*(unsigned __int16 *)(a2 + 136) << 6);
      v237 = v175;
      v177 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + v176)];
      LODWORD(v175) = (v173->MxCsr >> 1) & 1;
      v251[0] = v177;
      v178 = (unsigned int)v175 | v177 & 0xFFFFFFFFFFFFFFFEuLL;
      v221 = v178;
      if ( (_DWORD)v175 )
      {
        v179 = *(unsigned __int8 **)(v177 + 36440);
        v180 = *v179;
        v181 = v179 + 8;
        v182 = 0;
        if ( !v180 )
          goto LABEL_305;
      }
      else
      {
        v181 = v251;
        v180 = 1;
        v182 = 0;
      }
      v183 = v181;
      do
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(*v183 + 48LL), 0LL) )
          break;
        ++v182;
        ++v183;
      }
      while ( v182 < v180 );
      v178 = v221;
      v168 = v217;
LABEL_305:
      if ( v182 != v180 )
      {
        if ( v182 )
        {
          do
            _InterlockedAnd64((volatile signed __int64 *)(v181[--v182] + 48LL), 0LL);
          while ( v182 );
          v168 = v217;
        }
        v172 &= ~*(_QWORD *)(v177 + 200);
        goto LABEL_342;
      }
      v184 = v178 & 0xFFFFFFFFFFFFFFFEuLL;
      v185 = 0LL;
      v251[1] = v178 & 0xFFFFFFFFFFFFFFFEuLL;
      v186 = 0;
      if ( (v178 & 1) != 0 )
        break;
      if ( (*(_BYTE *)(v184 + 35) & 1) == 0 )
        goto LABEL_312;
LABEL_328:
      v199 = ~*(_QWORD *)(v177 + 200);
      v200 = v178 & 0xFFFFFFFFFFFFFFFEuLL;
      v216 &= v199;
      v172 &= v199;
      v252 = v178 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v178 & 1) == 0 )
      {
        v201 = &v252;
        v202 = 1;
        do
LABEL_332:
          _InterlockedAnd64((volatile signed __int64 *)(v201[--v202] + 48), 0LL);
        while ( v202 );
LABEL_341:
        v168 = v217;
        goto LABEL_342;
      }
      v201 = (unsigned __int64 *)(*(_QWORD *)(v200 + 36440) + 8LL);
      v202 = **(unsigned __int8 **)(v200 + 36440);
      if ( **(_BYTE **)(v200 + 36440) )
        goto LABEL_332;
LABEL_342:
      v173 = v264;
      v221 = 0LL;
      if ( !v172 )
      {
        v8 = a2;
        if ( v216 )
        {
          _BitScanReverse64(&v207, v216);
          v208 = *(unsigned __int16 *)(a2 + 136) << 6;
          v238 = v207;
          v209 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + (unsigned int)(v208 + v207))];
          if ( (*(_DWORD *)(v168 + 120) & 2) != 0 )
            v153 |= *(_QWORD *)(v209 + 36448);
          else
            v153 |= *(_QWORD *)(v209 + 200);
          v231[1] = *(_QWORD *)(v231[1] + 8LL);
          KiRemoveThreadFromSharedReadyQueue(v230, v168, SBYTE4(v231[0]));
          KiEnterDeferredReadyState(v168);
          *(struct _SINGLE_LIST_ENTRY *)(v168 + 216) = v219;
          v219.Next = (struct _SINGLE_LIST_ENTRY *)(v168 + 216);
        }
        else
        {
          ++v154;
        }
        goto LABEL_355;
      }
    }
    if ( (v178 & 1) == 1 )
    {
      v195 = *(unsigned __int8 **)(v184 + 36440);
      v186 = *v195;
      v185 = (__int64 *)(v195 + 8);
    }
    LOBYTE(v196) = 1;
    if ( v186 )
    {
      v197 = v186;
      do
      {
        v198 = *v185++;
        v196 = ((*(_BYTE *)(v198 + 35) & 1) == 0) & (unsigned __int8)v196;
        --v197;
      }
      while ( v197 );
      if ( !v196 )
        goto LABEL_328;
    }
LABEL_312:
    v168 = v217;
    if ( *v174 && KiIsThreadConstrainedBySchedulingGroup(v217) && !KiShouldPreemptionBeDeferred(v187) )
    {
      while ( (*(_BYTE *)(v188 + 112) & 2) == 0 )
      {
        v188 = *(_QWORD *)(v188 + 416);
        if ( !v188 )
          goto LABEL_317;
      }
      v203 = 0LL;
      v204 = ~*(_QWORD *)(v177 + 200);
      v205 = 0;
      v216 &= v204;
      v172 = v204 & v189;
      v206 = v221 & 0xFFFFFFFFFFFFFFFEuLL;
      v253 = v221 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v221 & 1) != 0 )
      {
        if ( (v221 & 1) == 1 )
        {
          v203 = (unsigned __int64 *)(*(_QWORD *)(v206 + 36440) + 8LL);
          v205 = **(unsigned __int8 **)(v206 + 36440);
        }
        if ( !v205 )
          goto LABEL_342;
      }
      else
      {
        v203 = &v253;
        v205 = 1;
      }
      do
        _InterlockedAnd64((volatile signed __int64 *)(v203[--v205] + 48), 0LL);
      while ( v205 );
      goto LABEL_341;
    }
LABEL_317:
    v231[1] = *(_QWORD *)(v231[1] + 8LL);
    KiRemoveThreadFromSharedReadyQueue(v230, v168, SBYTE4(v231[0]));
    v190 = a1->StaticRescheduleContext;
    memset_0(v190, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)v190, &v221);
    KiScheduleThreadToRescheduleContext(&v190->ProcessorCount, v168, v177, 0, (__int64)&v219);
    v191 = KiCommitRescheduleContext(&v190->ProcessorCount, a1, 0, &v219);
    v192 = 0LL;
    v193 = 0;
    v260 = v221 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v221 & 1) == 0 )
    {
      v192 = &v260;
      v193 = 1;
      goto LABEL_350;
    }
    if ( (v221 & 1) == 1 )
    {
      v194 = *(unsigned __int8 **)((v221 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
      v192 = (unsigned __int64 *)(v194 + 8);
      v193 = *v194;
    }
    while ( v193 )
LABEL_350:
      _InterlockedAnd64((volatile signed __int64 *)(v192[--v193] + 48), 0LL);
    v221 = 0LL;
    if ( v191 )
    {
      for ( i = 0; i < v190->ProcessorCount; ++i )
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v190->ProcessorEntries + 32 * i + 8 * i),
          a1,
          0LL,
          0LL);
    }
    v8 = a2;
LABEL_355:
    v7 = a3;
  }
  while ( v154 < 0x40 );
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    _m_prefetchw(&v232);
    v211 = v232;
    if ( (_QWORD)v232 )
    {
LABEL_360:
      *(_QWORD *)&v232 = 0LL;
      v212 = *((_QWORD *)&v232 + 1);
      if ( (((unsigned __int8)v212 ^ (unsigned __int8)_InterlockedExchange64(
                                                        (volatile __int64 *)(v211 + 8),
                                                        *((__int64 *)&v232 + 1))) & 4) != 0 )
        KeWakeAddressAll(v211 + 8, v212);
    }
    else if ( (__int128 *)_InterlockedCompareExchange64(
                            *((volatile signed __int64 **)&v232 + 1),
                            0LL,
                            (signed __int64)&v232) != &v232 )
    {
      v211 = KxWaitForLockChainValid((__int64 *)&v232);
      goto LABEL_360;
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)a6, 0LL);
  }
LABEL_363:
  KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
  if ( v219.Next )
  {
    v148 = &v219;
LABEL_365:
    KiReadyDeferredReadyList(a1, v148);
  }
}
