/*
 * XREFs of ExpApplyPriorityBoost @ 0x14022CFA0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPrewaitBoost @ 0x14022CEE0 (ExpApplyPrewaitBoost.c)
 *     ExpApplyRewaitBoost @ 0x14022E860 (ExpApplyRewaitBoost.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1402F14D8 (ExpConvertExclusiveToSharedLite.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x14022DE70 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiSetPriorityBoost @ 0x1402DFE70 (KiSetPriorityBoost.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140414EE0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char __fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rax
  bool v5; // zf
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // ebx
  int v10; // eax
  bool v11; // cc
  volatile __int64 *v12; // rdi
  int v13; // r12d
  int v14; // r13d
  unsigned __int8 CurrentIrql; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int8 v18; // dl
  char v19; // cl
  int v20; // eax
  ULONG_PTR v21; // rdi
  int v22; // ecx
  __int64 v23; // rax
  int v24; // eax
  signed __int32 v25; // esi
  _DWORD *v26; // rcx
  __int64 v27; // r8
  __int64 Next; // rax
  unsigned __int64 *volatile Lock; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // rax
  volatile __int64 *v32; // rdi
  unsigned __int8 v33; // si
  __int64 v34; // rdx
  unsigned __int64 v35; // rbx
  signed __int64 v36; // rcx
  unsigned __int64 *volatile v37; // rdx
  unsigned __int64 OldIrql; // rsi
  __int64 v39; // rsi
  __int64 v40; // rdx
  int v41; // r15d
  __int64 v42; // rdx
  char v43; // r12
  unsigned __int8 v44; // si
  struct _KPRCB *v45; // r13
  _QWORD *v46; // rcx
  unsigned int v47; // esi
  _QWORD *v48; // rsi
  char v49; // r15
  __int64 v50; // rdi
  unsigned int v51; // eax
  unsigned int v52; // esi
  int v53; // eax
  ULONG_PTR v54; // r15
  int v55; // ecx
  __int64 v56; // rax
  int v57; // eax
  signed __int32 v58; // r12d
  __int64 v59; // rdx
  int v60; // r13d
  _QWORD *v61; // r12
  __int64 v62; // rcx
  unsigned int v63; // r12d
  _QWORD *v64; // r12
  char v65; // r13
  struct _KPRCB *v66; // r14
  struct _KPRCB *v67; // r13
  signed __int64 v68; // rax
  signed __int64 v69; // rax
  volatile __int64 *v70; // rcx
  unsigned __int8 v71; // r15
  __int64 v72; // rdx
  __int64 v73; // rax
  unsigned __int8 v74; // si
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int8 v76; // r12
  struct _KPRCB *v77; // r13
  __int64 Pool2; // rax
  _QWORD *v79; // r12
  unsigned __int64 v80; // r15
  _QWORD *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r12
  unsigned __int64 v84; // r13
  signed __int32 v85; // r12d
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  volatile signed __int64 *v88; // rcx
  struct _EX_RUNDOWN_REF *v89; // rcx
  unsigned __int64 v90; // rtt
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v93; // [rsp+50h] [rbp-11h]
  int v94; // [rsp+54h] [rbp-Dh]
  _QWORD *v95; // [rsp+58h] [rbp-9h] BYREF
  _QWORD *v96; // [rsp+60h] [rbp-1h] BYREF
  _QWORD *v97; // [rsp+68h] [rbp+7h]
  unsigned int v98; // [rsp+70h] [rbp+Fh]
  struct _KPRCB *v99; // [rsp+78h] [rbp+17h]
  __int64 v100; // [rsp+80h] [rbp+1Fh]
  void *retaddr; // [rsp+C0h] [rbp+5Fh]
  int v103; // [rsp+D0h] [rbp+6Fh]
  unsigned __int8 v104; // [rsp+E0h] [rbp+7Fh]
  int v105; // [rsp+E0h] [rbp+7Fh]
  int v106; // [rsp+E0h] [rbp+7Fh]
  char v107; // [rsp+E0h] [rbp+7Fh]

  LOBYTE(v4) = 0;
  v5 = (*(_BYTE *)(a1 + 26) & 8) == 0;
  v7 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v5 )
    return v4;
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 544) + 672LL);
  v9 = (*(_DWORD *)(a3 + 1440) >> 9) & 7;
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 1084);
    if ( v9 >= v10 )
      v9 = v10;
  }
  v11 = v9 <= 2;
  if ( v9 >= 2 )
  {
LABEL_6:
    if ( !v11 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( (struct _KTHREAD *)a3 != KeGetCurrentThread() )
  {
    v11 = v9 <= 2;
    goto LABEL_6;
  }
LABEL_7:
  v9 = 2;
LABEL_8:
  v12 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v94 = a2 & 0xFF00;
  v13 = a2 & 2;
  v93 = a2 & 4;
  LockHandle.LockQueue.Next = 0LL;
  v14 = 0;
  v103 = v13;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v16 = _InterlockedExchange64(v12, (__int64)&LockHandle);
    if ( v16 )
      KxWaitForLockOwnerShip(&LockHandle, v16);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7 + 96);
  }
  v17 = v93;
  if ( v93 )
    *(_WORD *)(v7 + 26) |= 4u;
  if ( v13 )
    *(_WORD *)(v7 + 26) |= 2u;
  if ( v94 )
  {
    v18 = *(_BYTE *)(a3 + 195);
    if ( (char)v18 > (int)*(unsigned __int8 *)(v7 + 27) )
    {
      v19 = 15;
      if ( v18 < 0xFu )
        v19 = *(_BYTE *)(a3 + 195);
      *(_BYTE *)(v7 + 27) = v19;
    }
  }
  v20 = *(_DWORD *)(v7 + 56);
  v21 = *(_QWORD *)(v7 + 48);
  if ( (v20 & 2) != 0 )
  {
    v21 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v21 & 3) != 0 )
  {
    goto LABEL_62;
  }
  if ( v21 )
  {
    if ( (_DWORD)v17 && (v20 & 1) == 0 )
    {
      v22 = (*(_DWORD *)(v21 + 1440) >> 9) & 7;
      v23 = *(_QWORD *)(*(_QWORD *)(v21 + 544) + 672LL);
      if ( v23 )
      {
        v24 = *(_DWORD *)(v23 + 1084);
        if ( v22 >= v24 )
          v22 = v24;
      }
      if ( (unsigned int)v22 < 2 )
      {
        v14 = 4;
        if ( PspAlwaysTrackIoBoosting )
        {
          Pool2 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
          v79 = (_QWORD *)Pool2;
          if ( Pool2 )
          {
            RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
            v79[12] = KeGetCurrentThread();
            v79[13] = 0LL;
          }
          v80 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 1552));
          v25 = _InterlockedIncrement((volatile signed __int32 *)(v21 + 1504));
          if ( v79 )
          {
            v81 = *(_QWORD **)(v21 + 1528);
            if ( *v81 != v21 + 1520 )
LABEL_229:
              __fastfail(3u);
            *v79 = v21 + 1520;
            v79[1] = v81;
            *v81 = v79;
            *(_QWORD *)(v21 + 1528) = v79;
          }
          v88 = (volatile signed __int64 *)(v21 + 1552);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64(v88, 0LL);
          else
            KiReleaseSpinLockInstrumented(v88, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v80);
          __writecr8(v80);
          v13 = v103;
        }
        else
        {
          v25 = _InterlockedIncrement((volatile signed __int32 *)(v21 + 1504));
        }
        if ( v25 == 1 )
          KeAbProcessEffectiveIoPriorityChange(v21, 0LL);
        *(_DWORD *)(v7 + 56) |= 1u;
      }
    }
    if ( v13 )
    {
      v26 = (_DWORD *)(v7 + 56);
      if ( (*(_DWORD *)(v7 + 56) & 4) == 0 )
      {
        v14 |= 2u;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v21 + 1508)) == 1 && *(_BYTE *)(v21 + 792) )
        {
          v74 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v74, 2LL);
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (unsigned int)KiAbThreadInsertList(v21, &CurrentPrcb->AbPropagateBoostsList, v21 + 808) )
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v74);
          __writecr8(v74);
          v26 = (_DWORD *)(v7 + 56);
        }
        *v26 |= 4u;
      }
    }
    if ( v94 && *(unsigned __int8 *)(v7 + 27) > *(char *)(v21 + 195) )
      v14 |= 0xFF00u;
    if ( !v14 )
      goto LABEL_61;
    ObfReferenceObjectWithTag((PVOID)v21, 0x746C6644u);
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
          goto LABEL_81;
        Next = KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      Lock = LockHandle.LockQueue.Lock;
      if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                        (volatile __int64 *)(Next + 8),
                                                        (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
        KeWakeAddressAll(Next + 8, Lock, v27, a4);
    }
    else
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
LABEL_81:
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
    __writecr8(OldIrql);
    if ( (v14 & 4) != 0 )
    {
      ++ExpResourceIoBoosted;
      IoBoostThreadIoPriority(v21, (unsigned int)v9);
    }
    if ( (v14 & 2) != 0 )
    {
      if ( *(_DWORD *)(v21 + 1512) )
      {
        v39 = IopIoRateExtensionHost;
        if ( IopIoRateExtensionHost )
        {
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88)) )
          {
            if ( *(_QWORD *)(v39 + 96) )
            {
              guard_dispatch_icall_no_overrides(v21, v40, v27, a4);
              v89 = (struct _EX_RUNDOWN_REF *)(IopIoRateExtensionHost + 88);
              _m_prefetchw((const void *)(IopIoRateExtensionHost + 88));
              v90 = v89->Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v90 != _InterlockedCompareExchange64((volatile signed __int64 *)v89, v90 - 2, v90) )
                ExfReleaseRundownProtection(v89);
            }
          }
        }
      }
    }
    if ( (v14 & 0xFF00) == 0 )
      goto LABEL_53;
    __incgsdword(0x90E8u);
    v41 = *(unsigned __int8 *)(v7 + 27);
    if ( *(_UNKNOWN **)(v21 + 544) == &KiInitialProcess )
      goto LABEL_53;
    v42 = 0LL;
    v95 = 0LL;
    v43 = 0;
    v44 = KeGetCurrentIrql();
    v104 = v44;
    __writecr8(2uLL);
    if ( KiIrqlFlags != (unsigned __int8)v95 )
    {
      KiRaiseIrqlProcessIrqlFlags(v44, 2LL);
      v42 = 0LL;
    }
    v45 = KeGetCurrentPrcb();
    if ( *(char *)(v21 + 195) > 0 && *(char *)(v21 + 195) < v41 )
    {
      v46 = *(_QWORD **)(v21 + 72);
      v47 = 0;
      v97 = v46;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 64), 0LL) )
      {
        do
        {
          if ( (++v47 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v46, v42, v27, a4) )
          {
            HvlNotifyLongSpinWait(v47);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v21 + 64) );
      }
      if ( *(char *)(v21 + 195) > 0 && *(char *)(v21 + 195) < v41 )
      {
        v43 = 1;
        KiSetPriorityBoost((unsigned int)&v95, v21, (char)v41, (_DWORD)v97, KiLockQuantumTarget);
      }
      *(_QWORD *)(v21 + 64) = 0LL;
      if ( v43 )
      {
        v48 = v95;
        v49 = 0;
        if ( v95 )
        {
          v95 = (_QWORD *)*v95;
          do
          {
            KiDeferredReadySingleThread(v45, v48 - 27, &v95, 0LL);
            v48 = v95;
            ++v49;
            if ( v95 )
              v95 = (_QWORD *)*v95;
            if ( (v49 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(&v45->DeferredDispatchInterrupts);
          }
          while ( v48 );
        }
        KiFlushSoftwareInterruptBatch(&v45->DeferredDispatchInterrupts);
        KiCheckForThreadDispatch(v45);
LABEL_52:
        v13 = v103;
LABEL_53:
        v14 = 0;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v21 - 48);
        v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v11 = v30 <= 1;
        v31 = v30 - 1;
        if ( v11 )
        {
          if ( *(_QWORD *)(v21 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v21 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v21 - 48) >> 8)],
              v21,
              3uLL,
              *(_QWORD *)(v21 - 40));
          if ( v31 < 0 )
            KeBugCheckEx(0x18u, 0LL, v21, 4uLL, v31);
          ObpDeferObjectDeletion(v21 - 48);
        }
        v32 = (volatile __int64 *)(v7 + 96);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 96);
        v33 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v33, 2LL);
        LockHandle.OldIrql = v33;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v34 = _InterlockedExchange64(v32, (__int64)&LockHandle);
          if ( v34 )
            KxWaitForLockOwnerShip(&LockHandle, v34);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v32);
        }
LABEL_61:
        v17 = v93;
        goto LABEL_62;
      }
      v44 = v104;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v44);
    __writecr8(v44);
    goto LABEL_52;
  }
LABEL_62:
  if ( *(char *)(v7 + 26) >= 0 )
  {
    v50 = *(_QWORD *)(v7 + 16);
    if ( v50 )
    {
      v51 = *(_DWORD *)(v50 + 8);
      v52 = 1;
      v98 = v51;
      while ( 1 )
      {
        if ( v52 >= v51 )
          goto LABEL_63;
        v53 = *(_DWORD *)(v50 + 24);
        v50 += 16LL;
        v54 = *(_QWORD *)v50;
        if ( (v53 & 2) != 0 )
        {
          v54 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v54 & 3) != 0 )
        {
          goto LABEL_122;
        }
        if ( v54 )
        {
          if ( (_DWORD)v17 && (v53 & 1) == 0 )
          {
            v55 = (*(_DWORD *)(v54 + 1440) >> 9) & 7;
            v56 = *(_QWORD *)(*(_QWORD *)(v54 + 544) + 672LL);
            if ( v56 )
            {
              v57 = *(_DWORD *)(v56 + 1084);
              if ( v55 >= v57 )
                v55 = v57;
            }
            if ( (unsigned int)v55 < 2 )
            {
              v14 |= 4u;
              v105 = v14;
              if ( PspAlwaysTrackIoBoosting )
              {
                v82 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
                v97 = (_QWORD *)v82;
                v83 = v82;
                if ( v82 )
                {
                  RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v82 + 16), 0LL);
                  *(_QWORD *)(v83 + 96) = KeGetCurrentThread();
                  *(_QWORD *)(v83 + 104) = 0LL;
                }
                v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v54 + 1552));
                v85 = _InterlockedExchangeAdd((volatile signed __int32 *)(v54 + 1504), 1u);
                v86 = v97;
                v58 = v85 + 1;
                if ( v97 )
                {
                  v87 = *(_QWORD **)(v54 + 1528);
                  if ( *v87 != v54 + 1520 )
                    goto LABEL_229;
                  *v97 = v54 + 1520;
                  v86[1] = v87;
                  *v87 = v86;
                  *(_QWORD *)(v54 + 1528) = v86;
                }
                KxReleaseSpinLock(v54 + 1552);
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v84);
                __writecr8(v84);
                v14 = v105;
              }
              else
              {
                v58 = _InterlockedIncrement((volatile signed __int32 *)(v54 + 1504));
              }
              if ( v58 == 1 )
                KeAbProcessEffectiveIoPriorityChange(v54, 0LL);
              *(_DWORD *)(v50 + 8) |= 1u;
              v13 = v103;
            }
          }
          if ( v13 && (*(_DWORD *)(v50 + 8) & 4) == 0 )
          {
            v14 |= 2u;
            v106 = v14;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v54 + 1508)) == 1 && *(_BYTE *)(v54 + 792) )
            {
              v76 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(v76, 2LL);
              v77 = KeGetCurrentPrcb();
              if ( (unsigned int)KiAbThreadInsertList(v54, &v77->AbPropagateBoostsList, v54 + 808) )
                KiAbQueueAutoBoostDpc(v77);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v76);
              __writecr8(v76);
              v14 = v106;
            }
            *(_DWORD *)(v50 + 8) |= 4u;
          }
          if ( v94 && *(unsigned __int8 *)(v7 + 27) > *(char *)(v54 + 195) )
            v14 |= 0xFF00u;
          if ( v14 )
            break;
        }
LABEL_122:
        v51 = v98;
        ++v52;
        v13 = v103;
        v17 = v93;
      }
      ObfReferenceObjectWithTag((PVOID)v54, 0x746C6644u);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (v14 & 4) != 0 )
      {
        ++ExpResourceIoBoostedShared;
        IoBoostThreadIoPriority(v54, (unsigned int)v9);
      }
      if ( (v14 & 2) != 0 )
        PsBoostThreadOutstandingIoQoS(v54);
      if ( (v14 & 0xFF00) != 0 )
      {
        __incgsdword(0x90ECu);
        v60 = *(unsigned __int8 *)(v7 + 27);
        v96 = 0LL;
        if ( *(_UNKNOWN **)(v54 + 544) != &KiInitialProcess )
        {
          v107 = 0;
          v61 = (_QWORD *)KeGetCurrentIrql();
          v97 = v61;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v61, 2LL);
          v99 = KeGetCurrentPrcb();
          if ( *(char *)(v54 + 195) > 0 && *(char *)(v54 + 195) < v60 )
          {
            v62 = *(_QWORD *)(v54 + 72);
            v100 = v62;
            v63 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 64), 0LL) )
            {
              do
              {
                if ( (++v63 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v62, v59, v17, a4) )
                {
                  HvlNotifyLongSpinWait(v63);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v54 + 64) );
            }
            if ( *(char *)(v54 + 195) > 0 && *(char *)(v54 + 195) < v60 )
            {
              v107 = 1;
              KiSetPriorityBoost((unsigned int)&v96, v54, (char)v60, v100, KiLockQuantumTarget);
            }
            *(_QWORD *)(v54 + 64) = 0LL;
            if ( v107 )
            {
              v64 = v96;
              v65 = 0;
              if ( v96 )
              {
                v66 = v99;
                v96 = (_QWORD *)*v96;
                do
                {
                  KiDeferredReadySingleThread(v66, v64 - 27, &v96, 0LL);
                  v64 = v96;
                  ++v65;
                  if ( v96 )
                    v96 = (_QWORD *)*v96;
                  if ( (v65 & 0xF) == 0 )
                    KiFlushSoftwareInterruptBatch(&v66->DeferredDispatchInterrupts);
                }
                while ( v64 );
                v7 = a1;
              }
              v67 = v99;
              KiFlushSoftwareInterruptBatch(&v99->DeferredDispatchInterrupts);
              KiCheckForThreadDispatch(v67);
              goto LABEL_170;
            }
            LOBYTE(v61) = (_BYTE)v97;
          }
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v61);
          __writecr8((unsigned __int8)v61);
        }
      }
LABEL_170:
      if ( ObpTraceFlags )
        ObpPushStackInfo(v54 - 48);
      v68 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v11 = v68 <= 1;
      v69 = v68 - 1;
      if ( v11 )
      {
        if ( *(_QWORD *)(v54 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v54 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v54 - 48) >> 8)],
            v54,
            3uLL,
            *(_QWORD *)(v54 - 40));
        if ( v69 < 0 )
          KeBugCheckEx(0x18u, 0LL, v54, 4uLL, v69);
        ObpDeferObjectDeletion(v54 - 48);
      }
      v70 = (volatile __int64 *)(v7 + 96);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 96);
      v14 = 0;
      v71 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(v71, 2LL);
        v70 = (volatile __int64 *)(v7 + 96);
      }
      LockHandle.OldIrql = v71;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v72 = _InterlockedExchange64(v70, (__int64)&LockHandle);
        if ( v72 )
          KxWaitForLockOwnerShip(&LockHandle, v72);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v70);
      }
      v73 = *(_QWORD *)(v7 + 16);
      if ( !v73 || *(_DWORD *)(v73 + 8) != v98 )
        goto LABEL_63;
      goto LABEL_122;
    }
  }
LABEL_63:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&LockHandle);
    v4 = (signed __int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      v4 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
             0LL,
             (signed __int64)&LockHandle);
      if ( (struct _KLOCK_QUEUE_HANDLE *)v4 == &LockHandle )
        goto LABEL_66;
      v4 = KxWaitForLockChainValid(&LockHandle);
    }
    v36 = v4 + 8;
    LockHandle.LockQueue.Next = 0LL;
    v37 = LockHandle.LockQueue.Lock;
    LOBYTE(v4) = (unsigned __int8)v37 ^ _InterlockedExchange64(
                                          (volatile __int64 *)(v4 + 8),
                                          (__int64)LockHandle.LockQueue.Lock);
    if ( (v4 & 4) != 0 )
      LOBYTE(v4) = KeWakeAddressAll(v36, v37, v17, a4);
    goto LABEL_66;
  }
  LOBYTE(v4) = KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_66:
  v35 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
    LOBYTE(v4) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
  __writecr8(v35);
  return v4;
}
