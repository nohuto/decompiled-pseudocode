/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0
 * Callers:
 *     DifExReleaseResourceAndLeaveCriticalRegionWrapper @ 0x140614B80 (DifExReleaseResourceAndLeaveCriticalRegionWrapper.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExpFreeOwnerEntry @ 0x14029C030 (ExpFreeOwnerEntry.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  __int64 v1; // r8
  __int64 v2; // r9
  USHORT Flag; // cx
  ULONG_PTR v5; // r12
  unsigned __int8 v6; // r14
  __int64 v7; // rdx
  struct _KTHREAD *v8; // r8
  __int64 v9; // rdx
  ULONG v10; // r14d
  ULONG TableSize; // eax
  ERESOURCE_THREAD OwnerThread; // rbx
  char v13; // r14
  KIRQL v14; // r12
  _QWORD *v15; // r13
  signed __int64 v16; // rax
  bool v17; // cc
  signed __int64 v18; // rax
  ERESOURCE_THREAD v19; // r14
  ULONG NumberOfSharedWaiters; // ecx
  unsigned __int64 *SharedWaiters; // rax
  ULONG v22; // edx
  ULONG v23; // eax
  __int64 v24; // rax
  unsigned __int8 v25; // cl
  bool v26; // bl
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // rcx
  struct _KPRCB *v30; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v32; // rbx
  bool v33; // zf
  char v34; // bl
  unsigned int v35; // r14d
  int v36; // r14d
  ULONG v37; // r13d
  __int64 v38; // rax
  unsigned __int8 v39; // cl
  bool v40; // bl
  __int64 v41; // r8
  __int64 v42; // r10
  __int64 v43; // rcx
  struct _KPRCB *v44; // rcx
  signed __int32 *v45; // r8
  unsigned __int64 v46; // rbx
  struct _KPRCB *v47; // r13
  struct _KTHREAD *v48; // rcx
  unsigned int v49; // r12d
  signed __int64 Object; // r14
  int v51; // r8d
  signed __int64 v52; // rax
  signed __int64 v53; // rbx
  struct _KTHREAD *v54; // rcx
  signed __int64 v55; // rax
  unsigned int j; // edx
  int v57; // ecx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r9
  ULONG v60; // ecx
  ULONG v61; // r10d
  char v62; // al
  char v63; // r14
  bool v64; // r13
  ULONG v65; // eax
  OWNER_ENTRY *p_OwnerEntry; // rdx
  unsigned __int64 v67; // rcx
  POWNER_ENTRY OwnerTable; // rdx
  unsigned __int64 v69; // r8
  signed __int32 v70; // eax
  signed __int32 v71; // ett
  POWNER_ENTRY v72; // r8
  signed __int32 v73; // eax
  signed __int32 v74; // ett
  PVOID ExclusiveWaiters; // rcx
  _QWORD *v76; // rdx
  PVOID *v77; // rax
  struct _KTHREAD *v78; // rax
  unsigned __int64 *v79; // r13
  unsigned __int64 i; // rax
  _DWORD *v81; // r9
  _QWORD *v82; // r13
  _QWORD *v83; // rax
  _QWORD *v84; // rdx
  __int64 v85; // rax
  _QWORD *v86; // rcx
  OWNER_ENTRY *v87; // r9
  char v88; // cl
  char v89; // al
  struct _KPRCB *v90; // r13
  signed int v91; // eax
  unsigned int v92; // r9d
  unsigned int v93; // r14d
  ERESOURCE_THREAD v94; // r14
  ULONG v95; // ecx
  ULONG v96; // eax
  ULONG v97; // eax
  __int64 v98; // rax
  volatile signed __int64 *v99; // rdx
  unsigned __int64 v100; // rbx
  char v101; // bl
  unsigned int v102; // r14d
  int v103; // r14d
  ULONG v104; // eax
  __int64 v105; // rax
  volatile signed __int64 *v106; // rdx
  unsigned __int64 v107; // rbx
  struct _KPRCB *v108; // r13
  struct _KTHREAD *v109; // rcx
  unsigned int v110; // r12d
  signed __int64 v111; // r14
  int v112; // r8d
  signed __int64 v113; // rax
  struct _KTHREAD *v114; // rcx
  signed __int64 v115; // rax
  unsigned int m; // edx
  int v117; // ecx
  unsigned __int64 *v118; // rax
  struct _KTHREAD *v119; // rax
  unsigned __int64 *v120; // r13
  unsigned __int64 *k; // rax
  _DWORD *v122; // r9
  _QWORD *v123; // r13
  _QWORD *v124; // rax
  _QWORD *v125; // rdx
  __int64 v126; // rax
  _QWORD *v127; // rcx
  char v128; // cl
  char v129; // al
  struct _KPRCB *v130; // r13
  signed int v131; // eax
  unsigned int v132; // r9d
  PVOID v133; // rax
  _QWORD *v134; // rdx
  PVOID *v135; // rcx
  __int128 *v136; // rax
  unsigned __int64 **v137; // rdx
  unsigned __int64 v138; // rax
  unsigned __int64 v139; // r9
  ULONG v140; // ecx
  ULONG v141; // r10d
  unsigned __int64 *v142; // rax
  __int64 Pool2; // rax
  ULONG *p_ActiveEntries; // rbx
  struct _KTHREAD *v145; // r14
  unsigned __int8 v146; // si
  char v147; // cl
  volatile signed __int64 *v148; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v151; // rcx
  __int64 **v152; // r14
  __int64 *v153; // rcx
  __int64 **v154; // r14
  __int64 *v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rax
  signed __int32 v158[6]; // [rsp+8h] [rbp-100h] BYREF
  char GroupIndex; // [rsp+38h] [rbp-D0h]
  int WaiterPriority; // [rsp+3Ch] [rbp-CCh]
  _DWORD *v161; // [rsp+40h] [rbp-C8h]
  _DWORD *v162; // [rsp+48h] [rbp-C0h]
  __int16 Group; // [rsp+50h] [rbp-B8h]
  ULONG ContentionCount; // [rsp+54h] [rbp-B4h]
  __int64 v165; // [rsp+58h] [rbp-B0h] BYREF
  KSPIN_LOCK *p_SpinLock; // [rsp+60h] [rbp-A8h]
  __int64 v167; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v168; // [rsp+70h] [rbp-98h]
  struct _KPRCB *CurrentPrcb; // [rsp+78h] [rbp-90h]
  struct _KTHREAD *v170; // [rsp+80h] [rbp-88h]
  unsigned __int64 *v171; // [rsp+88h] [rbp-80h]
  unsigned __int64 *v172; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v173; // [rsp+98h] [rbp-70h]
  __int128 v174; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v175; // [rsp+B0h] [rbp-58h]
  __int128 v176; // [rsp+C0h] [rbp-48h]
  __int128 v177; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v178; // [rsp+E0h] [rbp-28h]
  __int128 v179; // [rsp+F0h] [rbp-18h]
  _QWORD v180[2]; // [rsp+100h] [rbp-8h] BYREF
  void *retaddr; // [rsp+140h] [rbp+38h]

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
    v145 = KeGetCurrentThread();
    v146 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v146);
    if ( ((__int64)Resource->SystemResourcesList.Flink & 1) != 0 && Resource->Reserved2 == v145 )
    {
      p_ActiveEntries = &Resource->ActiveEntries;
LABEL_310:
      if ( p_ActiveEntries )
      {
        v62 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v62 & 2) != 0 )
        {
          v63 = 0;
        }
        else
        {
          v63 = 1;
          *((_BYTE *)p_ActiveEntries + 37) = v62 & 0xFE;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v146);
        __writecr8(v146);
        ExReleaseFastResource((ULONG_PTR)Resource, (__int64 *)p_ActiveEntries, v1);
        if ( v63 )
          ExFreePoolWithTag(p_ActiveEntries, 0);
        goto LABEL_98;
      }
    }
    else
    {
      for ( p_ActiveEntries = (ULONG *)v145[1].WaitBlock[3].SparePtr;
            p_ActiveEntries != (ULONG *)&v145[1].LastXStateSaveDebugInfo;
            p_ActiveEntries = *(ULONG **)p_ActiveEntries )
      {
        v147 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v147 & 2) == 0 && *((PERESOURCE *)p_ActiveEntries + 3) == Resource && (v147 & 1) != 0 )
          goto LABEL_310;
      }
    }
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)v145, 0LL, 0LL);
  }
  v5 = (ULONG_PTR)KeGetCurrentThread();
  v167 = 0LL;
  v165 = 0LL;
  p_SpinLock = &Resource->SpinLock;
  v6 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v167 )
    KiRaiseIrqlProcessIrqlFlags(v6);
  LOBYTE(v167) = v6;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&v165);
    if ( v7 )
      KxWaitForLockOwnerShip(&v165, v7, v1, v2);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v165, &Resource->SpinLock);
  }
  v8 = KeGetCurrentThread();
  v9 = Resource->Flag;
  if ( ((v9 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v5 & 3) != 3 && (struct _KTHREAD *)v5 != v8 )
    KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v8, v5, 0LL);
  if ( (v9 & 0x80u) != 0LL )
  {
    v171 = 0LL;
    GroupIndex = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    if ( ((v9 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && Resource->OwnerEntry.OwnerThread != v5 )
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v5, (ULONG_PTR)Resource->OwnerTable, 1uLL);
    v10 = Resource->OwnerEntry.TableSize & 7 | (8 * (Resource->OwnerEntry.TableSize >> 3) - 8);
    Resource->OwnerEntry.TableSize = v10;
    LODWORD(v162) = v10 >> 3;
    if ( !(v10 >> 3) )
    {
      TableSize = Resource->OwnerEntry.TableSize;
      OwnerThread = Resource->OwnerEntry.OwnerThread;
      if ( (TableSize & 2) != 0 )
      {
        OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      else if ( (OwnerThread & 3) != 0 )
      {
        goto LABEL_30;
      }
      if ( OwnerThread )
      {
        if ( (TableSize & 1) == 0 )
        {
LABEL_23:
          if ( (TableSize & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1508));
            TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFB;
            Resource->OwnerEntry.TableSize = TableSize;
          }
          if ( (TableSize & 2) != 0 )
          {
            if ( ObpTraceFlags )
              ObpPushStackInfo(OwnerThread - 48);
            v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(OwnerThread - 48), 0xFFFFFFFFFFFFFFFFuLL);
            v17 = v16 <= 1;
            v18 = v16 - 1;
            if ( v17 )
            {
              if ( *(_QWORD *)(OwnerThread - 40) )
                KeBugCheckEx(
                  0x18u,
                  ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(OwnerThread - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(OwnerThread - 48) >> 8)],
                  OwnerThread,
                  3uLL,
                  *(_QWORD *)(OwnerThread - 40));
              if ( v18 < 0 )
                KeBugCheckEx(0x18u, 0LL, OwnerThread, 4uLL, v18);
              ObpDeferObjectDeletion(OwnerThread - 48, v9, v8, v2);
            }
            Resource->OwnerEntry.TableSize &= ~2u;
          }
          goto LABEL_30;
        }
        v13 = 0;
        v14 = 0;
        v15 = 0LL;
        if ( PspAlwaysTrackIoBoosting )
        {
          v13 = 1;
          Pool2 = ExAllocatePool2(0x40uLL);
          v15 = (_QWORD *)Pool2;
          if ( Pool2 )
          {
            RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
            v15[12] = KeGetCurrentThread();
            v15[13] = 0LL;
          }
          v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(OwnerThread + 1552));
        }
        if ( *(_DWORD *)(OwnerThread + 1504) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1504));
          if ( !v13 )
          {
LABEL_22:
            TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFE;
            Resource->OwnerEntry.TableSize = TableSize;
            goto LABEL_23;
          }
          if ( *(_DWORD *)(OwnerThread + 1504) )
          {
            if ( v15 )
            {
              v151 = *(_QWORD **)(OwnerThread + 1544);
              if ( *v151 != OwnerThread + 1536 )
                goto LABEL_139;
              *v15 = OwnerThread + 1536;
              v15[1] = v151;
              *v151 = v15;
              *(_QWORD *)(OwnerThread + 1544) = v15;
            }
          }
          else
          {
            if ( v15 )
              ExFreePoolWithTag(v15, 0x736F6F42u);
            v152 = (__int64 **)(OwnerThread + 1520);
            while ( 1 )
            {
              v153 = *v152;
              if ( *v152 == (__int64 *)v152 )
                break;
              v157 = *v153;
              if ( (__int64 **)v153[1] != v152 || *(__int64 **)(v157 + 8) != v153 )
                goto LABEL_139;
              *v152 = (__int64 *)v157;
              *(_QWORD *)(v157 + 8) = v152;
              ExFreePoolWithTag(v153, 0x736F6F42u);
            }
            v154 = (__int64 **)(OwnerThread + 1536);
            while ( 1 )
            {
              v155 = *v154;
              if ( *v154 == (__int64 *)v154 )
                break;
              v156 = *v155;
              if ( (__int64 **)v155[1] != v154 || *(__int64 **)(v156 + 8) != v155 )
                goto LABEL_139;
              *v154 = (__int64 *)v156;
              *(_QWORD *)(v156 + 8) = v154;
              ExFreePoolWithTag(v155, 0x736F6F42u);
            }
          }
        }
        else if ( !v13 )
        {
          goto LABEL_22;
        }
        v148 = (volatile signed __int64 *)(OwnerThread + 1552);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64(v148, 0LL);
        else
          KiReleaseSpinLockInstrumented(v148, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        __writecr8(v14);
        goto LABEL_22;
      }
