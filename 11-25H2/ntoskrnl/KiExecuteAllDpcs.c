/*
 * XREFs of KiExecuteAllDpcs @ 0x140254370
 * Callers:
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x1405C2BB0 (KiExecuteDpc.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendSoftwareInterruptAffinity @ 0x140253D64 (KiSendSoftwareInterruptAffinity.c)
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiAbPropagateBoosts @ 0x1402542E0 (KiAbPropagateBoosts.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiEnterLongDpcProcessing @ 0x140314FA4 (KiEnterLongDpcProcessing.c)
 *     KiAcquireMultiplePrcbLocks @ 0x140315390 (KiAcquireMultiplePrcbLocks.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x140318430 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     RtlGetSystemTimePrecise @ 0x14031AAC0 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiInsertDeferredReadyList @ 0x140352190 (KiInsertDeferredReadyList.c)
 *     KiIsPrcbThread @ 0x140353BC0 (KiIsPrcbThread.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140353BF0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     PpmPerfAction @ 0x1403B0150 (PpmPerfAction.c)
 *     EtwpGetHostPerfCounter @ 0x1403F6D7C (EtwpGetHostPerfCounter.c)
 *     KiInsertNewDpcRuntime @ 0x1403F783C (KiInsertNewDpcRuntime.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14040AF50 (KiSwapDirectoryTableBaseTarget.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x14042AA18 (EtwTraceLongDpcDetectionEvent.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F7354 (EtwTraceXSchedulerPriorityKickSend.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall KiExecuteAllDpcs(struct _KPRCB *a1, unsigned __int64 a2, _DWORD *a3, __int64 a4)
{
  _KTHREAD *v4; // rsi
  struct _KPRCB *v5; // r11
  _KDPC_DATA *v7; // r13
  volatile int *p_DpcQueueDepth; // rdi
  __int16 v9; // ax
  _KDPC_DATA *v10; // r14
  __int64 v11; // rcx
  unsigned int LongDpcPresent; // eax
  bool v13; // bl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _SINGLE_LIST_ENTRY *v15; // rax
  struct _KDPC *v16; // rsi
  struct _SINGLE_LIST_ENTRY *v17; // rdi
  struct _SINGLE_LIST_ENTRY *v18; // r14
  struct _KPRCB *v19; // rcx
  signed __int32 *v20; // r8
  int v21; // ebx
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  struct _KPRCB *v28; // rcx
  unsigned __int64 v29; // r13
  KDEFERRED_ROUTINE *v30; // rax
  struct _SINGLE_LIST_ENTRY *v31; // rsi
  struct _SINGLE_LIST_ENTRY *v32; // rcx
  volatile signed __int16 *v33; // rbx
  int v34; // esi
  _QWORD *v35; // rbx
  char v36; // al
  char v37; // r8
  int Next_high; // edx
  struct _KPRCB *v39; // rcx
  __int64 v40; // rdx
  unsigned int v41; // r8d
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rbx
  _QWORD *DpcLog; // r8
  unsigned __int64 v45; // r8
  _RTL_HASH_TABLE *DpcRuntimeHistoryHashTable; // r10
  unsigned int v47; // r11d
  __int64 v48; // rdi
  __int64 v49; // r9
  unsigned int v50; // r11d
  unsigned __int64 *v51; // rcx
  unsigned __int64 v52; // rbx
  volatile signed __int32 *v53; // rax
  int v54; // edi
  __int16 v55; // si
  unsigned int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v61; // rbx
  struct _KPRCB *v62; // rdi
  _KTHREAD *DpcDelegateThread; // rax
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  _KTHREAD *v65; // r13
  _KTHREAD *CurrentThread; // r14
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v67; // rdi
  char v68; // r8
  _KPRCB *v69; // rax
  _KTHREAD *v70; // rcx
  unsigned __int8 v71; // dl
  unsigned int m; // r11d
  unsigned __int8 *v73; // r9
  __int64 v74; // r13
  unsigned __int64 v75; // rax
  __int64 v76; // r10
  unsigned __int8 v77; // al
  unsigned __int8 v78; // cl
  unsigned __int8 TargetType; // al
  int *v80; // rax
  int v81; // edi
  struct _KPRCB *v82; // rdi
  unsigned __int64 v83; // rcx
  unsigned __int64 *v84; // r12
  int v85; // edx
  struct _KPRCB *v87; // r12
  struct _KPRCB *v88; // r14
  unsigned __int8 v89; // al
  __int64 SingleTargetIndex; // rdx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r13
  int v92; // edx
  int v93; // eax
  _DWORD *v94; // rcx
  __int64 Number; // r13
  signed __int32 v96; // eax
  signed __int32 v97; // ett
  signed __int32 v98; // eax
  signed __int32 v99; // ett
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v100; // rax
  unsigned __int8 v101; // cl
  int v102; // r10d
  _KPRCB *v103; // r9
  unsigned int v104; // r14d
  char v105; // r13
  unsigned int v106; // edi
  struct _KPRCB *v107; // rbx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v109; // al
  unsigned __int64 v110; // rcx
  unsigned __int64 *v111; // r8
  int v112; // edx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KTHREAD *v114; // rdx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v115; // r10
  unsigned __int8 AllCompareThreadStateFlags; // cl
  int v117; // r11d
  _KPRCB *Prcb; // r8
  unsigned int i; // edi
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v120; // rcx
  bool v121; // zf
  unsigned __int8 v122; // al
  unsigned __int8 v123; // al
  __int64 v124; // r10
  __int64 j; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v126; // rcx
  unsigned int k; // r11d
  __int64 v128; // rcx
  __int64 v129; // rcx
  unsigned __int8 *v130; // rdx
  __int64 v131; // rdi
  unsigned __int8 v132; // r9
  signed __int32 v133[8]; // [rsp+0h] [rbp-248h] BYREF
  char v134; // [rsp+30h] [rbp-218h]
  char v135; // [rsp+31h] [rbp-217h]
  struct _KPRCB *v136; // [rsp+38h] [rbp-210h]
  unsigned int v137; // [rsp+40h] [rbp-208h]
  _DWORD BugCheckParameter3[3]; // [rsp+44h] [rbp-204h] BYREF
  _QWORD *v139; // [rsp+50h] [rbp-1F8h] BYREF
  int v140; // [rsp+58h] [rbp-1F0h]
  int v141; // [rsp+5Ch] [rbp-1ECh]
  int v142; // [rsp+64h] [rbp-1E4h]
  unsigned __int64 v143; // [rsp+68h] [rbp-1E0h]
  __int64 v144; // [rsp+70h] [rbp-1D8h] BYREF
  struct _SINGLE_LIST_ENTRY *v145; // [rsp+78h] [rbp-1D0h]
  struct _SINGLE_LIST_ENTRY v146; // [rsp+80h] [rbp-1C8h] BYREF
  int v147; // [rsp+88h] [rbp-1C0h]
  int v148; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v149; // [rsp+98h] [rbp-1B0h]
  PVOID SystemArgument2; // [rsp+A0h] [rbp-1A8h]
  PVOID DeferredContext; // [rsp+A8h] [rbp-1A0h]
  __int64 *v152; // [rsp+B0h] [rbp-198h]
  __int64 v153; // [rsp+B8h] [rbp-190h] BYREF
  __int64 v154; // [rsp+C0h] [rbp-188h] BYREF
  __int64 IsrDpcStats; // [rsp+C8h] [rbp-180h]
  unsigned __int64 v156; // [rsp+D0h] [rbp-178h]
  unsigned __int64 v157; // [rsp+D8h] [rbp-170h]
  _DWORD *v158; // [rsp+E0h] [rbp-168h]
  struct _KPRCB *v159; // [rsp+E8h] [rbp-160h]
  _QWORD *v160; // [rsp+F0h] [rbp-158h]
  _KDPC_DATA *v161; // [rsp+F8h] [rbp-150h]
  volatile int *v162; // [rsp+100h] [rbp-148h]
  __int64 v163; // [rsp+110h] [rbp-138h]
  void **p_IsrDpcStats; // [rsp+118h] [rbp-130h]
  unsigned __int64 v165; // [rsp+120h] [rbp-128h]
  _DWORD *v166; // [rsp+130h] [rbp-118h]
  struct _KPRCB *v167; // [rsp+140h] [rbp-108h]
  unsigned __int64 v168; // [rsp+158h] [rbp-F0h] BYREF
  unsigned __int64 v169; // [rsp+160h] [rbp-E8h] BYREF
  __int128 v170; // [rsp+168h] [rbp-E0h] BYREF
  __int128 v171; // [rsp+178h] [rbp-D0h] BYREF
  int v172; // [rsp+188h] [rbp-C0h]
  struct _KPRCB *v173; // [rsp+198h] [rbp-B0h]
  __int64 v174; // [rsp+1A0h] [rbp-A8h]
  _BYTE v175[8]; // [rsp+1A8h] [rbp-A0h] BYREF
  __int128 v176; // [rsp+1B0h] [rbp-98h]
  __int128 v177; // [rsp+1C0h] [rbp-88h]
  _QWORD v178[2]; // [rsp+1D0h] [rbp-78h] BYREF
  _QWORD v179[4]; // [rsp+1E0h] [rbp-68h] BYREF
  void *retaddr; // [rsp+248h] [rbp+0h]

  v137 = a4;
  v158 = a3;
  v4 = (_KTHREAD *)a2;
  v143 = a2;
  v159 = a1;
  v5 = a1;
  v136 = a1;
  v167 = a1;
  v165 = a2;
  v166 = a3;
  v148 = a4;
  *(_QWORD *)&BugCheckParameter3[1] = 0LL;
  v170 = 0LL;
  v144 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  v163 = (unsigned int)a4;
  v7 = &a1->DpcData[(unsigned int)a4];
  v161 = v7;
  p_DpcQueueDepth = &v7->DpcQueueDepth;
  v162 = &v7->DpcQueueDepth;
  if ( !v7->DpcQueueDepth )
    return 1;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v152 = 0LL;
  }
  else
  {
    if ( (_DWORD)a4 )
    {
      v9 = 3906;
      HIDWORD(v144) = 5249026;
    }
    else
    {
      v9 = 3908;
      HIDWORD(v144) = 5245442;
    }
    LOWORD(v144) = v9;
    v152 = &v144;
  }
  p_IsrDpcStats = &a1->IsrDpcStats;
  IsrDpcStats = (__int64)a1->IsrDpcStats;
  v10 = &a1->DpcData[(unsigned int)a4];
  while ( 1 )
  {
    v11 = *(unsigned int *)p_DpcQueueDepth;
    LongDpcPresent = v7->LongDpcPresent;
    v13 = !(_DWORD)a4 && (LongDpcPresent || (unsigned int)v11 >= KiLongDpcQueueThreshold);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      if ( !v13 )
        goto LABEL_13;
      LOBYTE(a2) = LongDpcPresent != 0;
      EtwTraceLongDpcDetectionEvent(v11, a2);
      v5 = v136;
    }
    if ( v13 && (unsigned __int8)KiEnterLongDpcProcessing(v5) )
      return 0;
LABEL_13:
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&v7->DpcLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v7->DpcLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&v7->DpcLock);
    }
    if ( *(int *)p_DpcQueueDepth <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)&v159->14524 + v163, 0xFFEDu);
      v7->LongDpcPresent = 0;
      if ( !*p_DpcQueueDepth )
      {
        KxReleaseSpinLock(&v7->DpcLock);
        v5 = v136;
LABEL_107:
        v5->IsrDpcStats = (void *)IsrDpcStats;
        if ( (v5->PrcbFlagsReserved & 0x800) != 0 && v4 != v5->DpcDelegateThread )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v98 = *SchedulerAssist;
            do
            {
              v99 = v98;
              v98 = _InterlockedCompareExchange(SchedulerAssist, v98 & 0xFFDFFFFF, v98);
            }
            while ( v99 != v98 );
            if ( (v98 & 0x200000) != 0 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v5 = v136;
            }
          }
          _enable();
          v173 = v5;
          v61 = (unsigned __int64)v5 | 1;
          IsrDpcStats = (unsigned __int64)v5 | 1;
          v154 = (unsigned __int64)v5 | 1;
          KiAcquireMultiplePrcbLocks(
            v5->CoreControlBlock->Prcbs,
            v5->CoreControlBlock->ProcessorCount,
            SchedulerAssist,
            a4);
          v62 = v136;
          v136->PrcbFlagsReserved &= ~0x800u;
          DpcDelegateThread = v62->DpcDelegateThread;
          if ( DpcDelegateThread && v62->NextThread == DpcDelegateThread )
          {
            v146.Next = 0LL;
            StaticRescheduleContext = v62->StaticRescheduleContext;
            memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
            KiStartRescheduleContext((__int64)StaticRescheduleContext, &v154);
            v65 = v62->DpcDelegateThread;
            v153 = 0LL;
            CurrentThread = v62->CurrentThread;
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x1000) != 0 || CurrentThread == v62->SmtIsolationThread )
            {
              RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v62);
              v115 = RescheduleContextEntryForPrcb;
              AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
              v117 = (AllCompareThreadStateFlags >> 1) & 1;
              Prcb = RescheduleContextEntryForPrcb->Prcb;
              if ( (AllCompareThreadStateFlags & 0x20) == 0 )
                RescheduleContextEntryForPrcb->___u5[0] |= 1u;
              RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
              RescheduleContextEntryForPrcb->CompareThread = Prcb->IdleThread;
              RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
              RescheduleContextEntryForPrcb->NewThread = Prcb->IdleThread;
              *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
              if ( v117 )
              {
                for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
                {
                  v120 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                        + 32 * i
                                                        + 8 * i);
                  if ( v120 != v115 )
                    KiAdjustRescheduleContextEntryForThreadRemoval(v120, v114, 1u, 0);
                }
                v121 = v117 == 0;
LABEL_228:
                if ( !v121 )
                  StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
              }
            }
            else
            {
              v67 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v62);
              if ( (unsigned __int8)(v68 & 2) > (unsigned __int8)(*(_BYTE *)(&v65->MiscFlags + 1) & 2) )
              {
                for ( j = 0LL; ; j = (unsigned int)(BugCheckParameter3[0] + 1) )
                {
                  BugCheckParameter3[0] = j;
                  if ( (unsigned int)j >= StaticRescheduleContext->ProcessorCount )
                    break;
                  v126 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                        + 32 * j
                                                        + 8 * j);
                  if ( v67 != v126 && !KiDoesThreadDominateRescheduleContextEntry(v126, CurrentThread, 2u, 0LL) )
                  {
                    v100 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v136);
                    v101 = v100->AllCompareThreadStateFlags;
                    v102 = (v101 >> 1) & 1;
                    v103 = v100->Prcb;
                    if ( (v101 & 0x20) == 0 )
                      v100->___u5[0] |= 1u;
                    v100->___u5[0] &= ~2u;
                    v100->CompareThread = v103->IdleThread;
                    v100->AllCompareThreadStateFlags = v101 & 0xC0 | 5;
                    v100->NewThread = v103->IdleThread;
                    *((_BYTE *)&v100->0 + 1) &= ~1u;
                    if ( v102 )
                    {
                      for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
                      {
                        v130 = (unsigned __int8 *)StaticRescheduleContext->ProcessorEntries + 32 * k + 8 * k;
                        if ( v130 != (unsigned __int8 *)v100 )
                        {
                          v131 = *(_QWORD *)v130;
                          v132 = v130[32];
                          if ( (v132 & 0x20) == 0 )
                            v130[34] |= 1u;
                          v130[34] &= ~2u;
                          *((_QWORD *)v130 + 2) = *(_QWORD *)(v131 + 24);
                          v130[32] = v132 & 0xC0 | 5;
                          *((_QWORD *)v130 + 3) = *(_QWORD *)(v131 + 24);
                          v130[33] &= ~1u;
                        }
                      }
                      v121 = v102 == 0;
                      goto LABEL_228;
                    }
                    goto LABEL_189;
                  }
                }
              }
              v69 = v67->Prcb;
              v70 = v67->Prcb->CurrentThread;
              v67->CompareThread = v70;
              v71 = v67->AllCompareThreadStateFlags & 0xFE | (v70 == v69->IdleThread);
              v67->AllCompareThreadStateFlags = v71;
              v67->AllCompareThreadStateFlags = (v71 & 0xFD ^ (2 * ((*((_DWORD *)&v70->0 + 1) & 2) != 0))) & 0xC3 | 4;
              v67->NewThread = 0LL;
              *((_BYTE *)&v67->0 + 1) &= ~1u;
              v67->___u5[0] |= 1u;
              if ( ((*((_BYTE *)&v65->MiscFlags + 4) | *((_BYTE *)&CurrentThread->MiscFlags + 4)) & 2) != 0 )
              {
                for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
                {
                  v73 = (unsigned __int8 *)StaticRescheduleContext->ProcessorEntries + 32 * m + 8 * m;
                  if ( v67 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)v73 )
                  {
                    v153 = 0LL;
                    v74 = *(_QWORD *)v73;
                    v75 = *((_QWORD *)v73 + 3) - 1LL;
                    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0 )
                    {
                      v76 = *(_QWORD *)(v74 + 36480);
                      if ( v75 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)((__int64 (*)(void))KiIsPrcbThread)() )
                      {
                        if ( (v73[33] & 1) != 0 )
                          *(_DWORD *)(v128 + 116) |= 2u;
                        *(_BYTE *)(v128 + 565) = 1;
                        KiInsertDeferredReadyList(&v153, v128);
                      }
                      *((_QWORD *)v73 + 2) = CurrentThread;
                      v122 = v73[32] & 0xFE;
                      v73[32] = v122;
                      v78 = (v122 & 0xFD ^ (2 * ((*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0))) & 0xC3 | 0x24;
                      v123 = (v122 & 0xFD ^ (2 * ((*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
                      if ( CurrentThread == (_KTHREAD *)v76 )
                        v78 = v123;
                    }
                    else
                    {
                      v76 = *(_QWORD *)(v74 + 24);
                      if ( v75 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)((__int64 (*)(void))KiIsPrcbThread)() )
                      {
                        if ( (v73[33] & 1) != 0 )
                          *(_DWORD *)(v129 + 116) |= 2u;
                        *(_BYTE *)(v129 + 565) = 1;
                        KiInsertDeferredReadyList(&v153, v129);
                      }
                      *((_QWORD *)v73 + 2) = v76;
                      v77 = v73[32] | 1;
                      v73[32] = v77;
                      v78 = (v77 & 0xFD ^ (2 * ((*(_DWORD *)(v76 + 120) & 2) != 0))) & 0xC3 | 4;
                    }
                    v73[32] = v78;
                    *((_QWORD *)v73 + 3) = v76;
                    v73[33] &= ~1u;
                    if ( !(unsigned __int8)KiIsPrcbThread(v76) )
                      *(_DWORD *)(v124 + 536) = *(_DWORD *)(v74 + 36);
                  }
                }
              }
              StaticRescheduleContext->MaximumThreadIsolationWidth = (*((_DWORD *)&CurrentThread->0 + 1) >> 1) & 1;
            }
LABEL_189:
            KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
            v104 = 0;
            v105 = 0;
            if ( (WORD2(xmmword_140FC5B10) & 0x400) != 0 )
              v104 = 2;
            v106 = 0;
            if ( StaticRescheduleContext->ProcessorCount )
            {
              v107 = v136;
              do
              {
                v105 |= KiCommitRescheduleContextEntry(
                          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                                + 32 * v106
                                                                + 8 * v106),
                          v107,
                          v104,
                          &v146);
                ++v106;
              }
              while ( v106 < StaticRescheduleContext->ProcessorCount );
              v61 = IsrDpcStats;
            }
            if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
            {
              CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
              v109 = CoreControlBlock->ScanStartIndex + 1;
              CoreControlBlock->ScanStartIndex = v109;
              if ( v109 >= CoreControlBlock->ProcessorCount )
                CoreControlBlock->ScanStartIndex = 0;
            }
            v110 = v61 & 0xFFFFFFFFFFFFFFFEuLL;
            v168 = v61 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v61 & 1) != 0 )
            {
              v111 = (unsigned __int64 *)(*(_QWORD *)(v110 + 36440) + 8LL);
              v112 = **(unsigned __int8 **)(v110 + 36440);
            }
            else
            {
              v111 = &v168;
              v112 = 1;
            }
            while ( v112 )
              _InterlockedAnd64((volatile signed __int64 *)(v111[--v112] + 48), 0LL);
            v61 = 0LL;
            v154 = 0LL;
            if ( v105 )
            {
              v81 = 0;
              if ( StaticRescheduleContext->ProcessorCount )
              {
                v87 = v136;
                while ( 1 )
                {
                  v88 = StaticRescheduleContext->ProcessorEntries[v81].Prcb;
                  v89 = StaticRescheduleContext->ProcessorEntries[v81].___u6[0];
                  if ( (v89 & 0x10) == 0 && ((v89 & 8) == 0 || !v88->IdleHalt) )
                    goto LABEL_123;
                  TargetType = a1->DeferredDispatchInterrupts.TargetType;
                  if ( TargetType )
                  {
                    if ( TargetType != 1 )
                    {
                      p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                      goto LABEL_151;
                    }
                    SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                    if ( (_DWORD)SingleTargetIndex != v88->Number )
                    {
                      a1->DeferredDispatchInterrupts.TargetType = 2;
                      p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                      KeAddProcessorAffinityEx(
                        &a1->DeferredDispatchInterrupts.MultipleTargetAffinity,
                        SingleTargetIndex);
LABEL_151:
                      KeAddGroupAffinityEx(p_MultipleTargetAffinity);
                    }
                  }
                  else
                  {
                    a1->DeferredDispatchInterrupts.TargetType = 1;
                    a1->DeferredDispatchInterrupts.SingleTargetIndex = v88->Number;
                  }
LABEL_123:
                  if ( (StaticRescheduleContext->ProcessorEntries[v81].___u6[0] & 2) != 0 )
                    EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[v81].NewThread, v88, 0LL);
                  if ( (StaticRescheduleContext->ProcessorEntries[v81].___u6[0] & 4) != 0 )
                  {
                    v80 = (int *)v88->SchedulerAssist;
                    if ( v80 )
                    {
                      if ( v87->SchedulerAssist )
                      {
                        if ( v87 != v88 )
                        {
                          v92 = *v80;
                          v93 = *v80 & 0x40000;
                          if ( (v92 & 0x100000) != 0
                            || v93 && (unsigned __int8)v92 < StaticRescheduleContext->ProcessorEntries[v81].KickPriority )
                          {
                            v94 = v87->SchedulerAssist;
                            v94[3] = 2;
                            Number = v88->Number;
                            if ( !HvlpVirtualProcessorsIdentityMapped )
                              LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)Number
                                                                                           + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                            v94[2] = Number;
                            if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                              EtwTraceXSchedulerPriorityKickSend(v88->Number, 2LL);
                            __writemsr(0x400000C2u, (unsigned int)Number);
                          }
                        }
                      }
                    }
                  }
                  if ( (StaticRescheduleContext->ProcessorEntries[v81].___u6[0] & 1) != 0 )
                    _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v81].NewThread->KeReferenceCount);
                  if ( ++v81 >= (unsigned int)StaticRescheduleContext->ProcessorCount )
                  {
                    v61 = v154;
                    break;
                  }
                }
              }
              v82 = v136;
              KiFlushSoftwareInterruptBatch(&v136->DeferredDispatchInterrupts);
            }
            else
            {
              v82 = v136;
            }
            if ( v146.Next )
              KiReadyDeferredReadyList(v82, &v146);
          }
          if ( v61 )
          {
            v83 = v61 & 0xFFFFFFFFFFFFFFFEuLL;
            v169 = v61 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v61 & 1) != 0 )
            {
              v84 = (unsigned __int64 *)(*(_QWORD *)(v83 + 36440) + 8LL);
              v85 = **(unsigned __int8 **)(v83 + 36440);
            }
            else
            {
              v84 = &v169;
              v85 = 1;
            }
            while ( v85 )
              _InterlockedAnd64((volatile signed __int64 *)(v84[--v85] + 48), 0LL);
          }
          _disable();
        }
        return 1;
      }
    }
    Next = v10->DpcList.ListHead.Next;
    v15 = v10->DpcList.ListHead.Next->Next;
    v10->DpcList.ListHead.Next = v15;
    if ( !v15 )
      v10->DpcList.LastEntry = &v10->DpcList.ListHead;
    v16 = (struct _KDPC *)&Next[-1];
    *(struct _SINGLE_LIST_ENTRY *)&BugCheckParameter3[1] = Next[2];
    DeferredContext = Next[3].Next;
    v17 = Next[4].Next;
    SystemArgument2 = Next[5].Next;
    v18 = Next[6].Next;
    v145 = v18;
    v149 = (unsigned __int64)v18;
    Next[6].Next = 0LL;
    --*v162;
    v7->ActiveDpc = (_KDPC *volatile)&Next[-1];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&v7->DpcLock, 0LL);
    else
      KiReleaseSpinLockInstrumented(&v7->DpcLock, retaddr);
    v19 = KeGetCurrentPrcb();
    v20 = (signed __int32 *)v19->SchedulerAssist;
    if ( v20 )
    {
      _m_prefetchw(v20);
      v96 = *v20;
      do
      {
        v97 = v96;
        v96 = _InterlockedCompareExchange(v20, v96 & 0xFFDFFFFF, v96);
      }
      while ( v97 != v96 );
      if ( (v96 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      *(_QWORD *)&v170 = *(_QWORD *)&BugCheckParameter3[1];
      *((_QWORD *)&v170 + 1) = 0x7E35C6C7F3DD7277LL
                             * (KiWaitNever ^ __ROR8__(
                                                *(_QWORD *)&BugCheckParameter3[1] ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)v16),
                                                KiWaitNever));
      v178[0] = &v170;
      v178[1] = 16LL;
      EtwTraceKernelEvent((int)v178, 1, 0x20040000u, 3941, 5245442);
    }
    if ( v152 )
    {
      v140 = 0;
      v21 = 0;
      if ( qword_140FCED00 )
      {
        v22 = *(_DWORD *)(qword_140FCED00 + 4248);
        v121 = !_BitScanForward((unsigned int *)&v23, v22);
        v140 = v23;
        if ( !v121 )
        {
          do
          {
            v22 &= v22 - 1;
            v24 = qword_140FCED00 + 32 * v23 + 4284;
            if ( v24 && (*(_DWORD *)(v24 + 4) & 0x80u) != 0 )
              v21 |= 1 << *(_BYTE *)(qword_140FCED00 + 2 * v23 + 4233);
            v121 = !_BitScanForward((unsigned int *)&v23, v22);
          }
          while ( !v121 );
          v140 = v23;
          v18 = v145;
        }
      }
      else
      {
        LOBYTE(v21) = 30;
      }
      if ( (v21 & 2) != 0 )
        *(LARGE_INTEGER *)&v176 = KeQueryPerformanceCounter(0LL);
      else
        *(_QWORD *)&v176 = 0LL;
      if ( (v21 & 4) != 0 )
        *((LARGE_INTEGER *)&v176 + 1) = RtlGetSystemTimePrecise();
      else
        *((_QWORD *)&v176 + 1) = 0LL;
      if ( (v21 & 8) != 0 )
        *(_QWORD *)&v177 = __rdtsc();
      else
        *(_QWORD *)&v177 = 0LL;
      if ( (v21 & 0x10) != 0 )
        *((_QWORD *)&v177 + 1) = EtwpGetHostPerfCounter();
      else
        *((_QWORD *)&v177 + 1) = 0LL;
    }
    BugCheckParameter3[0] = *(_DWORD *)(v143 + 484);
    v147 = BugCheckParameter3[0];
    v134 = *(_BYTE *)(v143 + 562);
    v135 = v134;
    v25 = v158;
    v26 = (*v158)++ & 0xF;
    v27 = &v25[4 * v26 + 4 + 2 * (unsigned int)v26];
    v160 = v27;
    *v27 = *(_QWORD *)&BugCheckParameter3[1];
    v27[1] = MEMORY[0xFFFFF78000000320];
    v27[2] = 0LL;
    v156 = (unsigned __int64)v27;
    v28 = v136;
    v136->DpcTimeCount = 0;
    v29 = __rdtsc();
    v157 = v29;
    *p_IsrDpcStats = v18;
    if ( v18 != (struct _SINGLE_LIST_ENTRY *)1 )
      v18[4].Next = (struct _SINGLE_LIST_ENTRY *)v29;
    v30 = *(KDEFERRED_ROUTINE **)&BugCheckParameter3[1];
    if ( !v137 )
    {
      v28->CurrentDpcRoutine = *(void (__fastcall **)(_KDPC *, void *, void *, void *))&BugCheckParameter3[1];
      v28->CurrentDpcStartTime = v29;
      v28->DpcRoutineActive = 1;
    }
    if ( v30 == KiAbDeferredProcessingWorker )
    {
      v139 = 0LL;
      do
      {
        v31 = v17 + 4655;
        while ( 1 )
        {
          v32 = v17[4654].Next;
          if ( !v32 )
            break;
          v17[4654].Next = v32->Next;
          v33 = (volatile signed __int16 *)&v32[-102];
          v32->Next = (struct _SINGLE_LIST_ENTRY *)1;
          _InterlockedOr(v133, 0);
          v31 = v17 + 4655;
          if ( BYTE1(v32[-3].Next) )
            KiAbProcessThreadLocks((_DWORD)v32 - 816, 2, (unsigned int)&v139, (_DWORD)v17 + 37240, 0LL);
          _InterlockedDecrement16(v33 + 434);
        }
        KiAbPropagateBoosts(v31, (__int64)&v17[4654], (int)&v139);
      }
      while ( v17[4654].Next );
      v17[4660].Next = 0LL;
      v34 = 0;
      v141 = 0;
      v35 = v139;
      if ( v139 )
      {
        v139 = (_QWORD *)*v139;
        while ( v35 )
        {
          KiDeferredReadySingleThread(v17, v35 - 27, &v139, 0LL);
          v141 = ++v34;
          v35 = v139;
          if ( v139 )
            v139 = (_QWORD *)*v139;
          if ( (v34 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(&v17[1723]);
        }
      }
      v36 = BYTE1(v17[1723].Next);
      if ( v36 )
      {
        if ( v36 == 1 )
        {
          v37 = (char)v17[1723].Next;
          Next_high = HIDWORD(v17[1723].Next);
          v39 = KeGetCurrentPrcb();
          ++v39->SynchCounters.IpiSendSoftwareInterruptCount;
          v171 = 0LL;
          v172 = 0;
          LODWORD(v171) = 6;
          DWORD2(v171) = Next_high;
          v40 = 31LL;
          if ( v37 != 1 )
            v40 = 47LL;
          HalpInterruptSendIpi(&v171, v40);
        }
        else
        {
          KiSendSoftwareInterruptAffinity((unsigned __int16 *)&v17[1724], (char)v17[1723].Next);
        }
        if ( BYTE1(v17[1723].Next) == 2 )
        {
          v17[1724].Next = (struct _SINGLE_LIST_ENTRY *)2097153;
          memset_0(&v17[1725], 0, 0x100uLL);
        }
        BYTE1(v17[1723].Next) = 0;
        HIDWORD(v17[1723].Next) = 0xFFFF;
      }
    }
    else if ( (char *)v30 == (char *)KiSwapDirectoryTableBaseTarget )
    {
      KiSwapDirectoryTableBaseTarget(v16, DeferredContext, v17, SystemArgument2);
    }
    else if ( v30 == PpmPerfAction )
    {
      PpmPerfAction(v16, DeferredContext, v17, SystemArgument2);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v16, DeferredContext);
    }
    v41 = v137;
    v42 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v42) << 32;
    v43 = v42;
    v5 = v136;
    if ( !v41 )
    {
      v136->DpcRoutineActive = 0;
      DpcLog = v5->DpcLog;
      if ( DpcLog )
      {
        a2 = 3LL * v5->DpcLogIndex;
        DpcLog[a2] = *(_QWORD *)&BugCheckParameter3[1];
        DpcLog[a2 + 1] = v29;
        DpcLog[a2 + 2] = v42;
        if ( ++v5->DpcLogIndex >= 0x20 )
          v5->DpcLogIndex = 0;
      }
      v45 = v42 - v29;
      DpcRuntimeHistoryHashTable = v5->DpcRuntimeHistoryHashTable;
      if ( DpcRuntimeHistoryHashTable )
      {
        v47 = *((_DWORD *)DpcRuntimeHistoryHashTable + 1);
        v48 = -1LL << (*((_BYTE *)DpcRuntimeHistoryHashTable + 4) & 0x1F);
        v49 = *(_QWORD *)&BugCheckParameter3[1] & v48;
        v156 = (*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v48) >> 32;
        v157 = (*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v48) >> 24;
        v149 = (*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v48) >> 16;
        v50 = v47 >> 5;
        if ( v50 )
        {
          v174 = *(_QWORD *)&BugCheckParameter3[1] & v48;
          v51 = (unsigned __int64 *)&DpcRuntimeHistoryHashTable->Buckets[(((*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v48) >> 56)
                                                                        + 37
                                                                        * ((unsigned __int8)((*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v48) >> 48)
                                                                         + 37
                                                                         * ((unsigned __int8)((unsigned __int16)((*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v48) >> 32) >> 8)
                                                                          + 37
                                                                          * ((unsigned __int8)v156
                                                                           + 37
                                                                           * ((unsigned __int8)v157
                                                                            + 37
                                                                            * ((unsigned __int8)v149
                                                                             + 37
                                                                             * ((unsigned __int8)((unsigned __int16)(LOWORD(BugCheckParameter3[1]) & v48) >> 8)
                                                                              + 37
                                                                              * ((unsigned int)(unsigned __int8)v49
                                                                               + 11623883)))))))) & (v50 - 1)];
          while ( 1 )
          {
            a2 = *v51;
            v51 = (unsigned __int64 *)a2;
            if ( (a2 & 1) != 0 )
              break;
            if ( v49 == (v48 & *(_QWORD *)(a2 + 8)) )
            {
              *(_QWORD *)(a2 + 16) = (*(_QWORD *)(a2 + 16) >> 2) + ((3 * v45) >> 2);
              *(_BYTE *)(a2 + 24) = 1;
              goto LABEL_84;
            }
          }
        }
        KiInsertNewDpcRuntime(DpcRuntimeHistoryHashTable, *(_QWORD *)&BugCheckParameter3[1], v45);
LABEL_84:
        v5 = v136;
        v18 = v145;
      }
      v5->CurrentDpcRoutine = 0LL;
      v5->CurrentDpcRuntimeHistoryCached = -1LL;
      v5->CurrentDpcStartTime = 0LL;
      v41 = v137;
    }
    if ( v18 != (struct _SINGLE_LIST_ENTRY *)1 )
    {
      v52 = v43 - (unsigned __int64)v18[4].Next;
      v18[3].Next = (struct _SINGLE_LIST_ENTRY *)((char *)v18[3].Next + v52);
      ++v18[5].Next;
      v18[10].Next = (struct _SINGLE_LIST_ENTRY *)((char *)v18[10].Next + v52);
      ++v18[11].Next;
    }
    v160[2] = MEMORY[0xFFFFF78000000320];
    v4 = (_KTHREAD *)v143;
    if ( BugCheckParameter3[0] != *(_DWORD *)(v143 + 484) )
      KeBugCheckEx(
        0xC7u,
        4uLL,
        *(ULONG_PTR *)&BugCheckParameter3[1],
        BugCheckParameter3[0],
        *(unsigned int *)(v143 + 484));
    if ( v134 != *(_BYTE *)(v143 + 562) )
      KeBugCheckEx(0x1F9u, *(ULONG_PTR *)&BugCheckParameter3[1], *(char *)(v143 + 562), 4uLL, 0LL);
    v53 = (volatile signed __int32 *)v5->SchedulerAssist;
    if ( v53 && !v41 )
      _InterlockedDecrement(v53 + 7);
    if ( v152 )
    {
      v54 = *((_DWORD *)v152 + 1);
      v55 = *(_WORD *)v152;
      v179[2] = &BugCheckParameter3[1];
      v179[3] = 8LL;
      v56 = *(_DWORD *)(EtwpHostSiloState + 4248);
      v121 = !_BitScanForward((unsigned int *)&v57, v56);
      v142 = v57;
      if ( !v121 )
      {
        do
        {
          v56 &= v56 - 1;
          a2 = EtwpHostSiloState;
          v58 = EtwpHostSiloState + 32LL * (unsigned int)v57 + 4284;
          if ( v58 && (*(_DWORD *)(v58 + 4) & 0x80u) != 0 )
          {
            v179[0] = &v175[8 * *(unsigned __int8 *)(EtwpHostSiloState + 2 * v57 + 4233)];
            v179[1] = 8LL;
            EtwpLogKernelEvent(
              (unsigned int)v179,
              EtwpHostSiloState,
              *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v57 + 4232),
              2,
              v55,
              v54);
          }
          v121 = !_BitScanForward((unsigned int *)&v57, v56);
        }
        while ( !v121 );
        v142 = v57;
        v5 = v136;
      }
      v4 = (_KTHREAD *)v143;
    }
    _disable();
    v7 = v161;
    p_DpcQueueDepth = v162;
    a4 = v137;
    v10 = v161;
    if ( !v161->DpcQueueDepth )
      goto LABEL_107;
  }
}
