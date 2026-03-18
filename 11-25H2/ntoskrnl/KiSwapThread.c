/*
 * XREFs of KiSwapThread @ 0x14031CEE0
 * Callers:
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiInSwapSingleProcess @ 0x1402F28E4 (KiInSwapSingleProcess.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 *     KiExecuteDpcDelegate @ 0x1405C2CE0 (KiExecuteDpcDelegate.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     KiCancelTimer @ 0x1402F33D0 (KiCancelTimer.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402F6764 (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     PsGetThreadServerSilo @ 0x140310C30 (PsGetThreadServerSilo.c)
 *     KiResumeThreadCycleAccumulation @ 0x140313A04 (KiResumeThreadCycleAccumulation.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140316DD0 (KiUpdateVPBackingThreadPriority.c)
 *     PoGetFrequencyBucket @ 0x14031A790 (PoGetFrequencyBucket.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140330C10 (KiSendHeteroRescheduleIntRequest.c)
 *     ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x140350F40 (-KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z.c)
 *     KiInsertDeferredPreemptionApc @ 0x140351CBC (KiInsertDeferredPreemptionApc.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x140351D88 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140351E34 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140353968 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403E07B0 (KeInterlockedSetProcessorAffinityEx.c)
 *     EtwpLogContextSwapEvent @ 0x14042A060 (EtwpLogContextSwapEvent.c)
 *     KiProcessScbTracingList @ 0x140454D48 (KiProcessScbTracingList.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x1404F0A84 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetClockTimerDeadlineNoWake @ 0x1404F3C70 (KiSetClockTimerDeadlineNoWake.c)
 *     EtwpCoverageSamplerContextSwap @ 0x140646158 (EtwpCoverageSamplerContextSwap.c)
 *     KiSwapContext @ 0x1406A7790 (KiSwapContext.c)
 */