LABEL_30:
      Resource->OwnerEntry.OwnerThread = 0LL;
      v19 = 0LL;
      NumberOfSharedWaiters = Resource->NumberOfSharedWaiters;
      ContentionCount = Resource->ContentionCount;
      if ( NumberOfSharedWaiters )
      {
        SharedWaiters = (unsigned __int64 *)Resource->SharedWaiters;
        Resource->SharedWaiters = 0LL;
        Resource->Flag &= ~0x80u;
        v171 = SharedWaiters;
        Resource->NumberOfSharedWaiters = 0;
LABEL_32:
        v22 = NumberOfSharedWaiters + Resource->ActiveEntries - 1;
LABEL_33:
        Resource->ActiveEntries = v22;
        if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
          Resource->Flag &= 0xF9u;
        WaiterPriority = Resource->WaiterPriority;
        if ( v19 )
        {
          v23 = Resource->OwnerEntry.TableSize & 7;
          Resource->OwnerEntry.OwnerThread = v19;
          Resource->OwnerEntry.TableSize = v23 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v165, retaddr);
          goto LABEL_46;
        }
        _m_prefetchw(&v165);
        v24 = v165;
        if ( !v165 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)p_SpinLock,
                            0LL,
                            (signed __int64)&v165) == &v165 )
          {
LABEL_46:
            v32 = (unsigned __int8)v167;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v167);
            __writecr8(v32);
            v33 = v19 == 0;
            v34 = 1;
            v35 = 1;
            if ( !v33 )
              v34 = 3;
            if ( v171 )
            {
              v78 = (struct _KTHREAD *)KeGetCurrentIrql();
              v170 = v78;
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v78);
              v79 = v171;
              CurrentPrcb = KeGetCurrentPrcb();
              for ( i = *v171; ; i = *(_QWORD *)v168 )
              {
                v168 = i;
                v173 = v79;
                v161 = v79 + 3;
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v79 + 6);
                v81 = v79 + 3;
                *((_DWORD *)v79 + 7) = 1;
                v82 = (_QWORD *)v79[4];
                v83 = v81 + 2;
                v162 = v81 + 2;
                while ( v82 != v83 )
                {
                  v84 = (_QWORD *)*v82;
                  v85 = (__int64)v82;
                  v82 = v84;
                  v86 = *(_QWORD **)(v85 + 8);
                  if ( v84[1] != v85 || *v86 != v85 )
                    goto LABEL_139;
                  *v86 = v84;
                  v84[1] = v86;
                  v88 = *(_BYTE *)(v85 + 16);
                  if ( v88 == 1 )
                  {
                    v89 = KiTryUnwaitThread((__int64)CurrentPrcb, v85, *(unsigned __int16 *)(v85 + 18), 0LL);
                    v81 = v161;
                    v33 = v89 == 0;
                    v83 = v162;
                    if ( !v33 )
                    {
                      v33 = v161[1]-- == 1;
                      if ( v33 )
                        break;
                    }
                  }
                  else if ( v88 == 2 )
                  {
                    *(_BYTE *)(v85 + 17) = 5;
                    KiInsertQueueInternal(*(_QWORD *)(v85 + 24), (__int64 *)v85);
                    v81 = v161;
                    v33 = v161[1]-- == 1;
                    if ( v33 )
                      break;
                    v83 = v162;
                  }
                  else
                  {
                    if ( v88 == 4 )
                    {
                      *(_BYTE *)(v85 + 17) = 5;
                      v81[1] = 0;
                      KeInsertQueueDpc(*(PRKDPC *)(v85 + 24), v81, (PVOID)v85);
                    }
                    else
                    {
                      KiTryUnwaitThread((__int64)CurrentPrcb, v85, 256LL, 0LL);
                    }
                    v83 = v162;
                    v81 = v161;
                  }
                }
                _InterlockedAnd((volatile signed __int32 *)v173 + 6, 0xFFFFFF7F);
                if ( (unsigned __int64 *)v168 == v171 )
                  break;
                v79 = (unsigned __int64 *)v168;
              }
              v90 = CurrentPrcb;
              v91 = KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
              v92 = WaiterPriority;
              if ( WaiterPriority )
              {
                v35 = 2;
                if ( v91 > WaiterPriority )
                  v92 = v91;
              }
              if ( (v34 & 2) != 0 && v35 == 1 )
                v92 = 1;
              KiExitDispatcher(v90, 0LL, v35, v92, (unsigned __int8)v170);
            }
            v36 = 65570;
            LODWORD(v162) = 0;
            WaiterPriority = 65570;
