/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470
 * Callers:
 *     DifExReleaseResourceAndLeaveCriticalRegionWrapper @ 0x14061F100 (DifExReleaseResourceAndLeaveCriticalRegionWrapper.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     ExpFreeOwnerEntry @ 0x14031EC90 (ExpFreeOwnerEntry.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  OWNER_ENTRY *v1; // r9
  USHORT Flag; // cx
  ULONG_PTR v4; // r14
  unsigned __int8 v5; // r15
  __int64 v6; // rdx
  struct _KTHREAD *v7; // r8
  __int64 v8; // rdx
  ULONG v9; // r13d
  ULONG v10; // r13d
  ULONG TableSize; // eax
  ERESOURCE_THREAD v12; // rbx
  char v13; // r14
  KIRQL v14; // r15
  _QWORD *v15; // r13
  signed __int64 v16; // rax
  bool v17; // cc
  signed __int64 v18; // rax
  ERESOURCE_THREAD v19; // r14
  ULONG v20; // ecx
  unsigned __int64 *v21; // rax
  __int64 v22; // rdx
  ULONG v23; // eax
  unsigned __int64 v24; // rbx
  int v25; // r14d
  __int64 v26; // rax
  KSPIN_LOCK *v27; // rcx
  char v28; // bl
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // r9
  struct _KPRCB *v33; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  bool v35; // r13
  unsigned int v36; // eax
  unsigned __int64 OwnerThread; // r8
  OWNER_ENTRY *p_OwnerEntry; // rdx
  unsigned __int64 v39; // rcx
  POWNER_ENTRY OwnerTable; // rdx
  ULONG v41; // eax
  unsigned __int64 v42; // rbx
  struct _KPRCB *v43; // r15
  struct _KTHREAD *v44; // rcx
  unsigned int v45; // edx
  signed __int64 v46; // r14
  int v47; // r8d
  signed __int64 v48; // rax
  signed __int64 v49; // rbx
  struct _KTHREAD *v50; // rcx
  signed __int64 v51; // rax
  unsigned int m; // ecx
  int v53; // r9d
  ULONG v54; // r13d
  __int64 v55; // rax
  KSPIN_LOCK *v56; // rcx
  char v57; // bl
  __int64 v58; // r8
  __int64 v59; // r10
  __int64 v60; // rcx
  __int64 v61; // r9
  struct _KPRCB *v62; // rcx
  unsigned __int32 *v63; // r8
  PVOID v64; // rcx
  _QWORD *v65; // rdx
  PVOID *v66; // rax
  struct _KTHREAD *v67; // rax
  unsigned __int64 *v68; // rax
  unsigned __int64 k; // rcx
  _DWORD *v70; // r9
  _QWORD *v71; // rax
  _QWORD *v72; // rcx
  __int64 v73; // rdx
  _QWORD *v74; // rcx
  _QWORD *v75; // rax
  unsigned int v76; // r14d
  __int64 v77; // r8
  __int64 v78; // r9
  ERESOURCE_THREAD v79; // r14
  ULONG NumberOfSharedWaiters; // ecx
  ULONG v81; // eax
  ULONG v82; // eax
  unsigned __int64 v83; // rbx
  int v84; // r14d
  __int64 v85; // rax
  KSPIN_LOCK *v86; // rdx
  ULONG v87; // eax
  unsigned __int64 v88; // rbx
  struct _KPRCB *v89; // r13
  struct _KTHREAD *v90; // rcx
  unsigned int v91; // r15d
  signed __int64 Object; // r14
  int v93; // r8d
  signed __int64 Pool2; // rax
  struct _KTHREAD *v95; // rcx
  signed __int64 v96; // rax
  unsigned int j; // edx
  int v98; // ecx
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // r9
  ULONG v101; // ecx
  ULONG v102; // r10d
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // r9
  ULONG v105; // ecx
  ULONG v106; // r10d
  char v107; // al
  char v108; // r14
  __int64 v109; // rax
  KSPIN_LOCK *v110; // rdx
  char v111; // al
  char v112; // al
  bool v113; // zf
  struct _KPRCB *v114; // r15
  unsigned __int64 *v115; // rax
  struct _KTHREAD *v116; // rax
  unsigned __int64 *v117; // r13
  unsigned __int64 *i; // rax
  _DWORD *v119; // r9
  _QWORD *v120; // r13
  _QWORD *v121; // rax
  _QWORD *v122; // rdx
  _QWORD *v123; // rax
  _QWORD *v124; // rcx
  char v125; // cl
  char v126; // al
  struct _KPRCB *v127; // r15
  unsigned __int32 v128; // eax
  __int64 v129; // rdx
  unsigned __int32 v130; // ett
  unsigned __int32 v131; // eax
  __int64 v132; // rdx
  unsigned __int32 v133; // ett
  unsigned __int64 **v134; // rdx
  PVOID ExclusiveWaiters; // rax
  _QWORD *v136; // rdx
  PVOID *v137; // rcx
  __int128 *v138; // rax
  unsigned __int64 *SharedWaiters; // rax
  __int64 v140; // rax
  ULONG *p_ActiveEntries; // rbx
  struct _KTHREAD *v142; // r14
  unsigned __int8 v143; // si
  char v144; // cl
  volatile signed __int64 *v145; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v148; // rcx
  __int64 **v149; // r14
  __int64 *v150; // rcx
  __int64 **v151; // r14
  __int64 *v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rax
  signed __int32 v155[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v156; // [rsp+38h] [rbp-D0h]
  _DWORD *v157; // [rsp+40h] [rbp-C8h]
  _DWORD *v158; // [rsp+48h] [rbp-C0h]
  __int16 Group; // [rsp+50h] [rbp-B8h]
  ULONG ContentionCount; // [rsp+54h] [rbp-B4h]
  __int64 v161; // [rsp+58h] [rbp-B0h] BYREF
  KSPIN_LOCK *p_SpinLock; // [rsp+60h] [rbp-A8h]
  __int64 v163; // [rsp+68h] [rbp-A0h]
  _QWORD *v164; // [rsp+70h] [rbp-98h]
  unsigned __int64 v165; // [rsp+78h] [rbp-90h]
  struct _KPRCB *CurrentPrcb; // [rsp+80h] [rbp-88h]
  struct _KTHREAD *v167; // [rsp+88h] [rbp-80h]
  unsigned __int64 *v168; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v169; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v170; // [rsp+A0h] [rbp-68h]
  __int128 v171; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v172; // [rsp+B8h] [rbp-50h]
  __int128 v173; // [rsp+C8h] [rbp-40h]
  __int128 v174; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v175; // [rsp+E8h] [rbp-20h]
  __int128 v176; // [rsp+F8h] [rbp-10h]
  _QWORD v177[2]; // [rsp+108h] [rbp+0h] BYREF
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
    v142 = KeGetCurrentThread();
    v143 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v143, 2LL);
    if ( ((__int64)Resource->SystemResourcesList.Flink & 1) != 0 && Resource->Reserved2 == v142 )
    {
      p_ActiveEntries = &Resource->ActiveEntries;
LABEL_290:
      if ( p_ActiveEntries )
      {
        v107 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v107 & 2) != 0 )
        {
          v108 = 0;
        }
        else
        {
          v108 = 1;
          *((_BYTE *)p_ActiveEntries + 37) = v107 & 0xFE;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v143);
        __writecr8(v143);
        ExReleaseFastResource((ULONG_PTR)Resource, (ULONG_PTR)p_ActiveEntries);
        if ( v108 )
          ExFreePoolWithTag(p_ActiveEntries, 0);
        goto LABEL_203;
      }
    }
    else
    {
      for ( p_ActiveEntries = (ULONG *)v142[1].WaitBlock[3].SparePtr;
            p_ActiveEntries != (ULONG *)&v142[1].LastXStateSaveDebugInfo;
            p_ActiveEntries = *(ULONG **)p_ActiveEntries )
      {
        v144 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v144 & 2) == 0 && *((PERESOURCE *)p_ActiveEntries + 3) == Resource && (v144 & 1) != 0 )
          goto LABEL_290;
      }
    }
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)v142, 0LL, 0LL);
  }
  v4 = (ULONG_PTR)KeGetCurrentThread();
  v163 = 0LL;
  v161 = 0LL;
  p_SpinLock = &Resource->SpinLock;
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v163 )
    KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
  LOBYTE(v163) = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&v161);
    if ( v6 )
      KxWaitForLockOwnerShip(&v161, v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v161, &Resource->SpinLock);
  }
  v7 = KeGetCurrentThread();
  v8 = Resource->Flag;
  if ( ((v8 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v4 & 3) != 3 && (struct _KTHREAD *)v4 != v7 )
    KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v7, v4, 0LL);
  if ( (v8 & 0x80u) == 0LL )
  {
    v169 = 0LL;
    v35 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    LOBYTE(v156) = v35;
    if ( (v4 & 3) != 0 )
      v36 = 0;
    else
      v36 = *(unsigned __int8 *)(v4 + 1120);
    OwnerThread = Resource->OwnerEntry.OwnerThread;
    p_OwnerEntry = &Resource->OwnerEntry;
    if ( OwnerThread == v4 )
      goto LABEL_132;
    v39 = Resource->OwnerEntry.OwnerThread != 0;
    if ( v36 )
    {
      OwnerThread = (unsigned __int64)Resource->OwnerTable;
      if ( OwnerThread )
      {
        if ( v36 < *(_DWORD *)(OwnerThread + 8) )
        {
          p_OwnerEntry = (OWNER_ENTRY *)(OwnerThread + 16LL * v36);
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
      if ( v39 < OwnerThread )
      {
        while ( p_OwnerEntry->OwnerThread != v4 )
        {
          if ( !p_OwnerEntry->OwnerThread || (++v39, v39 != OwnerThread) )
          {
            if ( ++p_OwnerEntry != v1 )
              continue;
          }
          goto LABEL_114;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                    - LODWORD(Resource->OwnerTable)) >> 4;
LABEL_132:
        v76 = p_OwnerEntry->TableSize & 7 | (8 * (p_OwnerEntry->TableSize >> 3) - 8);
        p_OwnerEntry->TableSize = v76;
        LODWORD(v158) = v76 >> 3;
        if ( !(v76 >> 3) )
        {
          ExpFreeOwnerEntry(p_OwnerEntry);
          v17 = Resource->ActiveEntries <= 1;
          v79 = 0LL;
          ContentionCount = Resource->ContentionCount;
          if ( v17 )
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
                  v136 = *(_QWORD **)ExclusiveWaiters;
                  v137 = (PVOID *)*((_QWORD *)ExclusiveWaiters + 1);
                  if ( *(PVOID *)(*(_QWORD *)ExclusiveWaiters + 8LL) != ExclusiveWaiters || *v137 != ExclusiveWaiters )
                    goto LABEL_127;
                  *v137 = v136;
                  v136[1] = v137;
                }
                v79 = *((_QWORD *)ExclusiveWaiters + 2);
                *((_QWORD *)ExclusiveWaiters + 1) = ExclusiveWaiters;
                *(_QWORD *)ExclusiveWaiters = ExclusiveWaiters;
                v169 = (unsigned __int64 *)ExclusiveWaiters;
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
              v169 = SharedWaiters;
              Resource->NumberOfSharedWaiters = 0;
            }
LABEL_137:
            v81 = Resource->ActiveEntries - 1;
            Resource->ActiveEntries = v81 + NumberOfSharedWaiters;
            if ( !(v81 + NumberOfSharedWaiters) )
              Resource->ActiveCount = 0;
            if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
              Resource->Flag &= 0xF9u;
            LODWORD(v164) = Resource->WaiterPriority;
            if ( v79 )
            {
              v82 = Resource->OwnerEntry.TableSize & 7;
              Resource->OwnerEntry.OwnerThread = v79;
              Resource->OwnerEntry.TableSize = v82 | 8;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
            {
              KiReleaseQueuedSpinLockInstrumented(&v161, retaddr);
LABEL_147:
              v83 = (unsigned __int8)v163;
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v163);
              __writecr8(v83);
              if ( v169 )
              {
                v116 = (struct _KTHREAD *)KeGetCurrentIrql();
                v167 = v116;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v116, 2LL);
                v117 = v169;
                CurrentPrcb = KeGetCurrentPrcb();
                for ( i = (unsigned __int64 *)*v169; ; i = (unsigned __int64 *)*v170 )
                {
                  v170 = i;
                  v165 = (unsigned __int64)v117;
                  v157 = v117 + 3;
                  KiAcquireKobjectLockSafe(v117 + 3);
                  v119 = v117 + 3;
                  *((_DWORD *)v117 + 7) = 1;
                  v120 = (_QWORD *)v117[4];
                  v121 = v119 + 2;
                  v158 = v119 + 2;
                  while ( v120 != v121 )
                  {
                    v122 = (_QWORD *)*v120;
                    v123 = v120;
                    v120 = v122;
                    v124 = (_QWORD *)v123[1];
                    if ( (_QWORD *)v122[1] != v123 || (_QWORD *)*v124 != v123 )
                      goto LABEL_127;
                    *v124 = v122;
                    v122[1] = v124;
                    v125 = *((_BYTE *)v123 + 16);
                    if ( v125 == 1 )
                    {
                      v126 = KiTryUnwaitThread(CurrentPrcb, v123, *((unsigned __int16 *)v123 + 9), 0LL);
                      v119 = v157;
                      v113 = v126 == 0;
                      v121 = v158;
                      if ( !v113 )
                      {
                        v113 = v157[1]-- == 1;
                        if ( v113 )
                          break;
                      }
                    }
                    else if ( v125 == 2 )
                    {
                      *((_BYTE *)v123 + 17) = 5;
                      KiInsertQueueInternal(v123[3], v123);
                      v119 = v157;
                      v113 = v157[1]-- == 1;
                      if ( v113 )
                        break;
                      v121 = v158;
                    }
                    else
                    {
                      if ( v125 == 4 )
                      {
                        *((_BYTE *)v123 + 17) = 5;
                        v119[1] = 0;
                        KeInsertQueueDpc((PRKDPC)v123[3], v119, v123);
                      }
                      else
                      {
                        KiTryUnwaitThread(CurrentPrcb, v123, 256LL, 0LL);
                      }
                      v121 = v158;
                      v119 = v157;
                    }
                  }
                  _InterlockedAnd((volatile signed __int32 *)(v165 + 24), 0xFFFFFF7F);
                  if ( v170 == v169 )
                    break;
                  v117 = v170;
                }
                v127 = CurrentPrcb;
                KiRemoveBoostThread(CurrentPrcb);
                KiExitDispatcher(v127, (char)v167);
                v35 = v156;
              }
              v84 = 65602;
              LODWORD(v158) = 0;
              LODWORD(v157) = 65602;
LABEL_162:
              __incgsdword(0x9070u);
              if ( !v35 )
                goto LABEL_203;
              v174 = 0LL;
              v175 = 0LL;
              v176 = 0LL;
              v89 = KeGetCurrentPrcb();
              v165 = __rdtsc();
              ++v89->SynchCounters.ExEtwSynchTrackingNotificationsCount;
              Group = v89->Group;
              LOBYTE(v156) = v89->GroupIndex;
              if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
                goto LABEL_203;
              v90 = KeGetCurrentThread();
              v91 = v84 & 0xFFFF0000;
              v167 = v90;
              if ( (*(_DWORD *)(&v90[1].SwapListEntry + 1) & 1) != 0 )
                goto LABEL_203;
              Object = (signed __int64)v90[1].WaitBlock[0].Object;
              v93 = EtwpEthreadSyncTrackingSequence;
              LODWORD(v164) = EtwpEthreadSyncTrackingSequence;
              if ( !Object )
              {
                Pool2 = ExAllocatePool2(0x48uLL, 0x200uLL, 0x72546552u);
                v49 = Pool2;
                if ( !Pool2 )
                  goto LABEL_203;
                v95 = v167;
                *(_QWORD *)(Pool2 + 16) = Resource;
                *(_DWORD *)(Pool2 + 28) = v91;
                *(_DWORD *)(Pool2 + 32) = 0;
                *(_DWORD *)(Pool2 + 40) = (_DWORD)v164;
                Object = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v95[1].WaitBlock[0].Object,
                           Pool2,
                           0LL);
                if ( !Object )
                {
LABEL_181:
                  if ( !*(_DWORD *)(v49 + 32) )
                    goto LABEL_196;
                  ++v89->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
                  if ( *(_DWORD *)(v49 + 36) < (unsigned int)((_DWORD)v158 + 1) )
                    *(_DWORD *)(v49 + 36) = (_DWORD)v158 + 1;
                  if ( (_DWORD)v157 == 65602 )
                  {
                    v99 = *(_QWORD *)(v49 + 8);
                    if ( v99 > 2 && *(_WORD *)(v49 + 24) == Group && *(_BYTE *)(v49 + 26) == (_BYTE)v156 )
                      v100 = v165 - v99;
                    else
                      v100 = 0LL;
                    if ( *(_QWORD *)v49 <= 1uLL
                      || (v89->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                        + v89->SynchCounters.ExecutiveResourceReleaseSharedCount)
                       % EtwpExecutiveResourceContentionSampleRate )
                    {
                      v101 = *(_DWORD *)(v49 + 44);
                      v102 = ContentionCount;
                      if ( (ContentionCount <= v101
                         || (ContentionCount - v101) % EtwpExecutiveResourceContentionSampleRate)
                        && (v89->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                          + v89->SynchCounters.ExecutiveResourceReleaseSharedCount)
                         % EtwpExecutiveResourceReleaseSampleRate )
                      {
                        goto LABEL_196;
                      }
                    }
                    else
                    {
                      v102 = ContentionCount;
                    }
                    DWORD2(v176) = 65602;
                    *(_QWORD *)&v176 = Resource;
                    *(_QWORD *)&v174 = *(_QWORD *)(v49 + 8);
                    DWORD2(v175) = *(_DWORD *)(v49 + 36);
                    *((_QWORD *)&v174 + 1) = v100;
                    *(_QWORD *)&v175 = *(_QWORD *)v49;
                    HIDWORD(v176) = v102 - *(_DWORD *)(v49 + 44);
                    v138 = &v174;
                    HIDWORD(v175) = KeGetCurrentThread()[1].CurrentRunTime;
LABEL_259:
                    v177[0] = v138;
                    v177[1] = 48LL;
                    EtwTraceKernelEvent((int)v177, 1, 0x20020000u, 1323, 23074818);
                    goto LABEL_196;
                  }
                  if ( (_DWORD)v157 == 65618 )
                    *(_DWORD *)(v49 + 32) = 2;
                  goto LABEL_203;
                }
                ExFreePoolWithTag((PVOID)Pool2, 0);
                v93 = (int)v164;
              }
              v96 = 0LL;
              for ( j = 0; j < 8; ++j )
              {
                v98 = *(_DWORD *)(Object + 28);
                if ( v98 == v91 && *(PERESOURCE *)(Object + 16) == Resource && *(_DWORD *)(Object + 40) == v93 )
                  goto LABEL_180;
                if ( !v96 )
                {
                  if ( v98 )
                  {
                    if ( *(_DWORD *)(Object + 40) < v93 )
                    {
                      v96 = Object;
                      break;
                    }
                  }
                  else
                  {
                    v96 = Object;
                  }
                }
                Object += 64LL;
              }
              Object = v96;
              if ( v96 )
              {
                *(_QWORD *)(v96 + 16) = Resource;
                *(_DWORD *)(v96 + 28) = v91;
                *(_QWORD *)(v96 + 32) = 0LL;
                *(_QWORD *)v96 = 0LL;
                *(_QWORD *)(v96 + 8) = 0LL;
                *(_DWORD *)(v96 + 24) = 0;
                *(_DWORD *)(v96 + 40) = v93;
                *(_DWORD *)(v96 + 44) = 0;
              }
LABEL_180:
              v49 = Object;
              if ( !Object )
                goto LABEL_203;
              goto LABEL_181;
            }
            _m_prefetchw(&v161);
            v85 = v161;
            if ( !v161 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)p_SpinLock,
                                0LL,
                                (signed __int64)&v161) == &v161 )
                goto LABEL_147;
              v85 = KxWaitForLockChainValid(&v161);
            }
            v161 = 0LL;
            v86 = p_SpinLock;
            if ( (((unsigned __int8)v86 ^ (unsigned __int8)_InterlockedExchange64(
                                                             (volatile __int64 *)(v85 + 8),
                                                             (__int64)p_SpinLock)) & 4) != 0 )
              KeWakeAddressAll(v85 + 8, v86, v77, v78);
            goto LABEL_147;
          }