__int64 __fastcall KiSwapThread(ULONG_PTR BugCheckParameter1, struct _KPRCB *a2, _QWORD *a3)
{
  __int64 v3; // r13
  ULONG_PTR v4; // r12
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // r14
  int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *i; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  char v16; // si
  LARGE_INTEGER v17; // r11
  __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  char v21; // cl
  unsigned __int64 v22; // rax
  LARGE_INTEGER v23; // rdx
  unsigned __int64 v24; // rdx
  LARGE_INTEGER v25; // r9
  unsigned __int128 v26; // rax
  int v27; // r8d
  unsigned __int64 v28; // rcx
  char v29; // bl
  unsigned int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // r9
  __int64 v33; // rdx
  struct _KPRCB *v34; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v36; // ecx
  unsigned __int8 *v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rbx
  unsigned int v42; // edi
  struct _KSCHEDULING_GROUP *v43; // rsi
  struct _SINGLE_LIST_ENTRY *p_TracingListEntry; // rbx
  struct _KSCB *j; // rdi
  unsigned __int16 PrcbLockFlags; // dx
  unsigned int Rank; // r15d
  __int16 v48; // r14
  char v49; // al
  unsigned __int16 v50; // ax
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned __int64 *v60; // r8
  int v61; // edx
  unsigned __int64 v62; // r9
  __int64 v63; // rax
  unsigned __int64 v64; // rbx
  char v65; // r14
  _DWORD *v66; // rdi
  char v67; // si
  __int64 v68; // rdx
  __int64 v69; // rdi
  unsigned int FrequencyBucket; // eax
  __int64 v72; // r9
  char v73; // r11
  __int64 v74; // r10
  __int64 v75; // rcx
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  int v78; // ecx
  __int64 v79; // rax
  _QWORD *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // r11
  unsigned int *v83; // r10
  __int64 v84; // rbx
  __int64 v85; // r8
  __int64 v86; // r12
  __int64 v87; // rdi
  signed __int32 v88; // eax
  signed __int32 v89; // ett
  char *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  unsigned __int64 *v94; // r8
  __int64 v95; // rdx
  unsigned __int64 v96; // r9
  __int64 v97; // rax
  unsigned int v98; // ebx
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 RelativeWeight; // r8
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  unsigned int v105; // ecx
  volatile signed __int32 *ShareRank; // rax
  unsigned __int8 v107; // al
  volatile signed __int16 *v108; // rbx
  __int64 ThreadServerSilo; // rdi
  __int64 v110; // r15
  _QWORD *v111; // rax
  _QWORD *v112; // r14
  __int64 v113; // r14
  __int64 v114; // r12
  unsigned __int8 v115; // al
  unsigned __int16 v116; // dx
  bool v117; // zf
  unsigned __int8 CurrentIrql; // si
  unsigned int v119; // edi
  int v120; // ecx
  unsigned int v121; // edx
  __int64 v122; // rcx
  unsigned __int64 v123; // rax
  signed __int32 v124[8]; // [rsp+0h] [rbp-69h] BYREF
  unsigned __int64 v125; // [rsp+30h] [rbp-39h] BYREF
  struct _SINGLE_LIST_ENTRY v126; // [rsp+38h] [rbp-31h] BYREF
  _QWORD *v127; // [rsp+40h] [rbp-29h] BYREF
  _SINGLE_LIST_ENTRY *v128; // [rsp+48h] [rbp-21h] BYREF
  __int64 v129; // [rsp+50h] [rbp-19h]
  __int64 v130; // [rsp+58h] [rbp-11h]
  __int64 v131; // [rsp+60h] [rbp-9h]
  __int64 v132; // [rsp+68h] [rbp-1h]
  unsigned __int64 v133; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int64 v134; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v137; // [rsp+D8h] [rbp+6Fh]

  v3 = (__int64)a2;
  v4 = BugCheckParameter1;
  v128 = 0LL;
  v125 = 0LL;
  if ( a2->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64 *)a2, 1u, 0, 2u);
  v5 = *(_QWORD *)(v4 + 1144);
  v6 = (__int64 *)(v4 + 1144);
  v126.Next = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v4 + 800);
    v6 = (__int64 *)(v4 + 1144);
    if ( v7 )
    {
      v8 = *(unsigned __int16 *)(v5 + 8);
      v6 = (__int64 *)(v4 + 1144);
      v9 = 0LL;
      if ( *(_BYTE *)(v5 + 12) )
      {
        do
        {
          v10 = *(_QWORD *)(v7 + 8 * v9);
          v129 = v10;
          if ( v10 )
          {
            if ( (v10 & 2) == 0 )
            {
              v86 = v5 + 88LL * (unsigned int)v9;
              if ( v10 >= 0 || !*(_BYTE *)(v86 + 25) && (v10 & 1) != 0 )
              {
                v87 = v10 & 0x7FFFFFFFFFFFFFFCLL;
                if ( *(_QWORD *)(v86 + 16) )
                {
                  _disable();
                  KiAbEntryFreeAndEnableInterrupts(v86 + 16, BugCheckParameter1, v87, 0, 0LL);
                  v8 |= 1 << v9;
                }
                if ( v87 )
                {
                  *(_QWORD *)(v86 + 16) = v87;
                  v8 &= ~(1 << v9);
                  *(_BYTE *)(v86 + 24) &= ~0x40u;
                  if ( (v129 & 1) != 0 )
                    *(_BYTE *)(v86 + 25) = 1;
                  HIBYTE(v129) |= 0x80u;
                  *(_QWORD *)(v7 + 8 * v9) = v129;
                }
              }
            }
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *(unsigned __int8 *)(v5 + 12) );
        v4 = BugCheckParameter1;
        v3 = (__int64)a2;
        v6 = (__int64 *)(BugCheckParameter1 + 1144);
      }
      *(_WORD *)(v5 + 8) = v8;
    }
  }
  v11 = *v6;
  if ( v11 )
    v12 = (unsigned int)(1LL << *(_BYTE *)(v11 + 12)) - 1 == (*(unsigned __int16 *)(v11 + 8) | *(unsigned __int16 *)(v11 + 10));
  else
    v12 = 1LL;
  if ( (unsigned int)(1LL << *(_BYTE *)(*(_QWORD *)(v4 + 1136) + 12LL)) - 1 != (*(unsigned __int16 *)(*(_QWORD *)(v4 + 1136) + 8LL) | *(unsigned __int16 *)(*(_QWORD *)(v4 + 1136) + 10LL))
    || !(_DWORD)v12 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v127 = 0LL;
    KiAbProcessThreadLocks(v4, 7, (__int64)&v126, &v127, &CurrentPrcb->AbSelfIoBoostsList.Next);
    for ( i = v127; v127; i = v127 )
    {
      v108 = (volatile signed __int16 *)(i - 101);
      v127 = (_QWORD *)*i;
      *i = 1LL;
      _InterlockedOr(v124, 0);
      if ( *((_BYTE *)i - 16) )
        KiAbProcessThreadLocks((__int64)(i - 101), 4, (__int64)&v126, &v127, &CurrentPrcb->AbSelfIoBoostsList.Next);
      _InterlockedDecrement16(v108 + 434);
    }
    Next = v126.Next;
    v16 = 0;
    if ( v126.Next )
    {
      v126.Next = v126.Next->Next;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v126, 0LL);
        Next = v126.Next;
        ++v16;
        if ( v126.Next )
          v126.Next = v126.Next->Next;
        if ( (v16 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      }
      while ( Next );
    }
    KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  }
  _disable();
  *(_BYTE *)(v3 + 32) = 1;
  v17.QuadPart = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( *(_BYTE *)(v3 + 34524) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v21 = *(_BYTE *)(v3 + 172);
    v17 = PerformanceCounter;
    v22 = *(_QWORD *)(v3 + 176);
    v23 = v17;
    v132 = 0LL;
    if ( v21 )
      v23.QuadPart = v17.QuadPart << v21;
    v132 = ((unsigned __int64)v23.QuadPart * (unsigned __int128)v22) >> 64;
    v19 = v132 - *(_QWORD *)(v3 + 34432);
    v18 = v132;
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      v24 = *(_QWORD *)(v3 + 34552);
      if ( MEMORY[0xFFFFF78000000300] )
      {
        v130 = 0LL;
        v131 = 0LL;
        v25 = v17;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v26 = (v24 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v25.QuadPart = v17.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v26 = v24 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        }
        v130 = *((_QWORD *)&v26 + 1);
        v12 = ((unsigned __int64)v25.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v131 = v12;
        v27 = ((unsigned __int64)(((unsigned __int64)v12
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v26 + 1)
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v27 )
        {
          if ( (*(_DWORD *)(v4 + 116) & 0x400) != 0
            || (((unsigned __int64)v17.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(v4 + 1100)) )
          {
            *(_DWORD *)(v3 + 34372) += v27;
            *(_DWORD *)(v4 + 652) += v27;
          }
          else
          {
            *(_DWORD *)(v3 + 34376) += v27;
            *(_DWORD *)(v4 + 732) += v27;
          }
          if ( v4 != *(_QWORD *)(v3 + 24) )
          {
            v90 = (char *)(v4 + 195);
            if ( *(char *)(v4 + 195) < 16 )
            {
              if ( *(_QWORD *)(v4 + 104) )
              {
                v91 = *(_QWORD *)(v4 + 104);
                if ( v91 )
                {
                  v12 = 0LL;
                  v92 = v91 + *(unsigned int *)(v3 + 216);
                  if ( *v90 < 16 && (*(_DWORD *)(v4 + 120) & 0x200) == 0 )
                  {
                    v93 = v91 + *(unsigned int *)(v3 + 216);
                    while ( (*(_BYTE *)(v93 + 112) & 2) == 0 )
                    {
                      v93 = *(_QWORD *)(v93 + 416);
                      if ( !v93 )
                      {
                        do
                        {
                          v12 = (unsigned int)(*(_DWORD *)(v92 + 124) + v12);
                          if ( (_DWORD)v12 )
                            break;
                          v92 = *(_QWORD *)(v92 + 416);
                        }
                        while ( v92 );
                        if ( (_DWORD)v12 )
                          break;
                        goto LABEL_161;
                      }
                    }
LABEL_163:
                    *(_DWORD *)(v3 + 34412) += v27;
                    goto LABEL_31;
                  }
LABEL_161:
                  v90 = (char *)(v4 + 195);
                }
              }
            }
            if ( *v90 >= 8 )
              goto LABEL_31;
            goto LABEL_163;
          }
        }
      }
    }
  }
LABEL_31:
  *(LARGE_INTEGER *)(v3 + 34552) = v17;
  *(_QWORD *)(v3 + 34432) = v18;
  *(_QWORD *)(v4 + 72) += v19;
  if ( v4 != *(_QWORD *)(v3 + 24) )
  {
    v28 = ((v19 * *(unsigned int *)(v3 + 34488)) >> 16) + *(unsigned int *)(v4 + 80);
    if ( v28 > 0xFFFFFFFF )
      LODWORD(v28) = -1;
    *(_DWORD *)(v4 + 80) = v28;
  }
  v29 = *(_BYTE *)(v4 + 2);
  if ( (v29 & 0xBE) != 0 )
  {
    if ( v29 < 0 )
    {
      v30 = (*(_DWORD *)(*(_QWORD *)(v4 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v31, v30);
      v32 = (*(_DWORD *)(*(_QWORD *)(v4 + 544) + 400LL) >> 4) & 0x1FF;
      v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 35760) + 8LL * (v31 - 2)) + 8LL * (v30 ^ (1 << v31)) + 8);
      *(_QWORD *)(v33 + 8 * v32) += v19;
      v29 &= ~0x80u;
    }
    if ( (v29 & 0x10) != 0 )
    {
      *(_QWORD *)(8LL * *(unsigned __int8 *)(v4 + 124) + v3 + 34440) += v19;
      v29 &= ~0x10u;
    }
    if ( (v29 & 0x20) != 0 )
    {
      if ( *(_QWORD *)(v4 + 1672) )
      {
        FrequencyBucket = PoGetFrequencyBucket(v3);
        v73 = *(_BYTE *)(v3 + 35336);
        v74 = FrequencyBucket;
        v75 = v72 + (v73 != 0 ? 8 : 0);
        *(_QWORD *)(v75 + 16LL * FrequencyBucket) += v19;
        v76 = *(_DWORD *)(v72 + 192);
        if ( KiTimelineBitmapTime > v76 )
        {
          LODWORD(v137) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v76 >= 0x20 )
            HIDWORD(v137) = 1;
          else
            HIDWORD(v137) = (*(_DWORD *)(v72 + 196) << (KiTimelineBitmapTime - v76)) | 1;
          *(_QWORD *)(v72 + 192) = v137;
        }
        else
        {
          v77 = v76 - KiTimelineBitmapTime;
          if ( v77 < 0x20 )
            *(_DWORD *)(v72 + 196) |= 1 << v77;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v78 = *(unsigned __int8 *)(v4 + 516);
          if ( ((v78 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v78 == 5 )
            *(_QWORD *)(v72 + 16LL * FrequencyBucket + 8) += v19;
        }
        if ( *(_QWORD *)(v4 + 1616) )
        {
          v99 = v73 != 0 ? 8 : 0;
          *(_QWORD *)(v99 + v72 + 16 * (FrequencyBucket + 8LL)) += v19;
          v100 = 64LL;
          if ( v73 )
            v100 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v4 + 1616) + 1672LL) + v100 + 16 * v74),
            v19);
        }
      }
      v29 &= ~0x20u;
    }
    if ( (v29 & 0x40) != 0 )
    {
      v101 = *(_QWORD *)(v4 + 968);
      if ( v101 )
        *(_BYTE *)(v101 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(v3, v4, v19, 1);
    v12 = (__int64)&KiInitialProcess;
    if ( *(_QWORD *)(v3 + 34480) && *(_UNKNOWN **)(v4 + 544) != &KiInitialProcess && *(unsigned __int8 *)(v4 + 516) < 7u )
    {
      v120 = 0;
      v121 = *(_DWORD *)(v4 + 80);
      if ( v121 <= *(_DWORD *)(v4 + 84) )
        v121 = *(_DWORD *)(v4 + 84);
      LOBYTE(v120) = v121 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v122 = *(unsigned __int8 *)(v4 + 517)
           + KiHgsPlusConfiguration * (v120 + 2 * (unsigned int)*(unsigned __int8 *)(v4 + 516));
      *(_QWORD *)(*(_QWORD *)(v3 + 34480) + 8 * v122) += v19;
    }
    if ( (v29 & 0xBE) != 0 )
    {
      v79 = *(_QWORD *)(v4 + 104);
      if ( v79 )
      {
        v80 = (_QWORD *)(v79 + *(unsigned int *)(v3 + 216));
        do
        {
          *v80 += v19;
          v80 = (_QWORD *)v80[52];
        }
        while ( v80 );
      }
      if ( (*(_BYTE *)(v4 + 2) & 8) != 0
        && *(_UNKNOWN **)(v4 + 544) != &KiInitialProcess
        && (*(_QWORD *)(*(_QWORD *)(v3 + 192) + 128LL) & *(_QWORD *)(*(_QWORD *)(v4 + 576)
                                                                   + 8LL
                                                                   * *(unsigned __int16 *)(*(_QWORD *)(v3 + 192) + 136LL)
                                                                   + 8)) != *(_QWORD *)(*(_QWORD *)(v3 + 192) + 128LL) )
      {
        *(_QWORD *)(v3 + 34472) += v19;
      }
      v81 = *(_QWORD *)(v4 + 360);
      if ( v81 )
      {
        v82 = *(_QWORD *)(v81 + 32);
        if ( v82 )
        {
          v12 = 1LL;
          if ( KiHwCountersCount )
          {
            v83 = (unsigned int *)&KiHwCounters;
            v84 = (unsigned int)KiHwCountersCount;
            v85 = v81 + 48;
            do
            {
              if ( (v82 & v12) != 0 )
              {
                v123 = __readpmc(*v83);
                *(_QWORD *)(v85 + 8) += (unsigned int)(v123 - *(_DWORD *)v85);
                *(_QWORD *)v85 = v123;
              }
              v12 *= 2LL;
              ++v83;
              v85 += 24LL;
              --v84;
            }
            while ( v84 );
          }
        }
      }
    }
  }
  v34 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v34->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v88 = *SchedulerAssist;
    do
    {
      v89 = v88;
      v88 = _InterlockedCompareExchange(SchedulerAssist, v88 & 0xFFDFFFFF, v88);
    }
    while ( v89 != v88 );
    if ( (v88 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v34);
  }
  _enable();
  v36 = (*(_DWORD *)(v4 + 84) >> 1) + (*(_DWORD *)(v4 + 80) >> 1);
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 84) = v36;
  v125 = v3 & 0xFFFFFFFFFFFFFFFEuLL | 1;
  v37 = *(unsigned __int8 **)(v3 + 36440);
  v38 = *v37;
  v39 = (__int64 *)(v37 + 8);
  if ( (_BYTE)v38 )
  {
    v40 = *v37;
    do
    {
      v41 = *v39;
      v42 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 48), 0LL) )
      {
        do
        {
          if ( (++v42 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38) )
          {
            HvlNotifyLongSpinWait(v42);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v41 + 48) );
      }
      ++v39;
      --v40;
    }
    while ( v40 );
  }
  v43 = *(struct _KSCHEDULING_GROUP **)(v4 + 104);
  v128 = 0LL;
  if ( v43 )
  {
    p_TracingListEntry = v128;
    for ( j = (struct _KSCB *)((char *)v43 + *(unsigned int *)(v3 + 216));
          ;
          v43 = (struct _KSCHEDULING_GROUP *)((char *)j - *(unsigned int *)(v3 + 216)) )
    {
      PrcbLockFlags = j->PrcbLockFlags;
      Rank = j->Rank;
      v48 = PrcbLockFlags & 2;
      if ( (PrcbLockFlags & 4) == 0 )
        break;
      if ( (PrcbLockFlags & 0x12) != 0
        || ((v115 = KiChargeSchedulingGroupCycleTime(v43, j),
             PrcbLockFlags = j->PrcbLockFlags,
             (PrcbLockFlags & 0x80u) == 0)
         || j->GenerationCycles <= j->MaxQuotaCycleTarget)
        && !v115 )
      {
        if ( j->GenerationCycles >= j->RankCycleTarget && (PrcbLockFlags & 2) == 0 )
          KiRecomputeGroupSchedulingRank(v43, j, (struct _KPRCB *)v3);
      }
      else
      {
        v116 = PrcbLockFlags | 2;
        j->PrcbLockFlags = v116;
        if ( (v116 & 1) != 0 )
          KiRemoveSchedulingGroupQueue((struct _KPRCB *)v3, j, 1u);
      }
LABEL_63:
      if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0 && (Rank != j->Rank || (v48 != 0) != ((j->PrcbLockFlags >> 1) & 1)) )
      {
        j->PrcbLockFlags |= 0x100u;
        j->TracingListEntry.Next = p_TracingListEntry;
        p_TracingListEntry = &j->TracingListEntry;
        v128 = &j->TracingListEntry;
      }
      j = j->Parent;
      if ( !j )
      {
        v4 = BugCheckParameter1;
        if ( p_TracingListEntry )
        {
          KiReleasePrcbLocksForIsolationUnit((__int64 *)&v125);
          KiProcessScbTracingList(v3, &v128);
          KiAcquirePrcbLocksForIsolationUnit(v3, 1LL, &v125);
        }
        goto LABEL_67;
      }
    }
    LOBYTE(SchedulerAssist) = 0;
    if ( (PrcbLockFlags & 0x12) == 0 )
    {
      v107 = KiChargeSchedulingGroupCycleTime(v43, j);
      PrcbLockFlags = j->PrcbLockFlags;
      LOBYTE(SchedulerAssist) = v107 != 0;
      if ( (PrcbLockFlags & 0x80u) == 0 || j->GenerationCycles <= j->MaxQuotaCycleTarget )
      {
        if ( !v107 )
          goto LABEL_57;
      }
      else
      {
        LOBYTE(SchedulerAssist) = 1;
      }
      PrcbLockFlags |= 2u;
      j->PrcbLockFlags = PrcbLockFlags;
    }