LABEL_63:
            __incgsdword(0x906Cu);
            if ( !GroupIndex )
              goto LABEL_98;
            v174 = 0LL;
            v175 = 0LL;
            v176 = 0LL;
            v47 = KeGetCurrentPrcb();
            v168 = __rdtsc();
            ++v47->SynchCounters.ExEtwSynchTrackingNotificationsCount;
            Group = v47->Group;
            GroupIndex = v47->GroupIndex;
            if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
              goto LABEL_98;
            v48 = KeGetCurrentThread();
            v49 = v36 & 0xFFFF0000;
            v170 = v48;
            if ( (*(_DWORD *)(&v48[1].SwapListEntry + 1) & 1) != 0 )
              goto LABEL_98;
            Object = (signed __int64)v48[1].WaitBlock[0].Object;
            v51 = EtwpEthreadSyncTrackingSequence;
            LODWORD(v161) = EtwpEthreadSyncTrackingSequence;
            if ( !Object )
            {
              v52 = ExAllocatePool2(0x48uLL);
              v53 = v52;
              if ( !v52 )
                goto LABEL_98;
              v54 = v170;
              *(_QWORD *)(v52 + 16) = Resource;
              *(_DWORD *)(v52 + 28) = v49;
              *(_DWORD *)(v52 + 32) = 0;
              *(_DWORD *)(v52 + 40) = (_DWORD)v161;
              Object = _InterlockedCompareExchange64((volatile signed __int64 *)&v54[1].WaitBlock[0].Object, v52, 0LL);
              if ( !Object )
                goto LABEL_82;
              ExFreePoolWithTag((PVOID)v52, 0);
              v51 = (int)v161;
            }
            v55 = 0LL;
            for ( j = 0; j < 8; ++j )
            {
              v57 = *(_DWORD *)(Object + 28);
              if ( v57 == v49 && *(PERESOURCE *)(Object + 16) == Resource && *(_DWORD *)(Object + 40) == v51 )
                goto LABEL_81;
              if ( !v55 )
              {
                if ( v57 )
                {
                  if ( *(_DWORD *)(Object + 40) < v51 )
                  {
                    v55 = Object;
                    break;
                  }
                }
                else
                {
                  v55 = Object;
                }
              }
              Object += 64LL;
            }
            Object = v55;
            if ( v55 )
            {
              *(_QWORD *)(v55 + 16) = Resource;
              *(_DWORD *)(v55 + 28) = v49;
              *(_QWORD *)(v55 + 32) = 0LL;
              *(_QWORD *)v55 = 0LL;
              *(_QWORD *)(v55 + 8) = 0LL;
              *(_DWORD *)(v55 + 24) = 0;
              *(_DWORD *)(v55 + 40) = v51;
              *(_DWORD *)(v55 + 44) = 0;
            }
