/*
 * XREFs of ExpApplyPriorityBoost @ 0x140277A10
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPrewaitBoost @ 0x140277950 (ExpApplyPrewaitBoost.c)
 *     ExpApplyRewaitBoost @ 0x1402792D0 (ExpApplyRewaitBoost.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1403D79F8 (ExpConvertExclusiveToSharedLite.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402788E0 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiSetPriorityBoost @ 0x140338930 (KiSetPriorityBoost.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14041F1A0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  __int64 v16; // r8
  unsigned __int8 v17; // dl
  char v18; // cl
  int v19; // eax
  ULONG_PTR v20; // rdi
  int v21; // ecx
  __int64 v22; // rax
  int v23; // eax
  signed __int32 v24; // esi
  _DWORD *v25; // rcx
  __int64 v26; // r8
  __int64 Next; // rax
  unsigned __int64 *volatile Lock; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // rax
  volatile __int64 *v31; // rdi
  unsigned __int8 v32; // si
  unsigned __int64 v33; // rbx
  signed __int64 v34; // rcx
  unsigned __int64 *volatile v35; // rdx
  unsigned __int64 OldIrql; // rsi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // r15d
  char v41; // r12
  unsigned __int8 v42; // si
  struct _KPRCB *v43; // r13
  _QWORD *v44; // rcx
  unsigned int v45; // esi
  _QWORD *v46; // rsi
  char v47; // r15
  __int64 v48; // rdi
  unsigned int v49; // eax
  unsigned int v50; // esi
  int v51; // eax
  ULONG_PTR v52; // r15
  int v53; // ecx
  __int64 v54; // rax
  int v55; // eax
  signed __int32 v56; // r12d
  int v57; // r13d
  _QWORD *v58; // r12
  __int64 v59; // rcx
  unsigned int v60; // r12d
  _QWORD *v61; // r12
  char v62; // r13
  struct _KPRCB *v63; // r14
  struct _KPRCB *v64; // r13
  signed __int64 v65; // rax
  signed __int64 v66; // rax
  volatile __int64 *v67; // rcx
  unsigned __int8 v68; // r15
  __int64 v69; // rax
  unsigned __int8 v70; // si
  struct _KDPC *CurrentPrcb; // r15
  unsigned __int8 v72; // r12
  struct _KDPC *v73; // r13
  __int64 Pool2; // rax
  _QWORD *v75; // r12
  unsigned __int64 v76; // r15
  _QWORD *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r12
  unsigned __int64 v80; // r13
  signed __int32 v81; // r12d
  _QWORD *v82; // rax
  _QWORD *v83; // rdx
  volatile signed __int64 *v84; // rcx
  struct _EX_RUNDOWN_REF *v85; // rcx
  unsigned __int64 v86; // rtt
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v89; // [rsp+50h] [rbp-11h]
  int v90; // [rsp+54h] [rbp-Dh]
  _QWORD *v91; // [rsp+58h] [rbp-9h] BYREF
  _QWORD *v92; // [rsp+60h] [rbp-1h] BYREF
  _QWORD *v93; // [rsp+68h] [rbp+7h]
  unsigned int v94; // [rsp+70h] [rbp+Fh]
  struct _KPRCB *v95; // [rsp+78h] [rbp+17h]
  __int64 v96; // [rsp+80h] [rbp+1Fh]
  __int64 retaddr; // [rsp+C0h] [rbp+5Fh]
  int v99; // [rsp+D0h] [rbp+6Fh]
  unsigned __int8 v100; // [rsp+E0h] [rbp+7Fh]
  int v101; // [rsp+E0h] [rbp+7Fh]
  int v102; // [rsp+E0h] [rbp+7Fh]
  char v103; // [rsp+E0h] [rbp+7Fh]

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
  v90 = a2 & 0xFF00;
  v13 = a2 & 2;
  v89 = a2 & 4;
  LockHandle.LockQueue.Next = 0LL;
  v14 = 0;
  v99 = v13;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v12, (__int64)&LockHandle) )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7 + 96);
  }
  v16 = v89;
  if ( v89 )
    *(_WORD *)(v7 + 26) |= 4u;
  if ( v13 )
    *(_WORD *)(v7 + 26) |= 2u;
  if ( v90 )
  {
    v17 = *(_BYTE *)(a3 + 195);
    if ( (char)v17 > (int)*(unsigned __int8 *)(v7 + 27) )
    {
      v18 = 15;
      if ( v17 < 0xFu )
        v18 = *(_BYTE *)(a3 + 195);
      *(_BYTE *)(v7 + 27) = v18;
    }
  }
  v19 = *(_DWORD *)(v7 + 56);
  v20 = *(_QWORD *)(v7 + 48);
  if ( (v19 & 2) != 0 )
  {
    v20 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v20 & 3) != 0 )
  {
    goto LABEL_62;
  }
  if ( v20 )
  {
    if ( (_DWORD)v16 && (v19 & 1) == 0 )
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
        v14 = 4;
        if ( PspAlwaysTrackIoBoosting )
        {
          Pool2 = ExAllocatePool2(0x40uLL);
          v75 = (_QWORD *)Pool2;
          if ( Pool2 )
          {
            RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
            v75[12] = KeGetCurrentThread();
            v75[13] = 0LL;
          }
          v76 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 1552));
          v24 = _InterlockedIncrement((volatile signed __int32 *)(v20 + 1504));
          if ( v75 )
          {
            v77 = *(_QWORD **)(v20 + 1528);
            if ( *v77 != v20 + 1520 )
LABEL_229:
              __fastfail(3u);
            *v75 = v20 + 1520;
            v75[1] = v77;
            *v77 = v75;
            *(_QWORD *)(v20 + 1528) = v75;
          }
          v84 = (volatile signed __int64 *)(v20 + 1552);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64(v84, 0LL);
          else
            KiReleaseSpinLockInstrumented(v84, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v76);
          __writecr8(v76);
          v13 = v99;
        }
        else
        {
          v24 = _InterlockedIncrement((volatile signed __int32 *)(v20 + 1504));
        }
        if ( v24 == 1 )
          KeAbProcessEffectiveIoPriorityChange(v20, 0LL);
        *(_DWORD *)(v7 + 56) |= 1u;
      }
    }
    if ( v13 )
    {
      v25 = (_DWORD *)(v7 + 56);
      if ( (*(_DWORD *)(v7 + 56) & 4) == 0 )
      {
        v14 |= 2u;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v20 + 1508)) == 1 && *(_BYTE *)(v20 + 792) )
        {
          v70 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v70, 2LL);
          CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
          if ( (unsigned int)KiAbThreadInsertList(v20, &CurrentPrcb[581].DpcData, (_QWORD *)(v20 + 808)) )
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v70);
          __writecr8(v70);
          v25 = (_DWORD *)(v7 + 56);
        }
        *v25 |= 4u;
      }
    }
    if ( v90 && *(unsigned __int8 *)(v7 + 27) > *(char *)(v20 + 195) )
      v14 |= 0xFF00u;
    if ( !v14 )
      goto LABEL_61;
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
          goto LABEL_81;
        Next = KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      Lock = LockHandle.LockQueue.Lock;
      if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                        (volatile __int64 *)(Next + 8),
                                                        (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
        KeWakeAddressAll(Next + 8, Lock, v26, a4);
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
      IoBoostThreadIoPriority(v20, (unsigned int)v9, 0LL);
    }
    if ( (v14 & 2) != 0 )
    {
      if ( *(_DWORD *)(v20 + 1512) )
      {
        v37 = IopIoRateExtensionHost;
        if ( IopIoRateExtensionHost )
        {
          if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88)) )
          {
            if ( *(_QWORD *)(v37 + 96) )
            {
              guard_dispatch_icall_no_overrides(v20, v38, v39, a4);
              v85 = (struct _EX_RUNDOWN_REF *)(IopIoRateExtensionHost + 88);
              _m_prefetchw((const void *)(IopIoRateExtensionHost + 88));
              v86 = v85->Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v86 != _InterlockedCompareExchange64((volatile signed __int64 *)v85, v86 - 2, v86) )
                ExfReleaseRundownProtection(v85);
            }
          }
        }
      }
    }
    if ( (v14 & 0xFF00) == 0 )
      goto LABEL_53;
    __incgsdword(0x90E8u);
    v40 = *(unsigned __int8 *)(v7 + 27);
    if ( *(_UNKNOWN **)(v20 + 544) == &KiInitialProcess )
      goto LABEL_53;
    v91 = 0LL;
    v41 = 0;
    v42 = KeGetCurrentIrql();
    v100 = v42;
    __writecr8(2uLL);
    if ( KiIrqlFlags != (unsigned __int8)v91 )
      KiRaiseIrqlProcessIrqlFlags(v42, 2LL);
    v43 = KeGetCurrentPrcb();
    if ( *(char *)(v20 + 195) > 0 && *(char *)(v20 + 195) < v40 )
    {
      v44 = *(_QWORD **)(v20 + 72);
      v45 = 0;
      v93 = v44;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 64), 0LL) )
      {
        do
        {
          if ( (++v45 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v44) )
          {
            HvlNotifyLongSpinWait(v45);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v20 + 64) );
      }
      if ( *(char *)(v20 + 195) > 0 && *(char *)(v20 + 195) < v40 )
      {
        v41 = 1;
        KiSetPriorityBoost((unsigned int)&v91, v20, (char)v40, (_DWORD)v93, KiLockQuantumTarget);
      }
      *(_QWORD *)(v20 + 64) = 0LL;
      if ( v41 )
      {
        v46 = v91;
        v47 = 0;
        if ( v91 )
        {
          v91 = (_QWORD *)*v91;
          do
          {
            KiDeferredReadySingleThread(v43, v46 - 27, &v91, 0LL);
            v46 = v91;
            ++v47;
            if ( v91 )
              v91 = (_QWORD *)*v91;
            if ( (v47 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(&v43->DeferredDispatchInterrupts);
          }
          while ( v46 );
        }
        KiFlushSoftwareInterruptBatch(&v43->DeferredDispatchInterrupts);
        KiCheckForThreadDispatch(v43);
LABEL_52:
        v13 = v99;
LABEL_53:
        v14 = 0;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v20 - 48);
        v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v11 = v29 <= 1;
        v30 = v29 - 1;
        if ( v11 )
        {
          if ( *(_QWORD *)(v20 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v20 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v20 - 48) >> 8)],
              v20,
              3uLL,
              *(_QWORD *)(v20 - 40));
          if ( v30 < 0 )
            KeBugCheckEx(0x18u, 0LL, v20, 4uLL, v30);
          ObpDeferObjectDeletion(v20 - 48);
        }
        v31 = (volatile __int64 *)(v7 + 96);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 96);
        v32 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v32, 2LL);
        LockHandle.OldIrql = v32;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64(v31, (__int64)&LockHandle) )
            KxWaitForLockOwnerShip(&LockHandle);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v31);
        }
LABEL_61:
        v16 = v89;
        goto LABEL_62;
      }
      v42 = v100;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
    __writecr8(v42);
    goto LABEL_52;
  }
LABEL_62:
  if ( *(char *)(v7 + 26) >= 0 )
  {
    v48 = *(_QWORD *)(v7 + 16);
    if ( v48 )
    {
      v49 = *(_DWORD *)(v48 + 8);
      v50 = 1;
      v94 = v49;
      while ( 1 )
      {
        if ( v50 >= v49 )
          goto LABEL_63;
        v51 = *(_DWORD *)(v48 + 24);
        v48 += 16LL;
        v52 = *(_QWORD *)v48;
        if ( (v51 & 2) != 0 )
        {
          v52 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v52 & 3) != 0 )
        {
          goto LABEL_122;
        }
        if ( v52 )
        {
          if ( (_DWORD)v16 && (v51 & 1) == 0 )
          {
            v53 = (*(_DWORD *)(v52 + 1440) >> 9) & 7;
            v54 = *(_QWORD *)(*(_QWORD *)(v52 + 544) + 672LL);
            if ( v54 )
            {
              v55 = *(_DWORD *)(v54 + 1084);
              if ( v53 >= v55 )
                v53 = v55;
            }
            if ( (unsigned int)v53 < 2 )
            {
              v14 |= 4u;
              v101 = v14;
              if ( PspAlwaysTrackIoBoosting )
              {
                v78 = ExAllocatePool2(0x40uLL);
                v93 = (_QWORD *)v78;
                v79 = v78;
                if ( v78 )
                {
                  RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v78 + 16), 0LL);
                  *(_QWORD *)(v79 + 96) = KeGetCurrentThread();
                  *(_QWORD *)(v79 + 104) = 0LL;
                }
                v80 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v52 + 1552));
                v81 = _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 1504), 1u);
                v82 = v93;
                v56 = v81 + 1;
                if ( v93 )
                {
                  v83 = *(_QWORD **)(v52 + 1528);
                  if ( *v83 != v52 + 1520 )
                    goto LABEL_229;
                  *v93 = v52 + 1520;
                  v82[1] = v83;
                  *v83 = v82;
                  *(_QWORD *)(v52 + 1528) = v82;
                }
                KxReleaseSpinLock(v52 + 1552);
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v80);
                __writecr8(v80);
                v14 = v101;
              }
              else
              {
                v56 = _InterlockedIncrement((volatile signed __int32 *)(v52 + 1504));
              }
              if ( v56 == 1 )
                KeAbProcessEffectiveIoPriorityChange(v52, 0LL);
              *(_DWORD *)(v48 + 8) |= 1u;
              v13 = v99;
            }
          }
          if ( v13 && (*(_DWORD *)(v48 + 8) & 4) == 0 )
          {
            v14 |= 2u;
            v102 = v14;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v52 + 1508)) == 1 && *(_BYTE *)(v52 + 792) )
            {
              v72 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(v72, 2LL);
              v73 = (struct _KDPC *)KeGetCurrentPrcb();
              if ( (unsigned int)KiAbThreadInsertList(v52, &v73[581].DpcData, (_QWORD *)(v52 + 808)) )
                KiAbQueueAutoBoostDpc(v73);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v72);
              __writecr8(v72);
              v14 = v102;
            }
            *(_DWORD *)(v48 + 8) |= 4u;
          }
          if ( v90 && *(unsigned __int8 *)(v7 + 27) > *(char *)(v52 + 195) )
            v14 |= 0xFF00u;
          if ( v14 )
            break;
        }
LABEL_122:
        v49 = v94;
        ++v50;
        v13 = v99;
        v16 = v89;
      }
      ObfReferenceObjectWithTag((PVOID)v52, 0x746C6644u);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (v14 & 4) != 0 )
      {
        ++ExpResourceIoBoostedShared;
        IoBoostThreadIoPriority(v52, (unsigned int)v9, 0LL);
      }
      if ( (v14 & 2) != 0 )
        PsBoostThreadOutstandingIoQoS(v52);
      if ( (v14 & 0xFF00) != 0 )
      {
        __incgsdword(0x90ECu);
        v57 = *(unsigned __int8 *)(v7 + 27);
        v92 = 0LL;
        if ( *(_UNKNOWN **)(v52 + 544) != &KiInitialProcess )
        {
          v103 = 0;
          v58 = (_QWORD *)KeGetCurrentIrql();
          v93 = v58;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v58, 2LL);
          v95 = KeGetCurrentPrcb();
          if ( *(char *)(v52 + 195) > 0 && *(char *)(v52 + 195) < v57 )
          {
            v59 = *(_QWORD *)(v52 + 72);
            v96 = v59;
            v60 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 64), 0LL) )
            {
              do
              {
                if ( (++v60 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v59) )
                {
                  HvlNotifyLongSpinWait(v60);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v52 + 64) );
            }
            if ( *(char *)(v52 + 195) > 0 && *(char *)(v52 + 195) < v57 )
            {
              v103 = 1;
              KiSetPriorityBoost((unsigned int)&v92, v52, (char)v57, v96, KiLockQuantumTarget);
            }
            *(_QWORD *)(v52 + 64) = 0LL;
            if ( v103 )
            {
              v61 = v92;
              v62 = 0;
              if ( v92 )
              {
                v63 = v95;
                v92 = (_QWORD *)*v92;
                do
                {
                  KiDeferredReadySingleThread(v63, v61 - 27, &v92, 0LL);
                  v61 = v92;
                  ++v62;
                  if ( v92 )
                    v92 = (_QWORD *)*v92;
                  if ( (v62 & 0xF) == 0 )
                    KiFlushSoftwareInterruptBatch(&v63->DeferredDispatchInterrupts);
                }
                while ( v61 );
                v7 = a1;
              }
              v64 = v95;
              KiFlushSoftwareInterruptBatch(&v95->DeferredDispatchInterrupts);
              KiCheckForThreadDispatch(v64);
              goto LABEL_170;
            }
            LOBYTE(v58) = (_BYTE)v93;
          }
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v58);
          __writecr8((unsigned __int8)v58);
        }
      }
LABEL_170:
      if ( ObpTraceFlags )
        ObpPushStackInfo(v52 - 48);
      v65 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v52 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v11 = v65 <= 1;
      v66 = v65 - 1;
      if ( v11 )
      {
        if ( *(_QWORD *)(v52 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v52 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v52 - 48) >> 8)],
            v52,
            3uLL,
            *(_QWORD *)(v52 - 40));
        if ( v66 < 0 )
          KeBugCheckEx(0x18u, 0LL, v52, 4uLL, v66);
        ObpDeferObjectDeletion(v52 - 48);
      }
      v67 = (volatile __int64 *)(v7 + 96);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 96);
      v14 = 0;
      v68 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(v68, 2LL);
        v67 = (volatile __int64 *)(v7 + 96);
      }
      LockHandle.OldIrql = v68;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _InterlockedExchange64(v67, (__int64)&LockHandle) )
          KxWaitForLockOwnerShip(&LockHandle);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v67);
      }
      v69 = *(_QWORD *)(v7 + 16);
      if ( !v69 || *(_DWORD *)(v69 + 8) != v94 )
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
    v34 = v4 + 8;
    LockHandle.LockQueue.Next = 0LL;
    v35 = LockHandle.LockQueue.Lock;
    LOBYTE(v4) = (unsigned __int8)v35 ^ _InterlockedExchange64(
                                          (volatile __int64 *)(v4 + 8),
                                          (__int64)LockHandle.LockQueue.Lock);
    if ( (v4 & 4) != 0 )
      LOBYTE(v4) = KeWakeAddressAll(v34, v35, v16, a4);
    goto LABEL_66;
  }
  LOBYTE(v4) = KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_66:
  v33 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
    LOBYTE(v4) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
  __writecr8(v33);
  return v4;
}
