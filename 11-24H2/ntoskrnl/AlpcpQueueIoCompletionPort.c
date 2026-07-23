/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x1403ABBA0
 * Callers:
 *     AlpcpSignalPortAndUnlock @ 0x14088E594 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140A06D40 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140A070E0 (AlpcpAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x1402C5A30 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCompleteDirectSwitchThread @ 0x1403ABAF4 (KiCompleteDirectSwitchThread.c)
 *     AlpcpQueueIoCompletion @ 0x1403AC630 (AlpcpQueueIoCompletion.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409C52D0 (IopAllocateMiniCompletionPacket.c)
 */

void __fastcall AlpcpQueueIoCompletionPort(_QWORD *a1, char a2, char a3, char a4, int a5)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned __int8 CurrentIrql; // di
  _QWORD *v12; // rdx
  unsigned int v13; // edx
  _QWORD *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 Next; // rax
  unsigned __int64 *volatile Lock; // rdx
  char v19; // cl
  __int64 v20; // rdi
  __int64 MiniCompletionPacket; // r14
  int v22; // esi
  _QWORD *v23; // r15
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rbx
  _QWORD *Object; // rax
  bool v28; // di
  _QWORD *v29; // rdi
  _QWORD *v30; // rbp
  _QWORD *v31; // rax
  char v32; // cl
  int v33; // eax
  __int64 v34; // rdx
  char v35; // al
  __int64 v36; // rcx
  char v37; // r12
  unsigned int v38; // esi
  __int64 v39; // rbx
  int v40; // ecx
  __int64 *v41; // rdx
  unsigned int v42; // ecx
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  unsigned __int8 IsThreadRunning; // al
  unsigned int v46; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v47; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v48; // [rsp+38h] [rbp-50h]
  unsigned __int8 v49; // [rsp+40h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  char v52; // [rsp+90h] [rbp+8h]

  v5 = a1[6];
  v6 = a1[4];
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v5;
  LockHandle.LockQueue.Next = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v12 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v5, (__int64)&LockHandle);
    if ( v12 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v12);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v5);
  }
  v13 = *(_DWORD *)(v5 + 12);
  if ( v13 < *(_DWORD *)(v5 + 8) )
  {
    v14 = *(_QWORD **)(v5 + 32);
    if ( v14 )
      *(_QWORD *)(v5 + 32) = *v14;
    v47 = (struct _KPRCB *)v14[1];
    *(_DWORD *)(v5 + 12) = v13 + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
      goto LABEL_12;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      p_LockHandle = &LockHandle;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_12;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    p_LockHandle = (struct _KLOCK_QUEUE_HANDLE *)(Next + 8);
    LockHandle.LockQueue.Next = 0LL;
    Lock = LockHandle.LockQueue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                      (volatile __int64 *)(Next + 8),
                                                      (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      KeWakeAddressAll((unsigned __int64)p_LockHandle, (__int64)Lock);
LABEL_12:
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
    __writecr8(OldIrql);
    if ( a3 )
    {
      if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 44);
      KeAbPostRelease((ULONG_PTR)(a1 + 44));
    }
    v20 = a1[5];
    MiniCompletionPacket = (__int64)v47;
    v22 = (a4 != 0) | 4;
    if ( !a5 )
      v22 = a4 != 0;
    v52 = v22;
    if ( !v47 )
    {
      LOBYTE(p_LockHandle) = 1;
      MiniCompletionPacket = IopAllocateMiniCompletionPacket(p_LockHandle, 0LL);
      if ( !MiniCompletionPacket )
        return;
    }
    *(_QWORD *)(MiniCompletionPacket + 24) = v20;
    v23 = (_QWORD *)(v6 + 8);
    *(_QWORD *)(MiniCompletionPacket + 32) = -(__int64)(a2 != 0);
    *(_DWORD *)(MiniCompletionPacket + 40) = 0;
    *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
    v24 = KeGetCurrentIrql();
    v49 = v24;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v24, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v48 = CurrentPrcb;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
    }
    v46 = ((unsigned __int8)~*(_BYTE *)(v6 + 1) >> 1) & 1;
    Object = CurrentThread[1].WaitBlock[1].Object;
    if ( !Object )
      Object = &CurrentThread->Header.Lock;
    v28 = v22 && (*(_DWORD *)(Object[68] + 136LL) & 0x2000) != 0;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v6);
    if ( (_QWORD *)*v23 == v23
      || *(_DWORD *)(v6 + 40) >= *(_DWORD *)(v6 + 44) && !v28
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v6 && CurrentThread->WaitReason == 15 )
    {
LABEL_76:
      v40 = *(_DWORD *)(v6 + 4);
      *(_DWORD *)(v6 + 4) = v40 + 1;
      v41 = *(__int64 **)(v6 + 32);
      if ( *v41 != v6 + 24 )
LABEL_49:
        __fastfail(3u);
      *(_QWORD *)MiniCompletionPacket = v6 + 24;
      *(_QWORD *)(MiniCompletionPacket + 8) = v41;
      *v41 = MiniCompletionPacket;
      *(_QWORD *)(v6 + 32) = MiniCompletionPacket;
      if ( !v40 && (_QWORD *)*v23 != v23 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v6);
    }
    else
    {
      v29 = (_QWORD *)*v23;
      while ( 1 )
      {
        v30 = v29;
        v29 = (_QWORD *)*v29;
        if ( *((_BYTE *)v30 + 16) != 3 )
        {
LABEL_62:
          LOBYTE(v22) = v52;
          CurrentPrcb = v48;
          goto LABEL_76;
        }
        v31 = (_QWORD *)v30[1];
        if ( (_QWORD *)v29[1] != v30 || (_QWORD *)*v31 != v30 )
          goto LABEL_49;
        *v31 = v29;
        v37 = 0;
        v29[1] = v31;
        v38 = 0;
        v39 = v30[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 64), 0LL) )
        {
          do
          {
            if ( (++v38 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v38);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v39 + 64) );
        }
        if ( *(_BYTE *)(v39 + 388) == 5 )
        {
          v32 = *(_BYTE *)(v39 + 112);
          v33 = v32 & 7;
          if ( v33 == 1 || v33 == 4 )
          {
            v34 = *(_QWORD *)(v39 + 232);
            if ( v34 )
            {
              if ( (*(_BYTE *)v34 & 0x7F) == 0x15 )
              {
                v44 = (unsigned __int8)*(_DWORD *)(v39 + 540);
                *(_DWORD *)(v39 + 540) = v44;
                _InterlockedIncrement((volatile signed __int32 *)(v34 + 4 * v44 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v34 + 40));
              }
            }
            KiRemovePrcbWaitEntry((_QWORD *)v39);
            v35 = *(_BYTE *)(v39 + 388);
            if ( v35 == 1 )
            {
              *(_DWORD *)(v39 + 116) |= 2u;
            }
            else if ( v35 == 5 )
            {
              v36 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v39 + 436));
              if ( *(_BYTE *)(v39 + 391) )
                *(_QWORD *)(v39 + 1000) += v36;
              else
                *(_QWORD *)(v39 + 992) += v36;
            }
            *(_BYTE *)(v39 + 388) = 7;
            v37 = 1;
            *(_QWORD *)(v39 + 216) = v48->DeferredReadyListHead.Next;
            v48->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v39 + 216);
            *(_QWORD *)(v39 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v39 + 976) = 0LL;
          }
          else if ( (*(_BYTE *)(v39 + 112) & 7) != 0 )
          {
            if ( v33 == 5 )
            {
              *(_BYTE *)(v39 + 112) = v32 & 0xF8 | 6;
            }
            else if ( v33 == 3 )
            {
              *((_BYTE *)v30 + 17) = 2;
            }
          }
          else
          {
            v37 = 1;
            *(_BYTE *)(v39 + 112) = v32 & 0xF8 | 2;
            *(_QWORD *)(v39 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v39 + 976) = 0LL;
            *((_BYTE *)v30 + 17) = 0;
          }
        }
        *(_QWORD *)(v39 + 64) = 0LL;
        ++*((_BYTE *)v30 + 17);
        if ( v37 )
          break;
        if ( v29 == v23 )
          goto LABEL_62;
      }
      LOBYTE(v22) = v52;
      *(_QWORD *)MiniCompletionPacket = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
    if ( (v22 & 1) != 0 )
    {
      v42 = 3;
    }
    else
    {
      v42 = 0;
      if ( (v22 & 4) != 0 )
      {
        v43 = (unsigned __int64)v48;
        KiCompleteDirectSwitchThread(v48, (__int64)v48->CurrentThread);
        v42 = 6;
        goto LABEL_83;
      }
    }
    v43 = (unsigned __int64)v48;
LABEL_83:
    KiExitDispatcher(v43, v42, 1u, v46, v49);
    return;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v19 = a4 && !a3;
  if ( !(unsigned int)AlpcpQueueIoCompletion(v6, a1[5], -(a2 != 0), 0, v19, a5) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5, &LockHandle);
    if ( a2 )
      ++*(_DWORD *)(v5 + 20);
    else
      ++*(_DWORD *)(v5 + 16);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( a3 )
  {
    if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 44);
    KeAbPostRelease((ULONG_PTR)(a1 + 44));
  }
}