LABEL_81:
            v53 = Object;
            if ( !Object )
              goto LABEL_98;
LABEL_82:
            if ( *(_DWORD *)(v53 + 32) )
            {
              ++v47->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
              if ( *(_DWORD *)(v53 + 36) < (unsigned int)((_DWORD)v162 + 1) )
                *(_DWORD *)(v53 + 36) = (_DWORD)v162 + 1;
              if ( WaiterPriority == 65570 )
              {
                v58 = *(_QWORD *)(v53 + 8);
                if ( v58 > 2 && *(_WORD *)(v53 + 24) == Group && *(_BYTE *)(v53 + 26) == GroupIndex )
                  v59 = v168 - v58;
                else
                  v59 = 0LL;
                if ( *(_QWORD *)v53 <= 1uLL
                  || (v47->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                    + v47->SynchCounters.ExecutiveResourceReleaseSharedCount)
                   % EtwpExecutiveResourceContentionSampleRate )
                {
                  v60 = *(_DWORD *)(v53 + 44);
                  v61 = ContentionCount;
                  if ( (ContentionCount <= v60 || (ContentionCount - v60) % EtwpExecutiveResourceContentionSampleRate)
                    && (v47->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                      + v47->SynchCounters.ExecutiveResourceReleaseSharedCount)
                     % EtwpExecutiveResourceReleaseSampleRate )
                  {
                    goto LABEL_91;
                  }
                }
                else
                {
                  v61 = ContentionCount;
                }
                DWORD2(v176) = 65570;
                *(_QWORD *)&v176 = Resource;
                *(_QWORD *)&v174 = *(_QWORD *)(v53 + 8);
                DWORD2(v175) = *(_DWORD *)(v53 + 36);
                *((_QWORD *)&v174 + 1) = v59;
                *(_QWORD *)&v175 = *(_QWORD *)v53;
                HIDWORD(v176) = v61 - *(_DWORD *)(v53 + 44);
                v136 = &v174;
                HIDWORD(v175) = KeGetCurrentThread()[1].CurrentRunTime;
                goto LABEL_252;
              }
              if ( WaiterPriority == 65586 )
                *(_DWORD *)(v53 + 32) = 2;
              goto LABEL_98;
            }
