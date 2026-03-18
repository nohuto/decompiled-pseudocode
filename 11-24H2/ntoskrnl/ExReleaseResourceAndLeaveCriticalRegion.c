/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60
 * Callers:
 *     DifExReleaseResourceAndLeaveCriticalRegionWrapper @ 0x140620B40 (DifExReleaseResourceAndLeaveCriticalRegionWrapper.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     ExpFreeOwnerEntry @ 0x14033F7B0 (ExpFreeOwnerEntry.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  OWNER_ENTRY *v1; // r9
  USHORT Flag; // cx
  ULONG_PTR v4; // r14
  unsigned __int8 v5; // r15
  struct _KTHREAD *v6; // r8
  __int64 v7; // rdx
  ULONG v8; // r13d
  ULONG v9; // r13d
  ULONG TableSize; // eax
  ERESOURCE_THREAD v11; // rbx
  char v12; // r14
  KIRQL v13; // r15
  _QWORD *v14; // r13
  signed __int64 v15; // rax
  bool v16; // cc
  signed __int64 v17; // rax
  ERESOURCE_THREAD v18; // r14
  ULONG v19; // ecx
  unsigned __int64 *v20; // rax
  __int64 v21; // rdx
  ULONG v22; // eax
  unsigned __int64 v23; // rbx
  int v24; // r14d
  __int64 v25; // rax
  KSPIN_LOCK *v26; // rcx
  char v27; // bl
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rcx
  struct _KPRCB *v31; // rcx
  signed __int32 *SchedulerAssist; // r8
  bool v33; // r13
  unsigned int v34; // eax
  unsigned __int64 OwnerThread; // r8
  OWNER_ENTRY *p_OwnerEntry; // rdx
  unsigned __int64 v37; // rcx
  POWNER_ENTRY OwnerTable; // rdx
  ULONG v39; // eax
  unsigned __int64 v40; // rbx
  struct _KPRCB *v41; // r15
  struct _KTHREAD *v42; // rcx
  unsigned int v43; // edx
  signed __int64 v44; // r14
  int v45; // r8d
  signed __int64 v46; // rax
  signed __int64 v47; // rbx
  struct _KTHREAD *v48; // rcx
  signed __int64 v49; // rax
  unsigned int m; // ecx
  int v51; // r9d
  ULONG v52; // r13d
  __int64 v53; // rax
  KSPIN_LOCK *v54; // rcx
  char v55; // bl
  __int64 v56; // r8
  __int64 v57; // r10
  __int64 v58; // rcx
  struct _KPRCB *v59; // rcx
  signed __int32 *v60; // r8
  PVOID v61; // rcx
  _QWORD *v62; // rdx
  PVOID *v63; // rax
  struct _KTHREAD *v64; // rax
  unsigned __int64 *v65; // rax
  unsigned __int64 k; // rcx
  _DWORD *v67; // r9
  _QWORD *v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rdx
  _QWORD *v71; // rcx
  _QWORD *v72; // rax
  unsigned int v73; // r14d
  _QWORD *v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  ERESOURCE_THREAD v77; // r14
  ULONG NumberOfSharedWaiters; // ecx
  ULONG v79; // eax
  ULONG v80; // eax
  unsigned __int64 v81; // rbx
  int v82; // r14d
  __int64 v83; // rax
  KSPIN_LOCK *v84; // rdx
  ULONG v85; // eax
  unsigned __int64 v86; // rbx
  struct _KPRCB *v87; // r13
  struct _KTHREAD *v88; // rcx
  unsigned int v89; // r15d
  signed __int64 Object; // r14
  int v91; // r8d
  signed __int64 Pool2; // rax
  struct _KTHREAD *v93; // rcx
  signed __int64 v94; // rax
  unsigned int j; // edx
  int v96; // ecx
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // r9
  ULONG v99; // ecx
  ULONG v100; // r10d
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // r9
  ULONG v103; // ecx
  ULONG v104; // r10d
  char v105; // al
  char v106; // r14
  __int64 v107; // rax
  KSPIN_LOCK *v108; // rdx
  char v109; // al
  char v110; // al
  bool v111; // zf
  struct _KPRCB *v112; // r15
  unsigned __int64 *v113; // rax
  struct _KTHREAD *v114; // rax
  unsigned __int64 *v115; // r13
  unsigned __int64 *i; // rax
  _DWORD *v117; // r9
  _QWORD *v118; // r13
  _QWORD *v119; // rax
  _QWORD *v120; // rdx
  _QWORD *v121; // rax
  _QWORD *v122; // rcx
  char v123; // cl
  char v124; // al
  struct _KPRCB *v125; // r15
  signed __int32 v126; // eax
  signed __int32 v127; // ett
  signed __int32 v128; // eax
  signed __int32 v129; // ett
  unsigned __int64 **v130; // rdx
  PVOID ExclusiveWaiters; // rax
  PVOID *v132; // rcx
  __int128 *v133; // rax
  unsigned __int64 *SharedWaiters; // rax
  __int64 v135; // rax
  ULONG *p_ActiveEntries; // rbx
  struct _KTHREAD *v137; // r14
  unsigned __int8 v138; // si
  char v139; // cl
  volatile signed __int64 *v140; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v143; // rcx
  __int64 **v144; // r14
  __int64 *v145; // rcx
  __int64 **v146; // r14
  __int64 *v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rax
  signed __int32 v150[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v151; // [rsp+38h] [rbp-D0h]
  _DWORD *v152; // [rsp+40h] [rbp-C8h]
  _DWORD *v153; // [rsp+48h] [rbp-C0h]
  __int16 Group; // [rsp+50h] [rbp-B8h]
  ULONG ContentionCount; // [rsp+54h] [rbp-B4h]
  __int64 v156; // [rsp+58h] [rbp-B0h] BYREF
  KSPIN_LOCK *p_SpinLock; // [rsp+60h] [rbp-A8h]
  __int64 v158; // [rsp+68h] [rbp-A0h]
  _QWORD *v159; // [rsp+70h] [rbp-98h]
  unsigned __int64 v160; // [rsp+78h] [rbp-90h]
  struct _KPRCB *CurrentPrcb; // [rsp+80h] [rbp-88h]
  struct _KTHREAD *v162; // [rsp+88h] [rbp-80h]
  unsigned __int64 *v163; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v164; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v165; // [rsp+A0h] [rbp-68h]
  __int128 v166; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v167; // [rsp+B8h] [rbp-50h]
  __int128 v168; // [rsp+C8h] [rbp-40h]
  __int128 v169; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v170; // [rsp+E8h] [rbp-20h]
  __int128 v171; // [rsp+F8h] [rbp-10h]
  _QWORD v172[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 retaddr; // [rsp+150h] [rbp+48h]

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    v137 = KeGetCurrentThread();
    v138 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v138, 2LL);
    if ( ((__int64)Resource->SystemResourcesList.Flink & 1) != 0 && Resource->Reserved2 == v137 )
    {
      p_ActiveEntries = &Resource->ActiveEntries;
LABEL_290:
      if ( p_ActiveEntries )
      {
        v105 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v105 & 2) != 0 )
        {
          v106 = 0;
        }
        else
        {
          v106 = 1;
          *((_BYTE *)p_ActiveEntries + 37) = v105 & 0xFE;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v138);
        __writecr8(v138);
        ExReleaseFastResource((ULONG_PTR)Resource, (ULONG_PTR)p_ActiveEntries);
        if ( v106 )
          ExFreePoolWithTag(p_ActiveEntries, 0);
        goto LABEL_203;
      }
    }
    else
    {
      for ( p_ActiveEntries = (ULONG *)v137[1].WaitBlock[3].SparePtr;
            p_ActiveEntries != (ULONG *)&v137[1].LastXStateSaveDebugInfo;
            p_ActiveEntries = *(ULONG **)p_ActiveEntries )
      {
        v139 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v139 & 2) == 0 && *((PERESOURCE *)p_ActiveEntries + 3) == Resource && (v139 & 1) != 0 )
          goto LABEL_290;
      }
    }
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)v137, 0LL, 0LL);
  }
  v4 = (ULONG_PTR)KeGetCurrentThread();
  v158 = 0LL;
  v156 = 0LL;
  p_SpinLock = &Resource->SpinLock;
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v158 )
    KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
  LOBYTE(v158) = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&v156) )
      KxWaitForLockOwnerShip(&v156);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v156, &Resource->SpinLock);
  }
  v6 = KeGetCurrentThread();
  v7 = Resource->Flag;
  if ( ((v7 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v4 & 3) != 3 && (struct _KTHREAD *)v4 != v6 )
    KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v6, v4, 0LL);
  if ( (v7 & 0x80u) == 0LL )
  {
    v164 = 0LL;
    v33 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    LOBYTE(v151) = v33;
    if ( (v4 & 3) != 0 )
      v34 = 0;
    else
      v34 = *(unsigned __int8 *)(v4 + 1120);
    OwnerThread = Resource->OwnerEntry.OwnerThread;
    p_OwnerEntry = &Resource->OwnerEntry;
    if ( OwnerThread == v4 )
      goto LABEL_132;
    v37 = Resource->OwnerEntry.OwnerThread != 0;
    if ( v34 )
    {
      OwnerThread = (unsigned __int64)Resource->OwnerTable;
      if ( OwnerThread )
      {
        if ( v34 < *(_DWORD *)(OwnerThread + 8) )
        {
          p_OwnerEntry = (OWNER_ENTRY *)(OwnerThread + 16LL * v34);
          if ( p_OwnerEntry->OwnerThread == v4 )
            goto LABEL_132;
        }
      }
    }
    OwnerTable = Resource->OwnerTable;
    OwnerThread = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
    if ( OwnerTable )
    {
      v1 = &OwnerTable[OwnerTable->TableSize];
      p_OwnerEntry = OwnerTable + 1;
      if ( v37 < OwnerThread )
      {
        while ( p_OwnerEntry->OwnerThread != v4 )
        {
          if ( !p_OwnerEntry->OwnerThread || (++v37, v37 != OwnerThread) )
          {
            if ( ++p_OwnerEntry != v1 )
              continue;
          }
          goto LABEL_114;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                    - LODWORD(Resource->OwnerTable)) >> 4;
LABEL_132:
        v73 = p_OwnerEntry->TableSize & 7 | (8 * (p_OwnerEntry->TableSize >> 3) - 8);
        p_OwnerEntry->TableSize = v73;
        LODWORD(v153) = v73 >> 3;
        if ( !(v73 >> 3) )
        {
          ExpFreeOwnerEntry(p_OwnerEntry);
          v16 = Resource->ActiveEntries <= 1;
          v77 = 0LL;
          ContentionCount = Resource->ContentionCount;
          if ( v16 )
          {
            if ( Resource->NumberOfExclusiveWaiters )
            {
              ExclusiveWaiters = Resource->ExclusiveWaiters;
              if ( ExclusiveWaiters )
              {
                if ( *(PVOID *)ExclusiveWaiters == ExclusiveWaiters )
                {
                  Resource->ExclusiveWaiters = 0LL;
                }
                else
                {
                  Resource->ExclusiveWaiters = *(PVOID *)ExclusiveWaiters;
                  v74 = *(_QWORD **)ExclusiveWaiters;
                  v132 = (PVOID *)*((_QWORD *)ExclusiveWaiters + 1);
                  if ( *(PVOID *)(*(_QWORD *)ExclusiveWaiters + 8LL) != ExclusiveWaiters || *v132 != ExclusiveWaiters )
                    goto LABEL_127;
                  *v132 = v74;
                  v74[1] = v132;
                }
                v77 = *((_QWORD *)ExclusiveWaiters + 2);
                *((_QWORD *)ExclusiveWaiters + 1) = ExclusiveWaiters;
                *(_QWORD *)ExclusiveWaiters = ExclusiveWaiters;
                v164 = (unsigned __int64 *)ExclusiveWaiters;
              }
              --Resource->NumberOfExclusiveWaiters;
              Resource->Flag |= 0x80u;
              NumberOfSharedWaiters = 1;
            }
            else
            {
              NumberOfSharedWaiters = Resource->NumberOfSharedWaiters;
              if ( !NumberOfSharedWaiters )
                goto LABEL_136;
              SharedWaiters = (unsigned __int64 *)Resource->SharedWaiters;
              Resource->SharedWaiters = 0LL;
              v164 = SharedWaiters;
              Resource->NumberOfSharedWaiters = 0;
            }
LABEL_137:
            v79 = Resource->ActiveEntries - 1;
            Resource->ActiveEntries = v79 + NumberOfSharedWaiters;
            if ( !(v79 + NumberOfSharedWaiters) )
              Resource->ActiveCount = 0;
            if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
              Resource->Flag &= 0xF9u;
            LODWORD(v159) = Resource->WaiterPriority;
            if ( v77 )
            {
              v80 = Resource->OwnerEntry.TableSize & 7;
              Resource->OwnerEntry.OwnerThread = v77;
              Resource->OwnerEntry.TableSize = v80 | 8;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
            {
              KiReleaseQueuedSpinLockInstrumented(&v156, retaddr, v75, v76);
LABEL_147:
              v81 = (unsigned __int8)v158;
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v158);
              __writecr8(v81);
              if ( v164 )
              {
                v114 = (struct _KTHREAD *)KeGetCurrentIrql();
                v162 = v114;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v114, 2LL);
                v115 = v164;
                CurrentPrcb = KeGetCurrentPrcb();
                for ( i = (unsigned __int64 *)*v164; ; i = (unsigned __int64 *)*v165 )
                {
                  v165 = i;
                  v160 = (unsigned __int64)v115;
                  v152 = v115 + 3;
                  KiAcquireKobjectLockSafe(v115 + 3);
                  v117 = v115 + 3;
                  *((_DWORD *)v115 + 7) = 1;
                  v118 = (_QWORD *)v115[4];
                  v119 = v117 + 2;
                  v153 = v117 + 2;
                  while ( v118 != v119 )
                  {
                    v120 = (_QWORD *)*v118;
                    v121 = v118;
                    v118 = v120;
                    v122 = (_QWORD *)v121[1];
                    if ( (_QWORD *)v120[1] != v121 || (_QWORD *)*v122 != v121 )
                      goto LABEL_127;
                    *v122 = v120;
                    v120[1] = v122;
                    v123 = *((_BYTE *)v121 + 16);
                    if ( v123 == 1 )
                    {
                      v124 = KiTryUnwaitThread(CurrentPrcb, v121, *((unsigned __int16 *)v121 + 9), 0LL);
                      v117 = v152;
                      v111 = v124 == 0;
                      v119 = v153;
                      if ( !v111 )
                      {
                        v111 = v152[1]-- == 1;
                        if ( v111 )
                          break;
                      }
                    }
                    else if ( v123 == 2 )
                    {
                      *((_BYTE *)v121 + 17) = 5;
                      KiInsertQueueInternal(v121[3], v121);
                      v117 = v152;
                      v111 = v152[1]-- == 1;
                      if ( v111 )
                        break;
                      v119 = v153;
                    }
                    else
                    {
                      if ( v123 == 4 )
                      {
                        *((_BYTE *)v121 + 17) = 5;
                        v117[1] = 0;
                        KeInsertQueueDpc((PRKDPC)v121[3], v117, v121);
                      }
                      else
                      {
                        KiTryUnwaitThread(CurrentPrcb, v121, 256LL, 0LL);
                      }
                      v119 = v153;
                      v117 = v152;
                    }
                  }
                  _InterlockedAnd((volatile signed __int32 *)(v160 + 24), 0xFFFFFF7F);
                  if ( v165 == v164 )
                    break;
                  v115 = v165;
                }
                v125 = CurrentPrcb;
                KiRemoveBoostThread(CurrentPrcb);
                KiExitDispatcher(v125, (char)v162);
                v33 = v151;
              }
              v82 = 65602;
              LODWORD(v153) = 0;
              LODWORD(v152) = 65602;
LABEL_162:
              __incgsdword(0x9070u);
              if ( !v33 )
                goto LABEL_203;
              v169 = 0LL;
              v170 = 0LL;
              v171 = 0LL;
              v87 = KeGetCurrentPrcb();
              v160 = __rdtsc();
              ++v87->SynchCounters.ExEtwSynchTrackingNotificationsCount;
              Group = v87->Group;
              LOBYTE(v151) = v87->GroupIndex;
              if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
                goto LABEL_203;
              v88 = KeGetCurrentThread();
              v89 = v82 & 0xFFFF0000;
              v162 = v88;
              if ( (*(_DWORD *)(&v88[1].SwapListEntry + 1) & 1) != 0 )
                goto LABEL_203;
              Object = (signed __int64)v88[1].WaitBlock[0].Object;
              v91 = EtwpEthreadSyncTrackingSequence;
              LODWORD(v159) = EtwpEthreadSyncTrackingSequence;
              if ( !Object )
              {
                Pool2 = ExAllocatePool2(0x48uLL);
                v47 = Pool2;
                if ( !Pool2 )
                  goto LABEL_203;
                v93 = v162;
                *(_QWORD *)(Pool2 + 16) = Resource;
                *(_DWORD *)(Pool2 + 28) = v89;
                *(_DWORD *)(Pool2 + 32) = 0;
                *(_DWORD *)(Pool2 + 40) = (_DWORD)v159;
                Object = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v93[1].WaitBlock[0].Object,
                           Pool2,
                           0LL);
                if ( !Object )
                {
LABEL_181:
                  if ( !*(_DWORD *)(v47 + 32) )
                    goto LABEL_196;
                  ++v87->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
                  if ( *(_DWORD *)(v47 + 36) < (unsigned int)((_DWORD)v153 + 1) )
                    *(_DWORD *)(v47 + 36) = (_DWORD)v153 + 1;
                  if ( (_DWORD)v152 == 65602 )
                  {
                    v97 = *(_QWORD *)(v47 + 8);
                    if ( v97 > 2 && *(_WORD *)(v47 + 24) == Group && *(_BYTE *)(v47 + 26) == (_BYTE)v151 )
                      v98 = v160 - v97;
                    else
                      v98 = 0LL;
                    if ( *(_QWORD *)v47 <= 1uLL
                      || (v87->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                        + v87->SynchCounters.ExecutiveResourceReleaseSharedCount)
                       % EtwpExecutiveResourceContentionSampleRate )
                    {
                      v99 = *(_DWORD *)(v47 + 44);
                      v100 = ContentionCount;
                      if ( (ContentionCount <= v99 || (ContentionCount - v99)
                                                    % EtwpExecutiveResourceContentionSampleRate)
                        && (v87->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                          + v87->SynchCounters.ExecutiveResourceReleaseSharedCount)
                         % EtwpExecutiveResourceReleaseSampleRate )
                      {
                        goto LABEL_196;
                      }
                    }
                    else
                    {
                      v100 = ContentionCount;
                    }
                    DWORD2(v171) = 65602;
                    *(_QWORD *)&v171 = Resource;
                    *(_QWORD *)&v169 = *(_QWORD *)(v47 + 8);
                    DWORD2(v170) = *(_DWORD *)(v47 + 36);
                    *((_QWORD *)&v169 + 1) = v98;
                    *(_QWORD *)&v170 = *(_QWORD *)v47;
                    HIDWORD(v171) = v100 - *(_DWORD *)(v47 + 44);
                    v133 = &v169;
                    HIDWORD(v170) = KeGetCurrentThread()[1].CurrentRunTime;
LABEL_259:
                    v172[0] = v133;
                    v172[1] = 48LL;
                    EtwTraceKernelEvent((int)v172, 1, 0x20020000u, 1323, 23074818);
                    goto LABEL_196;
                  }
                  if ( (_DWORD)v152 == 65618 )
                    *(_DWORD *)(v47 + 32) = 2;
                  goto LABEL_203;
                }
                ExFreePoolWithTag((PVOID)Pool2, 0);
                v91 = (int)v159;
              }
              v94 = 0LL;
              for ( j = 0; j < 8; ++j )
              {
                v96 = *(_DWORD *)(Object + 28);
                if ( v96 == v89 && *(PERESOURCE *)(Object + 16) == Resource && *(_DWORD *)(Object + 40) == v91 )
                  goto LABEL_180;
                if ( !v94 )
                {
                  if ( v96 )
                  {
                    if ( *(_DWORD *)(Object + 40) < v91 )
                    {
                      v94 = Object;
                      break;
                    }
                  }
                  else
                  {
                    v94 = Object;
                  }
                }
                Object += 64LL;
              }
              Object = v94;
              if ( v94 )
              {
                *(_QWORD *)(v94 + 16) = Resource;
                *(_DWORD *)(v94 + 28) = v89;
                *(_QWORD *)(v94 + 32) = 0LL;
                *(_QWORD *)v94 = 0LL;
                *(_QWORD *)(v94 + 8) = 0LL;
                *(_DWORD *)(v94 + 24) = 0;
                *(_DWORD *)(v94 + 40) = v91;
                *(_DWORD *)(v94 + 44) = 0;
              }
LABEL_180:
              v47 = Object;
              if ( !Object )
                goto LABEL_203;
              goto LABEL_181;
            }
            _m_prefetchw(&v156);
            v83 = v156;
            if ( !v156 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)p_SpinLock,
                                0LL,
                                (signed __int64)&v156) == &v156 )
                goto LABEL_147;
              v83 = KxWaitForLockChainValid(&v156, v74, v75, v76);
            }
            v156 = 0LL;
            v84 = p_SpinLock;
            if ( (((unsigned __int8)v84 ^ (unsigned __int8)_InterlockedExchange64(
                                                             (volatile __int64 *)(v83 + 8),
                                                             (__int64)p_SpinLock)) & 4) != 0 )
              KeWakeAddressAll(v83 + 8, v84, v75, v76);
            goto LABEL_147;
          }
