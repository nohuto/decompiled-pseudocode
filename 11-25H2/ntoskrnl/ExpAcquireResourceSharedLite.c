/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x1402955C0
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x140293230 (SepAcquireOrderedReadLocks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140293DB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140294330 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x140324D00 (ExpApplyPrewaitBoost.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x140325D24 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     ExpGetThreadResourceHint @ 0x1403DF900 (ExpGetThreadResourceHint.c)
 *     ExpExpandResourceOwnerTable @ 0x1403DFACC (ExpExpandResourceOwnerTable.c)
 *     ExpWaitForResource @ 0x14041F0A0 (ExpWaitForResource.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v7; // r15
  volatile __int64 *v8; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r11
  unsigned int ThreadResourceHint; // eax
  int v13; // r9d
  struct _KTHREAD *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned __int8 v19; // si
  int v20; // eax
  __int64 Next; // rax
  unsigned __int8 Lock; // cl
  bool v23; // di
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *v30; // r15
  unsigned __int64 v31; // r9
  unsigned __int8 GroupIndex; // al
  struct _KTHREAD *v33; // r14
  __int16 Group; // r13
  int v35; // ecx
  signed __int64 Object; // rdi
  int v37; // r12d
  signed __int64 Pool2; // rax
  signed __int64 v39; // r8
  signed __int64 v40; // rax
  unsigned int i; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // ecx
  int v50; // eax
  __int64 v51; // rax
  unsigned __int8 v52; // cl
  bool v53; // di
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  struct _KPRCB *v57; // rcx
  signed __int32 *v58; // r8
  unsigned __int64 v59; // rdi
  struct _KPRCB *v60; // rsi
  unsigned __int64 v61; // r8
  struct _KTHREAD *v62; // r14
  __int16 v63; // r13
  unsigned __int8 v64; // r12
  int v65; // ecx
  signed __int64 v66; // rdi
  int v67; // r15d
  signed __int64 v68; // rax
  signed __int64 v69; // rcx
  signed __int64 v70; // rax
  unsigned int j; // ecx
  int v72; // edx
  int v73; // eax
  unsigned int v74; // esi
  unsigned int v75; // esi
  __int64 v76; // rax
  unsigned __int64 *volatile v77; // rdx
  unsigned __int64 v78; // rdi
  struct _KPRCB *v79; // r13
  int v80; // r12d
  __int16 v81; // ax
  struct _KTHREAD *v82; // r14
  signed __int64 v83; // rdi
  int v84; // r15d
  signed __int64 v85; // rax
  signed __int64 v86; // rcx
  unsigned int v87; // ecx
  signed __int64 v88; // rax
  int v89; // edx
  signed __int64 v90; // rdx
  int v91; // eax
  signed __int32 v92; // eax
  signed __int32 v93; // ett
  signed __int32 v94; // eax
  signed __int32 v95; // ett
  unsigned int v96; // esi
  __int16 v97; // ax
  struct _KTHREAD *v98; // r14
  signed __int64 v99; // rax
  unsigned int v100; // ecx
  int v101; // edx
  int v102; // eax
  __int64 v103; // rax
  struct _KPRCB *v104; // rsi
  unsigned __int64 v105; // r13
  __int16 v106; // cx
  struct _KTHREAD *v107; // r15
  signed __int64 v108; // rdi
  int v109; // r12d
  signed __int64 v110; // rax
  signed __int64 v111; // rcx
  signed __int64 v112; // rax
  unsigned int k; // edx
  int v114; // ecx
  int v115; // eax
  __int64 v116; // r8
  __int64 v117; // r9
  unsigned int ResourceIndex; // r12d
  __int16 v119; // ax
  int v120; // edx
  int v121; // ecx
  unsigned __int64 v122; // rax
  int v123; // eax
  int v124; // esi
  unsigned __int8 v125; // r15
  __int64 v126; // rdx
  __int64 v127; // rdi
  unsigned __int64 v128; // rcx
  __int64 v129; // rdi
  unsigned __int64 v130; // rdx
  struct _KPRCB *v131; // r13
  unsigned __int64 v132; // r14
  struct _KTHREAD *v133; // rsi
  unsigned __int8 v134; // r12
  int v135; // ecx
  signed __int64 v136; // rdi
  int v137; // r15d
  signed __int64 v138; // rax
  signed __int64 v139; // rcx
  signed __int64 v140; // rax
  unsigned int m; // edx
  int v142; // ecx
  int v143; // eax
  __int64 v144; // rax
  __int64 v145; // r8
  _QWORD *v146; // rcx
  unsigned __int8 v147; // r15
  struct _KPRCB *v148; // r13
  signed __int32 v149[8]; // [rsp+0h] [rbp-99h] BYREF
  int v150; // [rsp+20h] [rbp-79h]
  char v151; // [rsp+24h] [rbp-75h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-71h] BYREF
  int v153; // [rsp+40h] [rbp-59h]
  unsigned __int64 v154; // [rsp+48h] [rbp-51h]
  __int128 v155; // [rsp+50h] [rbp-49h] BYREF
  __int128 v156; // [rsp+60h] [rbp-39h]
  __int128 v157; // [rsp+70h] [rbp-29h] BYREF
  __int64 v158; // [rsp+80h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE v159; // [rsp+88h] [rbp-11h] BYREF
  __int128 v160; // [rsp+A0h] [rbp+7h]
  __int128 v161; // [rsp+B0h] [rbp+17h]
  __int128 v162; // [rsp+C0h] [rbp+27h]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v158 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x908Cu);
  v8 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  v151 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v10 = _InterlockedExchange64(v8, (__int64)&LockHandle);
    if ( v10 )
      KxWaitForLockOwnerShip(&LockHandle, v10, a3, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8);
  }
LABEL_6:
  LOWORD(v11) = 1;
  while ( 1 )
  {
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = v11;
      *(_DWORD *)(a1 + 64) = 1;
      v19 = 1;
      v20 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v20 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_27;
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
        if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                         (volatile __int64 *)(Next + 8),
                                         (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
        {
          _InterlockedOr(v149, 0);
          v23 = KeDisableInterrupts();
          KiHaltOnAddressWakeEntireList(v26, _InterlockedExchange64((volatile __int64 *)(v25 + 8 * v24), 0LL));
          if ( v23 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v92 = *SchedulerAssist;
              do
              {
                v93 = v92;
                v92 = _InterlockedCompareExchange(SchedulerAssist, v92 & 0xFFDFFFFF, v92);
              }
              while ( v93 != v92 );
              if ( (v92 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
        }
      }
      else
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      }
LABEL_27:
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
      __writecr8(OldIrql);
      __incgsdword(0x9094u);
      __incgsdword(0x9064u);
      if ( !v7 )
        return v19;
      v153 = *(_DWORD *)(a1 + 68);
      v150 = 0;
      v30 = KeGetCurrentPrcb();
      v31 = __rdtsc();
      v154 = v31;
      ++v30->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      GroupIndex = v30->GroupIndex;
      v33 = KeGetCurrentThread();
      Group = v30->Group;
      LOWORD(v150) = Group;
      v151 = GroupIndex;
      v35 = *((_DWORD *)&v33[1].SwapListEntry + 2);
      BYTE2(v150) = GroupIndex;
      if ( (v35 & 1) != 0 )
        return v19;
      Object = (signed __int64)v33[1].WaitBlock[0].Object;
      v37 = EtwpEthreadSyncTrackingSequence;
      if ( !Object )
      {
        Pool2 = ExAllocatePool2(0x48uLL);
        v39 = Pool2;
        if ( !Pool2 )
          return v19;
        *(_QWORD *)(Pool2 + 16) = a1;
        *(_QWORD *)(Pool2 + 28) = 0x10000LL;
        *(_DWORD *)(Pool2 + 40) = v37;
        Object = _InterlockedCompareExchange64((volatile signed __int64 *)&v33[1].WaitBlock[0].Object, Pool2, 0LL);
        if ( !Object )
        {
          v31 = v154;
          goto LABEL_47;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        v31 = v154;
      }
      v40 = 0LL;
      for ( i = 0; i < 8; ++i )
      {
        v42 = *(_DWORD *)(Object + 28);
        if ( v42 == 0x10000 && *(_QWORD *)(Object + 16) == a1 && *(_DWORD *)(Object + 40) == v37 )
          goto LABEL_46;
        if ( !v40 )
        {
          if ( v42 )
          {
            if ( *(_DWORD *)(Object + 40) < v37 )
            {
              v40 = Object;
              break;
            }
          }
          else
          {
            v40 = Object;
          }
        }
        Object += 64LL;
      }
      Object = v40;
      if ( v40 )
      {
        *(_QWORD *)(v40 + 16) = a1;
        *(_QWORD *)(v40 + 28) = 0x10000LL;
        *(_DWORD *)(v40 + 36) = 0;
        *(_QWORD *)v40 = 0LL;
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_DWORD *)(v40 + 24) = 0;
        *(_DWORD *)(v40 + 40) = v37;
        *(_DWORD *)(v40 + 44) = 0;
      }
LABEL_46:
      v39 = Object;
      if ( !Object )
        return v19;
LABEL_47:
      ++v30->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
      v43 = *(_DWORD *)(v39 + 32);
      *(_QWORD *)(v39 + 8) = v31;
      if ( v43 == 4 )
      {
        if ( *(_WORD *)(v39 + 24) == Group && *(_BYTE *)(v39 + 26) == v151 )
          *(_QWORD *)v39 = v31 - *(_QWORD *)v39;
        else
          *(_QWORD *)v39 = 1LL;
      }
      else
      {
        *(_QWORD *)v39 = 0LL;
      }
      v44 = v150;
      *(_DWORD *)(v39 + 32) = 1;
      *(_DWORD *)(v39 + 36) = 1;
      *(_DWORD *)(v39 + 44) = v153;
      *(_DWORD *)(v39 + 24) = v44;
      return v19;
    }
    if ( *(char *)(a1 + 26) < 0 )
    {
      if ( *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
      {
        v96 = (*(_DWORD *)(a1 + 56) + 8) ^ ((unsigned __int8)*(_DWORD *)(a1 + 56) ^ (unsigned __int8)(*(_DWORD *)(a1 + 56) + 8)) & 7;
        *(_DWORD *)(a1 + 56) = v96;
        v75 = v96 >> 3;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x9090u);
        __incgsdword(0x9064u);
        if ( !v7 )
          return 1;
        v79 = KeGetCurrentPrcb();
        v80 = *(_DWORD *)(a1 + 68);
        HIBYTE(v150) = 0;
        v97 = v79->Group;
        ++v79->SynchCounters.ExEtwSynchTrackingNotificationsCount;
        v98 = KeGetCurrentThread();
        LOWORD(v150) = v97;
        BYTE2(v150) = v79->GroupIndex;
        if ( (*(_DWORD *)(&v98[1].SwapListEntry + 1) & 1) != 0 )
          return 1;
        v83 = (signed __int64)v98[1].WaitBlock[0].Object;
        v84 = EtwpEthreadSyncTrackingSequence;
        if ( !v83 )
        {
          v99 = ExAllocatePool2(0x48uLL);
          v86 = v99;
          if ( !v99 )
            return 1;
          *(_QWORD *)(v99 + 16) = a1;
          *(_DWORD *)(v99 + 28) = 0x10000;
          *(_DWORD *)(v99 + 32) = 0;
          *(_DWORD *)(v99 + 40) = v84;
          v83 = _InterlockedCompareExchange64((volatile signed __int64 *)&v98[1].WaitBlock[0].Object, v99, 0LL);
          if ( !v83 )
          {
            v90 = v99;
            goto LABEL_154;
          }
          ExFreePoolWithTag((PVOID)v99, 0);
        }
        v100 = 0;
        v88 = 0LL;
        while ( v100 < 8 )
        {
          v101 = *(_DWORD *)(v83 + 28);
          if ( v101 == 0x10000 && *(_QWORD *)(v83 + 16) == a1 && *(_DWORD *)(v83 + 40) == v84 )
            goto LABEL_153;
          if ( !v88 )
          {
            if ( v101 )
            {
              if ( *(_DWORD *)(v83 + 40) < v84 )
              {
LABEL_150:
                v88 = v83;
                break;
              }
            }
            else
            {
              v88 = v83;
            }
          }
          v83 += 64LL;
          ++v100;
        }
LABEL_151:
        v83 = v88;
        if ( v88 )
        {
          *(_QWORD *)(v88 + 16) = a1;
          *(_QWORD *)(v88 + 28) = 0x10000LL;
          *(_DWORD *)(v88 + 36) = 0;
          *(_QWORD *)v88 = 0LL;
          *(_QWORD *)(v88 + 8) = 0LL;
          *(_DWORD *)(v88 + 24) = 0;
          *(_DWORD *)(v88 + 40) = v84;
          *(_DWORD *)(v88 + 44) = 0;
        }
LABEL_153:
        v86 = v83;
        v90 = v83;
        if ( !v83 )
          return 1;
LABEL_154:
        ++v79->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
        if ( *(_DWORD *)(v86 + 32) )
        {
          if ( *(_DWORD *)(v90 + 36) >= v75 )
            goto LABEL_157;
        }
        else
        {
          *(_QWORD *)(v86 + 8) = 2LL;
          v91 = v150;
          *(_QWORD *)v86 = 1LL;
          *(_DWORD *)(v86 + 24) = v91;
          *(_DWORD *)(v86 + 44) = v80;
        }
        *(_DWORD *)(v90 + 36) = v75;
LABEL_157:
        *(_DWORD *)(v86 + 32) = 1;
        return 1;
      }
      v47 = *(_QWORD *)(a1 + 16);
      if ( v47 )
      {
        v48 = v47 + 16LL * *(unsigned int *)(v47 + 8);
        v10 = v47 + 16;
        while ( *(_QWORD *)v10 )
        {
          v10 += 16LL;
          if ( v10 == v48 )
            goto LABEL_106;
        }
        v18 = v10;
        goto LABEL_64;
      }
LABEL_106:
      ExpExpandResourceOwnerTable(a1, &LockHandle, a3);
      goto LABEL_6;
    }
    ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v10, a3, *(unsigned int *)(a1 + 76));
    v10 = a1 + 48;
    a3 = ThreadResourceHint;
    v14 = *(struct _KTHREAD **)(a1 + 48);
    if ( v14 != CurrentThread )
    {
      v15 = 0LL;
      v16 = 0LL;
      if ( v14 )
      {
        v15 = v11;
      }
      else if ( !v13 )
      {
        v16 = a1 + 48;
      }
      if ( !(_DWORD)a3 )
        break;
      v46 = *(_QWORD *)(a1 + 16);
      if ( !v46 )
        break;
      if ( (unsigned int)a3 >= *(_DWORD *)(v46 + 8) )
        break;
      v10 = v46 + 16 * a3;
      if ( *(struct _KTHREAD **)v10 != CurrentThread )
        break;
    }
LABEL_122:
    if ( v10 )
      goto LABEL_65;
  }
  v10 = *(_QWORD *)(a1 + 16);
  a3 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
  if ( v10 )
  {
    v17 = v10 + 16LL * *(unsigned int *)(v10 + 8);
    v10 += 16LL;
    if ( v15 < a3 )
    {
      do
      {
        if ( *(struct _KTHREAD **)v10 == CurrentThread )
        {
          KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v10 - *(_DWORD *)(a1 + 16)) >> 4;
          goto LABEL_122;
        }
        if ( *(_QWORD *)v10 )
        {
          if ( ++v15 == a3 )
          {
            v10 += 16LL;
            break;
          }
        }
        else if ( !v16 )
        {
          v16 = v10;
        }
        v10 += 16LL;
      }
      while ( v10 != v17 );
    }
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v16 )
  {
    if ( v10 >= v17 )
      goto LABEL_106;
    v16 = v10;
    if ( !v10 )
      goto LABEL_106;
  }
  v18 = v16;
  v10 = v16;
LABEL_64:
  KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v18 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_65:
  if ( *(struct _KTHREAD **)v10 == CurrentThread )
  {
    v74 = (*(_DWORD *)(v10 + 8) + 8) ^ ((unsigned __int8)*(_DWORD *)(v10 + 8) ^ (unsigned __int8)(*(_DWORD *)(v10 + 8)
                                                                                                + 8)) & 7;
    *(_DWORD *)(v10 + 8) = v74;
    v75 = v74 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_134;
    }
    _m_prefetchw(&LockHandle);
    v76 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_134:
        v78 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
        __writecr8(v78);
        __incgsdword(0x9098u);
        __incgsdword(0x9064u);
        if ( !v7 )
          return 1;
        v79 = KeGetCurrentPrcb();
        v80 = *(_DWORD *)(a1 + 68);
        HIBYTE(v150) = 0;
        v81 = v79->Group;
        ++v79->SynchCounters.ExEtwSynchTrackingNotificationsCount;
        v82 = KeGetCurrentThread();
        LOWORD(v150) = v81;
        BYTE2(v150) = v79->GroupIndex;
        if ( (*(_DWORD *)(&v82[1].SwapListEntry + 1) & 1) != 0 )
          return 1;
        v83 = (signed __int64)v82[1].WaitBlock[0].Object;
        v84 = EtwpEthreadSyncTrackingSequence;
        if ( !v83 )
        {
          v85 = ExAllocatePool2(0x48uLL);
          v86 = v85;
          if ( !v85 )
            return 1;
          *(_QWORD *)(v85 + 16) = a1;
          *(_DWORD *)(v85 + 28) = 0x10000;
          *(_DWORD *)(v85 + 32) = 0;
          *(_DWORD *)(v85 + 40) = v84;
          v83 = _InterlockedCompareExchange64((volatile signed __int64 *)&v82[1].WaitBlock[0].Object, v85, 0LL);
          if ( !v83 )
          {
            v90 = v85;
            goto LABEL_154;
          }
          ExFreePoolWithTag((PVOID)v85, 0);
        }
        v87 = 0;
        v88 = 0LL;
        while ( v87 < 8 )
        {
          v89 = *(_DWORD *)(v83 + 28);
          if ( v89 == 0x10000 && *(_QWORD *)(v83 + 16) == a1 && *(_DWORD *)(v83 + 40) == v84 )
            goto LABEL_153;
          if ( !v88 )
          {
            if ( v89 )
            {
              if ( *(_DWORD *)(v83 + 40) < v84 )
                goto LABEL_150;
            }
            else
            {
              v88 = v83;
            }
          }
          v83 += 64LL;
          ++v87;
        }
        goto LABEL_151;
      }
      v76 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    v77 = LockHandle.LockQueue.Lock;
    if ( (((unsigned __int8)v77 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v76 + 8),
                                                     (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      KeWakeAddressAll(v76 + 8, (__int64)v77);
    goto LABEL_134;
  }
  v49 = *(_DWORD *)(a1 + 64);
  if ( !v49 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = v11;
    *(_DWORD *)(a1 + 64) = v49 + 1;
    v50 = *(_DWORD *)(v10 + 8) & 7;
    *(_QWORD *)v10 = CurrentThread;
    *(_DWORD *)(v10 + 8) = v50 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&LockHandle);
      v51 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_77;
        v51 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      v52 = (unsigned __int8)LockHandle.LockQueue.Lock;
      if ( ((v52 ^ (unsigned __int8)_InterlockedExchange64(
                                      (volatile __int64 *)(v51 + 8),
                                      (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      {
        _InterlockedOr(v149, 0);
        v53 = KeDisableInterrupts();
        KiHaltOnAddressWakeEntireList(v56, _InterlockedExchange64((volatile __int64 *)(v55 + 8 * v54), 0LL));
        if ( v53 )
        {
          v57 = KeGetCurrentPrcb();
          v58 = (signed __int32 *)v57->SchedulerAssist;
          if ( v58 )
          {
            _m_prefetchw(v58);
            v94 = *v58;
            do
            {
              v95 = v94;
              v94 = _InterlockedCompareExchange(v58, v94 & 0xFFDFFFFF, v94);
            }
            while ( v95 != v94 );
            if ( (v94 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v57);
          }
          _enable();
        }
      }
    }
    else
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
LABEL_77:
    v59 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
    __writecr8(v59);
    __incgsdword(0x9094u);
    __incgsdword(0x9064u);
    if ( v7 )
    {
      v153 = *(_DWORD *)(a1 + 68);
      v150 = 0;
      v60 = KeGetCurrentPrcb();
      v61 = __rdtsc();
      v154 = v61;
      ++v60->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      v62 = KeGetCurrentThread();
      v63 = v60->Group;
      v64 = v60->GroupIndex;
      LOWORD(v150) = v63;
      v65 = *((_DWORD *)&v62[1].SwapListEntry + 2);
      BYTE2(v150) = v64;
      if ( (v65 & 1) == 0 )
      {
        v66 = (signed __int64)v62[1].WaitBlock[0].Object;
        v67 = EtwpEthreadSyncTrackingSequence;
        if ( v66 )
        {
LABEL_85:
          v70 = 0LL;
          for ( j = 0; j < 8; ++j )
          {
            v72 = *(_DWORD *)(v66 + 28);
            if ( v72 == 0x10000 && *(_QWORD *)(v66 + 16) == a1 && *(_DWORD *)(v66 + 40) == v67 )
              goto LABEL_96;
            if ( !v70 )
            {
              if ( v72 )
              {
                if ( *(_DWORD *)(v66 + 40) < v67 )
                {
                  v70 = v66;
                  break;
                }
              }
              else
              {
                v70 = v66;
              }
            }
            v66 += 64LL;
          }
          v66 = v70;
          if ( v70 )
          {
            *(_QWORD *)(v70 + 16) = a1;
            *(_QWORD *)(v70 + 28) = 0x10000LL;
            *(_DWORD *)(v70 + 36) = 0;
            *(_QWORD *)v70 = 0LL;
            *(_QWORD *)(v70 + 8) = 0LL;
            *(_DWORD *)(v70 + 24) = 0;
            *(_DWORD *)(v70 + 40) = v67;
            *(_DWORD *)(v70 + 44) = 0;
          }
LABEL_96:
          v69 = v66;
          if ( v66 )
            goto LABEL_97;
        }
        else
        {
          v68 = ExAllocatePool2(0x48uLL);
          v69 = v68;
          if ( v68 )
          {
            *(_QWORD *)(v68 + 16) = a1;
            *(_QWORD *)(v68 + 28) = 0x10000LL;
            *(_DWORD *)(v68 + 40) = v67;
            v66 = _InterlockedCompareExchange64((volatile signed __int64 *)&v62[1].WaitBlock[0].Object, v68, 0LL);
            if ( v66 )
            {
              ExFreePoolWithTag((PVOID)v68, 0);
              v61 = v154;
              goto LABEL_85;
            }
            v61 = v154;
LABEL_97:
            ++v60->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            v73 = *(_DWORD *)(v69 + 32);
            *(_QWORD *)(v69 + 8) = v61;
            if ( v73 == 4 )
            {
              if ( *(_WORD *)(v69 + 24) == v63 && *(_BYTE *)(v69 + 26) == v64 )
                *(_QWORD *)v69 = v61 - *(_QWORD *)v69;
              else
                *(_QWORD *)v69 = 1LL;
            }
            else
            {
              *(_QWORD *)v69 = 0LL;
            }
            *(_DWORD *)(v69 + 24) = v150;
            *(_DWORD *)(v69 + 44) = v153;
            *(_DWORD *)(v69 + 32) = 1;
            *(_DWORD *)(v69 + 36) = 1;
          }
        }
      }
    }
    return 1;
  }
  if ( a2 )
  {
    v102 = *(_DWORD *)(v10 + 8);
    *(_QWORD *)v10 = CurrentThread;
    *(_DWORD *)(v10 + 8) = v102 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v157 + 1) = &v157;
    *(_QWORD *)&v157 = &v157;
    v103 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)&v155 + 1) = 0LL;
    *((_QWORD *)&v156 + 1) = 393217LL;
    *(_QWORD *)&v156 = CurrentThread;
    v158 = 0LL;
    if ( v103 )
    {
      v146 = *(_QWORD **)(v103 + 8);
      if ( *v146 != v103 )
        __fastfail(3u);
      *((_QWORD *)&v155 + 1) = *(_QWORD *)(v103 + 8);
      *(_QWORD *)&v155 = v103;
      *v146 = &v155;
      *(_QWORD *)(v103 + 8) = &v155;
    }
    else
    {
      *((_QWORD *)&v155 + 1) = &v155;
      *(_QWORD *)&v155 = &v155;
    }
    *(_QWORD *)(a1 + 32) = &v155;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x909Cu);
    if ( v7 )
    {
      v160 = 0LL;
      v161 = 0LL;
      v162 = 0LL;
      v104 = KeGetCurrentPrcb();
      HIBYTE(v150) = 0;
      v105 = __rdtsc();
      v106 = v104->Group;
      ++v104->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      v107 = KeGetCurrentThread();
      LOWORD(v150) = v106;
      BYTE2(v150) = v104->GroupIndex;
      if ( (*(_DWORD *)(&v107[1].SwapListEntry + 1) & 1) == 0 )
      {
        v108 = (signed __int64)v107[1].WaitBlock[0].Object;
        v109 = EtwpEthreadSyncTrackingSequence;
        if ( v108 )
        {
LABEL_204:
          v112 = 0LL;
          for ( k = 0; k < 8; ++k )
          {
            v114 = *(_DWORD *)(v108 + 28);
            if ( v114 == 0x10000 && *(_QWORD *)(v108 + 16) == a1 && *(_DWORD *)(v108 + 40) == v109 )
              goto LABEL_215;
            if ( !v112 )
            {
              if ( v114 )
              {
                if ( *(_DWORD *)(v108 + 40) < v109 )
                {
                  v112 = v108;
                  break;
                }
              }
              else
              {
                v112 = v108;
              }
            }
            v108 += 64LL;
          }
          v108 = v112;
          if ( v112 )
          {
            *(_QWORD *)(v112 + 16) = a1;
            *(_DWORD *)(v112 + 36) = 0;
            *(_QWORD *)v112 = 0LL;
            *(_QWORD *)(v112 + 8) = 0LL;
            *(_DWORD *)(v112 + 24) = 0;
            *(_DWORD *)(v112 + 44) = 0;
            *(_QWORD *)(v112 + 28) = 0x10000LL;
            *(_DWORD *)(v112 + 40) = v109;
          }
LABEL_215:
          v111 = v108;
          if ( v108 )
            goto LABEL_216;
        }
        else
        {
          v110 = ExAllocatePool2(0x48uLL);
          v111 = v110;
          if ( v110 )
          {
            *(_QWORD *)(v110 + 16) = a1;
            *(_DWORD *)(v110 + 28) = 0x10000;
            *(_DWORD *)(v110 + 32) = 0;
            *(_DWORD *)(v110 + 40) = v109;
            v108 = _InterlockedCompareExchange64((volatile signed __int64 *)&v107[1].WaitBlock[0].Object, v110, 0LL);
            if ( v108 )
            {
              ExFreePoolWithTag((PVOID)v110, 0);
              goto LABEL_204;
            }
LABEL_216:
            ++v104->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            v115 = v150;
            *(_DWORD *)(v111 + 32) = 4;
            *(_QWORD *)v111 = v105;
            *(_DWORD *)(v111 + 24) = v115;
          }
        }
      }
    }
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, &v155, 66116LL);
    if ( ((unsigned __int8)CurrentThread & 3) != 0 )
      ResourceIndex = 0;
    else
      ResourceIndex = CurrentThread->ResourceIndex;
    v119 = *(_WORD *)(a1 + 26);
    memset(&v159, 0, sizeof(v159));
    if ( (v119 & 8) == 0 )
    {
      v120 = 0;
      if ( (v119 & 4) != 0 )
      {
        v121 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
        v122 = CurrentThread->Process[1].Padding[3];
        if ( v122 )
        {
          v123 = *(_DWORD *)(v122 + 1084);
          if ( v121 >= v123 )
            v121 = v123;
        }
        if ( v121 < 2 )
          v120 = 4;
      }
      v124 = v120 | 2;
      if ( (*(_BYTE *)(a1 + 26) & 2) == 0 )
        v124 = v120;
      if ( v124 )
      {
        v159.LockQueue.Next = 0LL;
        v159.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
        v125 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v125);
        v159.OldIrql = v125;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v126 = _InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&v159);
          if ( v126 )
            KxWaitForLockOwnerShip(&v159, v126, v116, v117);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&v159, a1 + 96);
        }
        v127 = a1 + 48;
        if ( *(struct _KTHREAD **)(a1 + 48) != CurrentThread )
        {
          v128 = *(_QWORD *)(a1 + 48) != 0LL;
          if ( !ResourceIndex
            || (v144 = *(_QWORD *)(a1 + 16)) == 0
            || ResourceIndex >= *(_DWORD *)(v144 + 8)
            || (v127 = v144 + 16LL * ResourceIndex, *(struct _KTHREAD **)v127 != CurrentThread) )
          {
            v129 = *(_QWORD *)(a1 + 16);
            v130 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
            if ( v129 && (v145 = v129 + 16LL * *(unsigned int *)(v129 + 8), v127 = v129 + 16, v128 < v130) )
            {
              while ( *(struct _KTHREAD **)v127 != CurrentThread )
              {
                if ( !*(_QWORD *)v127 || (++v128, v128 != v130) )
                {
                  v127 += 16LL;
                  if ( v127 != v145 )
                    continue;
                }
                goto LABEL_237;
              }
              KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v127 - *(_DWORD *)(a1 + 16)) >> 4;
            }
            else
            {
LABEL_237:
              v127 = 0LL;
            }
          }
        }
        if ( (v124 & 4) != 0 )
        {
          if ( (*(_DWORD *)(v127 + 8) & 1) != 0 )
          {
            v124 &= ~4u;
          }
          else
          {
            PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
            *(_DWORD *)(v127 + 8) |= 1u;
          }
        }
        if ( (v124 & 2) != 0 )
        {
          if ( (*(_DWORD *)(v127 + 8) & 4) != 0 )
          {
            v124 &= ~2u;
          }
          else
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
              && CurrentThread->AbWaitEntryCount )
            {
              v147 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(v147);
              v148 = KeGetCurrentPrcb();
              if ( (unsigned int)KiAbThreadInsertList(
                                   CurrentThread,
                                   &v148->AbPropagateBoostsList,
                                   &CurrentThread->PropagateBoostsEntry) )
                KiAbQueueAutoBoostDpc(v148);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v147);
              __writecr8(v147);
            }
            *(_DWORD *)(v127 + 8) |= 4u;
          }
        }
        KeReleaseInStackQueuedSpinLock(&v159);
        if ( v124 )
        {
          if ( (v124 & 4) != 0 )
            IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
          if ( (v124 & 2) != 0 )
            PsBoostThreadOutstandingIoQoS(CurrentThread);
        }
      }
    }
    __incgsdword(0x9094u);
    __incgsdword(0x9064u);
    if ( v151 )
    {
      v153 = *(_DWORD *)(a1 + 68);
      v150 = 0;
      v131 = KeGetCurrentPrcb();
      v132 = __rdtsc();
      ++v131->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      v133 = KeGetCurrentThread();
      v134 = v131->GroupIndex;
      LOWORD(v150) = v131->Group;
      v135 = *((_DWORD *)&v133[1].SwapListEntry + 2);
      BYTE2(v150) = v134;
      if ( (v135 & 1) == 0 )
      {
        v136 = (signed __int64)v133[1].WaitBlock[0].Object;
        v137 = EtwpEthreadSyncTrackingSequence;
        if ( v136 )
        {
LABEL_255:
          v140 = 0LL;
          for ( m = 0; m < 8; ++m )
          {
            v142 = *(_DWORD *)(v136 + 28);
            if ( v142 == 0x10000 && *(_QWORD *)(v136 + 16) == a1 && *(_DWORD *)(v136 + 40) == v137 )
              goto LABEL_266;
            if ( !v140 )
            {
              if ( v142 )
              {
                if ( *(_DWORD *)(v136 + 40) < v137 )
                {
                  v140 = v136;
                  break;
                }
              }
              else
              {
                v140 = v136;
              }
            }
            v136 += 64LL;
          }
          v136 = v140;
          if ( v140 )
          {
            *(_QWORD *)(v140 + 16) = a1;
            *(_QWORD *)(v140 + 28) = 0x10000LL;
            *(_DWORD *)(v140 + 36) = 0;
            *(_QWORD *)v140 = 0LL;
            *(_QWORD *)(v140 + 8) = 0LL;
            *(_DWORD *)(v140 + 24) = 0;
            *(_DWORD *)(v140 + 40) = v137;
            *(_DWORD *)(v140 + 44) = 0;
          }
LABEL_266:
          v139 = v136;
          if ( v136 )
            goto LABEL_267;
        }
        else
        {
          v138 = ExAllocatePool2(0x48uLL);
          v139 = v138;
          if ( v138 )
          {
            *(_QWORD *)(v138 + 16) = a1;
            *(_QWORD *)(v138 + 28) = 0x10000LL;
            *(_DWORD *)(v138 + 40) = v137;
            v136 = _InterlockedCompareExchange64((volatile signed __int64 *)&v133[1].WaitBlock[0].Object, v138, 0LL);
            if ( v136 )
            {
              ExFreePoolWithTag((PVOID)v138, 0);
              goto LABEL_255;
            }
LABEL_267:
            ++v131->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            v143 = *(_DWORD *)(v139 + 32);
            *(_QWORD *)(v139 + 8) = v132;
            if ( v143 == 4 )
            {
              if ( *(_WORD *)(v139 + 24) == (_WORD)v150 && *(_BYTE *)(v139 + 26) == v134 )
                *(_QWORD *)v139 = v132 - *(_QWORD *)v139;
              else
                *(_QWORD *)v139 = 1LL;
            }
            else
            {
              *(_QWORD *)v139 = 0LL;
            }
            *(_DWORD *)(v139 + 24) = v150;
            *(_DWORD *)(v139 + 44) = v153;
            *(_DWORD *)(v139 + 32) = 1;
            *(_DWORD *)(v139 + 36) = 1;
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