LABEL_91:
            *(_DWORD *)(v53 + 28) = 0;
            goto LABEL_98;
          }
          v24 = KxWaitForLockChainValid(&v165);
        }
        v165 = 0LL;
        v25 = (unsigned __int8)p_SpinLock;
        if ( ((v25 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v24 + 8), (__int64)p_SpinLock)) & 4) != 0 )
        {
          _InterlockedOr(v158, 0);
          v26 = KeDisableInterrupts();
          KiHaltOnAddressWakeEntireList(
            v29,
            _InterlockedExchange64((volatile __int64 *)(v28 + 8 * v27 + 15861120), 0LL));
          if ( v26 )
          {
            v30 = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)v30->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v73 = *SchedulerAssist;
              do
              {
                v74 = v73;
                v73 = _InterlockedCompareExchange(SchedulerAssist, v73 & 0xFFDFFFFF, v73);
              }
              while ( v74 != v73 );
              if ( (v73 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v30);
            }
            _enable();
          }
        }
        goto LABEL_46;
      }
      if ( !Resource->NumberOfExclusiveWaiters )
      {
        Resource->ActiveCount = 0;
        Resource->Flag &= ~0x80u;
        v22 = 0;
        goto LABEL_33;
      }
      ExclusiveWaiters = Resource->ExclusiveWaiters;
      if ( !ExclusiveWaiters )
      {
LABEL_222:
        --Resource->NumberOfExclusiveWaiters;
        NumberOfSharedWaiters = 1;
        goto LABEL_32;
      }
      if ( *(PVOID *)ExclusiveWaiters == ExclusiveWaiters )
      {
        Resource->ExclusiveWaiters = 0LL;
      }
      else
      {
        Resource->ExclusiveWaiters = *(PVOID *)ExclusiveWaiters;
        v76 = *(_QWORD **)ExclusiveWaiters;
        v77 = (PVOID *)*((_QWORD *)ExclusiveWaiters + 1);
        if ( *(PVOID *)(*(_QWORD *)ExclusiveWaiters + 8LL) != ExclusiveWaiters || *v77 != ExclusiveWaiters )
          goto LABEL_139;
        *v77 = v76;
        v76[1] = v77;
      }
      v118 = v171;
      v19 = *((_QWORD *)ExclusiveWaiters + 2);
      if ( !v171 )
      {
        *((_QWORD *)ExclusiveWaiters + 1) = ExclusiveWaiters;
        *(_QWORD *)ExclusiveWaiters = ExclusiveWaiters;
        v171 = (unsigned __int64 *)ExclusiveWaiters;
        goto LABEL_222;
      }
      v137 = (unsigned __int64 **)v171[1];
      if ( *v137 == v171 )
      {
        *(_QWORD *)ExclusiveWaiters = v171;
        *((_QWORD *)ExclusiveWaiters + 1) = v137;
        *v137 = (unsigned __int64 *)ExclusiveWaiters;
        v118[1] = (unsigned __int64)ExclusiveWaiters;
        --Resource->NumberOfExclusiveWaiters;
        v171 = (unsigned __int64 *)ExclusiveWaiters;
        NumberOfSharedWaiters = 1;
        goto LABEL_32;
      }