LABEL_136:
          NumberOfSharedWaiters = 0;
          goto LABEL_137;
        }
        v82 = 65618;
        v85 = Resource->ContentionCount;
        LODWORD(v152) = 65618;
        ContentionCount = v85;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v156, retaddr, OwnerThread, v1);
LABEL_159:
          v86 = (unsigned __int8)v158;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v158);
          __writecr8(v86);
          goto LABEL_162;
        }
        _m_prefetchw(&v156);
        v107 = v156;
        if ( !v156 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)p_SpinLock,
                            0LL,
                            (signed __int64)&v156) == &v156 )
            goto LABEL_159;
          v107 = KxWaitForLockChainValid(&v156, p_OwnerEntry, OwnerThread, v1);
        }
        v156 = 0LL;
        v108 = p_SpinLock;
        if ( (((unsigned __int8)v108 ^ (unsigned __int8)_InterlockedExchange64(
                                                          (volatile __int64 *)(v107 + 8),
                                                          (__int64)p_SpinLock)) & 4) != 0 )
          KeWakeAddressAll(v107 + 8, v108, OwnerThread, v1);
        goto LABEL_159;
      }
LABEL_114:
      OwnerTable = Resource->OwnerTable;
    }
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)OwnerTable, 2uLL);
  }
  v163 = 0LL;
  LOBYTE(v151) = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((v7 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && Resource->OwnerEntry.OwnerThread != v4 )
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)Resource->OwnerTable, 1uLL);
  v8 = Resource->OwnerEntry.TableSize & 7 | (8 * (Resource->OwnerEntry.TableSize >> 3) - 8);
  Resource->OwnerEntry.TableSize = v8;
  v9 = v8 >> 3;
  if ( !v9 )
  {
    TableSize = Resource->OwnerEntry.TableSize;
    v11 = Resource->OwnerEntry.OwnerThread;
    if ( (TableSize & 2) != 0 )
    {
      v11 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v11 & 3) != 0 )
    {
      goto LABEL_31;
    }
    if ( v11 )
    {
      if ( (TableSize & 1) == 0 )
      {
LABEL_24:
        if ( (TableSize & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v11 + 1508));
          TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFB;
          Resource->OwnerEntry.TableSize = TableSize;
        }
        if ( (TableSize & 2) != 0 )
        {
          if ( ObpTraceFlags )
            ObpPushStackInfo(v11 - 48);
          v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 48), 0xFFFFFFFFFFFFFFFFuLL);
          v16 = v15 <= 1;
          v17 = v15 - 1;
          if ( v16 )
          {
            if ( *(_QWORD *)(v11 - 40) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v11 - 48) >> 8)],
                v11,
                3uLL,
                *(_QWORD *)(v11 - 40));
            if ( v17 < 0 )
              KeBugCheckEx(0x18u, 0LL, v11, 4uLL, v17);
            ObpDeferObjectDeletion(v11 - 48);
          }
          Resource->OwnerEntry.TableSize &= ~2u;
        }
        goto LABEL_31;
      }
      v12 = 0;
      v13 = 0;
      v14 = 0LL;
      if ( PspAlwaysTrackIoBoosting )
      {
        v12 = 1;
        v135 = ExAllocatePool2(0x40uLL);
        v14 = (_QWORD *)v135;
        if ( v135 )
        {
          RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v135 + 16), 0LL);
          v14[12] = KeGetCurrentThread();
          v14[13] = 0LL;
        }
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 1552));
      }
      if ( *(_DWORD *)(v11 + 1504) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v11 + 1504));
        if ( !v12 )
        {
LABEL_23:
          TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFE;
          Resource->OwnerEntry.TableSize = TableSize;
          goto LABEL_24;
        }
        if ( *(_DWORD *)(v11 + 1504) )
        {
          if ( v14 )
          {
            v143 = *(_QWORD **)(v11 + 1544);
            if ( *v143 != v11 + 1536 )
              goto LABEL_127;
            *v14 = v11 + 1536;
            v14[1] = v143;
            *v143 = v14;
            *(_QWORD *)(v11 + 1544) = v14;
          }
        }
        else
        {
          if ( v14 )
            ExFreePoolWithTag(v14, 0x736F6F42u);
          v144 = (__int64 **)(v11 + 1520);
          while ( 1 )
          {
            v145 = *v144;
            if ( *v144 == (__int64 *)v144 )
              break;
            v149 = *v145;
            if ( (__int64 **)v145[1] != v144 || *(__int64 **)(v149 + 8) != v145 )
              goto LABEL_127;
            *v144 = (__int64 *)v149;
            *(_QWORD *)(v149 + 8) = v144;
            ExFreePoolWithTag(v145, 0x736F6F42u);
          }
          v146 = (__int64 **)(v11 + 1536);
          while ( 1 )
          {
            v147 = *v146;
            if ( *v146 == (__int64 *)v146 )
              break;
            v148 = *v147;
            if ( (__int64 **)v147[1] != v146 || *(__int64 **)(v148 + 8) != v147 )
              goto LABEL_127;
            *v146 = (__int64 *)v148;
            *(_QWORD *)(v148 + 8) = v146;
            ExFreePoolWithTag(v147, 0x736F6F42u);
          }
        }
      }
      else if ( !v12 )
      {
        goto LABEL_23;
      }
      v140 = (volatile signed __int64 *)(v11 + 1552);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64(v140, 0LL);
      else
        KiReleaseSpinLockInstrumented(v140, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      __writecr8(v13);
      goto LABEL_23;
    }