LABEL_57:
    if ( (PrcbLockFlags & 0x24) != 0 || j->GenerationCycles < j->MinQuotaCycleTarget )
    {
      v49 = 0;
    }
    else
    {
      PrcbLockFlags |= 4u;
      v49 = 1;
      j->PrcbLockFlags = PrcbLockFlags;
    }
    if ( (PrcbLockFlags & 0x20) == 0 && v49 || (PrcbLockFlags & 0x10) == 0 && (_BYTE)SchedulerAssist )
    {
      j->PrcbLockFlags = PrcbLockFlags | 4;
      RelativeWeight = v43->RelativeWeight;
      v103 = (unsigned __int64)(KiCycleDivisorLongTerm * RelativeWeight) >> 7;
      v104 = j->LongTermCycles % v103;
      v105 = j->LongTermCycles / v103 + 1;
      ShareRank = (volatile signed __int32 *)j->ShareRank;
      j->Rank = v105;
      if ( ShareRank )
      {
        _InterlockedAdd(ShareRank, v105);
        p_TracingListEntry = v128;
      }
      j->RankCycleTarget = j->MinQuotaCycleTarget + ((unsigned __int64)(KiCycleDivisorShortTerm * RelativeWeight) >> 7);
      KiCheckForEffectivePriorityChange((struct _KPRCB *)v3, (union _KISOLATION_UNIT_LOCK_HANDLE *)v104, j);
    }
    v50 = j->PrcbLockFlags;
    if ( (v50 & 1) != 0 )
    {
      if ( (v50 & 2) != 0 )
        KiRemoveSchedulingGroupQueue((struct _KPRCB *)v3, j, 1u);
      else
        KiResortScbQueue((struct _KPRCB *)v3, j, 1u);
    }
    if ( (*(_BYTE *)&j->0 & 4) != 0 && !*(_BYTE *)(v3 + 34393) )
    {
      KeInterlockedSetProcessorAffinityEx(
        KiGroupSchedulingOverQuotaMask,
        *(unsigned int *)(v3 + 36),
        SchedulerAssist,
        v12);
      v117 = KiClockTimerPerCpuTickScheduling == 0;
      *(_BYTE *)(v3 + 34393) = 1;
      if ( !v117 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        KiSetClockTimerDeadlineNoWake(v3, 4LL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
    goto LABEL_63;
  }
LABEL_67:
  v51 = KiSearchForNewThread(v3, 0LL, &v125);
  if ( !(unsigned int)Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(v53, v52, v54) )
  {
    if ( v51 != *(_QWORD *)(v3 + 24) || !KeHeteroSystem || KeHeteroSystemVirtual )
      goto LABEL_82;
    v94 = 0LL;
    v95 = 0LL;
    v96 = v125 & 0xFFFFFFFFFFFFFFFEuLL;
    v133 = v125 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v125 & 1) != 0 )
    {
      if ( (v125 & 1) == 1 )
      {
        v94 = (unsigned __int64 *)(*(_QWORD *)(v96 + 36440) + 8LL);
        v95 = **(unsigned __int8 **)(v96 + 36440);
      }
      if ( !(_DWORD)v95 )
        goto LABEL_171;
    }
    else
    {
      v94 = &v133;
      LODWORD(v95) = 1;
    }
    do
    {
      v97 = (unsigned int)(v95 - 1);
      v95 = v97;
      _InterlockedAnd64((volatile signed __int64 *)(v94[v97] + 48), 0LL);
    }
    while ( (_DWORD)v97 );
LABEL_171:
    KiSendHeteroRescheduleIntRequest(v3, v95, v94);
    v125 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
    v98 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 48), 0LL) )
    {
      do
      {
        if ( (++v98 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v55) )
        {
          HvlNotifyLongSpinWait(v98);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v3 + 48) );
    }
    goto LABEL_73;
  }
  if ( v51 == *(_QWORD *)(v3 + 24) && KeHeteroSystem && !KeHeteroSystemVirtual && !*(_BYTE *)(v3 + 14523) )
  {
    KiReleasePrcbLocksForIsolationUnit((__int64 *)&v125);
    KiSendHeteroRescheduleIntRequest(v3, v56, v57);
    KiAcquirePrcbLocksForIsolationUnit(v3, 0LL, &v125);
LABEL_73:
    v51 = *(_QWORD *)(v3 + 16);
  }