LABEL_139:
      __fastfail(3u);
    }
    v36 = 65586;
    v37 = Resource->ContentionCount;
    WaiterPriority = 65586;
    ContentionCount = v37;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v165, retaddr);
      goto LABEL_60;
    }
    _m_prefetchw(&v165);
    v38 = v165;
    if ( !v165 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v165) == &v165 )
      {
LABEL_60:
        v46 = (unsigned __int8)v167;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v167);
        __writecr8(v46);
        goto LABEL_63;
      }
      v38 = KxWaitForLockChainValid(&v165);
    }
    v165 = 0LL;
    v39 = (unsigned __int8)p_SpinLock;
    if ( ((v39 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v38 + 8), (__int64)p_SpinLock)) & 4) != 0 )
    {
      _InterlockedOr(v158, 0);
      v40 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v43, _InterlockedExchange64((volatile __int64 *)(v42 + 8 * v41 + 15861120), 0LL));
      if ( v40 )
      {
        v44 = KeGetCurrentPrcb();
        v45 = (signed __int32 *)v44->SchedulerAssist;
        if ( v45 )
        {
          _m_prefetchw(v45);
          v70 = *v45;
          do
          {
            v71 = v70;
            v70 = _InterlockedCompareExchange(v45, v70 & 0xFFDFFFFF, v70);
          }
          while ( v71 != v70 );
          if ( (v70 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v44);
        }
        _enable();
      }
    }
    goto LABEL_60;
  }
  v172 = 0LL;
  v64 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  GroupIndex = v64;
  if ( (v5 & 3) != 0 )
    v65 = 0;
  else
    v65 = *(unsigned __int8 *)(v5 + 1120);
  p_OwnerEntry = &Resource->OwnerEntry;
  if ( Resource->OwnerEntry.OwnerThread != v5 )
  {
    v67 = Resource->OwnerEntry.OwnerThread != 0;
    if ( !v65
      || (v72 = Resource->OwnerTable) == 0LL
      || v65 >= v72->TableSize
      || (p_OwnerEntry = &v72[v65], p_OwnerEntry->OwnerThread != v5) )
    {
      OwnerTable = Resource->OwnerTable;
      v69 = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
      if ( OwnerTable )
      {
        v87 = &OwnerTable[OwnerTable->TableSize];
        p_OwnerEntry = OwnerTable + 1;
        if ( v67 < v69 )
        {
          while ( p_OwnerEntry->OwnerThread != v5 )
          {
            if ( !p_OwnerEntry->OwnerThread || (++v67, v67 != v69) )
            {
              if ( ++p_OwnerEntry != v87 )
                continue;
            }
            goto LABEL_145;
          }
          KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                      - LODWORD(Resource->OwnerTable)) >> 4;
          goto LABEL_159;
        }
LABEL_145:
        OwnerTable = Resource->OwnerTable;
      }
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v5, (ULONG_PTR)OwnerTable, 2uLL);
    }
  }
LABEL_159:
  v93 = p_OwnerEntry->TableSize & 7 | (8 * (p_OwnerEntry->TableSize >> 3) - 8);
  p_OwnerEntry->TableSize = v93;
  LODWORD(v162) = v93 >> 3;
  if ( v93 >> 3 )
  {
    v103 = 65618;
    v104 = Resource->ContentionCount;
    LODWORD(v161) = 65618;
    ContentionCount = v104;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v165, retaddr);
      goto LABEL_189;
    }
    _m_prefetchw(&v165);
    v105 = v165;
    if ( !v165 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v165) == &v165 )
      {
LABEL_189:
        v107 = (unsigned __int8)v167;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v167);
        __writecr8(v107);
        goto LABEL_192;
      }
      v105 = KxWaitForLockChainValid(&v165);
    }
    v165 = 0LL;
    v106 = (volatile signed __int64 *)p_SpinLock;
    if ( (((unsigned __int8)v106 ^ (unsigned __int8)_InterlockedExchange64(
                                                      (volatile __int64 *)(v105 + 8),
                                                      (__int64)p_SpinLock)) & 4) != 0 )
      KeWakeAddressAll(v105 + 8, (__int64)v106);
    goto LABEL_189;
  }
  ExpFreeOwnerEntry(p_OwnerEntry);
  v17 = Resource->ActiveEntries <= 1;
  v94 = 0LL;
  ContentionCount = Resource->ContentionCount;
  if ( !v17 )
  {
LABEL_163:
    v95 = 0;
    goto LABEL_164;
  }
  if ( Resource->NumberOfExclusiveWaiters )
  {
    v133 = Resource->ExclusiveWaiters;
    if ( v133 )
    {
      if ( *(PVOID *)v133 == v133 )
      {
        Resource->ExclusiveWaiters = 0LL;
      }
      else
      {
        Resource->ExclusiveWaiters = *(PVOID *)v133;
        v134 = *(_QWORD **)v133;
        v135 = (PVOID *)*((_QWORD *)v133 + 1);
        if ( *(PVOID *)(*(_QWORD *)v133 + 8LL) != v133 || *v135 != v133 )
          goto LABEL_139;
        *v135 = v134;
        v134[1] = v135;
      }
      v94 = *((_QWORD *)v133 + 2);
      *((_QWORD *)v133 + 1) = v133;
      *(_QWORD *)v133 = v133;
      v172 = (unsigned __int64 *)v133;
    }
    --Resource->NumberOfExclusiveWaiters;
    Resource->Flag |= 0x80u;
    v95 = 1;
  }
  else
  {
    v95 = Resource->NumberOfSharedWaiters;
    if ( !v95 )
      goto LABEL_163;
    v142 = (unsigned __int64 *)Resource->SharedWaiters;
    Resource->SharedWaiters = 0LL;
    v172 = v142;
    Resource->NumberOfSharedWaiters = 0;
  }