LABEL_31:
    Resource->OwnerEntry.OwnerThread = 0LL;
    v18 = 0LL;
    v19 = Resource->NumberOfSharedWaiters;
    ContentionCount = Resource->ContentionCount;
    if ( v19 )
    {
      v20 = (unsigned __int64 *)Resource->SharedWaiters;
      Resource->SharedWaiters = 0LL;
      Resource->Flag &= ~0x80u;
      v163 = v20;
      Resource->NumberOfSharedWaiters = 0;
LABEL_33:
      v21 = v19 + Resource->ActiveEntries - 1;
LABEL_34:
      Resource->ActiveEntries = v21;
      if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
        Resource->Flag &= 0xF9u;
      if ( v18 )
      {
        v22 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = v18;
        Resource->OwnerEntry.TableSize = v22 | 8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(&v156, retaddr, v6, v1);
LABEL_42:
        v23 = (unsigned __int8)v158;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v158);
        __writecr8(v23);
        if ( v163 )
        {
          v64 = (struct _KTHREAD *)KeGetCurrentIrql();
          v162 = v64;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v64, 2LL);
          CurrentPrcb = KeGetCurrentPrcb();
          v65 = v163;
          for ( k = *v163; ; k = *(_QWORD *)v160 )
          {
            v165 = v65;
            v160 = k;
            v152 = v65 + 3;
            KiAcquireKobjectLockSafe(v65 + 3);
            v67 = v165 + 3;
            *((_DWORD *)v165 + 7) = 1;
            v68 = (_QWORD *)*((_QWORD *)v67 + 1);
            v69 = v67 + 2;
            v153 = v67 + 2;
            while ( v68 != v69 )
            {
              v70 = *v68;
              v71 = v68;
              v72 = (_QWORD *)v68[1];
              v159 = (_QWORD *)v70;
              if ( *(_QWORD **)(v70 + 8) != v71 || (_QWORD *)*v72 != v71 )
                goto LABEL_127;
              *v72 = v70;
              *(_QWORD *)(v70 + 8) = v72;
              v109 = *((_BYTE *)v71 + 16);
              if ( v109 == 1 )
              {
                v110 = KiTryUnwaitThread(CurrentPrcb, v71, *((unsigned __int16 *)v71 + 9), 0LL);
                v69 = v153;
                v111 = v110 == 0;
                v68 = v159;
                v67 = v152;
                if ( !v111 )
                {
                  v111 = v152[1]-- == 1;
                  if ( v111 )
                    break;
                }
              }
              else if ( v109 == 2 )
              {
                *((_BYTE *)v71 + 17) = 5;
                KiInsertQueueInternal(v71[3], v71);
                v67 = v152;
                v111 = v152[1]-- == 1;
                if ( v111 )
                  break;
                v68 = v159;
                v69 = v153;
              }
              else
              {
                if ( v109 == 4 )
                {
                  *((_BYTE *)v71 + 17) = 5;
                  v67[1] = 0;
                  KeInsertQueueDpc((PRKDPC)v71[3], v67, v71);
                }
                else
                {
                  KiTryUnwaitThread(CurrentPrcb, v71, 256LL, 0LL);
                }
                v68 = v159;
                v69 = v153;
                v67 = v152;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v165 + 6, 0xFFFFFF7F);
            if ( (unsigned __int64 *)v160 == v163 )
              break;
            v65 = (unsigned __int64 *)v160;
          }
          v112 = CurrentPrcb;
          KiRemoveBoostThread(CurrentPrcb);
          KiExitDispatcher(v112, (char)v162);
        }
        v24 = 65570;
        v9 = 0;
        LODWORD(v159) = 65570;
        goto LABEL_69;
      }
      _m_prefetchw(&v156);
      v25 = v156;
      if ( !v156 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v156) == &v156 )
          goto LABEL_42;
        v25 = KxWaitForLockChainValid(&v156, v21, v6, v1);
      }
      v156 = 0LL;
      v26 = p_SpinLock;
      if ( (((unsigned __int8)v26 ^ (unsigned __int8)_InterlockedExchange64(
                                                       (volatile __int64 *)(v25 + 8),
                                                       (__int64)p_SpinLock)) & 4) != 0 )
      {
        _InterlockedOr(v150, 0);
        v27 = KeDisableInterrupts(v26, v21, ((unsigned __int64)(v25 + 8) >> 5) & 0x7F);
        KiHaltOnAddressWakeEntireList(v30, _InterlockedExchange64((volatile __int64 *)(v29 + 8 * v28 + 15863072), 0LL));
        if ( v27 )
        {
          v31 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v31->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v128 = *SchedulerAssist;
            do
            {
              v129 = v128;
              v128 = _InterlockedCompareExchange(SchedulerAssist, v128 & 0xFFDFFFFF, v128);
            }
            while ( v129 != v128 );
            if ( (v128 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
          _enable();
        }
      }
      goto LABEL_42;
    }
    if ( !Resource->NumberOfExclusiveWaiters )
    {
      Resource->ActiveCount = 0;
      Resource->Flag &= ~0x80u;
      v21 = 0LL;
      goto LABEL_34;
    }
    v61 = Resource->ExclusiveWaiters;
    if ( !v61 )
    {
LABEL_220:
      --Resource->NumberOfExclusiveWaiters;
      v19 = 1;
      goto LABEL_33;
    }
    if ( *(PVOID *)v61 == v61 )
    {
      Resource->ExclusiveWaiters = 0LL;
    }
    else
    {
      Resource->ExclusiveWaiters = *(PVOID *)v61;
      v62 = *(_QWORD **)v61;
      v63 = (PVOID *)*((_QWORD *)v61 + 1);
      if ( *(PVOID *)(*(_QWORD *)v61 + 8LL) != v61 || *v63 != v61 )
        goto LABEL_127;
      *v63 = v62;
      v62[1] = v63;
    }
    v113 = v163;
    v18 = *((_QWORD *)v61 + 2);
    if ( !v163 )
    {
      *((_QWORD *)v61 + 1) = v61;
      *(_QWORD *)v61 = v61;
      v163 = (unsigned __int64 *)v61;
      goto LABEL_220;
    }
    v130 = (unsigned __int64 **)v163[1];
    if ( *v130 == v163 )
    {
      *(_QWORD *)v61 = v163;
      *((_QWORD *)v61 + 1) = v130;
      *v130 = (unsigned __int64 *)v61;
      v113[1] = (unsigned __int64)v61;
      --Resource->NumberOfExclusiveWaiters;
      v163 = (unsigned __int64 *)v61;
      v19 = 1;
      goto LABEL_33;
    }
LABEL_127:
    __fastfail(3u);
  }
  v24 = 65586;
  v39 = Resource->ContentionCount;
  LODWORD(v159) = 65586;
  ContentionCount = v39;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v156);
    v53 = v156;
    if ( !v156 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v156) == &v156 )
        goto LABEL_66;
      v53 = KxWaitForLockChainValid(&v156, v7, v6, v1);
    }
    v156 = 0LL;
    v54 = p_SpinLock;
    if ( (((unsigned __int8)v54 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v53 + 8),
                                                     (__int64)p_SpinLock)) & 4) != 0 )
    {
      _InterlockedOr(v150, 0);
      v55 = KeDisableInterrupts(v54, v7, ((unsigned __int64)(v53 + 8) >> 5) & 0x7F);
      KiHaltOnAddressWakeEntireList(v58, _InterlockedExchange64((volatile __int64 *)(v57 + 8 * v56 + 15863072), 0LL));
      if ( v55 )
      {
        v59 = KeGetCurrentPrcb();
        v60 = (signed __int32 *)v59->SchedulerAssist;
        if ( v60 )
        {
          _m_prefetchw(v60);
          v126 = *v60;
          do
          {
            v127 = v126;
            v126 = _InterlockedCompareExchange(v60, v126 & 0xFFDFFFFF, v126);
          }
          while ( v127 != v126 );
          if ( (v126 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
        _enable();
      }
    }
    goto LABEL_66;
  }
  KiReleaseQueuedSpinLockInstrumented(&v156, retaddr, v6, v1);
LABEL_66:
  v40 = (unsigned __int8)v158;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v158);
  __writecr8(v40);
LABEL_69:
  __incgsdword(0x906Cu);
  if ( !(_BYTE)v151 )
    goto LABEL_203;
  v166 = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v41 = KeGetCurrentPrcb();
  v160 = __rdtsc();
  ++v41->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  Group = v41->Group;
  LOBYTE(v151) = v41->GroupIndex;
  if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
    goto LABEL_203;
  v42 = KeGetCurrentThread();
  v43 = v24 & 0xFFFF0000;
  v162 = v42;
  LODWORD(v152) = v24 & 0xFFFF0000;
  if ( (*(_DWORD *)(&v42[1].SwapListEntry + 1) & 1) != 0 )
    goto LABEL_203;
  v44 = (signed __int64)v42[1].WaitBlock[0].Object;
  v45 = EtwpEthreadSyncTrackingSequence;
  LODWORD(v153) = EtwpEthreadSyncTrackingSequence;
  if ( !v44 )
  {
    v46 = ExAllocatePool2(0x48uLL);
    v47 = v46;
    if ( !v46 )
      goto LABEL_203;
    v48 = v162;
    *(_QWORD *)(v46 + 16) = Resource;
    *(_DWORD *)(v46 + 28) = (_DWORD)v152;
    *(_DWORD *)(v46 + 40) = (_DWORD)v153;
    *(_DWORD *)(v46 + 32) = 0;
    v44 = _InterlockedCompareExchange64((volatile signed __int64 *)&v48[1].WaitBlock[0].Object, v46, 0LL);
    if ( !v44 )
    {
LABEL_88:
      if ( *(_DWORD *)(v47 + 32) )
      {
        ++v41->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
        v52 = v9 + 1;
        if ( *(_DWORD *)(v47 + 36) < v52 )
          *(_DWORD *)(v47 + 36) = v52;
        if ( (_DWORD)v159 != 65570 )
        {
          if ( (_DWORD)v159 == 65586 )
            *(_DWORD *)(v47 + 32) = 2;
          goto LABEL_203;
        }
        v101 = *(_QWORD *)(v47 + 8);
        if ( v101 > 2 && *(_WORD *)(v47 + 24) == Group && *(_BYTE *)(v47 + 26) == (_BYTE)v151 )
          v102 = v160 - v101;
        else
          v102 = 0LL;
        if ( *(_QWORD *)v47 <= 1uLL
          || (v41->SynchCounters.ExecutiveResourceReleaseExclusiveCount
            + v41->SynchCounters.ExecutiveResourceReleaseSharedCount)
           % EtwpExecutiveResourceContentionSampleRate )
        {
          v103 = *(_DWORD *)(v47 + 44);
          v104 = ContentionCount;
          if ( (ContentionCount <= v103 || (ContentionCount - v103) % EtwpExecutiveResourceContentionSampleRate)
            && (v41->SynchCounters.ExecutiveResourceReleaseExclusiveCount
              + v41->SynchCounters.ExecutiveResourceReleaseSharedCount)
             % EtwpExecutiveResourceReleaseSampleRate )
          {
            goto LABEL_196;
          }
        }
        else
        {
          v104 = ContentionCount;
        }
        DWORD2(v168) = 65570;
        *(_QWORD *)&v168 = Resource;
        *(_QWORD *)&v166 = *(_QWORD *)(v47 + 8);
        DWORD2(v167) = *(_DWORD *)(v47 + 36);
        *((_QWORD *)&v166 + 1) = v102;
        *(_QWORD *)&v167 = *(_QWORD *)v47;
        HIDWORD(v168) = v104 - *(_DWORD *)(v47 + 44);
        v133 = &v166;
        HIDWORD(v167) = KeGetCurrentThread()[1].CurrentRunTime;
        goto LABEL_259;
      }
LABEL_196:
      *(_DWORD *)(v47 + 28) = 0;
      goto LABEL_203;
    }
    ExFreePoolWithTag((PVOID)v46, 0);
    v43 = (unsigned int)v152;
    v45 = (int)v153;
  }
  v49 = 0LL;
  for ( m = 0; m < 8; ++m )
  {
    v51 = *(_DWORD *)(v44 + 28);
    if ( v51 == v43 && *(PERESOURCE *)(v44 + 16) == Resource && *(_DWORD *)(v44 + 40) == v45 )
      goto LABEL_87;
    if ( !v49 )
    {
      if ( v51 )
      {
        if ( *(_DWORD *)(v44 + 40) < v45 )
        {
          v49 = v44;
          break;
        }
      }
      else
      {
        v49 = v44;
      }
    }
    v44 += 64LL;
  }
  v44 = v49;
  if ( v49 )
  {
    *(_QWORD *)(v49 + 16) = Resource;
    *(_DWORD *)(v49 + 28) = v43;
    *(_QWORD *)(v49 + 32) = 0LL;
    *(_QWORD *)v49 = 0LL;
    *(_QWORD *)(v49 + 8) = 0LL;
    *(_DWORD *)(v49 + 24) = 0;
    *(_DWORD *)(v49 + 40) = v45;
    *(_DWORD *)(v49 + 44) = 0;
  }
LABEL_87:
  v47 = v44;
  if ( v44 )
    goto LABEL_88;
LABEL_203:
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
