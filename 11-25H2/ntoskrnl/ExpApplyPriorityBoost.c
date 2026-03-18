/*
 * XREFs of ExpApplyPriorityBoost @ 0x140324DC0
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x1402800E8 (ExpConvertExclusiveToSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPrewaitBoost @ 0x140324D00 (ExpApplyPrewaitBoost.c)
 *     ExpApplyRewaitBoost @ 0x14041F1A4 (ExpApplyRewaitBoost.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x140325D24 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KiSetPriorityBoost @ 0x140326B50 (KiSetPriorityBoost.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140429870 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax
  bool v4; // zf
  __int64 v6; // r13
  __int64 v7; // rax
  int v8; // esi
  int v9; // eax
  bool v10; // cc
  volatile __int64 *v11; // r14
  int v12; // r12d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB **v14; // rdx
  int v15; // r8d
  int v16; // r15d
  unsigned __int8 v17; // dl
  char v18; // cl
  int v19; // eax
  ULONG_PTR v20; // rdi
  int v21; // ecx
  __int64 v22; // rax
  int v23; // eax
  signed __int32 v24; // r14d
  _DWORD *v25; // rcx
  unsigned __int64 *volatile Lock; // rdx
  __int64 v27; // r9
  __int64 Next; // rax
  unsigned __int64 OldIrql; // r14
  __int64 v30; // r14
  int v31; // r15d
  __int64 v32; // r14
  struct _KPRCB *v33; // r12
  _QWORD *v34; // rcx
  unsigned int v35; // r14d
  struct _SINGLE_LIST_ENTRY *v36; // r14
  char v37; // r15
  signed __int64 v38; // rax
  signed __int64 v39; // rax
  unsigned __int8 v40; // r14
  struct _KPRCB **v41; // rdx
  __int64 v42; // rax
  unsigned __int8 v43; // dl
  volatile __int64 *v44; // r8
  bool v45; // di
  __int64 v46; // rcx
  struct _KPRCB *v47; // rcx
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 v49; // rbx
  __int64 v50; // rdi
  unsigned int v51; // eax
  unsigned int v52; // r14d
  int v53; // eax
  ULONG_PTR v54; // r15
  int v55; // ett
  int v56; // ecx
  __int64 v57; // rax
  int v58; // eax
  signed __int32 v59; // r12d
  __int64 v60; // rdx
  __int64 v61; // r9
  __int64 v62; // rcx
  _QWORD *v63; // r12
  unsigned int v64; // r12d
  struct _SINGLE_LIST_ENTRY *v65; // r12
  char v66; // r13
  struct _KPRCB *v67; // rbx
  struct _KPRCB *v68; // r12
  signed __int64 v69; // rax
  signed __int64 v70; // rax
  volatile __int64 *v71; // rcx
  unsigned __int8 v72; // r15
  struct _KPRCB **v73; // rdx
  __int64 v74; // rax
  unsigned __int8 v75; // r14
  struct _KDPC *CurrentPrcb; // r15
  unsigned __int8 v77; // r12
  __int64 Pool2; // rax
  _QWORD *v79; // r12
  unsigned __int64 v80; // r15
  _QWORD *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r12
  signed __int32 v84; // r12d
  _QWORD *v85; // rax
  _QWORD *v86; // rdx
  volatile signed __int64 *v87; // rcx
  struct _EX_RUNDOWN_REF *v88; // rcx
  unsigned __int64 v89; // rax
  signed __int32 v90[6]; // [rsp+8h] [rbp-69h] BYREF
  int v91; // [rsp+38h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-31h] BYREF
  int v93; // [rsp+58h] [rbp-19h]
  int v94; // [rsp+5Ch] [rbp-15h]
  struct _SINGLE_LIST_ENTRY v95; // [rsp+60h] [rbp-11h] BYREF
  struct _SINGLE_LIST_ENTRY v96; // [rsp+68h] [rbp-9h] BYREF
  _QWORD *v97; // [rsp+70h] [rbp-1h]
  __int64 v98; // [rsp+78h] [rbp+7h]
  struct _KPRCB *v99; // [rsp+80h] [rbp+Fh]
  __int64 v100; // [rsp+88h] [rbp+17h]
  __int64 retaddr; // [rsp+D0h] [rbp+5Fh]
  int v103; // [rsp+E0h] [rbp+6Fh]
  PVOID SystemArgument1; // [rsp+F0h] [rbp+7Fh]

  result = 0LL;
  v4 = (*(_BYTE *)(a1 + 26) & 8) == 0;
  v6 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
    return result;
  v7 = *(_QWORD *)(*(_QWORD *)(a3 + 544) + 672LL);
  v8 = (*(_DWORD *)(a3 + 1440) >> 9) & 7;
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 1084);
    if ( v8 >= v9 )
      v8 = v9;
  }
  v10 = v8 <= 2;
  if ( v8 >= 2 )
  {
LABEL_6:
    if ( !v10 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( (struct _KTHREAD *)a3 != KeGetCurrentThread() )
  {
    v10 = v8 <= 2;
    goto LABEL_6;
  }
LABEL_7:
  v8 = 2;
LABEL_8:
  v11 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v94 = a2 & 0xFF00;
  v93 = a2 & 4;
  LockHandle.LockQueue.Next = 0LL;
  v12 = 0;
  v103 = a2 & 2;
  v91 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v14 = (struct _KPRCB **)_InterlockedExchange64(v11, (__int64)&LockHandle);
    if ( v14 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v14);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v6 + 96));
  }
  v15 = v93;
  if ( v93 )
    *(_WORD *)(v6 + 26) |= 4u;
  v16 = v103;
  if ( v103 )
    *(_WORD *)(v6 + 26) |= 2u;
  if ( v94 )
  {
    v17 = *(_BYTE *)(a3 + 195);
    if ( (char)v17 > (int)*(unsigned __int8 *)(v6 + 27) )
    {
      v18 = 15;
      if ( v17 < 0xFu )
        v18 = *(_BYTE *)(a3 + 195);
      *(_BYTE *)(v6 + 27) = v18;
    }
  }
  v19 = *(_DWORD *)(v6 + 56);
  v20 = *(_QWORD *)(v6 + 48);
  if ( (v19 & 2) != 0 )
  {
    v20 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v20 & 3) != 0 )
  {
    goto LABEL_93;
  }
  if ( v20 )
  {
    if ( v15 && (v19 & 1) == 0 )
    {
      v21 = (*(_DWORD *)(v20 + 1440) >> 9) & 7;
      v22 = *(_QWORD *)(*(_QWORD *)(v20 + 544) + 672LL);
      if ( v22 )
      {
        v23 = *(_DWORD *)(v22 + 1084);
        if ( v21 >= v23 )
          v21 = v23;
      }
      if ( (unsigned int)v21 < 2 )
      {
        v12 = 4;
        v91 = 4;
        if ( PspAlwaysTrackIoBoosting )
        {
          Pool2 = ExAllocatePool2(0x40uLL);
          v79 = (_QWORD *)Pool2;
          if ( Pool2 )
          {
            RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
            v79[12] = KeGetCurrentThread();
            v79[13] = 0LL;
          }
          v80 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 1552));
          v24 = _InterlockedIncrement((volatile signed __int32 *)(v20 + 1504));
          if ( v79 )
          {
            v81 = *(_QWORD **)(v20 + 1528);
            if ( *v81 != v20 + 1520 )
LABEL_233:
              __fastfail(3u);
            *v79 = v20 + 1520;
            v79[1] = v81;
            *v81 = v79;
            *(_QWORD *)(v20 + 1528) = v79;
          }
          v87 = (volatile signed __int64 *)(v20 + 1552);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64(v87, 0LL);
          else
            KiReleaseSpinLockInstrumented(v87, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v80);
          __writecr8(v80);
          v12 = v91;
          v16 = v103;
        }
        else
        {
          v24 = _InterlockedIncrement((volatile signed __int32 *)(v20 + 1504));
        }
        if ( v24 == 1 )
          KeAbProcessEffectiveIoPriorityChange(v20, 0LL);
        *(_DWORD *)(v6 + 56) |= 1u;
      }
    }
    if ( v16 )
    {
      v25 = (_DWORD *)(v6 + 56);
      if ( (*(_DWORD *)(v6 + 56) & 4) == 0 )
      {
        v12 |= 2u;
        v91 = v12;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v20 + 1508)) == 1 && *(_BYTE *)(v20 + 792) )
        {
          v75 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v75);
          CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
          if ( (unsigned int)KiAbThreadInsertList(v20, &CurrentPrcb[581].DpcData, (_QWORD *)(v20 + 808)) )
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v75);
          __writecr8(v75);
          v25 = (_DWORD *)(v6 + 56);
        }
        *v25 |= 4u;
      }
    }
    if ( v94 && *(unsigned __int8 *)(v6 + 27) > *(char *)(v20 + 195) )
    {
      v12 |= 0xFF00u;
      v91 = v12;
    }
    if ( !v12 )
      goto LABEL_92;
    ObfReferenceObjectWithTag((PVOID)v20, 0x746C6644u);
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
          goto LABEL_51;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      Lock = LockHandle.LockQueue.Lock;
      if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                        (volatile __int64 *)(Next + 8),
                                                        (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
        KeWakeAddressAll(Next + 8, (__int64)Lock);
    }
    else
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
    }
LABEL_51:
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
    __writecr8(OldIrql);
    if ( (v12 & 4) != 0 )
    {
      ++ExpResourceIoBoosted;
      IoBoostThreadIoPriority(v20, (unsigned int)v8, 0LL);
    }
    if ( (v12 & 2) != 0 )
    {
      if ( *(_DWORD *)(v20 + 1512) )
      {
        v30 = IopIoRateExtensionHost;
        if ( IopIoRateExtensionHost )
        {
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88)) )
          {
            if ( *(_QWORD *)(v30 + 96) )
            {
              guard_dispatch_icall_no_overrides(v20, Lock);
              v88 = (struct _EX_RUNDOWN_REF *)(IopIoRateExtensionHost + 88);
              _m_prefetchw((const void *)(IopIoRateExtensionHost + 88));
              v89 = v88->Count & 0xFFFFFFFFFFFFFFFEuLL;
              Lock = (unsigned __int64 *volatile)(v89 - 2);
              if ( v89 != _InterlockedCompareExchange64((volatile signed __int64 *)v88, v89 - 2, v89) )
                ExfReleaseRundownProtection(v88);
            }
          }
        }
      }
    }
    if ( (v12 & 0xFF00) == 0 )
      goto LABEL_84;
    __incgsdword(0x90E8u);
    v31 = *(unsigned __int8 *)(v6 + 27);
    if ( *(_UNKNOWN **)(v20 + 544) == &KiInitialProcess )
      goto LABEL_84;
    v95.Next = 0LL;
    LOBYTE(SystemArgument1) = 0;
    v32 = KeGetCurrentIrql();
    v98 = v32;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v32);
    v33 = KeGetCurrentPrcb();
    if ( *(char *)(v20 + 195) > 0 && *(char *)(v20 + 195) < v31 )
    {
      v34 = *(_QWORD **)(v20 + 72);
      v35 = 0;
      v97 = v34;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 64), 0LL) )
      {
        do
        {
          if ( (++v35 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v34) )
          {
            HvlNotifyLongSpinWait(v35);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v20 + 64) );
      }
      if ( *(char *)(v20 + 195) > 0 && *(char *)(v20 + 195) < v31 )
      {
        LOBYTE(SystemArgument1) = 1;
        KiSetPriorityBoost((unsigned int)&v95, v20, (char)v31, (_DWORD)v97, KiLockQuantumTarget);
      }
      *(_QWORD *)(v20 + 64) = 0LL;
      if ( (_BYTE)SystemArgument1 )
      {
        v36 = v95.Next;
        v37 = 0;
        if ( v95.Next )
        {
          v95.Next = v95.Next->Next;
          do
          {
            KiDeferredReadySingleThread(v33, (ULONG_PTR)&v36[-27], &v95, 0LL);
            v36 = v95.Next;
            ++v37;
            if ( v95.Next )
              v95.Next = v95.Next->Next;
            if ( (v37 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch((char *)&v33->DeferredDispatchInterrupts);
          }
          while ( v36 );
        }
        KiFlushSoftwareInterruptBatch((char *)&v33->DeferredDispatchInterrupts);
        KiCheckForThreadDispatch(v33, (unsigned __int8)v98);
LABEL_84:
        v12 = 0;
        v91 = 0;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v20 - 48, 0, 1u, 0x746C6644u);
        v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v10 = v38 <= 1;
        v39 = v38 - 1;
        if ( v10 )
        {
          if ( *(_QWORD *)(v20 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v20 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v20 - 48) >> 8)],
              v20,
              3uLL,
              *(_QWORD *)(v20 - 40));
          if ( v39 < 0 )
            KeBugCheckEx(0x18u, 0LL, v20, 4uLL, v39);
          ObpDeferObjectDeletion(v20 - 48, Lock, 0LL, v27);
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 96);
        v40 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v40);
        LockHandle.OldIrql = v40;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v41 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)(v6 + 96), (__int64)&LockHandle);
          if ( v41 )
            KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v41);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v6 + 96));
        }
LABEL_92:
        v15 = v93;
        goto LABEL_93;
      }
      LOBYTE(v32) = v98;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v32);
    __writecr8((unsigned __int8)v32);
    goto LABEL_84;
  }
LABEL_93:
  if ( *(char *)(v6 + 26) >= 0 )
  {
    v50 = *(_QWORD *)(v6 + 16);
    if ( v50 )
    {
      v51 = *(_DWORD *)(v50 + 8);
      v52 = 1;
      LODWORD(v98) = v51;
      while ( 1 )
      {
        if ( v52 >= v51 )
          goto LABEL_94;
        v53 = *(_DWORD *)(v50 + 24);
        v50 += 16LL;
        v54 = *(_QWORD *)v50;
        if ( (v53 & 2) != 0 )
        {
          v54 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v54 & 3) != 0 )
        {
          goto LABEL_114;
        }
        if ( v54 )
        {
          if ( v15 && (v53 & 1) == 0 )
          {
            v56 = (*(_DWORD *)(v54 + 1440) >> 9) & 7;
            v57 = *(_QWORD *)(*(_QWORD *)(v54 + 544) + 672LL);
            if ( v57 )
            {
              v58 = *(_DWORD *)(v57 + 1084);
              if ( v56 >= v58 )
                v56 = v58;
            }
            if ( (unsigned int)v56 < 2 )
            {
              v91 = v12 | 4;
              if ( PspAlwaysTrackIoBoosting )
              {
                v82 = ExAllocatePool2(0x40uLL);
                v97 = (_QWORD *)v82;
                v83 = v82;
                if ( v82 )
                {
                  RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v82 + 16), 0LL);
                  *(_QWORD *)(v83 + 96) = KeGetCurrentThread();
                  *(_QWORD *)(v83 + 104) = 0LL;
                }
                LOBYTE(SystemArgument1) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v54 + 1552));
                v84 = _InterlockedExchangeAdd((volatile signed __int32 *)(v54 + 1504), 1u);
                v85 = v97;
                v59 = v84 + 1;
                if ( v97 )
                {
                  v86 = *(_QWORD **)(v54 + 1528);
                  if ( *v86 != v54 + 1520 )
                    goto LABEL_233;
                  *v97 = v54 + 1520;
                  v85[1] = v86;
                  *v86 = v85;
                  *(_QWORD *)(v54 + 1528) = v85;
                }
                KxReleaseSpinLock(v54 + 1552);
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)SystemArgument1);
                __writecr8((unsigned __int8)SystemArgument1);
              }
              else
              {
                v59 = _InterlockedIncrement((volatile signed __int32 *)(v54 + 1504));
              }
              if ( v59 == 1 )
                KeAbProcessEffectiveIoPriorityChange(v54, 0LL);
              *(_DWORD *)(v50 + 8) |= 1u;
            }
          }
          if ( v103 && (*(_DWORD *)(v50 + 8) & 4) == 0 )
          {
            v91 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v54 + 1508)) == 1 && *(_BYTE *)(v54 + 792) )
            {
              v77 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(v77);
              SystemArgument1 = KeGetCurrentPrcb();
              if ( (unsigned int)KiAbThreadInsertList(v54, (_QWORD *)SystemArgument1 + 4655, (_QWORD *)(v54 + 808)) )
                KiAbQueueAutoBoostDpc((struct _KDPC *)SystemArgument1);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v77);
              __writecr8(v77);
            }
            *(_DWORD *)(v50 + 8) |= 4u;
          }
          v12 = v91;
          if ( v94 && *(unsigned __int8 *)(v6 + 27) > *(char *)(v54 + 195) )
          {
            v12 = v91 | 0xFF00;
            v91 |= 0xFF00u;
          }
          if ( v12 )
            break;
        }
LABEL_114:
        v51 = v98;
        ++v52;
        v15 = v93;
      }
      ObfReferenceObjectWithTag((PVOID)v54, 0x746C6644u);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (v12 & 4) != 0 )
      {
        ++ExpResourceIoBoostedShared;
        IoBoostThreadIoPriority(v54, (unsigned int)v8, 0LL);
      }
      if ( (v12 & 2) != 0 )
        PsBoostThreadOutstandingIoQoS(v54);
      if ( (v12 & 0xFF00) != 0 )
      {
        __incgsdword(0x90ECu);
        v62 = *(unsigned __int8 *)(v6 + 27);
        v91 = *(unsigned __int8 *)(v6 + 27);
        v96.Next = 0LL;
        if ( *(_UNKNOWN **)(v54 + 544) != &KiInitialProcess )
        {
          LOBYTE(SystemArgument1) = 0;
          v63 = (_QWORD *)KeGetCurrentIrql();
          v97 = v63;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v63);
            v62 = (unsigned int)v91;
          }
          v99 = KeGetCurrentPrcb();
          if ( *(char *)(v54 + 195) > 0 && *(char *)(v54 + 195) < (int)v62 )
          {
            v60 = *(_QWORD *)(v54 + 72);
            v64 = 0;
            v100 = v60;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 64), 0LL) )
            {
              do
              {
                if ( (++v64 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v62) )
                {
                  HvlNotifyLongSpinWait(v64);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v54 + 64) );
            }
            if ( *(char *)(v54 + 195) > 0 && *(char *)(v54 + 195) < v91 )
            {
              LOBYTE(SystemArgument1) = 1;
              KiSetPriorityBoost((unsigned int)&v96, v54, (char)v91, v100, KiLockQuantumTarget);
            }
            *(_QWORD *)(v54 + 64) = 0LL;
            if ( (_BYTE)SystemArgument1 )
            {
              v65 = v96.Next;
              if ( v96.Next )
              {
                v66 = 0;
                v67 = v99;
                v96.Next = v96.Next->Next;
                do
                {
                  KiDeferredReadySingleThread(v67, (ULONG_PTR)&v65[-27], &v96, 0LL);
                  v65 = v96.Next;
                  ++v66;
                  if ( v96.Next )
                    v96.Next = v96.Next->Next;
                  if ( (v66 & 0xF) == 0 )
                    KiFlushSoftwareInterruptBatch((char *)&v67->DeferredDispatchInterrupts);
                }
                while ( v65 );
                v6 = a1;
              }
              v68 = v99;
              KiFlushSoftwareInterruptBatch((char *)&v99->DeferredDispatchInterrupts);
              KiCheckForThreadDispatch(v68, (unsigned __int8)v97);
              goto LABEL_166;
            }
            LOBYTE(v63) = (_BYTE)v97;
          }
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v63);
          __writecr8((unsigned __int8)v63);
        }
      }
LABEL_166:
      if ( ObpTraceFlags )
        ObpPushStackInfo(v54 - 48, 0, 1u, 0x746C6644u);
      v69 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v10 = v69 <= 1;
      v70 = v69 - 1;
      if ( v10 )
      {
        if ( *(_QWORD *)(v54 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v54 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v54 - 48) >> 8)],
            v54,
            3uLL,
            *(_QWORD *)(v54 - 40));
        if ( v70 < 0 )
          KeBugCheckEx(0x18u, 0LL, v54, 4uLL, v70);
        ObpDeferObjectDeletion(v54 - 48, v60, 0LL, v61);
      }
      v71 = (volatile __int64 *)(v6 + 96);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 96);
      v12 = 0;
      v91 = 0;
      v72 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(v72);
        v71 = (volatile __int64 *)(v6 + 96);
      }
      LockHandle.OldIrql = v72;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v73 = (struct _KPRCB **)_InterlockedExchange64(v71, (__int64)&LockHandle);
        if ( v73 )
          KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v73);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v71);
      }
      v74 = *(_QWORD *)(v6 + 16);
      if ( !v74 || *(_DWORD *)(v74 + 8) != (_DWORD)v98 )
        goto LABEL_94;
      goto LABEL_114;
    }
  }
LABEL_94:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    result = KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
    goto LABEL_102;
  }
  _m_prefetchw(&LockHandle);
  v42 = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_98:
    LockHandle.LockQueue.Next = 0LL;
    result = v42 + 8;
    v43 = (unsigned __int8)LockHandle.LockQueue.Lock;
    if ( ((v43 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)result, (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
    {
      _InterlockedOr(v90, 0);
      v45 = KeDisableInterrupts();
      result = KiHaltOnAddressWakeEntireList(v46, _InterlockedExchange64(v44, 0LL));
      if ( v45 )
      {
        v47 = KeGetCurrentPrcb();
        SchedulerAssist = v47->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          LODWORD(result) = *SchedulerAssist;
          do
          {
            v55 = result;
            result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
          }
          while ( v55 != (_DWORD)result );
          if ( (result & 0x200000) != 0 )
            result = KiRemoveSystemWorkPriorityKick((__int64)v47);
        }
        _enable();
      }
    }
    goto LABEL_102;
  }
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
             0LL,
             (signed __int64)&LockHandle);
  if ( (struct _KLOCK_QUEUE_HANDLE *)result != &LockHandle )
  {
    v42 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    goto LABEL_98;
  }
LABEL_102:
  v49 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
  __writecr8(v49);
  return result;
}