LABEL_164:
  v96 = Resource->ActiveEntries - 1;
  Resource->ActiveEntries = v96 + v95;
  if ( !(v96 + v95) )
    Resource->ActiveCount = 0;
  if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
    Resource->Flag &= 0xF9u;
  WaiterPriority = Resource->WaiterPriority;
  if ( v94 )
  {
    v97 = Resource->OwnerEntry.TableSize & 7;
    Resource->OwnerEntry.OwnerThread = v94;
    Resource->OwnerEntry.TableSize = v97 | 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&v165, retaddr);
    goto LABEL_177;
  }
  _m_prefetchw(&v165);
  v98 = v165;
  if ( v165 )
  {
LABEL_175:
    v165 = 0LL;
    v99 = (volatile signed __int64 *)p_SpinLock;
    if ( (((unsigned __int8)v99 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v98 + 8),
                                                     (__int64)p_SpinLock)) & 4) != 0 )
      KeWakeAddressAll(v98 + 8, (__int64)v99);
    goto LABEL_177;
  }
  if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v165) != &v165 )
  {
    v98 = KxWaitForLockChainValid(&v165);
    goto LABEL_175;
  }
LABEL_177:
  v100 = (unsigned __int8)v167;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v167);
  __writecr8(v100);
  v101 = 1;
  if ( v94 )
    v101 = 3;
  v102 = 1;
  if ( v172 )
  {
    v119 = (struct _KTHREAD *)KeGetCurrentIrql();
    v170 = v119;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v119);
    v120 = v172;
    CurrentPrcb = KeGetCurrentPrcb();
    for ( k = (unsigned __int64 *)*v172; ; k = (unsigned __int64 *)*v173 )
    {
      v173 = k;
      v168 = (unsigned __int64)v120;
      v161 = v120 + 3;
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v120 + 6);
      v122 = v120 + 3;
      *((_DWORD *)v120 + 7) = 1;
      v123 = (_QWORD *)v120[4];
      v124 = v122 + 2;
      v162 = v122 + 2;
      while ( v123 != v124 )
      {
        v125 = (_QWORD *)*v123;
        v126 = (__int64)v123;
        v123 = v125;
        v127 = *(_QWORD **)(v126 + 8);
        if ( v125[1] != v126 || *v127 != v126 )
          goto LABEL_139;
        *v127 = v125;
        v125[1] = v127;
        v128 = *(_BYTE *)(v126 + 16);
        if ( v128 == 1 )
        {
          v129 = KiTryUnwaitThread((__int64)CurrentPrcb, v126, *(unsigned __int16 *)(v126 + 18), 0LL);
          v122 = v161;
          v33 = v129 == 0;
          v124 = v162;
          if ( !v33 )
          {
            v33 = v161[1]-- == 1;
            if ( v33 )
              break;
          }
        }
        else if ( v128 == 2 )
        {
          *(_BYTE *)(v126 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v126 + 24), (__int64 *)v126);
          v122 = v161;
          v33 = v161[1]-- == 1;
          if ( v33 )
            break;
          v124 = v162;
        }
        else
        {
          if ( v128 == 4 )
          {
            *(_BYTE *)(v126 + 17) = 5;
            v122[1] = 0;
            KeInsertQueueDpc(*(PRKDPC *)(v126 + 24), v122, (PVOID)v126);
          }
          else
          {
            KiTryUnwaitThread((__int64)CurrentPrcb, v126, 256LL, 0LL);
          }
          v124 = v162;
          v122 = v161;
        }
      }
      _InterlockedAnd((volatile signed __int32 *)(v168 + 24), 0xFFFFFF7F);
      if ( v173 == v172 )
        break;
      v120 = v173;
    }
    v130 = CurrentPrcb;
    v131 = KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    v132 = WaiterPriority;
    if ( WaiterPriority )
    {
      v102 = 2;
      if ( v131 > WaiterPriority )
        v132 = v131;
    }
    if ( (v101 & 2) != 0 && v102 == 1 )
      v132 = 1;
    KiExitDispatcher(v130, 0LL, v102, v132, (unsigned __int8)v170);
    v64 = GroupIndex;
  }
  v103 = 65602;
  LODWORD(v162) = 0;
  LODWORD(v161) = 65602;
