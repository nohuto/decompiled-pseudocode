/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x140342300
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x140259F30 (SepMandatoryIntegrityCheck.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140343740 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140343AD0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepAcquireOrderedReadLocks @ 0x140343E00 (SepAcquireOrderedReadLocks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1403440B0 (SepCanTokenMatchAllPackageSid.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x140277840 (ExpWaitForResource.c)
 *     ExpApplyPrewaitBoost @ 0x140277950 (ExpApplyPrewaitBoost.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402788E0 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     ExpGetThreadResourceHint @ 0x140343720 (ExpGetThreadResourceHint.c)
 *     ExpExpandResourceOwnerTable @ 0x1403E912C (ExpExpandResourceOwnerTable.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2, unsigned __int64 a3)
{
  __int64 CurrentThread; // r14
  bool v6; // r15
  volatile __int64 *v7; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r11
  unsigned int ThreadResourceHint; // eax
  int v12; // r9d
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r10
  unsigned __int64 v16; // rax
  int v17; // eax
  unsigned __int8 v18; // si
  int v19; // eax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *v21; // r15
  unsigned __int64 v22; // r12
  struct _KTHREAD *v23; // r14
  int v24; // ecx
  signed __int64 Object; // rdi
  int v26; // r13d
  signed __int64 Pool2; // rax
  signed __int64 v28; // r8
  signed __int64 v29; // rax
  unsigned int i; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  __int64 Next; // rax
  unsigned __int8 Lock; // cl
  bool v36; // di
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // ecx
  int v46; // eax
  unsigned __int64 v47; // rdi
  struct _KPRCB *v48; // rsi
  unsigned __int64 v49; // r8
  struct _KTHREAD *v50; // r14
  __int16 v51; // r13
  unsigned __int8 v52; // r12
  int v53; // ecx
  signed __int64 v54; // rdi
  int v55; // r15d
  signed __int64 v56; // rax
  signed __int64 v57; // rcx
  signed __int64 v58; // rax
  unsigned int k; // ecx
  int v60; // edx
  int v61; // eax
  __int64 v62; // rax
  unsigned __int8 v63; // cl
  bool v64; // di
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  struct _KPRCB *v68; // rcx
  signed __int32 *v69; // r8
  unsigned int v70; // esi
  unsigned int v71; // esi
  unsigned __int64 v72; // rdi
  struct _KPRCB *v73; // r13
  int v74; // r12d
  __int16 v75; // ax
  struct _KTHREAD *v76; // r14
  signed __int64 v77; // rdi
  int v78; // r15d
  signed __int64 v79; // rax
  signed __int64 v80; // rcx
  unsigned int v81; // ecx
  signed __int64 v82; // rax
  int v83; // edx
  signed __int64 v84; // rdx
  int v85; // eax
  unsigned int v86; // esi
  __int16 Group; // ax
  struct _KTHREAD *v88; // r14
  signed __int64 v89; // rax
  unsigned int j; // edx
  int v91; // ecx
  __int64 v92; // rax
  unsigned __int64 *volatile v93; // rdx
  signed __int32 v94; // eax
  signed __int32 v95; // ett
  signed __int32 v96; // eax
  signed __int32 v97; // ett
  signed __int64 v98; // rax
  signed __int64 v99; // rdi
  signed __int64 v100; // rcx
  int v101; // eax
  unsigned int v102; // r12d
  __int16 v103; // ax
  int v104; // edx
  int v105; // ecx
  __int64 v106; // rax
  int v107; // eax
  int v108; // esi
  unsigned __int8 v109; // r15
  _QWORD *v110; // rdx
  __int64 v111; // rdi
  unsigned __int64 v112; // rcx
  __int64 v113; // rdi
  unsigned __int64 v114; // rdx
  struct _KPRCB *v115; // r13
  unsigned __int64 v116; // r14
  struct _KTHREAD *v117; // rsi
  unsigned __int8 v118; // r12
  int v119; // ecx
  signed __int64 v120; // rdi
  int v121; // r15d
  signed __int64 v122; // rax
  signed __int64 v123; // rcx
  signed __int64 v124; // rax
  unsigned int n; // edx
  int v126; // ecx
  int v127; // eax
  __int64 v128; // rax
  __int64 v129; // r8
  unsigned __int8 v130; // r15
  struct _KDPC *v131; // r13
  int v132; // eax
  __int64 v133; // rax
  struct _KPRCB *v134; // rsi
  unsigned __int64 v135; // r13
  __int16 v136; // cx
  struct _KTHREAD *v137; // r15
  int v138; // r12d
  signed __int64 v139; // rax
  unsigned int m; // edx
  int v141; // ecx
  _QWORD *v142; // rcx
  signed __int32 v144[8]; // [rsp+0h] [rbp-99h] BYREF
  int v145; // [rsp+20h] [rbp-79h]
  char GroupIndex; // [rsp+24h] [rbp-75h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-71h] BYREF
  int v148; // [rsp+40h] [rbp-59h]
  __int128 v149; // [rsp+48h] [rbp-51h] BYREF
  __int128 v150; // [rsp+58h] [rbp-41h]
  __int128 v151; // [rsp+68h] [rbp-31h] BYREF
  __int64 v152; // [rsp+78h] [rbp-21h]
  unsigned __int64 v153; // [rsp+80h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE v154; // [rsp+88h] [rbp-11h] BYREF
  __int128 v155; // [rsp+A0h] [rbp+7h]
  __int128 v156; // [rsp+B0h] [rbp+17h]
  __int128 v157; // [rsp+C0h] [rbp+27h]
  __int64 retaddr; // [rsp+F8h] [rbp+5Fh]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v152 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  CurrentThread = (__int64)KeGetCurrentThread();
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x908Cu);
  v7 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  GroupIndex = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = _InterlockedExchange64(v7, (__int64)&LockHandle);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)v9);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v7);
  }