LABEL_82:
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v55) )
  {
    if ( v51 == *(_QWORD *)(v3 + 24) || v51 == v4 || !*(_BYTE *)(v51 + 113) )
    {
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 8) = v51;
      if ( *(_BYTE *)(v51 + 388) == 1 )
        *(_DWORD *)(v51 + 132) += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v51 + 436);
      *(_BYTE *)(v51 + 388) = 2;
      if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v58) )
      {
        v59 = *(_QWORD *)(v3 + 192);
        v58 = *(_QWORD *)(v3 + 200);
        if ( (v58 & *(_QWORD *)(v59 + 400)) != 0 )
        {
          v58 = ~v58;
          _InterlockedAnd64((volatile signed __int64 *)(v59 + 400), v58);
        }
      }
    }
    else
    {
      v51 = *(_QWORD *)(v3 + 24);
      *(_QWORD *)(v3 + 8) = v51;
      if ( *(_BYTE *)(v51 + 388) == 1 )
        *(_DWORD *)(v51 + 132) += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v51 + 436);
      *(_BYTE *)(v51 + 388) = 2;
    }
  }
  else
  {
    if ( v51 == *(_QWORD *)(v3 + 24) || v51 == v4 || !*(_BYTE *)(v51 + 113) )
      *(_QWORD *)(v3 + 16) = 0LL;
    else
      v51 = *(_QWORD *)(v3 + 24);
    KiUpdatePriorityMatrixForRunningTransition(v3, v51);
  }
  v60 = 0LL;
  v61 = 0;
  v62 = v125 & 0xFFFFFFFFFFFFFFFEuLL;
  v134 = v125 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v125 & 1) == 0 )
  {
    v60 = &v134;
    v61 = 1;
    do
    {
LABEL_93:
      v63 = (unsigned int)(v61 - 1);
      v58 = v60[v63];
      --v61;
      _InterlockedAnd64((volatile signed __int64 *)(v58 + 48), 0LL);
    }
    while ( (_DWORD)v63 );
    goto LABEL_94;
  }
  if ( (v125 & 1) == 1 )
  {
    v60 = (unsigned __int64 *)(*(_QWORD *)(v62 + 36440) + 8LL);
    v61 = **(unsigned __int8 **)(v62 + 36440);
  }
  if ( v61 )
    goto LABEL_93;