LABEL_192:
  __incgsdword(0x9070u);
  if ( !v64 )
    goto LABEL_98;
  v177 = 0LL;
  v178 = 0LL;
  v179 = 0LL;
  v108 = KeGetCurrentPrcb();
  v168 = __rdtsc();
  ++v108->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  Group = v108->Group;
  GroupIndex = v108->GroupIndex;
  if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
    goto LABEL_98;
  v109 = KeGetCurrentThread();
  v110 = v103 & 0xFFFF0000;
  v170 = v109;
  if ( (*(_DWORD *)(&v109[1].SwapListEntry + 1) & 1) != 0 )
    goto LABEL_98;
  v111 = (signed __int64)v109[1].WaitBlock[0].Object;
  v112 = EtwpEthreadSyncTrackingSequence;
  WaiterPriority = EtwpEthreadSyncTrackingSequence;
  if ( !v111 )
  {
    v113 = ExAllocatePool2(0x48uLL);
    v53 = v113;
    if ( !v113 )
      goto LABEL_98;
    v114 = v170;
    *(_QWORD *)(v113 + 16) = Resource;
    *(_DWORD *)(v113 + 28) = v110;
    *(_DWORD *)(v113 + 32) = 0;
    *(_DWORD *)(v113 + 40) = WaiterPriority;
    v111 = _InterlockedCompareExchange64((volatile signed __int64 *)&v114[1].WaitBlock[0].Object, v113, 0LL);
    if ( !v111 )
      goto LABEL_211;
    ExFreePoolWithTag((PVOID)v113, 0);
    v112 = WaiterPriority;
  }
  v115 = 0LL;
  for ( m = 0; m < 8; ++m )
  {
    v117 = *(_DWORD *)(v111 + 28);
    if ( v117 == v110 && *(PERESOURCE *)(v111 + 16) == Resource && *(_DWORD *)(v111 + 40) == v112 )
      goto LABEL_210;
    if ( !v115 )
    {
      if ( v117 )
      {
        if ( *(_DWORD *)(v111 + 40) < v112 )
        {
          v115 = v111;
          break;
        }
      }
      else
      {
        v115 = v111;
      }
    }
    v111 += 64LL;
  }
  v111 = v115;
  if ( v115 )
  {
    *(_QWORD *)(v115 + 16) = Resource;
    *(_DWORD *)(v115 + 28) = v110;
    *(_QWORD *)(v115 + 32) = 0LL;
    *(_QWORD *)v115 = 0LL;
    *(_QWORD *)(v115 + 8) = 0LL;
    *(_DWORD *)(v115 + 24) = 0;
    *(_DWORD *)(v115 + 40) = v112;
    *(_DWORD *)(v115 + 44) = 0;
  }
LABEL_210:
  v53 = v111;
  if ( !v111 )
    goto LABEL_98;
LABEL_211:
  if ( !*(_DWORD *)(v53 + 32) )
    goto LABEL_91;
  ++v108->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
  if ( *(_DWORD *)(v53 + 36) < (unsigned int)((_DWORD)v162 + 1) )
    *(_DWORD *)(v53 + 36) = (_DWORD)v162 + 1;
  if ( (_DWORD)v161 == 65602 )
  {
    v138 = *(_QWORD *)(v53 + 8);
    if ( v138 > 2 && *(_WORD *)(v53 + 24) == Group && *(_BYTE *)(v53 + 26) == GroupIndex )
      v139 = v168 - v138;
    else
      v139 = 0LL;
    if ( *(_QWORD *)v53 <= 1uLL
      || (v108->SynchCounters.ExecutiveResourceReleaseExclusiveCount
        + v108->SynchCounters.ExecutiveResourceReleaseSharedCount)
       % EtwpExecutiveResourceContentionSampleRate )
    {
      v140 = *(_DWORD *)(v53 + 44);
      v141 = ContentionCount;
      if ( (ContentionCount <= v140 || (ContentionCount - v140) % EtwpExecutiveResourceContentionSampleRate)
        && (v108->SynchCounters.ExecutiveResourceReleaseExclusiveCount
          + v108->SynchCounters.ExecutiveResourceReleaseSharedCount)
         % EtwpExecutiveResourceReleaseSampleRate )
      {
        goto LABEL_91;
      }
    }
    else
    {
      v141 = ContentionCount;
    }
    DWORD2(v179) = 65602;
    *(_QWORD *)&v179 = Resource;
    *(_QWORD *)&v177 = *(_QWORD *)(v53 + 8);
    DWORD2(v178) = *(_DWORD *)(v53 + 36);
    *((_QWORD *)&v177 + 1) = v139;
    *(_QWORD *)&v178 = *(_QWORD *)v53;
    HIDWORD(v179) = v141 - *(_DWORD *)(v53 + 44);
    v136 = &v177;
    HIDWORD(v178) = KeGetCurrentThread()[1].CurrentRunTime;
LABEL_252:
    v180[0] = v136;
    v180[1] = 48LL;
    EtwTraceKernelEvent((int)v180, 1, 0x20020000u, 1323, 23074818);
    goto LABEL_91;
  }
  if ( (_DWORD)v161 == 65618 )
    *(_DWORD *)(v53 + 32) = 2;
LABEL_98:
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