LABEL_136:
          NumberOfSharedWaiters = 0;
          goto LABEL_137;
        }
        v84 = 65618;
        v87 = Resource->ContentionCount;
        LODWORD(v157) = 65618;
        ContentionCount = v87;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v161, retaddr);
LABEL_159:
          v88 = (unsigned __int8)v163;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v163);
          __writecr8(v88);
          goto LABEL_162;
        }
        _m_prefetchw(&v161);
        v109 = v161;
        if ( !v161 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)p_SpinLock,
                            0LL,
                            (signed __int64)&v161) == &v161 )
            goto LABEL_159;
          v109 = KxWaitForLockChainValid(&v161);
        }
        v161 = 0LL;
        v110 = p_SpinLock;
        if ( (((unsigned __int8)v110 ^ (unsigned __int8)_InterlockedExchange64(
                                                          (volatile __int64 *)(v109 + 8),
                                                          (__int64)p_SpinLock)) & 4) != 0 )
          KeWakeAddressAll(v109 + 8, v110, OwnerThread, v1);
        goto LABEL_159;
      }
LABEL_114:
      OwnerTable = Resource->OwnerTable;
    }
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)OwnerTable, 2uLL);
  }
  v168 = 0LL;
  LOBYTE(v156) = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((v8 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && Resource->OwnerEntry.OwnerThread != v4 )
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)Resource->OwnerTable, 1uLL);
  v9 = Resource->OwnerEntry.TableSize & 7 | (8 * (Resource->OwnerEntry.TableSize >> 3) - 8);
  Resource->OwnerEntry.TableSize = v9;
  v10 = v9 >> 3;
  if ( !v10 )
  {
    TableSize = Resource->OwnerEntry.TableSize;
    v12 = Resource->OwnerEntry.OwnerThread;
    if ( (TableSize & 2) != 0 )
    {
      v12 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v12 & 3) != 0 )
    {
      goto LABEL_31;
    }
    if ( v12 )
    {
      if ( (TableSize & 1) == 0 )
      {
LABEL_24:
        if ( (TableSize & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v12 + 1508));
          TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFB;
          Resource->OwnerEntry.TableSize = TableSize;
        }
        if ( (TableSize & 2) != 0 )
        {
          if ( ObpTraceFlags )
            ObpPushStackInfo(v12 - 48);
          v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 48), 0xFFFFFFFFFFFFFFFFuLL);
          v17 = v16 <= 1;
          v18 = v16 - 1;
          if ( v17 )
          {
            if ( *(_QWORD *)(v12 - 40) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v12 - 48) >> 8)],
                v12,
                3uLL,
                *(_QWORD *)(v12 - 40));
            if ( v18 < 0 )
              KeBugCheckEx(0x18u, 0LL, v12, 4uLL, v18);
            ObpDeferObjectDeletion(v12 - 48);
          }
          Resource->OwnerEntry.TableSize &= ~2u;
        }
        goto LABEL_31;
      }
      v13 = 0;
      v14 = 0;
      v15 = 0LL;
      if ( PspAlwaysTrackIoBoosting )
      {
        v13 = 1;
        v140 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
        v15 = (_QWORD *)v140;
        if ( v140 )
        {
          RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v140 + 16), 0LL);
          v15[12] = KeGetCurrentThread();
          v15[13] = 0LL;
        }
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 1552));
      }
      if ( *(_DWORD *)(v12 + 1504) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 1504));
        if ( !v13 )
        {
LABEL_23:
          TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFE;
          Resource->OwnerEntry.TableSize = TableSize;
          goto LABEL_24;
        }
        if ( *(_DWORD *)(v12 + 1504) )
        {
          if ( v15 )
          {
            v148 = *(_QWORD **)(v12 + 1544);
            if ( *v148 != v12 + 1536 )
              goto LABEL_127;
            *v15 = v12 + 1536;
            v15[1] = v148;
            *v148 = v15;
            *(_QWORD *)(v12 + 1544) = v15;
          }
        }
        else
        {
          if ( v15 )
            ExFreePoolWithTag(v15, 0x736F6F42u);
          v149 = (__int64 **)(v12 + 1520);
          while ( 1 )
          {
            v150 = *v149;
            if ( *v149 == (__int64 *)v149 )
              break;
            v154 = *v150;
            if ( (__int64 **)v150[1] != v149 || *(__int64 **)(v154 + 8) != v150 )
              goto LABEL_127;
            *v149 = (__int64 *)v154;
            *(_QWORD *)(v154 + 8) = v149;
            ExFreePoolWithTag(v150, 0x736F6F42u);
          }
          v151 = (__int64 **)(v12 + 1536);
          while ( 1 )
          {
            v152 = *v151;
            if ( *v151 == (__int64 *)v151 )
              break;
            v153 = *v152;
            if ( (__int64 **)v152[1] != v151 || *(__int64 **)(v153 + 8) != v152 )
              goto LABEL_127;
            *v151 = (__int64 *)v153;
            *(_QWORD *)(v153 + 8) = v151;
            ExFreePoolWithTag(v152, 0x736F6F42u);
          }
        }
      }
      else if ( !v13 )
      {
        goto LABEL_23;
      }
      v145 = (volatile signed __int64 *)(v12 + 1552);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64(v145, 0LL);
      else
        KiReleaseSpinLockInstrumented(v145, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      __writecr8(v14);
      goto LABEL_23;
    }