LABEL_6:
  LOWORD(v10) = 1;
  while ( 1 )
  {
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = v10;
      *(_DWORD *)(a1 + 64) = 1;
      v18 = 1;
      v19 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v19 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
        goto LABEL_22;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_22;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
      if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                       (volatile __int64 *)(Next + 8),
                                       (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      {
        _InterlockedOr(v144, 0);
        v36 = KeDisableInterrupts();
        KiHaltOnAddressWakeEntireList(v39, _InterlockedExchange64((volatile __int64 *)(v38 + 8 * v37), 0LL));
        if ( v36 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v94 = *SchedulerAssist;
            do
            {
              v95 = v94;
              v94 = _InterlockedCompareExchange(SchedulerAssist, v94 & 0xFFDFFFFF, v94);
            }
            while ( v95 != v94 );
            if ( (v94 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
      }
LABEL_22:
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
      __writecr8(OldIrql);
      __incgsdword(0x9094u);
      __incgsdword(0x9064u);
      if ( !v6 )
        return v18;
      v148 = *(_DWORD *)(a1 + 68);
      v145 = 0;
      v21 = KeGetCurrentPrcb();
      v22 = __rdtsc();
      ++v21->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      v23 = KeGetCurrentThread();
      LOWORD(v145) = v21->Group;
      GroupIndex = v21->GroupIndex;
      v24 = *((_DWORD *)&v23[1].SwapListEntry + 2);
      BYTE2(v145) = GroupIndex;
      if ( (v24 & 1) != 0 )
        return v18;
      Object = (signed __int64)v23[1].WaitBlock[0].Object;
      v26 = EtwpEthreadSyncTrackingSequence;
      if ( !Object )
      {
        Pool2 = ExAllocatePool2(0x48uLL);
        v28 = Pool2;
        if ( !Pool2 )
          return v18;
        *(_QWORD *)(Pool2 + 16) = a1;
        *(_QWORD *)(Pool2 + 28) = 0x10000LL;
        *(_DWORD *)(Pool2 + 40) = v26;
        Object = _InterlockedCompareExchange64((volatile signed __int64 *)&v23[1].WaitBlock[0].Object, Pool2, 0LL);
        if ( !Object )
          goto LABEL_42;
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      v29 = 0LL;
      for ( i = 0; i < 8; ++i )
      {
        v31 = *(_DWORD *)(Object + 28);
        if ( v31 == 0x10000 && *(_QWORD *)(Object + 16) == a1 && *(_DWORD *)(Object + 40) == v26 )
          goto LABEL_41;
        if ( !v29 )
        {
          if ( v31 )
          {
            if ( *(_DWORD *)(Object + 40) < v26 )
            {
              v29 = Object;
              break;
            }
          }
          else
          {
            v29 = Object;
          }
        }
        Object += 64LL;
      }
      Object = v29;
      if ( v29 )
      {
        *(_QWORD *)(v29 + 16) = a1;
        *(_QWORD *)(v29 + 28) = 0x10000LL;
        *(_DWORD *)(v29 + 36) = 0;
        *(_QWORD *)v29 = 0LL;
        *(_QWORD *)(v29 + 8) = 0LL;
        *(_DWORD *)(v29 + 24) = 0;
        *(_DWORD *)(v29 + 40) = v26;
        *(_DWORD *)(v29 + 44) = 0;
      }
LABEL_41:
      v28 = Object;
      if ( !Object )
        return v18;
LABEL_42:
      ++v21->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
      v32 = *(_DWORD *)(v28 + 32);
      *(_QWORD *)(v28 + 8) = v22;
      if ( v32 == 4 )
      {
        if ( *(_WORD *)(v28 + 24) == (_WORD)v145 && *(_BYTE *)(v28 + 26) == GroupIndex )
          *(_QWORD *)v28 = v22 - *(_QWORD *)v28;
        else
          *(_QWORD *)v28 = 1LL;
      }
      else
      {
        *(_QWORD *)v28 = 0LL;
      }
      v33 = v145;
      *(_DWORD *)(v28 + 32) = 1;
      *(_DWORD *)(v28 + 36) = 1;
      *(_DWORD *)(v28 + 44) = v148;
      *(_DWORD *)(v28 + 24) = v33;
      return v18;
    }
    if ( *(char *)(a1 + 26) < 0 )
    {
      if ( *(_QWORD *)(a1 + 48) == CurrentThread )
      {
        v86 = (*(_DWORD *)(a1 + 56) + 8) ^ ((unsigned __int8)*(_DWORD *)(a1 + 56) ^ (unsigned __int8)(*(_DWORD *)(a1 + 56) + 8)) & 7;
        *(_DWORD *)(a1 + 56) = v86;
        v71 = v86 >> 3;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x9090u);
        __incgsdword(0x9064u);
        if ( !v6 )
          return 1;
        v73 = KeGetCurrentPrcb();
        v74 = *(_DWORD *)(a1 + 68);
        HIBYTE(v145) = 0;
        Group = v73->Group;
        ++v73->SynchCounters.ExEtwSynchTrackingNotificationsCount;
        v88 = KeGetCurrentThread();
        LOWORD(v145) = Group;
        BYTE2(v145) = v73->GroupIndex;
        if ( (*(_DWORD *)(&v88[1].SwapListEntry + 1) & 1) != 0 )
          return 1;
        v77 = (signed __int64)v88[1].WaitBlock[0].Object;
        v78 = EtwpEthreadSyncTrackingSequence;
        if ( !v77 )
        {
          v89 = ExAllocatePool2(0x48uLL);
          v80 = v89;
          if ( !v89 )
            return 1;
          *(_QWORD *)(v89 + 16) = a1;
          *(_DWORD *)(v89 + 28) = 0x10000;
          *(_DWORD *)(v89 + 32) = 0;
          *(_DWORD *)(v89 + 40) = v78;
          v77 = _InterlockedCompareExchange64((volatile signed __int64 *)&v88[1].WaitBlock[0].Object, v89, 0LL);
          if ( !v77 )
          {
            v84 = v89;
            goto LABEL_144;
          }
          ExFreePoolWithTag((PVOID)v89, 0);
        }
        v82 = 0LL;
        for ( j = 0; j < 8; ++j )
        {
          v91 = *(_DWORD *)(v77 + 28);
          if ( v91 == 0x10000 && *(_QWORD *)(v77 + 16) == a1 && *(_DWORD *)(v77 + 40) == v78 )
            goto LABEL_143;
          if ( !v82 )
          {
            if ( v91 )
            {
              if ( *(_DWORD *)(v77 + 40) < v78 )
              {
                v82 = v77;
                break;
              }
            }
            else
            {
              v82 = v77;
            }
          }
          v77 += 64LL;
        }
        v77 = v82;
        if ( v82 )
        {
          *(_DWORD *)(v82 + 36) = 0;
          *(_QWORD *)v82 = 0LL;
          *(_QWORD *)(v82 + 8) = 0LL;
          *(_DWORD *)(v82 + 24) = 0;
          *(_DWORD *)(v82 + 44) = 0;
          goto LABEL_142;
        }
LABEL_143:
        v80 = v77;
        v84 = v77;
        if ( v77 )
          goto LABEL_144;
        return 1;
      }
      v43 = *(_QWORD *)(a1 + 16);
      if ( v43 )
      {
        v44 = v43 + 16LL * *(unsigned int *)(v43 + 8);
        v9 = v43 + 16;
        while ( *(_QWORD *)v9 )
        {
          v9 += 16LL;
          if ( v9 == v44 )
            goto LABEL_116;
        }
        v17 = v9;
        goto LABEL_72;
      }
LABEL_116:
      ExpExpandResourceOwnerTable(a1, &LockHandle, a3);
      goto LABEL_6;
    }
    ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v9, a3, *(unsigned int *)(a1 + 76));
    v9 = a1 + 48;
    a3 = ThreadResourceHint;
    v13 = *(_QWORD *)(a1 + 48);
    if ( v13 != CurrentThread )
    {
      v14 = 0LL;
      v15 = 0LL;
      if ( v13 )
      {
        v14 = v10;
      }
      else if ( !v12 )
      {
        v15 = a1 + 48;
      }
      if ( !(_DWORD)a3 )
        break;
      v42 = *(_QWORD *)(a1 + 16);
      if ( !v42 )
        break;
      if ( (unsigned int)a3 >= *(_DWORD *)(v42 + 8) )
        break;
      v9 = v42 + 16 * a3;
      if ( *(_QWORD *)v9 != CurrentThread )
        break;
    }
LABEL_152:
    if ( v9 )
      goto LABEL_73;
  }
  v9 = *(_QWORD *)(a1 + 16);
  a3 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
  if ( v9 )
  {
    v16 = v9 + 16LL * *(unsigned int *)(v9 + 8);
    v9 += 16LL;
    if ( v14 < a3 )
    {
      do
      {
        if ( *(_QWORD *)v9 == CurrentThread )
        {
          KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v9 - *(_DWORD *)(a1 + 16)) >> 4;
          goto LABEL_152;
        }
        if ( *(_QWORD *)v9 )
        {
          if ( ++v14 == a3 )
          {
            v9 += 16LL;
            break;
          }
        }
        else if ( !v15 )
        {
          v15 = v9;
        }
        v9 += 16LL;
      }
      while ( v9 != v16 );
    }
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v15 )
  {
    if ( v9 >= v16 )
      goto LABEL_116;
    v15 = v9;
    if ( !v9 )
      goto LABEL_116;
  }
  v17 = v15;
  v9 = v15;
LABEL_72:
  KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v17 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_73:
  if ( *(_QWORD *)v9 == CurrentThread )
  {
    v70 = (*(_DWORD *)(v9 + 8) + 8) ^ ((unsigned __int8)*(_DWORD *)(v9 + 8) ^ (unsigned __int8)(*(_DWORD *)(v9 + 8) + 8)) & 7;
    *(_DWORD *)(v9 + 8) = v70;
    v71 = v70 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_123:
      v72 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
      __writecr8(v72);
      __incgsdword(0x9098u);
      __incgsdword(0x9064u);
      if ( !v6 )
        return 1;
      v73 = KeGetCurrentPrcb();
      v74 = *(_DWORD *)(a1 + 68);
      HIBYTE(v145) = 0;
      v75 = v73->Group;
      ++v73->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      v76 = KeGetCurrentThread();
      LOWORD(v145) = v75;
      BYTE2(v145) = v73->GroupIndex;
      if ( (*(_DWORD *)(&v76[1].SwapListEntry + 1) & 1) != 0 )
        return 1;
      v77 = (signed __int64)v76[1].WaitBlock[0].Object;
      v78 = EtwpEthreadSyncTrackingSequence;
      if ( v77 )
      {
LABEL_131:
        v81 = 0;
        v82 = 0LL;
        while ( v81 < 8 )
        {
          v83 = *(_DWORD *)(v77 + 28);
          if ( v83 == 0x10000 && *(_QWORD *)(v77 + 16) == a1 && *(_DWORD *)(v77 + 40) == v78 )
            goto LABEL_143;
          if ( !v82 )
          {
            if ( v83 )
            {
              if ( *(_DWORD *)(v77 + 40) < v78 )
              {
                v82 = v77;
                break;
              }
            }
            else
            {
              v82 = v77;
            }
          }
          v77 += 64LL;
          ++v81;
        }
        v77 = v82;
        if ( v82 )
        {
          *(_DWORD *)(v82 + 36) = 0;
          *(_QWORD *)v82 = 0LL;
          *(_QWORD *)(v82 + 8) = 0LL;
          *(_DWORD *)(v82 + 24) = 0;
          *(_DWORD *)(v82 + 44) = 0;
LABEL_142:
          *(_DWORD *)(v82 + 40) = v78;
          *(_QWORD *)(v82 + 28) = 0x10000LL;
          *(_QWORD *)(v82 + 16) = a1;
          goto LABEL_143;
        }
        goto LABEL_143;
      }
      v79 = ExAllocatePool2(0x48uLL);
      v80 = v79;
      if ( !v79 )
        return 1;
      *(_QWORD *)(v79 + 16) = a1;
      *(_DWORD *)(v79 + 28) = 0x10000;
      *(_DWORD *)(v79 + 32) = 0;
      *(_DWORD *)(v79 + 40) = v78;
      v77 = _InterlockedCompareExchange64((volatile signed __int64 *)&v76[1].WaitBlock[0].Object, v79, 0LL);
      if ( v77 )
      {
        ExFreePoolWithTag((PVOID)v79, 0);
        goto LABEL_131;
      }
      v84 = v79;
LABEL_144:
      ++v73->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
      if ( *(_DWORD *)(v80 + 32) )
      {
        if ( *(_DWORD *)(v84 + 36) >= v71 )
          goto LABEL_147;
      }
      else
      {
        *(_QWORD *)(v80 + 8) = 2LL;
        v85 = v145;
        *(_QWORD *)v80 = 1LL;
        *(_DWORD *)(v80 + 24) = v85;
        *(_DWORD *)(v80 + 44) = v74;
      }
      *(_DWORD *)(v84 + 36) = v71;
LABEL_147:
      *(_DWORD *)(v80 + 32) = 1;
      return 1;
    }
    _m_prefetchw(&LockHandle);
    v92 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_123;
      v92 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    v93 = LockHandle.LockQueue.Lock;
    if ( (((unsigned __int8)v93 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v92 + 8),
                                                     (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      KeWakeAddressAll(v92 + 8, (__int64)v93);
    goto LABEL_123;
  }
  v45 = *(_DWORD *)(a1 + 64);
  if ( !v45 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = v10;
    *(_DWORD *)(a1 + 64) = v45 + 1;
    v46 = *(_DWORD *)(v9 + 8) & 7;
    *(_QWORD *)v9 = CurrentThread;
    *(_DWORD *)(v9 + 8) = v46 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
      goto LABEL_80;
    }
    _m_prefetchw(&LockHandle);
    v62 = (__int64)LockHandle.LockQueue.Next;
    if ( LockHandle.LockQueue.Next )
    {
LABEL_111:
      LockHandle.LockQueue.Next = 0LL;
      v63 = (unsigned __int8)LockHandle.LockQueue.Lock;
      if ( ((v63 ^ (unsigned __int8)_InterlockedExchange64(
                                      (volatile __int64 *)(v62 + 8),
                                      (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      {
        _InterlockedOr(v144, 0);
        v64 = KeDisableInterrupts();
        KiHaltOnAddressWakeEntireList(v67, _InterlockedExchange64((volatile __int64 *)(v66 + 8 * v65), 0LL));
        if ( v64 )
        {
          v68 = KeGetCurrentPrcb();
          v69 = (signed __int32 *)v68->SchedulerAssist;
          if ( v69 )
          {
            _m_prefetchw(v69);
            v96 = *v69;
            do
            {
              v97 = v96;
              v96 = _InterlockedCompareExchange(v69, v96 & 0xFFDFFFFF, v96);
            }
            while ( v97 != v96 );
            if ( (v96 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v68);
          }
          _enable();
        }
      }
    }
    else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                              0LL,
                                              (signed __int64)&LockHandle) != &LockHandle )
    {
      v62 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      goto LABEL_111;
    }
LABEL_80:
    v47 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
    __writecr8(v47);
    __incgsdword(0x9094u);
    __incgsdword(0x9064u);
    if ( v6 )
    {
      v148 = *(_DWORD *)(a1 + 68);
      v145 = 0;
      v48 = KeGetCurrentPrcb();
      v49 = __rdtsc();
      v153 = v49;
      ++v48->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      v50 = KeGetCurrentThread();
      v51 = v48->Group;
      v52 = v48->GroupIndex;
      LOWORD(v145) = v51;
      v53 = *((_DWORD *)&v50[1].SwapListEntry + 2);
      BYTE2(v145) = v52;
      if ( (v53 & 1) == 0 )
      {
        v54 = (signed __int64)v50[1].WaitBlock[0].Object;
        v55 = EtwpEthreadSyncTrackingSequence;
        if ( v54 )
        {
LABEL_88:
          v58 = 0LL;
          for ( k = 0; k < 8; ++k )
          {
            v60 = *(_DWORD *)(v54 + 28);
            if ( v60 == 0x10000 && *(_QWORD *)(v54 + 16) == a1 && *(_DWORD *)(v54 + 40) == v55 )
              goto LABEL_99;
            if ( !v58 )
            {
              if ( v60 )
              {
                if ( *(_DWORD *)(v54 + 40) < v55 )
                {
                  v58 = v54;
                  break;
                }
              }
              else
              {
                v58 = v54;
              }
            }
            v54 += 64LL;
          }
          v54 = v58;
          if ( v58 )
          {
            *(_QWORD *)(v58 + 16) = a1;
            *(_QWORD *)(v58 + 28) = 0x10000LL;
            *(_DWORD *)(v58 + 36) = 0;
            *(_QWORD *)v58 = 0LL;
            *(_QWORD *)(v58 + 8) = 0LL;
            *(_DWORD *)(v58 + 24) = 0;
            *(_DWORD *)(v58 + 40) = v55;
            *(_DWORD *)(v58 + 44) = 0;
          }
LABEL_99:
          v57 = v54;
          if ( v54 )
            goto LABEL_100;
        }
        else
        {
          v56 = ExAllocatePool2(0x48uLL);
          v57 = v56;
          if ( v56 )
          {
            *(_QWORD *)(v56 + 16) = a1;
            *(_QWORD *)(v56 + 28) = 0x10000LL;
            *(_DWORD *)(v56 + 40) = v55;
            v54 = _InterlockedCompareExchange64((volatile signed __int64 *)&v50[1].WaitBlock[0].Object, v56, 0LL);
            if ( v54 )
            {
              ExFreePoolWithTag((PVOID)v56, 0);
              v49 = v153;
              goto LABEL_88;
            }
            v49 = v153;
LABEL_100:
            ++v48->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            v61 = *(_DWORD *)(v57 + 32);
            *(_QWORD *)(v57 + 8) = v49;
            if ( v61 == 4 )
            {
              if ( *(_WORD *)(v57 + 24) == v51 && *(_BYTE *)(v57 + 26) == v52 )
                *(_QWORD *)v57 = v49 - *(_QWORD *)v57;
              else
                *(_QWORD *)v57 = 1LL;
            }
            else
            {
              *(_QWORD *)v57 = 0LL;
            }
            *(_DWORD *)(v57 + 24) = v145;
            *(_DWORD *)(v57 + 44) = v148;
            *(_DWORD *)(v57 + 32) = 1;
            *(_DWORD *)(v57 + 36) = 1;
          }
        }
      }
    }
    return 1;
  }
  if ( a2 )
  {
    v132 = *(_DWORD *)(v9 + 8);
    *(_QWORD *)v9 = CurrentThread;
    *(_DWORD *)(v9 + 8) = v132 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v151 + 1) = &v151;
    *(_QWORD *)&v151 = &v151;
    v133 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)&v149 + 1) = 0LL;
    *((_QWORD *)&v150 + 1) = 393217LL;
    *(_QWORD *)&v150 = CurrentThread;
    v152 = 0LL;
    if ( v133 )
    {
      v142 = *(_QWORD **)(v133 + 8);
      if ( *v142 != v133 )
        __fastfail(3u);
      *((_QWORD *)&v149 + 1) = *(_QWORD *)(v133 + 8);
      *(_QWORD *)&v149 = v133;
      *v142 = &v149;
      *(_QWORD *)(v133 + 8) = &v149;
    }
    else
    {
      *((_QWORD *)&v149 + 1) = &v149;
      *(_QWORD *)&v149 = &v149;
    }
    *(_QWORD *)(a1 + 32) = &v149;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x909Cu);
    if ( v6 )
    {
      v155 = 0LL;
      v156 = 0LL;
      v157 = 0LL;
      v134 = KeGetCurrentPrcb();
      HIBYTE(v145) = 0;
      v135 = __rdtsc();
      v136 = v134->Group;
      ++v134->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      v137 = KeGetCurrentThread();
      LOWORD(v145) = v136;
      BYTE2(v145) = v134->GroupIndex;
      if ( (*(_DWORD *)(&v137[1].SwapListEntry + 1) & 1) == 0 )
      {
        v99 = (signed __int64)v137[1].WaitBlock[0].Object;
        v138 = EtwpEthreadSyncTrackingSequence;
        if ( v99 )
        {
LABEL_296:
          v98 = 0LL;
          for ( m = 0; m < 8; ++m )
          {
            v141 = *(_DWORD *)(v99 + 28);
            if ( v141 == 0x10000 && *(_QWORD *)(v99 + 16) == a1 && *(_DWORD *)(v99 + 40) == v138 )
              goto LABEL_200;
            if ( !v98 )
            {
              if ( v141 )
              {
                if ( *(_DWORD *)(v99 + 40) < v138 )
                {
                  v98 = v99;
                  break;
                }
              }
              else
              {
                v98 = v99;
              }
            }
            v99 += 64LL;
          }
          v99 = v98;
          if ( v98 )
          {
            *(_QWORD *)(v98 + 16) = a1;
            *(_DWORD *)(v98 + 36) = 0;
            *(_QWORD *)v98 = 0LL;
            *(_QWORD *)(v98 + 8) = 0LL;
            *(_DWORD *)(v98 + 24) = 0;
            *(_DWORD *)(v98 + 44) = 0;
            *(_QWORD *)(v98 + 28) = 0x10000LL;
            *(_DWORD *)(v98 + 40) = v138;
          }
LABEL_200:
          v100 = v99;
          if ( v99 )
            goto LABEL_201;
        }
        else
        {
          v139 = ExAllocatePool2(0x48uLL);
          v100 = v139;
          if ( v139 )
          {
            *(_QWORD *)(v139 + 16) = a1;
            *(_DWORD *)(v139 + 28) = 0x10000;
            *(_DWORD *)(v139 + 32) = 0;
            *(_DWORD *)(v139 + 40) = v138;
            v99 = _InterlockedCompareExchange64((volatile signed __int64 *)&v137[1].WaitBlock[0].Object, v139, 0LL);
            if ( v99 )
            {
              ExFreePoolWithTag((PVOID)v139, 0);
              goto LABEL_296;
            }
LABEL_201:
            ++v134->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            v101 = v145;
            *(_DWORD *)(v100 + 32) = 4;
            *(_QWORD *)v100 = v135;
            *(_DWORD *)(v100 + 24) = v101;
          }
        }
      }
    }
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource((_DWORD *)a1, (__int64)&v149, 0x10244u);
    if ( (CurrentThread & 3) != 0 )
      v102 = 0;
    else
      v102 = *(unsigned __int8 *)(CurrentThread + 1120);
    v103 = *(_WORD *)(a1 + 26);
    memset(&v154, 0, sizeof(v154));
    if ( (v103 & 8) == 0 )
    {
      v104 = 0;
      if ( (v103 & 4) != 0 )
      {
        v105 = (*(_DWORD *)(CurrentThread + 1440) >> 9) & 7;
        v106 = *(_QWORD *)(*(_QWORD *)(CurrentThread + 544) + 672LL);
        if ( v106 )
        {
          v107 = *(_DWORD *)(v106 + 1084);
          if ( v105 >= v107 )
            v105 = v107;
        }
        if ( v105 < 2 )
          v104 = 4;
      }
      v108 = v104 | 2;
      if ( (*(_BYTE *)(a1 + 26) & 2) == 0 )
        v108 = v104;
      if ( v108 )
      {
        v154.LockQueue.Next = 0LL;
        v154.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
        v109 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v109, 2LL);
        v154.OldIrql = v109;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v110 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&v154);
          if ( v110 )
            KxWaitForLockOwnerShip((__int64)&v154, v110);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)&v154, (volatile __int64 *)(a1 + 96));
        }
        v111 = a1 + 48;
        if ( *(_QWORD *)(a1 + 48) != CurrentThread )
        {
          v112 = *(_QWORD *)(a1 + 48) != 0LL;
          if ( !v102
            || (v128 = *(_QWORD *)(a1 + 16)) == 0
            || v102 >= *(_DWORD *)(v128 + 8)
            || (v111 = v128 + 16LL * v102, *(_QWORD *)v111 != CurrentThread) )
          {
            v113 = *(_QWORD *)(a1 + 16);
            v114 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
            if ( v113 && (v129 = v113 + 16LL * *(unsigned int *)(v113 + 8), v111 = v113 + 16, v112 < v114) )
            {
              while ( *(_QWORD *)v111 != CurrentThread )
              {
                if ( !*(_QWORD *)v111 || (++v112, v112 != v114) )
                {
                  v111 += 16LL;
                  if ( v111 != v129 )
                    continue;
                }
                goto LABEL_222;
              }
              KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v111 - *(_DWORD *)(a1 + 16)) >> 4;
            }
            else
            {
LABEL_222:
              v111 = 0LL;
            }
          }
        }
        if ( (v108 & 4) != 0 )
        {
          if ( (*(_DWORD *)(v111 + 8) & 1) != 0 )
          {
            v108 &= ~4u;
          }
          else
          {
            PsBoostThreadIoEx(CurrentThread, 0, 0LL, 0LL);
            *(_DWORD *)(v111 + 8) |= 1u;
          }
        }
        if ( (v108 & 2) != 0 )
        {
          if ( (*(_DWORD *)(v111 + 8) & 4) != 0 )
          {
            v108 &= ~2u;
          }
          else
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)(CurrentThread + 1508)) == 1
              && *(_BYTE *)(CurrentThread + 792) )
            {
              v130 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(v130, 2LL);
              v131 = (struct _KDPC *)KeGetCurrentPrcb();
              if ( (unsigned int)KiAbThreadInsertList(
                                   CurrentThread,
                                   &v131[581].DpcData,
                                   (_QWORD *)(CurrentThread + 808)) )
                KiAbQueueAutoBoostDpc(v131);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v130);
              __writecr8(v130);
            }
            *(_DWORD *)(v111 + 8) |= 4u;
          }
        }
        KeReleaseInStackQueuedSpinLock(&v154);
        if ( v108 )
        {
          if ( (v108 & 4) != 0 )
            IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
          if ( (v108 & 2) != 0 )
            PsBoostThreadOutstandingIoQoS(CurrentThread);
        }
      }
    }
    __incgsdword(0x9094u);
    __incgsdword(0x9064u);
    if ( GroupIndex )
    {
      v148 = *(_DWORD *)(a1 + 68);
      v145 = 0;
      v115 = KeGetCurrentPrcb();
      v116 = __rdtsc();
      ++v115->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      v117 = KeGetCurrentThread();
      v118 = v115->GroupIndex;
      LOWORD(v145) = v115->Group;
      v119 = *((_DWORD *)&v117[1].SwapListEntry + 2);
      BYTE2(v145) = v118;
      if ( (v119 & 1) == 0 )
      {
        v120 = (signed __int64)v117[1].WaitBlock[0].Object;
        v121 = EtwpEthreadSyncTrackingSequence;
        if ( v120 )
        {
LABEL_240:
          v124 = 0LL;
          for ( n = 0; n < 8; ++n )
          {
            v126 = *(_DWORD *)(v120 + 28);
            if ( v126 == 0x10000 && *(_QWORD *)(v120 + 16) == a1 && *(_DWORD *)(v120 + 40) == v121 )
              goto LABEL_251;
            if ( !v124 )
            {
              if ( v126 )
              {
                if ( *(_DWORD *)(v120 + 40) < v121 )
                {
                  v124 = v120;
                  break;
                }
              }
              else
              {
                v124 = v120;
              }
            }
            v120 += 64LL;
          }
          v120 = v124;
          if ( v124 )
          {
            *(_QWORD *)(v124 + 16) = a1;
            *(_QWORD *)(v124 + 28) = 0x10000LL;
            *(_DWORD *)(v124 + 36) = 0;
            *(_QWORD *)v124 = 0LL;
            *(_QWORD *)(v124 + 8) = 0LL;
            *(_DWORD *)(v124 + 24) = 0;
            *(_DWORD *)(v124 + 40) = v121;
            *(_DWORD *)(v124 + 44) = 0;
          }
LABEL_251:
          v123 = v120;
          if ( v120 )
            goto LABEL_252;
        }
        else
        {
          v122 = ExAllocatePool2(0x48uLL);
          v123 = v122;
          if ( v122 )
          {
            *(_QWORD *)(v122 + 16) = a1;
            *(_QWORD *)(v122 + 28) = 0x10000LL;
            *(_DWORD *)(v122 + 40) = v121;
            v120 = _InterlockedCompareExchange64((volatile signed __int64 *)&v117[1].WaitBlock[0].Object, v122, 0LL);
            if ( v120 )
            {
              ExFreePoolWithTag((PVOID)v122, 0);
              goto LABEL_240;
            }
LABEL_252:
            ++v115->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            v127 = *(_DWORD *)(v123 + 32);
            *(_QWORD *)(v123 + 8) = v116;
            if ( v127 == 4 )
            {
              if ( *(_WORD *)(v123 + 24) == (_WORD)v145 && *(_BYTE *)(v123 + 26) == v118 )
                *(_QWORD *)v123 = v116 - *(_QWORD *)v123;
              else
                *(_QWORD *)v123 = 1LL;
            }
            else
            {
              *(_QWORD *)v123 = 0LL;
            }
            *(_DWORD *)(v123 + 24) = v145;
            *(_DWORD *)(v123 + 44) = v148;
            *(_DWORD *)(v123 + 32) = 1;
            *(_DWORD *)(v123 + 36) = 1;
          }
        }
      }
    }
    return 1;
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90A0u);
    return 0;
  }
}