LABEL_94:
  v64 = *(unsigned __int8 *)(v4 + 390);
  v125 = 0LL;
  if ( v4 == v51 )
  {
    v67 = *(_BYTE *)(v51 + 193) && !*(_WORD *)(v51 + 486) && !(_BYTE)v64;
    KiResumeThreadCycleAccumulation(v3, v51, 0LL);
    KiAbProcessPostContextSwitch(v4);
    if ( (*(_DWORD *)(v51 + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v51 + 120), 0xBu);
      KiInsertDeferredPreemptionApc(v3, v51, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
    {
      ThreadServerSilo = PsGetThreadServerSilo(v4);
      v110 = PsGetThreadServerSilo(v4);
      v111 = &PspHostSiloGlobals;
      if ( ThreadServerSilo )
        v112 = *(_QWORD **)(ThreadServerSilo + 1504);
      else
        v112 = &PspHostSiloGlobals;
      v113 = v112[104];
      if ( v110 )
        v111 = *(_QWORD **)(v110 + 1504);
      v114 = v111[104];
      if ( EtwpHostSiloState != -4572 && (*(_DWORD *)(EtwpHostSiloState + 4576) & 4) != 0 )
        EtwpCoverageSamplerContextSwap(BugCheckParameter1);
      EtwpLogContextSwapEvent(EtwpHostSiloState, BugCheckParameter1, BugCheckParameter1);
      if ( ThreadServerSilo == v110 )
      {
        if ( ThreadServerSilo && v113 )
        {
          v4 = BugCheckParameter1;
          EtwpLogContextSwapEvent(v113, BugCheckParameter1, BugCheckParameter1);
          goto LABEL_97;
        }
      }
      else if ( ThreadServerSilo && v113 )
      {
        EtwpLogContextSwapEvent(v113, BugCheckParameter1, 0LL);
      }
      if ( v110 && v114 )
      {
        EtwpLogContextSwapEvent(v114, 0LL, BugCheckParameter1);
        v4 = BugCheckParameter1;
      }
      else
      {
        v4 = BugCheckParameter1;
      }
    }
  }
  else
  {
    v65 = 0;
    v66 = (_DWORD *)(v4 + 120);
    if ( (*(_DWORD *)(v4 + 120) & 0x400000) != 0 && *(_BYTE *)(v4 + 388) == 5 )
    {
      if ( !*(_BYTE *)(v4 + 792) )
      {
        v67 = KiSwapContext(v4, v51, (unsigned __int8)v64);
        KiAbProcessPostContextSwitch(v4);
        goto LABEL_97;
      }
      v119 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
      {
        do
        {
          if ( (++v119 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v58) )
          {
            HvlNotifyLongSpinWait(v119);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v4 + 64) );
      }
      if ( (*(_DWORD *)(v4 + 120) & 0x400000) != 0 && *(_BYTE *)(v4 + 388) == 5 )
      {
        if ( (*(_DWORD *)(v4 + 120) & 0x400000) != 0 )
          _InterlockedOr(*(volatile signed __int32 **)(v4 + 968), 0x40000u);
        KiUpdateVPBackingThreadPriority(v4, 0LL, (__int64)v60, 0);
        v65 = 1;
      }
      *(_QWORD *)(v4 + 64) = 0LL;
      v66 = (_DWORD *)(v4 + 120);
    }
    v67 = KiSwapContext(v4, v51, (unsigned __int8)v64);
    KiAbProcessPostContextSwitch(v4);
    if ( v65 && (*v66 & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(v4 + 968), 0xFFFBFFFF);
  }
LABEL_97:
  v69 = *(_QWORD *)(v4 + 200);
  if ( _bittestandreset((signed __int32 *)(v4 + 116), 9u) && !(unsigned __int8)KiCancelTimer(v4 + 256, 1) )
  {
    *(_BYTE *)(v4 + 481) = 4;
    *(_QWORD *)(v4 + 264) = v4 + 464;
    *(_QWORD *)(v4 + 272) = v4 + 464;
  }
  if ( a3 )
    *a3 = *(_QWORD *)(v4 + 976);
  if ( v67 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v68) = 1;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v68);
    }
    __writecr8(1uLL);
    KiDeliverApc(0, 0LL, 0LL);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v64);
  __writecr8(v64);
  return v69;
}