LABEL_31:
    Resource->OwnerEntry.OwnerThread = 0LL;
    v19 = 0LL;
    v20 = Resource->NumberOfSharedWaiters;
    ContentionCount = Resource->ContentionCount;
    if ( v20 )
    {
      v21 = (unsigned __int64 *)Resource->SharedWaiters;
      Resource->SharedWaiters = 0LL;
      Resource->Flag &= ~0x80u;
      v168 = v21;
      Resource->NumberOfSharedWaiters = 0;
LABEL_33:
      v22 = v20 + Resource->ActiveEntries - 1;
LABEL_34:
      Resource->ActiveEntries = v22;
      if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
        Resource->Flag &= 0xF9u;
      if ( v19 )
      {
        v23 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = v19;
        Resource->OwnerEntry.TableSize = v23 | 8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(&v161, retaddr);
LABEL_42:
        v24 = (unsigned __int8)v163;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v163);
        __writecr8(v24);
        if ( v168 )
        {
          v67 = (struct _KTHREAD *)KeGetCurrentIrql();
          v167 = v67;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v67, 2LL);
          CurrentPrcb = KeGetCurrentPrcb();
          v68 = v168;
          for ( k = *v168; ; k = *(_QWORD *)v165 )
          {
            v170 = v68;
            v165 = k;
            v157 = v68 + 3;
            KiAcquireKobjectLockSafe(v68 + 3);
            v70 = v170 + 3;
            *((_DWORD *)v170 + 7) = 1;
            v71 = (_QWORD *)*((_QWORD *)v70 + 1);
            v72 = v70 + 2;
            v158 = v70 + 2;
            while ( v71 != v72 )
            {
              v73 = *v71;
              v74 = v71;
              v75 = (_QWORD *)v71[1];
              v164 = (_QWORD *)v73;
              if ( *(_QWORD **)(v73 + 8) != v74 || (_QWORD *)*v75 != v74 )
                goto LABEL_127;
              *v75 = v73;
              *(_QWORD *)(v73 + 8) = v75;
              v111 = *((_BYTE *)v74 + 16);
              if ( v111 == 1 )
              {
                v112 = KiTryUnwaitThread(CurrentPrcb, v74, *((unsigned __int16 *)v74 + 9), 0LL);
                v72 = v158;
                v113 = v112 == 0;
                v71 = v164;
                v70 = v157;
                if ( !v113 )
                {
                  v113 = v157[1]-- == 1;
                  if ( v113 )
                    break;
                }
              }
              else if ( v111 == 2 )
              {
                *((_BYTE *)v74 + 17) = 5;
                KiInsertQueueInternal(v74[3], v74);
                v70 = v157;
                v113 = v157[1]-- == 1;
                if ( v113 )
                  break;
                v71 = v164;
                v72 = v158;
              }
              else
              {
                if ( v111 == 4 )
                {
                  *((_BYTE *)v74 + 17) = 5;
                  v70[1] = 0;
                  KeInsertQueueDpc((PRKDPC)v74[3], v70, v74);
                }
                else
                {
                  KiTryUnwaitThread(CurrentPrcb, v74, 256LL, 0LL);
                }
                v71 = v164;
                v72 = v158;
                v70 = v157;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v170 + 6, 0xFFFFFF7F);
            if ( (unsigned __int64 *)v165 == v168 )
              break;
            v68 = (unsigned __int64 *)v165;
          }
          v114 = CurrentPrcb;
          KiRemoveBoostThread(CurrentPrcb);
          KiExitDispatcher(v114, (char)v167);
        }
        v25 = 65570;
        v10 = 0;
        LODWORD(v164) = 65570;
        goto LABEL_69;
      }
      _m_prefetchw(&v161);
      v26 = v161;
      if ( !v161 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v161) == &v161 )
          goto LABEL_42;
        v26 = KxWaitForLockChainValid(&v161);
      }
      v161 = 0LL;
      v27 = p_SpinLock;
      if ( (((unsigned __int8)v27 ^ (unsigned __int8)_InterlockedExchange64(
                                                       (volatile __int64 *)(v26 + 8),
                                                       (__int64)p_SpinLock)) & 4) != 0 )
      {
        _InterlockedOr(v155, 0);
        v28 = KeDisableInterrupts(v27, v22, ((unsigned __int64)(v26 + 8) >> 5) & 0x7F, v1);
        KiHaltOnAddressWakeEntireList(v31, _InterlockedExchange64((volatile __int64 *)(v30 + 8 * v29 + 15863808), 0LL));
        if ( v28 )
        {
          v33 = KeGetCurrentPrcb();
          SchedulerAssist = (unsigned __int32 *)v33->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v131 = *SchedulerAssist;
            do
            {
              v132 = v131;
              LODWORD(v132) = v131 & 0xFFDFFFFF;
              v133 = v131;
              v131 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v131 & 0xFFDFFFFF, v131);
            }
            while ( v133 != v131 );
            if ( (v131 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v33, v132, SchedulerAssist, v32);
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
      v22 = 0LL;
      goto LABEL_34;
    }
    v64 = Resource->ExclusiveWaiters;
    if ( !v64 )
    {
LABEL_220:
      --Resource->NumberOfExclusiveWaiters;
      v20 = 1;
      goto LABEL_33;
    }
    if ( *(PVOID *)v64 == v64 )
    {
      Resource->ExclusiveWaiters = 0LL;
    }
    else
    {
      Resource->ExclusiveWaiters = *(PVOID *)v64;
      v65 = *(_QWORD **)v64;
      v66 = (PVOID *)*((_QWORD *)v64 + 1);
      if ( *(PVOID *)(*(_QWORD *)v64 + 8LL) != v64 || *v66 != v64 )
        goto LABEL_127;
      *v66 = v65;
      v65[1] = v66;
    }
    v115 = v168;
    v19 = *((_QWORD *)v64 + 2);
    if ( !v168 )
    {
      *((_QWORD *)v64 + 1) = v64;
      *(_QWORD *)v64 = v64;
      v168 = (unsigned __int64 *)v64;
      goto LABEL_220;
    }
    v134 = (unsigned __int64 **)v168[1];
    if ( *v134 == v168 )
    {
      *(_QWORD *)v64 = v168;
      *((_QWORD *)v64 + 1) = v134;
      *v134 = (unsigned __int64 *)v64;
      v115[1] = (unsigned __int64)v64;
      --Resource->NumberOfExclusiveWaiters;
      v168 = (unsigned __int64 *)v64;
      v20 = 1;
      goto LABEL_33;
    }
LABEL_127:
    __fastfail(3u);
  }
  v25 = 65586;
  v41 = Resource->ContentionCount;
  LODWORD(v164) = 65586;
  ContentionCount = v41;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v161);
    v55 = v161;
    if ( !v161 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v161) == &v161 )
        goto LABEL_66;
      v55 = KxWaitForLockChainValid(&v161);
    }
    v161 = 0LL;
    v56 = p_SpinLock;
    if ( (((unsigned __int8)v56 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v55 + 8),
                                                     (__int64)p_SpinLock)) & 4) != 0 )
    {
      _InterlockedOr(v155, 0);
      v57 = KeDisableInterrupts(v56, v8, ((unsigned __int64)(v55 + 8) >> 5) & 0x7F, v1);
      KiHaltOnAddressWakeEntireList(v60, _InterlockedExchange64((volatile __int64 *)(v59 + 8 * v58 + 15863808), 0LL));
      if ( v57 )
      {
        v62 = KeGetCurrentPrcb();
        v63 = (unsigned __int32 *)v62->SchedulerAssist;
        if ( v63 )
        {
          _m_prefetchw(v63);
          v128 = *v63;
          do
          {
            v129 = v128;
            LODWORD(v129) = v128 & 0xFFDFFFFF;
            v130 = v128;
            v128 = _InterlockedCompareExchange((volatile signed __int32 *)v63, v128 & 0xFFDFFFFF, v128);
          }
          while ( v130 != v128 );
          if ( (v128 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v62, v129, v63, v61);
        }
        _enable();
      }
    }
    goto LABEL_66;
  }
  KiReleaseQueuedSpinLockInstrumented(&v161, retaddr);
