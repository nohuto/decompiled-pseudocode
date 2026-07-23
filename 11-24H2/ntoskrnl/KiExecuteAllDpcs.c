/*
 * XREFs of KiExecuteAllDpcs @ 0x1402858E0
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x1405C4680 (KiExecuteDpc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1402852DC (KiSendSoftwareInterruptAffinity.c)
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KiAbPropagateBoosts @ 0x140285850 (KiAbPropagateBoosts.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsPrcbThread @ 0x1402A6700 (KiIsPrcbThread.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     EtwTraceScheduleThread @ 0x1402A6768 (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiEnterLongDpcProcessing @ 0x1402A7594 (KiEnterLongDpcProcessing.c)
 *     KiAcquireMultiplePrcbLocks @ 0x1402A7970 (KiAcquireMultiplePrcbLocks.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1402A92A0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     PpmPerfAction @ 0x1402AFC80 (PpmPerfAction.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403BC7F0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403F4770 (KiSwapDirectoryTableBaseTarget.c)
 *     EtwpGetHostPerfCounter @ 0x1403F98CC (EtwpGetHostPerfCounter.c)
 *     KiInsertNewDpcRuntime @ 0x1403F9BD0 (KiInsertNewDpcRuntime.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x140418568 (EtwTraceLongDpcDetectionEvent.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F74FC (EtwTraceXSchedulerPriorityKickSend.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KiExecuteAllDpcs(struct _KPRCB *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  _KTHREAD *v4; // r15
  struct _KPRCB *v5; // r11
  int v7; // esi
  __int64 v8; // r8
  int *p_LockNV; // r14
  __int16 v10; // ax
  _KDPC_DATA *v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  bool v14; // bl
  volatile signed __int32 *v15; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _SINGLE_LIST_ENTRY *v17; // rax
  struct _KDPC *v18; // r15
  struct _SINGLE_LIST_ENTRY *v19; // r14
  struct _SINGLE_LIST_ENTRY *v20; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
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
  __int64 *v54; // rcx
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
  unsigned __int32 *v78; // r8
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
  unsigned __int32 v96; // eax
  __int64 v97; // rdx
  unsigned __int32 v98; // ett
  unsigned __int32 v99; // eax
  __int64 v100; // rdx
  unsigned __int32 v101; // ett
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v102; // rax
  unsigned __int8 v103; // cl
  int v104; // r10d
  _KPRCB *v105; // r9
  char v106; // r9
  unsigned int v107; // r12d
  unsigned int v108; // r14d
  char v109; // bl
  struct _KPRCB *v110; // rdi
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v112; // al
  unsigned __int64 v113; // rcx
  unsigned __int64 *v114; // r8
  int v115; // edx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KTHREAD *v117; // rdx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v118; // r10
  unsigned __int8 AllCompareThreadStateFlags; // cl
  int v120; // r11d
  _KPRCB *Prcb; // r8
  unsigned int i; // r14d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v123; // rcx
  bool v124; // zf
  unsigned __int8 v125; // al
  unsigned __int8 v126; // al
  __int64 v127; // rdx
  __int64 v128; // r10
  __int64 k; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v130; // rcx
  unsigned int m; // r11d
  __int64 v132; // rcx
  __int64 v133; // rcx
  unsigned __int8 *v134; // rdx
  __int64 v135; // r14
  unsigned __int8 v136; // r9
  signed __int32 v137[8]; // [rsp+0h] [rbp-238h] BYREF
  char v138; // [rsp+30h] [rbp-208h]
  char v139; // [rsp+31h] [rbp-207h]
  struct _KPRCB *v140; // [rsp+38h] [rbp-200h]
  unsigned int v141; // [rsp+40h] [rbp-1F8h]
  _DWORD BugCheckParameter3[3]; // [rsp+44h] [rbp-1F4h] BYREF
  _QWORD *v143; // [rsp+50h] [rbp-1E8h] BYREF
  _KTHREAD *v144; // [rsp+58h] [rbp-1E0h]
  __int64 v145; // [rsp+60h] [rbp-1D8h]
  int v146; // [rsp+68h] [rbp-1D0h]
  int v147; // [rsp+6Ch] [rbp-1CCh]
  int v148; // [rsp+74h] [rbp-1C4h]
  __int64 v149; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 v150; // [rsp+80h] [rbp-1B8h]
  PVOID DeferredContext; // [rsp+88h] [rbp-1B0h]
  unsigned __int64 v152; // [rsp+90h] [rbp-1A8h]
  struct _SINGLE_LIST_ENTRY *v153; // [rsp+98h] [rbp-1A0h]
  struct _SINGLE_LIST_ENTRY v154; // [rsp+A0h] [rbp-198h] BYREF
  int v155; // [rsp+A8h] [rbp-190h]
  int v156; // [rsp+B0h] [rbp-188h]
  PVOID SystemArgument2; // [rsp+B8h] [rbp-180h]
  __int64 *v158; // [rsp+C0h] [rbp-178h]
  __int64 v159; // [rsp+C8h] [rbp-170h] BYREF
  __int64 v160; // [rsp+D0h] [rbp-168h] BYREF
  unsigned __int64 v161; // [rsp+D8h] [rbp-160h]
  unsigned __int64 v162; // [rsp+E0h] [rbp-158h]
  __int64 IsrDpcStats; // [rsp+E8h] [rbp-150h]
  struct _KPRCB *v164; // [rsp+F0h] [rbp-148h]
  _QWORD *v165; // [rsp+F8h] [rbp-140h]
  _DWORD *v166; // [rsp+100h] [rbp-138h]
  __int64 v167; // [rsp+110h] [rbp-128h]
  __int64 v168; // [rsp+118h] [rbp-120h]
  _DWORD *v169; // [rsp+120h] [rbp-118h]
  struct _KPRCB *v170; // [rsp+130h] [rbp-108h]
  void **p_IsrDpcStats; // [rsp+148h] [rbp-F0h]
  unsigned __int64 v172; // [rsp+150h] [rbp-E8h] BYREF
  unsigned __int64 v173; // [rsp+158h] [rbp-E0h] BYREF
  __int128 v174; // [rsp+160h] [rbp-D8h] BYREF
  __int128 v175; // [rsp+170h] [rbp-C8h] BYREF
  int v176; // [rsp+180h] [rbp-B8h]
  struct _KPRCB *v177; // [rsp+190h] [rbp-A8h]
  __int64 v178; // [rsp+198h] [rbp-A0h]
  _BYTE v179[8]; // [rsp+1A0h] [rbp-98h] BYREF
  __int128 v180; // [rsp+1A8h] [rbp-90h]
  __int128 v181; // [rsp+1B8h] [rbp-80h]
  _QWORD v182[2]; // [rsp+1C8h] [rbp-70h] BYREF
  _QWORD v183[4]; // [rsp+1D8h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+238h] [rbp+0h]

  v141 = a4;
  v166 = a3;
  v4 = (_KTHREAD *)a2;
  v150 = a2;
  v164 = a1;
  v5 = a1;
  v140 = a1;
  v170 = a1;
  v168 = a2;
  v169 = a3;
  v156 = a4;
  v7 = 0;
  *(_QWORD *)&BugCheckParameter3[1] = 0LL;
  v174 = 0LL;
  v149 = 0LL;
  v180 = 0LL;
  v181 = 0LL;
  v167 = (unsigned int)a4;
  v8 = (__int64)&a1->DpcData[(unsigned int)a4];
  v145 = v8;
  p_LockNV = (int *)(v8 + 24);
  v144 = (_KTHREAD *)(v8 + 24);
  if ( !*(_DWORD *)(v8 + 24) )
    return 1;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v158 = 0LL;
  }
  else
  {
    if ( (_DWORD)a4 )
    {
      v10 = 3906;
      HIDWORD(v149) = 5249026;
    }
    else
    {
      v10 = 3908;
      HIDWORD(v149) = 5245442;
    }
    LOWORD(v149) = v10;
    v158 = &v149;
  }
  p_IsrDpcStats = &a1->IsrDpcStats;
  IsrDpcStats = (__int64)a1->IsrDpcStats;
  v11 = &a1->DpcData[(unsigned int)a4];
  while ( 1 )
  {
    v12 = (unsigned int)*p_LockNV;
    v13 = *(_DWORD *)(v8 + 40);
    LOBYTE(a2) = v13 != 0;
    v14 = !(_DWORD)a4 && (v13 || (unsigned int)v12 >= KiLongDpcQueueThreshold);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      if ( !v14 )
        goto LABEL_13;
      EtwTraceLongDpcDetectionEvent(v12, a2);
      v8 = v145;
      v5 = v140;
    }
    if ( v14 )
    {
      if ( (unsigned __int8)KiEnterLongDpcProcessing(v5) )
        return 0;
      v8 = v145;
    }
LABEL_13:
    v15 = (volatile signed __int32 *)(v8 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( !_interlockedbittestandset64(v15, 0LL) )
        goto LABEL_17;
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v8 + 16), a2, v8, a4);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v8 + 16));
    }
    v8 = v145;
LABEL_17:
    if ( *p_LockNV <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)&v164->14524 + v167, 0xFFEDu);
      *(_DWORD *)(v8 + 40) = 0;
      if ( !*p_LockNV )
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
    v153 = v20;
    v162 = (unsigned __int64)v20;
    Next[6].Next = 0LL;
    --v144->Header.LockNV;
    *(_QWORD *)(v8 + 32) = Next - 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v15, retaddr);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v96 = *SchedulerAssist;
      do
      {
        v97 = v96;
        LODWORD(v97) = v96 & 0xFFDFFFFF;
        v98 = v96;
        v96 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v96 & 0xFFDFFFFF, v96);
      }
      while ( v98 != v96 );
      if ( (v96 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v97, SchedulerAssist, a4);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      *(_QWORD *)&v174 = *(_QWORD *)&BugCheckParameter3[1];
      *((_QWORD *)&v174 + 1) = 0x7E35C6C7F3DD7277LL
                             * (KiWaitNever ^ __ROR8__(
                                                *(_QWORD *)&BugCheckParameter3[1] ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)v18),
                                                KiWaitNever));
      v182[0] = &v174;
      v182[1] = 16LL;
      EtwTraceKernelEvent((int)v182, 1, 0x20040000u, 3941, 5245442);
    }
    if ( v158 )
    {
      v146 = 0;
      v23 = 0;
      if ( qword_140FCFC80 )
      {
        v24 = *(_DWORD *)(qword_140FCFC80 + 4520);
        v124 = !_BitScanForward((unsigned int *)&v25, v24);
        v146 = v25;
        if ( !v124 )
        {
          do
          {
            v24 &= v24 - 1;
            v26 = qword_140FCFC80 + 32 * v25 + 4556;
            if ( v26 && (*(_DWORD *)(v26 + 4) & 0x80u) != 0 )
              v23 |= 1 << *(_BYTE *)(qword_140FCFC80 + 2 * v25 + 4505);
            v124 = !_BitScanForward((unsigned int *)&v25, v24);
          }
          while ( !v124 );
          v146 = v25;
          v20 = v153;
        }
      }
      else
      {
        LOBYTE(v23) = 30;
      }
      if ( (v23 & 2) != 0 )
        *(LARGE_INTEGER *)&v180 = KeQueryPerformanceCounter(0LL);
      else
        *(_QWORD *)&v180 = 0LL;
      if ( (v23 & 4) != 0 )
        *((LARGE_INTEGER *)&v180 + 1) = RtlGetSystemTimePrecise();
      else
        *((_QWORD *)&v180 + 1) = 0LL;
      if ( (v23 & 8) != 0 )
        *(_QWORD *)&v181 = __rdtsc();
      else
        *(_QWORD *)&v181 = 0LL;
      if ( (v23 & 0x10) != 0 )
        *((_QWORD *)&v181 + 1) = EtwpGetHostPerfCounter();
      else
        *((_QWORD *)&v181 + 1) = 0LL;
    }
    BugCheckParameter3[0] = *(_DWORD *)(v150 + 484);
    v155 = BugCheckParameter3[0];
    v139 = *(_BYTE *)(v150 + 562);
    v138 = v139;
    v27 = v166;
    v28 = (*v166)++ & 0xF;
    v29 = &v27[4 * v28 + 4 + 2 * (unsigned int)v28];
    v165 = v29;
    *v29 = *(_QWORD *)&BugCheckParameter3[1];
    v29[1] = MEMORY[0xFFFFF78000000320];
    v29[2] = 0LL;
    v161 = (unsigned __int64)v29;
    v30 = v140;
    v140->DpcTimeCount = 0;
    v31 = __rdtsc();
    v152 = v31;
    *p_IsrDpcStats = v20;
    if ( v20 != (struct _SINGLE_LIST_ENTRY *)1 )
      v20[4].Next = (struct _SINGLE_LIST_ENTRY *)v31;
    v32 = *(KDEFERRED_ROUTINE **)&BugCheckParameter3[1];
    if ( !v141 )
    {
      v30->CurrentDpcRoutine = *(void (__fastcall **)(_KDPC *, void *, void *, void *))&BugCheckParameter3[1];
      v30->CurrentDpcStartTime = v31;
      v30->DpcRoutineActive = 1;
    }
    if ( (char *)v32 == (char *)KiAbDeferredProcessingWorker )
    {
      v143 = 0LL;
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
          _InterlockedOr(v137, 0);
          v33 = v19 + 4655;
          if ( BYTE1(v34[-3].Next) )
            KiAbProcessThreadLocks((__int64)&v34[-102], 2, (__int64)&v143, &v19[4655].Next, 0LL);
          _InterlockedDecrement16(v35 + 434);
        }
        KiAbPropagateBoosts(v33, &v19[4654].Next, (__int64)&v143);
      }
      while ( v19[4654].Next );
      v19[4660].Next = 0LL;
      v36 = 0;
      v147 = 0;
      v37 = v143;
      if ( v143 )
      {
        v143 = (_QWORD *)*v143;
        while ( v37 )
        {
          KiDeferredReadySingleThread(v19, v37 - 27, &v143, 0LL);
          v147 = ++v36;
          v37 = v143;
          if ( v143 )
            v143 = (_QWORD *)*v143;
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
          v175 = 0LL;
          v176 = 0;
          LODWORD(v175) = 6;
          DWORD2(v175) = Next_high;
          v42 = 31LL;
          if ( v39 != 1 )
            v42 = 47LL;
          HalpInterruptSendIpi(&v175, v42);
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
      guard_dispatch_icall_no_overrides(v18, DeferredContext);
    }
    v43 = v141;
    v44 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v44) << 32;
    v45 = v44;
    v5 = v140;
    if ( !v43 )
    {
      v140->DpcRoutineActive = 0;
      DpcLog = v5->DpcLog;
      if ( DpcLog )
      {
        a2 = 3LL * v5->DpcLogIndex;
        DpcLog[a2] = *(_QWORD *)&BugCheckParameter3[1];
        v47 = v152;
        DpcLog[a2 + 1] = v152;
        DpcLog[a2 + 2] = v44;
        if ( ++v5->DpcLogIndex >= 0x20 )
          v5->DpcLogIndex = 0;
      }
      else
      {
        v47 = v152;
      }
      v48 = v44 - v47;
      DpcRuntimeHistoryHashTable = v5->DpcRuntimeHistoryHashTable;
      if ( DpcRuntimeHistoryHashTable )
      {
        v50 = *((_DWORD *)DpcRuntimeHistoryHashTable + 1);
        v51 = -1LL << (*((_BYTE *)DpcRuntimeHistoryHashTable + 4) & 0x1F);
        v52 = *(_QWORD *)&BugCheckParameter3[1] & v51;
        DeferredContext = (PVOID)((*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 40);
        v152 = (*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 32;
        v161 = (*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 24;
        v162 = (*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 16;
        v53 = v50 >> 5;
        if ( v53 )
        {
          v178 = *(_QWORD *)&BugCheckParameter3[1] & v51;
          v54 = (__int64 *)&DpcRuntimeHistoryHashTable->Buckets[(((*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 56)
                                                               + 37
                                                               * ((unsigned __int8)((*(_QWORD *)&BugCheckParameter3[1] & (unsigned __int64)v51) >> 48)
                                                                + 37
                                                                * ((unsigned __int8)DeferredContext
                                                                 + 37
                                                                 * ((unsigned __int8)v152
                                                                  + 37
                                                                  * ((unsigned __int8)v161
                                                                   + 37
                                                                   * ((unsigned __int8)v162
                                                                    + 37
                                                                    * ((unsigned __int8)((unsigned __int16)(LOWORD(BugCheckParameter3[1]) & v51) >> 8)
                                                                     + 37
                                                                     * ((unsigned int)(unsigned __int8)v52 + 11623883)))))))) & (v53 - 1)];
          while ( 1 )
          {
            a2 = *v54;
            v54 = (__int64 *)a2;
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
        v5 = v140;
        v20 = v153;
      }
      v5->CurrentDpcRoutine = 0LL;
      v5->CurrentDpcRuntimeHistoryCached = -1LL;
      v5->CurrentDpcStartTime = 0LL;
      v43 = v141;
    }
    if ( v20 != (struct _SINGLE_LIST_ENTRY *)1 )
    {
      v55 = v45 - (unsigned __int64)v20[4].Next;
      v20[3].Next = (struct _SINGLE_LIST_ENTRY *)((char *)v20[3].Next + v55);
      ++v20[5].Next;
      v20[10].Next = (struct _SINGLE_LIST_ENTRY *)((char *)v20[10].Next + v55);
      ++v20[11].Next;
    }
    v165[2] = MEMORY[0xFFFFF78000000320];
    v4 = (_KTHREAD *)v150;
    if ( BugCheckParameter3[0] != *(_DWORD *)(v150 + 484) )
      KeBugCheckEx(
        0xC7u,
        4uLL,
        *(ULONG_PTR *)&BugCheckParameter3[1],
        BugCheckParameter3[0],
        *(unsigned int *)(v150 + 484));
    if ( v139 != *(_BYTE *)(v150 + 562) )
      KeBugCheckEx(0x1F9u, *(ULONG_PTR *)&BugCheckParameter3[1], *(char *)(v150 + 562), 4uLL, 0LL);
    v71 = (volatile signed __int32 *)v5->SchedulerAssist;
    if ( v71 && !v43 )
      _InterlockedDecrement(v71 + 7);
    if ( v158 )
    {
      v72 = *((_DWORD *)v158 + 1);
      v73 = *(_WORD *)v158;
      v183[2] = &BugCheckParameter3[1];
      v183[3] = 8LL;
      v74 = *(_DWORD *)(EtwpHostSiloState + 4520);
      v124 = !_BitScanForward((unsigned int *)&v75, v74);
      v148 = v75;
      if ( !v124 )
      {
        do
        {
          v74 &= v74 - 1;
          a2 = EtwpHostSiloState;
          v76 = EtwpHostSiloState + 32LL * (unsigned int)v75 + 4556;
          if ( v76 && (*(_DWORD *)(v76 + 4) & 0x80u) != 0 )
          {
            v183[0] = &v179[8 * *(unsigned __int8 *)(EtwpHostSiloState + 2 * v75 + 4505)];
            v183[1] = 8LL;
            EtwpLogKernelEvent(
              (unsigned int)v183,
              EtwpHostSiloState,
              *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v75 + 4504),
              2,
              v73,
              v72);
          }
          v124 = !_BitScanForward((unsigned int *)&v75, v74);
        }
        while ( !v124 );
        v148 = v75;
        v5 = v140;
      }
      v4 = (_KTHREAD *)v150;
    }
    _disable();
    v8 = v145;
    p_LockNV = &v144->Header.LockNV;
    a4 = v141;
    v11 = (_KDPC_DATA *)v145;
    if ( !*(_DWORD *)(v145 + 24) )
      goto LABEL_153;
  }
  KxReleaseSpinLock((volatile signed __int64 *)v15);
  v5 = v140;
LABEL_153:
  v5->IsrDpcStats = (void *)IsrDpcStats;
  if ( (v5->PrcbFlagsReserved & 0x800) == 0 || v4 == v5->DpcDelegateThread )
    return 1;
  v77 = KeGetCurrentPrcb();
  v78 = (unsigned __int32 *)v77->SchedulerAssist;
  if ( v78 )
  {
    _m_prefetchw(v78);
    v99 = *v78;
    do
    {
      v100 = v99;
      LODWORD(v100) = v99 & 0xFFDFFFFF;
      v101 = v99;
      v99 = _InterlockedCompareExchange((volatile signed __int32 *)v78, v99 & 0xFFDFFFFF, v99);
    }
    while ( v101 != v99 );
    if ( (v99 & 0x200000) != 0 )
    {
      KiRemoveSystemWorkPriorityKick(v77, v100, v78, a4);
      v5 = v140;
    }
  }
  _enable();
  v177 = v5;
  v58 = (unsigned __int64)v5 | 1;
  IsrDpcStats = (unsigned __int64)v5 | 1;
  v160 = (unsigned __int64)v5 | 1;
  KiAcquireMultiplePrcbLocks(v5->CoreControlBlock->Prcbs, v5->CoreControlBlock->ProcessorCount, v78, a4);
  v79 = v140;
  v140->PrcbFlagsReserved &= ~0x800u;
  DpcDelegateThread = v79->DpcDelegateThread;
  if ( !DpcDelegateThread || v79->NextThread != DpcDelegateThread )
    goto LABEL_111;
  v154.Next = 0LL;
  StaticRescheduleContext = v79->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v160);
  v144 = v79->DpcDelegateThread;
  v159 = 0LL;
  CurrentThread = v79->CurrentThread;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x1000) != 0 || CurrentThread == v79->SmtIsolationThread )
  {
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v79);
    v118 = RescheduleContextEntryForPrcb;
    AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
    v120 = (AllCompareThreadStateFlags >> 1) & 1;
    Prcb = RescheduleContextEntryForPrcb->Prcb;
    if ( (AllCompareThreadStateFlags & 0x20) == 0 )
      RescheduleContextEntryForPrcb->___u5[0] |= 1u;
    RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
    RescheduleContextEntryForPrcb->CompareThread = Prcb->IdleThread;
    RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
    RescheduleContextEntryForPrcb->NewThread = Prcb->IdleThread;
    *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
    if ( !v120 )
      goto LABEL_191;
    for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
    {
      v123 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i);
      if ( v123 != v118 )
        KiAdjustRescheduleContextEntryForThreadRemoval(v123, v117, 1u, 0);
    }
    v124 = v120 == 0;
LABEL_231:
    if ( !v124 )
      StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    goto LABEL_191;
  }
  v83 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v79);
  v84 = v144;
  if ( (unsigned __int8)(v85 & 2) <= (unsigned __int8)(*(_BYTE *)(&v144->MiscFlags + 1) & 2) )
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
          v159 = 0LL;
          v91 = *(_KTHREAD **)v90;
          v144 = *(_KTHREAD **)v90;
          v92 = *((_QWORD *)v90 + 3) - 1LL;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0 )
          {
            SListFaultAddress = *(_KTHREAD **)&v91[30].Header.Lock;
            if ( v92 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)((__int64 (*)(void))KiIsPrcbThread)() )
            {
              if ( (v90[33] & 1) != 0 )
                *(_DWORD *)(v132 + 116) |= 2u;
              *(_BYTE *)(v132 + 565) = 1;
              KiInsertDeferredReadyList(&v159, v132);
            }
            *((_QWORD *)v90 + 2) = CurrentThread;
            v125 = v90[32] & 0xFE;
            v90[32] = v125;
            v95 = (v125 & 0xFD ^ (2 * ((*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0))) & 0xC3 | 0x24;
            v126 = (v125 & 0xFD ^ (2 * ((*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
            if ( CurrentThread == SListFaultAddress )
              v95 = v126;
          }
          else
          {
            SListFaultAddress = (_KTHREAD *)v91->SListFaultAddress;
            if ( v92 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)((__int64 (*)(void))KiIsPrcbThread)() )
            {
              if ( (v90[33] & 1) != 0 )
                *(_DWORD *)(v133 + 116) |= 2u;
              *(_BYTE *)(v133 + 565) = 1;
              KiInsertDeferredReadyList(&v159, v133);
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
            *(_DWORD *)(v128 + 536) = *(_DWORD *)(v127 + 36);
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
      v84 = v144;
      goto LABEL_161;
    }
    v130 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * k + 8 * k);
    if ( v83 != v130 && !KiDoesThreadDominateRescheduleContextEntry(v130, CurrentThread, 2u, 0LL) )
      break;
  }
  v102 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v140);
  v103 = v102->AllCompareThreadStateFlags;
  v104 = (v103 >> 1) & 1;
  v105 = v102->Prcb;
  if ( (v103 & 0x20) == 0 )
    v102->___u5[0] |= 1u;
  v102->___u5[0] &= ~2u;
  v102->CompareThread = v105->IdleThread;
  v102->AllCompareThreadStateFlags = v103 & 0xC0 | 5;
  v102->NewThread = v105->IdleThread;
  *((_BYTE *)&v102->0 + 1) &= ~1u;
  if ( v104 )
  {
    for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
    {
      v134 = (unsigned __int8 *)StaticRescheduleContext->ProcessorEntries + 32 * m + 8 * m;
      if ( v134 != (unsigned __int8 *)v102 )
      {
        v135 = *(_QWORD *)v134;
        v136 = v134[32];
        if ( (v136 & 0x20) == 0 )
          v134[34] |= 1u;
        v134[34] &= ~2u;
        *((_QWORD *)v134 + 2) = *(_QWORD *)(v135 + 24);
        v134[32] = v136 & 0xC0 | 5;
        *((_QWORD *)v134 + 3) = *(_QWORD *)(v135 + 24);
        v134[33] &= ~1u;
      }
    }
    v124 = v104 == 0;
    goto LABEL_231;
  }
LABEL_191:
  KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
  v106 = 0;
  v107 = 0;
  if ( (WORD2(xmmword_140FC6B50) & 0x400) != 0 )
    v107 = 2;
  v108 = 0;
  if ( StaticRescheduleContext->ProcessorCount )
  {
    v109 = 0;
    v110 = v140;
    do
    {
      v109 |= KiCommitRescheduleContextEntry(
                (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                      + 32 * v108
                                                      + 8 * v108),
                v110,
                v107,
                &v154);
      ++v108;
    }
    while ( v108 < StaticRescheduleContext->ProcessorCount );
    v138 = v109;
    v58 = IsrDpcStats;
    v106 = v138;
  }
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    v112 = CoreControlBlock->ScanStartIndex + 1;
    CoreControlBlock->ScanStartIndex = v112;
    if ( v112 >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  v113 = v58 & 0xFFFFFFFFFFFFFFFEuLL;
  v172 = v58 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v58 & 1) != 0 )
  {
    v114 = (unsigned __int64 *)(*(_QWORD *)(v113 + 36440) + 8LL);
    v115 = **(unsigned __int8 **)(v113 + 36440);
  }
  else
  {
    v114 = &v172;
    v115 = 1;
  }
  while ( v115 )
    _InterlockedAnd64((volatile signed __int64 *)(v114[--v115] + 48), 0LL);
  v58 = 0LL;
  v160 = 0LL;
  if ( v106 )
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
            if ( v140->SchedulerAssist )
            {
              if ( v140 != v64 )
              {
                v67 = *v57;
                v68 = *v57 & 0x40000;
                if ( (v67 & 0x100000) != 0
                  || v68 && (unsigned __int8)v67 < StaticRescheduleContext->ProcessorEntries[v7].KickPriority )
                {
                  v69 = v140->SchedulerAssist;
                  v69[3] = 2;
                  Number = v64->Number;
                  if ( !HvlpVirtualProcessorsIdentityMapped )
                    LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                  v69[2] = Number;
                  if ( (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
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
          v58 = v160;
          break;
        }
      }
    }
    v59 = v140;
    KiFlushSoftwareInterruptBatch(&v140->DeferredDispatchInterrupts);
  }
  else
  {
    v59 = v140;
  }
  if ( v154.Next )
    KiReadyDeferredReadyList(v59, &v154);
LABEL_111:
  if ( v58 )
  {
    v60 = v58 & 0xFFFFFFFFFFFFFFFEuLL;
    v173 = v58 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v58 & 1) != 0 )
    {
      v61 = (unsigned __int64 *)(*(_QWORD *)(v60 + 36440) + 8LL);
      v62 = **(unsigned __int8 **)(v60 + 36440);
    }
    else
    {
      v61 = &v173;
      v62 = 1;
    }
    while ( v62 )
      _InterlockedAnd64((volatile signed __int64 *)(v61[--v62] + 48), 0LL);
  }
  _disable();
  return 1;
}
