/*
 * XREFs of KiExecuteAllDpcs @ 0x1402552D0
 * Callers:
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x1405C6F50 (KiExecuteDpc.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendSoftwareInterruptAffinity @ 0x140254CCC (KiSendSoftwareInterruptAffinity.c)
 *     KiStartRescheduleContext @ 0x140254D50 (KiStartRescheduleContext.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KiAbPropagateBoosts @ 0x140255240 (KiAbPropagateBoosts.c)
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     EtwTraceScheduleThread @ 0x140297C7C (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402986C0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiEnterLongDpcProcessing @ 0x140298AA4 (KiEnterLongDpcProcessing.c)
 *     KiAcquireMultiplePrcbLocks @ 0x140298E80 (KiAcquireMultiplePrcbLocks.c)
 *     KiReadyDeferredReadyList @ 0x140299320 (KiReadyDeferredReadyList.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140299510 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x14029A7B0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140311500 (KiSwapDirectoryTableBaseTarget.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     RtlGetSystemTimePrecise @ 0x14034EB80 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     PpmPerfAction @ 0x140351770 (PpmPerfAction.c)
 *     KiIsPrcbThread @ 0x1403CA0D0 (KiIsPrcbThread.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1403CA100 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiInsertDeferredReadyList @ 0x1403CBE30 (KiInsertDeferredReadyList.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403CBFC0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     EtwpGetHostPerfCounter @ 0x1403FF27C (EtwpGetHostPerfCounter.c)
 *     KiInsertNewDpcRuntime @ 0x1403FF6B0 (KiInsertNewDpcRuntime.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x1404246B8 (EtwTraceLongDpcDetectionEvent.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F9C1C (EtwTraceXSchedulerPriorityKickSend.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall KiExecuteAllDpcs(struct _KPRCB *a1, unsigned __int64 a2, _DWORD *a3, __int64 a4)
{
  _KTHREAD *v4; // r15
  struct _KPRCB *v5; // r11
  int v7; // esi
  _KDPC_DATA *v8; // r8
  volatile int *p_DpcQueueDepth; // r14
  __int16 v10; // ax
  _KDPC_DATA *v11; // r12
  __int64 v12; // rcx
  unsigned int LongDpcPresent; // eax
  bool v14; // bl
  volatile signed __int32 *p_DpcLock; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _SINGLE_LIST_ENTRY *v17; // rax
  struct _KDPC *v18; // r15
  struct _SINGLE_LIST_ENTRY *v19; // r14
  struct _SINGLE_LIST_ENTRY *v20; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v23; // ebx
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  struct _KPRCB *v30; // r8
  unsigned __int64 v31; // rcx
  KDEFERRED_ROUTINE *v32; // rax
  struct _SINGLE_LIST_ENTRY *v33; // r15
  struct _SINGLE_LIST_ENTRY *v34; // rcx
  volatile signed __int16 *v35; // rbx
  int v36; // r15d
  _QWORD *v37; // rbx
  char v38; // al
  char v39; // r8
  int Next_high; // edx
  struct _KPRCB *v41; // rcx
  __int64 v42; // rdx
  unsigned int v43; // r8d
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rbx
  _QWORD *DpcLog; // r8
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r8
  _RTL_HASH_TABLE *DpcRuntimeHistoryHashTable; // r10
  unsigned int v50; // r11d
  __int64 v51; // r14
  __int64 v52; // r9
  unsigned int v53; // r11d
  unsigned __int64 *v54; // rcx
  unsigned __int64 v55; // rbx
  unsigned __int8 TargetType; // al
  int *v57; // rax
  __int64 v58; // rbx
  struct _KPRCB *v59; // rdi
  unsigned __int64 v60; // rcx
  unsigned __int64 *v61; // rsi
  int v62; // edx
  struct _KPRCB *v64; // r14
  unsigned __int8 v65; // al
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r12
  int v67; // edx
  int v68; // eax
  _DWORD *v69; // rcx
  __int64 Number; // r12
  volatile signed __int32 *v71; // rax
  int v72; // r14d
  __int16 v73; // r15
  unsigned int v74; // ebx
  __int64 v75; // rcx
  __int64 v76; // rax
  struct _KPRCB *v77; // rcx
  signed __int32 *v78; // r8
  struct _KPRCB *v79; // r14
  _KTHREAD *DpcDelegateThread; // rax
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r15
  _KTHREAD *CurrentThread; // r12
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v83; // r14
  _KTHREAD *v84; // r9
  char v85; // r8
  _KPRCB *v86; // rax
  _KTHREAD *v87; // rcx
  unsigned __int8 v88; // dl
  unsigned int j; // r11d
  unsigned __int8 *v90; // r9
  _KTHREAD *v91; // rdx
  unsigned __int64 v92; // rax
  _KTHREAD *SListFaultAddress; // r10
  unsigned __int8 v94; // al
  unsigned __int8 v95; // cl
  signed __int32 v96; // eax
  signed __int32 v97; // ett
  signed __int32 v98; // eax
  signed __int32 v99; // ett
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v100; // rax
  unsigned __int8 v101; // cl
  int v102; // r10d
  _KPRCB *v103; // r9
  char v104; // r9
  unsigned int v105; // r12d
  unsigned int v106; // r14d
  char v107; // bl
  struct _KPRCB *v108; // rdi
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v110; // al
  unsigned __int64 v111; // rcx
  unsigned __int64 *v112; // r8
  int v113; // edx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KTHREAD *v115; // rdx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v116; // r10
  unsigned __int8 AllCompareThreadStateFlags; // cl
  int v118; // r11d
  _KPRCB *Prcb; // r8
  unsigned int i; // r14d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v121; // rcx
  bool v122; // zf
  unsigned __int8 v123; // al
  unsigned __int8 v124; // al
  __int64 v125; // rdx
  __int64 v126; // r10
  __int64 k; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v128; // rcx
  unsigned int m; // r11d
  __int64 v130; // rcx
  __int64 v131; // rcx
  unsigned __int8 *v132; // rdx
  __int64 v133; // r14
  unsigned __int8 v134; // r9
  signed __int32 v135[8]; // [rsp+0h] [rbp-238h] BYREF
  char v136; // [rsp+30h] [rbp-208h]
  char v137; // [rsp+31h] [rbp-207h]
  struct _KPRCB *v138; // [rsp+38h] [rbp-200h]
  unsigned int v139; // [rsp+40h] [rbp-1F8h]
  _DWORD BugCheckParameter3[3]; // [rsp+44h] [rbp-1F4h] BYREF
  _QWORD *v141; // [rsp+50h] [rbp-1E8h] BYREF
  _KTHREAD *v142; // [rsp+58h] [rbp-1E0h]
  _KDPC_DATA *v143; // [rsp+60h] [rbp-1D8h]
  int v144; // [rsp+68h] [rbp-1D0h]
  int v145; // [rsp+6Ch] [rbp-1CCh]
  int v146; // [rsp+74h] [rbp-1C4h]
  __int64 v147; // [rsp+78h] [rbp-1C0h] BYREF
  unsigned __int64 v148; // [rsp+80h] [rbp-1B8h]
  PVOID DeferredContext; // [rsp+88h] [rbp-1B0h]
  unsigned __int64 v150; // [rsp+90h] [rbp-1A8h]
  struct _SINGLE_LIST_ENTRY *v151; // [rsp+98h] [rbp-1A0h]
  struct _SINGLE_LIST_ENTRY v152; // [rsp+A0h] [rbp-198h] BYREF
  int v153; // [rsp+A8h] [rbp-190h]
  int v154; // [rsp+B0h] [rbp-188h]
  PVOID SystemArgument2; // [rsp+B8h] [rbp-180h]
  __int64 *v156; // [rsp+C0h] [rbp-178h]
  __int64 v157; // [rsp+C8h] [rbp-170h] BYREF
  __int64 v158; // [rsp+D0h] [rbp-168h] BYREF
  unsigned __int64 v159; // [rsp+D8h] [rbp-160h]
  unsigned __int64 v160; // [rsp+E0h] [rbp-158h]
  __int64 IsrDpcStats; // [rsp+E8h] [rbp-150h]
  struct _KPRCB *v162; // [rsp+F0h] [rbp-148h]
  _QWORD *v163; // [rsp+F8h] [rbp-140h]
  _DWORD *v164; // [rsp+100h] [rbp-138h]
  __int64 v165; // [rsp+110h] [rbp-128h]
  unsigned __int64 v166; // [rsp+118h] [rbp-120h]
  _DWORD *v167; // [rsp+120h] [rbp-118h]
  struct _KPRCB *v168; // [rsp+130h] [rbp-108h]
  void **p_IsrDpcStats; // [rsp+148h] [rbp-F0h]
  unsigned __int64 v170; // [rsp+150h] [rbp-E8h] BYREF
  unsigned __int64 v171; // [rsp+158h] [rbp-E0h] BYREF
  __int128 v172; // [rsp+160h] [rbp-D8h] BYREF
  __int128 v173; // [rsp+170h] [rbp-C8h] BYREF
  int v174; // [rsp+180h] [rbp-B8h]
  struct _KPRCB *v175; // [rsp+190h] [rbp-A8h]
  __int64 v176; // [rsp+198h] [rbp-A0h]
  _BYTE v177[8]; // [rsp+1A0h] [rbp-98h] BYREF
  __int128 v178; // [rsp+1A8h] [rbp-90h]
  __int128 v179; // [rsp+1B8h] [rbp-80h]
  _QWORD v180[2]; // [rsp+1C8h] [rbp-70h] BYREF
  _QWORD v181[4]; // [rsp+1D8h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+238h] [rbp+0h]

  v139 = a4;
  v164 = a3;
  v4 = (_KTHREAD *)a2;
  v148 = a2;
  v162 = a1;
  v5 = a1;
  v138 = a1;
  v168 = a1;
  v166 = a2;
  v167 = a3;
  v154 = a4;
  v7 = 0;
  *(_QWORD *)&BugCheckParameter3[1] = 0LL;
  v172 = 0LL;
  v147 = 0LL;
  v178 = 0LL;
  v179 = 0LL;
  v165 = (unsigned int)a4;
  v8 = &a1->DpcData[(unsigned int)a4];
  v143 = v8;
  p_DpcQueueDepth = &v8->DpcQueueDepth;
  v142 = (_KTHREAD *)&v8->DpcQueueDepth;
  if ( !v8->DpcQueueDepth )
    return 1;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v156 = 0LL;
  }
  else
  {
    if ( (_DWORD)a4 )
    {
      v10 = 3906;
      HIDWORD(v147) = 5249026;
    }
    else
    {
      v10 = 3908;
      HIDWORD(v147) = 5245442;
    }
    LOWORD(v147) = v10;
    v156 = &v147;
  }
  p_IsrDpcStats = &a1->IsrDpcStats;
  IsrDpcStats = (__int64)a1->IsrDpcStats;
  v11 = &a1->DpcData[(unsigned int)a4];
  while ( 1 )
  {
    v12 = *(unsigned int *)p_DpcQueueDepth;
    LongDpcPresent = v8->LongDpcPresent;
    v14 = !(_DWORD)a4 && (LongDpcPresent || (unsigned int)v12 >= KiLongDpcQueueThreshold);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      if ( !v14 )
        goto LABEL_13;
      LOBYTE(a2) = LongDpcPresent != 0;
      EtwTraceLongDpcDetectionEvent(v12, a2);
      v8 = v143;
      v5 = v138;
    }
    if ( v14 )
    {
      if ( (unsigned __int8)KiEnterLongDpcProcessing(v5) )
        return 0;
      v8 = v143;
    }
LABEL_13:
    p_DpcLock = (volatile signed __int32 *)&v8->DpcLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( !_interlockedbittestandset64(p_DpcLock, 0LL) )
        goto LABEL_17;
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v8->DpcLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&v8->DpcLock);
    }
    v8 = v143;
LABEL_17:
    if ( *(int *)p_DpcQueueDepth <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)&v162->14524 + v165, 0xFFEDu);
      v8->LongDpcPresent = 0;
      if ( !*p_DpcQueueDepth )
        break;
    }
    Next = v11->DpcList.ListHead.Next;
    v17 = v11->DpcList.ListHead.Next->Next;
    v11->DpcList.ListHead.Next = v17;
    if ( !v17 )
      v11->DpcList.LastEntry = &v11->DpcList.ListHead;
    v18 = (struct _KDPC *)&Next[-1];
    *(struct _SINGLE_LIST_ENTRY *)&BugCheckParameter3[1] = Next[2];
    DeferredContext = Next[3].Next;
    v19 = Next[4].Next;
    SystemArgument2 = Next[5].Next;
    v20 = Next[6].Next;
    v151 = v20;
    v160 = (unsigned __int64)v20;
    Next[6].Next = 0LL;
    --v142->Header.LockNV;
    v8->ActiveDpc = (_KDPC *volatile)&Next[-1];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)p_DpcLock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)p_DpcLock, retaddr);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v96 = *SchedulerAssist;
      do
      {
        v97 = v96;
        v96 = _InterlockedCompareExchange(SchedulerAssist, v96 & 0xFFDFFFFF, v96);
      }
      while ( v97 != v96 );
      if ( (v96 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      *(_QWORD *)&v172 = *(_QWORD *)&BugCheckParameter3[1];
      *((_QWORD *)&v172 + 1) = 0x7E35C6C7F3DD7277LL
                             * (KiWaitNever ^ __ROR8__(
                                                *(_QWORD *)&BugCheckParameter3[1] ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)v18),
                                                KiWaitNever));
      v180[0] = &v172;
      v180[1] = 16LL;
      EtwTraceKernelEvent((int)v180, 1, 0x20040000u, 3941, 5245442);
    }
    if ( v156 )
    {
      v144 = 0;
      v23 = 0;
      if ( qword_140FCEC80 )
      {
        v24 = *(_DWORD *)(qword_140FCEC80 + 4520);
        v122 = !_BitScanForward((unsigned int *)&v25, v24);
        v144 = v25;
        if ( !v122 )
        {
          do
          {
            v24 &= v24 - 1;
            v26 = qword_140FCEC80 + 32 * v25 + 4556;
            if ( v26 && (*(_DWORD *)(v26 + 4) & 0x80u) != 0 )
              v23 |= 1 << *(_BYTE *)(qword_140FCEC80 + 2 * v25 + 4505);
            v122 = !_BitScanForward((unsigned int *)&v25, v24);
          }
          while ( !v122 );
          v144 = v25;
          v20 = v151;
        }
      }
      else
      {
        LOBYTE(v23) = 30;
      }
      if ( (v23 & 2) != 0 )
        *(LARGE_INTEGER *)&v178 = KeQueryPerformanceCounter(0LL);
      else
        *(_QWORD *)&v178 = 0LL;
      if ( (v23 & 4) != 0 )
        *((_QWORD *)&v178 + 1) = RtlGetSystemTimePrecise();
      else
        *((_QWORD *)&v178 + 1) = 0LL;
      if ( (v23 & 8) != 0 )
        *(_QWORD *)&v179 = __rdtsc();
      else
        *(_QWORD *)&v179 = 0LL;
      if ( (v23 & 0x10) != 0 )
        *((_QWORD *)&v179 + 1) = EtwpGetHostPerfCounter();
      else
        *((_QWORD *)&v179 + 1) = 0LL;
    }
    BugCheckParameter3[0] = *(_DWORD *)(v148 + 484);
    v153 = BugCheckParameter3[0];
    v137 = *(_BYTE *)(v148 + 562);
    v136 = v137;
    v27 = v164;
    v28 = (*v164)++ & 0xF;
    v29 = &v27[4 * v28 + 4 + 2 * (unsigned int)v28];
    v163 = v29;
    *v29 = *(_QWORD *)&BugCheckParameter3[1];
    v29[1] = MEMORY[0xFFFFF78000000320];
    v29[2] = 0LL;
    v159 = (unsigned __int64)v29;
    v30 = v138;
    v138->DpcTimeCount = 0;
    v31 = __rdtsc();
    v150 = v31;
    *p_IsrDpcStats = v20;
    if ( v20 != (struct _SINGLE_LIST_ENTRY *)1 )
      v20[4].Next = (struct _SINGLE_LIST_ENTRY *)v31;
    v32 = *(KDEFERRED_ROUTINE **)&BugCheckParameter3[1];
    if ( !v139 )
    {
      v30->CurrentDpcRoutine = *(void (__fastcall **)(_KDPC *, void *, void *, void *))&BugCheckParameter3[1];
      v30->CurrentDpcStartTime = v31;
      v30->DpcRoutineActive = 1;
    }
    if ( (char *)v32 == (char *)KiAbDeferredProcessingWorker )
    {
      v141 = 0LL;
      do
      {
        v33 = v19 + 4655;
        while ( 1 )
        {
          v34 = v19[4654].Next;
          if ( !v34 )
            break;
          v19[4654].Next = v34->Next;
          v35 = (volatile signed __int16 *)&v34[-102];
          v34->Next = (struct _SINGLE_LIST_ENTRY *)1;
          _InterlockedOr(v135, 0);
          v33 = v19 + 4655;
          if ( BYTE1(v34[-3].Next) )
            KiAbProcessThreadLocks((__int64)&v34[-102], 2, (__int64)&v141, &v19[4655].Next, 0LL);
          _InterlockedDecrement16(v35 + 434);
        }
        KiAbPropagateBoosts(v33, &v19[4654].Next, (__int64)&v141);
      }
      while ( v19[4654].Next );
      v19[4660].Next = 0LL;
      v36 = 0;
      v145 = 0;
      v37 = v141;
      if ( v141 )
      {
        v141 = (_QWORD *)*v141;
        while ( v37 )
        {
          KiDeferredReadySingleThread(v19, v37 - 27, &v141, 0LL);
          v145 = ++v36;
          v37 = v141;
          if ( v141 )
            v141 = (_QWORD *)*v141;
          if ( (v36 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(&v19[1723]);
        }
      }
      v38 = BYTE1(v19[1723].Next);
      if ( v38 )
      {
        if ( v38 == 1 )
        {
          v39 = (char)v19[1723].Next;
          Next_high = HIDWORD(v19[1723].Next);
          v41 = KeGetCurrentPrcb();
          ++v41->SynchCounters.IpiSendSoftwareInterruptCount;
          v173 = 0LL;
          v174 = 0;
          LODWORD(v173) = 6;
          DWORD2(v173) = Next_high;
          v42 = 31LL;
          if ( v39 != 1 )
            v42 = 47LL;
          HalpInterruptSendIpi(&v173, v42);
        }
        else
        {
          KiSendSoftwareInterruptAffinity((unsigned __int16 *)&v19[1724], (char)v19[1723].Next);
        }
        if ( BYTE1(v19[1723].Next) == 2 )
        {
          v19[1724].Next = (struct _SINGLE_LIST_ENTRY *)2097153;
          memset_0(&v19[1725], 0, 0x100uLL);
        }
        BYTE1(v19[1723].Next) = 0;
        HIDWORD(v19[1723].Next) = 0xFFFF;
      }
    }
    else if ( (char *)v32 == (char *)KiSwapDirectoryTableBaseTarget )
    {
      KiSwapDirectoryTableBaseTarget(v18, DeferredContext, v19, SystemArgument2);
    }
    else if ( v32 == PpmPerfAction )
    {
      PpmPerfAction(v18, DeferredContext, v19, SystemArgument2);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v18, DeferredContext, v19, SystemArgument2);
    }
    v43 = v139;
    v44 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v44) << 32;
    v45 = v44;
    v5 = v138;
    if ( !v43 )
    {
      v138->DpcRoutineActive = 0;
      DpcLog = v5->DpcLog;
      if ( DpcLog )
      {
        a2 = 3LL * v5->DpcLogIndex;
        DpcLog[a2] = *(_QWORD *)&BugCheckParameter3[1];
        v47 = v150;
        DpcLog[a2 + 1] = v150;
        DpcLog[a2 + 2] = v44;
        if ( ++v5->DpcLogIndex >= 0x20 )
          v5->DpcLogIndex = 0;
      }
      else
      {
        v47 = v150;
      }
      v48 = v44 - v47;
      DpcRuntimeHistoryHashTable = v5->DpcRuntimeHistoryHashTable;
      if ( DpcRuntimeHistoryHashTable )
      {
        v50 = *((_DWORD *)DpcRuntimeHistoryHashTable + 1);
        v51 = -1LL << (*((_BYTE *)DpcRuntimeHistoryHashTable + 4) & 0x1F);
        v52 = *(_QWORD *)&BugCheckParameter3[1] & v51;
        DeferredContext = (PVOID)((*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 40);
        v150 = (*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 32;
        v159 = (*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 24;
        v160 = (*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 16;
        v53 = v50 >> 5;
        if ( v53 )
        {
          v176 = *(_QWORD *)&BugCheckParameter3[1] & v51;
          v54 = (unsigned __int64 *)&DpcRuntimeHistoryHashTable->Buckets[(((*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 56)
                                                                        + 37
                                                                        * ((unsigned __int8)((*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 48)
                                                                         + 37
                                                                         * ((unsigned __int8)DeferredContext
                                                                          + 37
                                                                          * ((unsigned __int8)v150
                                                                           + 37
                                                                           * ((unsigned __int8)v159
                                                                            + 37
                                                                            * ((unsigned __int8)v160
                                                                             + 37
                                                                             * ((unsigned __int8)((unsigned __int16)(LOWORD(BugCheckParameter3[1]) & v51) >> 8)
                                                                              + 37
                                                                              * ((unsigned int)(unsigned __int8)v52
                                                                               + 11623883)))))))) & (v53 - 1)];
          while ( 1 )
          {
            a2 = *v54;
            v54 = (unsigned __int64 *)a2;
            if ( (a2 & 1) != 0 )
              break;
            if ( v52 == (v51 & *(_QWORD *)(a2 + 8)) )
            {
              *(_QWORD *)(a2 + 16) = (*(_QWORD *)(a2 + 16) >> 2) + ((3 * v48) >> 2);
              *(_BYTE *)(a2 + 24) = 1;
              goto LABEL_85;
            }
          }
        }
        KiInsertNewDpcRuntime(DpcRuntimeHistoryHashTable, *(_QWORD *)&BugCheckParameter3[1], v48);
LABEL_85:
        v5 = v138;
        v20 = v151;
      }
      v5->CurrentDpcRoutine = 0LL;
      v5->CurrentDpcRuntimeHistoryCached = -1LL;
      v5->CurrentDpcStartTime = 0LL;
      v43 = v139;
    }
    if ( v20 != (struct _SINGLE_LIST_ENTRY *)1 )
    {
      v55 = v45 - (unsigned __int64)v20[4].Next;
      v20[3].Next = (struct _SINGLE_LIST_ENTRY *)((char *)v20[3].Next + v55);
      ++v20[5].Next;
      v20[10].Next = (struct _SINGLE_LIST_ENTRY *)((char *)v20[10].Next + v55);
      ++v20[11].Next;
    }
    v163[2] = MEMORY[0xFFFFF78000000320];
    v4 = (_KTHREAD *)v148;
    if ( BugCheckParameter3[0] != *(_DWORD *)(v148 + 484) )
      KeBugCheckEx(
        0xC7u,
        4uLL,
        *(ULONG_PTR *)&BugCheckParameter3[1],
        BugCheckParameter3[0],
        *(unsigned int *)(v148 + 484));
    if ( v137 != *(_BYTE *)(v148 + 562) )
      KeBugCheckEx(0x1F9u, *(ULONG_PTR *)&BugCheckParameter3[1], *(char *)(v148 + 562), 4uLL, 0LL);
    v71 = (volatile signed __int32 *)v5->SchedulerAssist;
    if ( v71 && !v43 )
      _InterlockedDecrement(v71 + 7);
    if ( v156 )
    {
      v72 = *((_DWORD *)v156 + 1);
      v73 = *(_WORD *)v156;
      v181[2] = &BugCheckParameter3[1];
      v181[3] = 8LL;
      v74 = *(_DWORD *)(EtwpHostSiloState + 4520);
      v122 = !_BitScanForward((unsigned int *)&v75, v74);
      v146 = v75;
      if ( !v122 )
      {
        do
        {
          v74 &= v74 - 1;
          a2 = EtwpHostSiloState;
          v76 = EtwpHostSiloState + 32LL * (unsigned int)v75 + 4556;
          if ( v76 && (*(_DWORD *)(v76 + 4) & 0x80u) != 0 )
          {
            v181[0] = &v177[8 * *(unsigned __int8 *)(EtwpHostSiloState + 2 * v75 + 4505)];
            v181[1] = 8LL;
            EtwpLogKernelEvent(
              (unsigned int)v181,
              EtwpHostSiloState,
              *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v75 + 4504),
              2,
              v73,
              v72);
          }
          v122 = !_BitScanForward((unsigned int *)&v75, v74);
        }
        while ( !v122 );
        v146 = v75;
        v5 = v138;
      }
      v4 = (_KTHREAD *)v148;
    }
    _disable();
    v8 = v143;
    p_DpcQueueDepth = &v142->Header.Lock;
    a4 = v139;
    v11 = v143;
    if ( !v143->DpcQueueDepth )
      goto LABEL_153;
  }
  KxReleaseSpinLock(p_DpcLock);
  v5 = v138;
LABEL_153:
  v5->IsrDpcStats = (void *)IsrDpcStats;
  if ( (v5->PrcbFlagsReserved & 0x800) == 0 || v4 == v5->DpcDelegateThread )
    return 1;
  v77 = KeGetCurrentPrcb();
  v78 = (signed __int32 *)v77->SchedulerAssist;
  if ( v78 )
  {
    _m_prefetchw(v78);
    v98 = *v78;
    do
    {
      v99 = v98;
      v98 = _InterlockedCompareExchange(v78, v98 & 0xFFDFFFFF, v98);
    }
    while ( v99 != v98 );
    if ( (v98 & 0x200000) != 0 )
    {
      KiRemoveSystemWorkPriorityKick(v77);
      v5 = v138;
    }
  }
  _enable();
  v175 = v5;
  v58 = (unsigned __int64)v5 | 1;
  IsrDpcStats = (unsigned __int64)v5 | 1;
  v158 = (unsigned __int64)v5 | 1;
  KiAcquireMultiplePrcbLocks(v5->CoreControlBlock->Prcbs, v5->CoreControlBlock->ProcessorCount, v78, a4);
  v79 = v138;
  v138->PrcbFlagsReserved &= ~0x800u;
  DpcDelegateThread = v79->DpcDelegateThread;
  if ( !DpcDelegateThread || v79->NextThread != DpcDelegateThread )
    goto LABEL_111;
  v152.Next = 0LL;
  StaticRescheduleContext = v79->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v158);
  v142 = v79->DpcDelegateThread;
  v157 = 0LL;
  CurrentThread = v79->CurrentThread;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x1000) != 0 || CurrentThread == v79->SmtIsolationThread )
  {
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v79);
    v116 = RescheduleContextEntryForPrcb;
    AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
    v118 = (AllCompareThreadStateFlags >> 1) & 1;
    Prcb = RescheduleContextEntryForPrcb->Prcb;
    if ( (AllCompareThreadStateFlags & 0x20) == 0 )
      RescheduleContextEntryForPrcb->___u5[0] |= 1u;
    RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
    RescheduleContextEntryForPrcb->CompareThread = Prcb->IdleThread;
    RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
    RescheduleContextEntryForPrcb->NewThread = Prcb->IdleThread;
    *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
    if ( !v118 )
      goto LABEL_191;
    for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
    {
      v121 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i);
      if ( v121 != v116 )
        KiAdjustRescheduleContextEntryForThreadRemoval(v121, v115, 1u, 0);
    }
    v122 = v118 == 0;
LABEL_231:
    if ( !v122 )
      StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    goto LABEL_191;
  }
  v83 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v79);
  v84 = v142;
  if ( (unsigned __int8)(v85 & 2) <= (unsigned __int8)(*(_BYTE *)(&v142->MiscFlags + 1) & 2) )
  {
LABEL_161:
    v86 = v83->Prcb;
    v87 = v83->Prcb->CurrentThread;
    v83->CompareThread = v87;
    v88 = v83->AllCompareThreadStateFlags & 0xFE | (v87 == v86->IdleThread);
    v83->AllCompareThreadStateFlags = v88;
    v83->AllCompareThreadStateFlags = (v88 & 0xFD ^ (2 * ((*((_DWORD *)&v87->0 + 1) & 2) != 0))) & 0xC3 | 4;
    v83->NewThread = 0LL;
    *((_BYTE *)&v83->0 + 1) &= ~1u;
    v83->___u5[0] |= 1u;
    if ( ((*((_BYTE *)&v84->MiscFlags + 4) | *((_BYTE *)&CurrentThread->MiscFlags + 4)) & 2) != 0 )
    {
      for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
      {
        v90 = (unsigned __int8 *)StaticRescheduleContext->ProcessorEntries + 32 * j + 8 * j;
        if ( v83 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)v90 )
        {
          v157 = 0LL;
          v91 = *(_KTHREAD **)v90;
          v142 = *(_KTHREAD **)v90;
          v92 = *((_QWORD *)v90 + 3) - 1LL;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0 )
          {
            SListFaultAddress = *(_KTHREAD **)&v91[30].Header.Lock;
            if ( v92 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)((__int64 (*)(void))KiIsPrcbThread)() )
            {
              if ( (v90[33] & 1) != 0 )
                *(_DWORD *)(v130 + 116) |= 2u;
              *(_BYTE *)(v130 + 565) = 1;
              KiInsertDeferredReadyList(&v157, v130);
            }
            *((_QWORD *)v90 + 2) = CurrentThread;
            v123 = v90[32] & 0xFE;
            v90[32] = v123;
            v95 = (v123 & 0xFD ^ (2 * ((*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0))) & 0xC3 | 0x24;
            v124 = (v123 & 0xFD ^ (2 * ((*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
            if ( CurrentThread == SListFaultAddress )
              v95 = v124;
          }
          else
          {
            SListFaultAddress = (_KTHREAD *)v91->SListFaultAddress;
            if ( v92 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)((__int64 (*)(void))KiIsPrcbThread)() )
            {
              if ( (v90[33] & 1) != 0 )
                *(_DWORD *)(v131 + 116) |= 2u;
              *(_BYTE *)(v131 + 565) = 1;
              KiInsertDeferredReadyList(&v157, v131);
            }
            *((_QWORD *)v90 + 2) = SListFaultAddress;
            v94 = v90[32] | 1;
            v90[32] = v94;
            v95 = (v94 & 0xFD ^ (2 * ((*((_DWORD *)&SListFaultAddress->0 + 1) & 2) != 0))) & 0xC3 | 4;
          }
          v90[32] = v95;
          *((_QWORD *)v90 + 3) = SListFaultAddress;
          v90[33] &= ~1u;
          if ( !(unsigned __int8)KiIsPrcbThread(SListFaultAddress) )
            *(_DWORD *)(v126 + 536) = *(_DWORD *)(v125 + 36);
        }
      }
    }
    StaticRescheduleContext->MaximumThreadIsolationWidth = (*((_DWORD *)&CurrentThread->0 + 1) >> 1) & 1;
    goto LABEL_191;
  }
  for ( k = 0LL; ; k = (unsigned int)(BugCheckParameter3[0] + 1) )
  {
    BugCheckParameter3[0] = k;
    if ( (unsigned int)k >= StaticRescheduleContext->ProcessorCount )
    {
      v84 = v142;
      goto LABEL_161;
    }
    v128 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * k + 8 * k);
    if ( v83 != v128 && !KiDoesThreadDominateRescheduleContextEntry(v128, CurrentThread, 2u, 0LL) )
      break;
  }
  v100 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v138);
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
    for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
    {
      v132 = (unsigned __int8 *)StaticRescheduleContext->ProcessorEntries + 32 * m + 8 * m;
      if ( v132 != (unsigned __int8 *)v100 )
      {
        v133 = *(_QWORD *)v132;
        v134 = v132[32];
        if ( (v134 & 0x20) == 0 )
          v132[34] |= 1u;
        v132[34] &= ~2u;
        *((_QWORD *)v132 + 2) = *(_QWORD *)(v133 + 24);
        v132[32] = v134 & 0xC0 | 5;
        *((_QWORD *)v132 + 3) = *(_QWORD *)(v133 + 24);
        v132[33] &= ~1u;
      }
    }
    v122 = v102 == 0;
    goto LABEL_231;
  }
LABEL_191:
  KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
  v104 = 0;
  v105 = 0;
  if ( (WORD2(xmmword_140FC5B10) & 0x400) != 0 )
    v105 = 2;
  v106 = 0;
  if ( StaticRescheduleContext->ProcessorCount )
  {
    v107 = 0;
    v108 = v138;
    do
    {
      v107 |= KiCommitRescheduleContextEntry(
                (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                      + 32 * v106
                                                      + 8 * v106),
                v108,
                v105,
                &v152);
      ++v106;
    }
    while ( v106 < StaticRescheduleContext->ProcessorCount );
    v136 = v107;
    v58 = IsrDpcStats;
    v104 = v136;
  }
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    v110 = CoreControlBlock->ScanStartIndex + 1;
    CoreControlBlock->ScanStartIndex = v110;
    if ( v110 >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  v111 = v58 & 0xFFFFFFFFFFFFFFFEuLL;
  v170 = v58 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v58 & 1) != 0 )
  {
    v112 = (unsigned __int64 *)(*(_QWORD *)(v111 + 36440) + 8LL);
    v113 = **(unsigned __int8 **)(v111 + 36440);
  }
  else
  {
    v112 = &v170;
    v113 = 1;
  }
  while ( v113 )
    _InterlockedAnd64((volatile signed __int64 *)(v112[--v113] + 48), 0LL);
  v58 = 0LL;
  v158 = 0LL;
  if ( v104 )
  {
    if ( StaticRescheduleContext->ProcessorCount )
    {
      while ( 1 )
      {
        v64 = StaticRescheduleContext->ProcessorEntries[v7].Prcb;
        v65 = StaticRescheduleContext->ProcessorEntries[v7].___u6[0];
        if ( (v65 & 0x10) == 0 && ((v65 & 8) == 0 || !v64->IdleHalt) )
          goto LABEL_100;
        TargetType = a1->DeferredDispatchInterrupts.TargetType;
        if ( TargetType )
        {
          if ( TargetType != 1 )
          {
            p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
            goto LABEL_127;
          }
          if ( a1->DeferredDispatchInterrupts.SingleTargetIndex != v64->Number )
          {
            a1->DeferredDispatchInterrupts.TargetType = 2;
            p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
            KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity);
LABEL_127:
            KeAddGroupAffinityEx(p_MultipleTargetAffinity, v64->Group, v64->GroupSetMember);
          }
        }
        else
        {
          a1->DeferredDispatchInterrupts.TargetType = 1;
          a1->DeferredDispatchInterrupts.SingleTargetIndex = v64->Number;
        }
LABEL_100:
        if ( (StaticRescheduleContext->ProcessorEntries[v7].___u6[0] & 2) != 0 )
          EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[v7].NewThread, v64, 0LL);
        if ( (StaticRescheduleContext->ProcessorEntries[v7].___u6[0] & 4) != 0 )
        {
          v57 = (int *)v64->SchedulerAssist;
          if ( v57 )
          {
            if ( v138->SchedulerAssist )
            {
              if ( v138 != v64 )
              {
                v67 = *v57;
                v68 = *v57 & 0x40000;
                if ( (v67 & 0x100000) != 0
                  || v68 && (unsigned __int8)v67 < StaticRescheduleContext->ProcessorEntries[v7].KickPriority )
                {
                  v69 = v138->SchedulerAssist;
                  v69[3] = 2;
                  Number = v64->Number;
                  if ( !HvlpVirtualProcessorsIdentityMapped )
                    LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                  v69[2] = Number;
                  if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                    EtwTraceXSchedulerPriorityKickSend(v64->Number, 2LL);
                  __writemsr(0x400000C2u, (unsigned int)Number);
                }
              }
            }
          }
        }
        if ( (StaticRescheduleContext->ProcessorEntries[v7].___u6[0] & 1) != 0 )
          _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v7].NewThread->KeReferenceCount);
        if ( ++v7 >= (unsigned int)StaticRescheduleContext->ProcessorCount )
        {
          v58 = v158;
          break;
        }
      }
    }
    v59 = v138;
    KiFlushSoftwareInterruptBatch(&v138->DeferredDispatchInterrupts);
  }
  else
  {
    v59 = v138;
  }
  if ( v152.Next )
    KiReadyDeferredReadyList(v59, &v152);
LABEL_111:
  if ( v58 )
  {
    v60 = v58 & 0xFFFFFFFFFFFFFFFEuLL;
    v171 = v58 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v58 & 1) != 0 )
    {
      v61 = (unsigned __int64 *)(*(_QWORD *)(v60 + 36440) + 8LL);
      v62 = **(unsigned __int8 **)(v60 + 36440);
    }
    else
    {
      v61 = &v171;
      v62 = 1;
    }
    while ( v62 )
      _InterlockedAnd64((volatile signed __int64 *)(v61[--v62] + 48), 0LL);
  }
  _disable();
  return 1;
}