LABEL_66:
  v42 = (unsigned __int8)v163;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v163);
  __writecr8(v42);
LABEL_69:
  __incgsdword(0x906Cu);
  if ( !(_BYTE)v156 )
    goto LABEL_203;
  v171 = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  v43 = KeGetCurrentPrcb();
  v165 = __rdtsc();
  ++v43->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  Group = v43->Group;
  LOBYTE(v156) = v43->GroupIndex;
  if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
    goto LABEL_203;
  v44 = KeGetCurrentThread();
  v45 = v25 & 0xFFFF0000;
  v167 = v44;
  LODWORD(v157) = v25 & 0xFFFF0000;
  if ( (*(_DWORD *)(&v44[1].SwapListEntry + 1) & 1) != 0 )
    goto LABEL_203;
  v46 = (signed __int64)v44[1].WaitBlock[0].Object;
  v47 = EtwpEthreadSyncTrackingSequence;
  LODWORD(v158) = EtwpEthreadSyncTrackingSequence;
  if ( !v46 )
  {
    v48 = ExAllocatePool2(0x48uLL, 0x200uLL, 0x72546552u);
    v49 = v48;
    if ( !v48 )
      goto LABEL_203;
    v50 = v167;
    *(_QWORD *)(v48 + 16) = Resource;
    *(_DWORD *)(v48 + 28) = (_DWORD)v157;
    *(_DWORD *)(v48 + 40) = (_DWORD)v158;
    *(_DWORD *)(v48 + 32) = 0;
    v46 = _InterlockedCompareExchange64((volatile signed __int64 *)&v50[1].WaitBlock[0].Object, v48, 0LL);
    if ( !v46 )
    {
LABEL_88:
      if ( *(_DWORD *)(v49 + 32) )
      {
        ++v43->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
        v54 = v10 + 1;
        if ( *(_DWORD *)(v49 + 36) < v54 )
          *(_DWORD *)(v49 + 36) = v54;
        if ( (_DWORD)v164 != 65570 )
        {
          if ( (_DWORD)v164 == 65586 )
            *(_DWORD *)(v49 + 32) = 2;
          goto LABEL_203;
        }
        v103 = *(_QWORD *)(v49 + 8);
        if ( v103 > 2 && *(_WORD *)(v49 + 24) == Group && *(_BYTE *)(v49 + 26) == (_BYTE)v156 )
          v104 = v165 - v103;
        else
          v104 = 0LL;
        if ( *(_QWORD *)v49 <= 1uLL
          || (v43->SynchCounters.ExecutiveResourceReleaseExclusiveCount
            + v43->SynchCounters.ExecutiveResourceReleaseSharedCount)
           % EtwpExecutiveResourceContentionSampleRate )
        {
          v105 = *(_DWORD *)(v49 + 44);
          v106 = ContentionCount;
          if ( (ContentionCount <= v105 || (ContentionCount - v105) % EtwpExecutiveResourceContentionSampleRate)
            && (v43->SynchCounters.ExecutiveResourceReleaseExclusiveCount
              + v43->SynchCounters.ExecutiveResourceReleaseSharedCount)
             % EtwpExecutiveResourceReleaseSampleRate )
          {
            goto LABEL_196;
          }
        }
        else
        {
          v106 = ContentionCount;
        }
        DWORD2(v173) = 65570;
        *(_QWORD *)&v173 = Resource;
        *(_QWORD *)&v171 = *(_QWORD *)(v49 + 8);
        DWORD2(v172) = *(_DWORD *)(v49 + 36);
        *((_QWORD *)&v171 + 1) = v104;
        *(_QWORD *)&v172 = *(_QWORD *)v49;
        HIDWORD(v173) = v106 - *(_DWORD *)(v49 + 44);
        v138 = &v171;
        HIDWORD(v172) = KeGetCurrentThread()[1].CurrentRunTime;
        goto LABEL_259;
      }
LABEL_196:
      *(_DWORD *)(v49 + 28) = 0;
      goto LABEL_203;
    }
    ExFreePoolWithTag((PVOID)v48, 0);
    v45 = (unsigned int)v157;
    v47 = (int)v158;
  }
  v51 = 0LL;
  for ( m = 0; m < 8; ++m )
  {
    v53 = *(_DWORD *)(v46 + 28);
    if ( v53 == v45 && *(PERESOURCE *)(v46 + 16) == Resource && *(_DWORD *)(v46 + 40) == v47 )
      goto LABEL_87;
    if ( !v51 )
    {
      if ( v53 )
      {
        if ( *(_DWORD *)(v46 + 40) < v47 )
        {
          v51 = v46;
          break;
        }
      }
      else
      {
        v51 = v46;
      }
    }
    v46 += 64LL;
  }
  v46 = v51;
  if ( v51 )
  {
    *(_QWORD *)(v51 + 16) = Resource;
    *(_DWORD *)(v51 + 28) = v45;
    *(_QWORD *)(v51 + 32) = 0LL;
    *(_QWORD *)v51 = 0LL;
    *(_QWORD *)(v51 + 8) = 0LL;
    *(_DWORD *)(v51 + 24) = 0;
    *(_DWORD *)(v51 + 40) = v47;
    *(_DWORD *)(v51 + 44) = 0;
  }
LABEL_87:
  v49 = v46;
  if ( v46 )
    goto LABEL_88;
LABEL_203:
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
