/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x140280A30
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x14098B14C (AlpcpSignalPortAndUnlock.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140A07884 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140A07C24 (AlpcpAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     KiCompleteDirectSwitchThread @ 0x14027FA58 (KiCompleteDirectSwitchThread.c)
 *     EtwTraceEnqueueWork @ 0x1402811B8 (EtwTraceEnqueueWork.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     KiRemovePrcbWaitEntry @ 0x140285980 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D26C0 (IopAllocateMiniCompletionPacket.c)
 */

void __fastcall AlpcpQueueIoCompletionPort(__int64 a1, char a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  char v7; // r15
  char v8; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // rdx
  unsigned int v13; // edx
  _QWORD *v14; // rcx
  __int64 MiniCompletionPacket; // r13
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KLOCK_QUEUE_HANDLE *p_Lock; // rcx
  unsigned __int64 *volatile Lock; // rdx
  unsigned __int64 OldIrql; // rbx
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r9
  unsigned int i; // r8d
  _KLOCK_ENTRY *v23; // rcx
  __int64 v24; // rdi
  int v25; // esi
  __int64 v26; // rbp
  _QWORD *v27; // r15
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r12
  _KTHREAD *v30; // rbx
  _QWORD *Object; // rax
  bool v32; // di
  __int64 v33; // rcx
  _QWORD *v34; // rdi
  _QWORD *v35; // rbp
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  char v39; // al
  __int64 v40; // rcx
  char v41; // r14
  unsigned int v42; // esi
  __int64 v43; // rbx
  int v44; // ecx
  __int64 *v45; // rdx
  int v46; // ecx
  __int64 v47; // rax
  unsigned __int8 IsThreadRunning; // al
  char v49; // cl
  signed __int32 *v50; // r8
  signed __int32 v51; // eax
  signed __int32 v52; // ett
  int v53; // [rsp+30h] [rbp-58h]
  __int64 v54; // [rsp+38h] [rbp-50h]
  char v55; // [rsp+40h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v58; // [rsp+90h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = a4;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v5;
  v8 = a3;
  LockHandle.LockQueue.Next = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v54 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v12 = _InterlockedExchange64((volatile __int64 *)v5, (__int64)&LockHandle);
    if ( v12 )
      KxWaitForLockOwnerShip(&LockHandle, v12, a3, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v5);
  }
  v13 = *(_DWORD *)(v5 + 12);
  if ( v13 >= *(_DWORD *)(v5 + 8) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v49 = v7 && !v8;
    if ( !(unsigned int)AlpcpQueueIoCompletion(v6, *(_QWORD *)(a1 + 40), -(a2 != 0), 0, v49, a5) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5, &LockHandle);
      if ( a2 )
        ++*(_DWORD *)(v5 + 20);
      else
        ++*(_DWORD *)(v5 + 16);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( v8 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 352);
      KeAbPostRelease(a1 + 352);
    }
    return;
  }
  v14 = *(_QWORD **)(v5 + 32);
  if ( v14 )
    *(_QWORD *)(v5 + 32) = *v14;
  MiniCompletionPacket = v14[1];
  *(_DWORD *)(v5 + 12) = v13 + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_15;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_13:
    p_Lock = (struct _KLOCK_QUEUE_HANDLE *)&Next->Lock;
    LockHandle.LockQueue.Next = 0LL;
    Lock = LockHandle.LockQueue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                      (volatile __int64 *)&Next->Lock,
                                                      (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      KeWakeAddressAll(p_Lock, Lock, a3, a4);
    goto LABEL_15;
  }
  p_Lock = &LockHandle;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    goto LABEL_13;
  }
LABEL_15:
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
  __writecr8(OldIrql);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 352);
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v23 = &KernelAbEntries->Entries[i];
      if ( (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 352) & 0x7FFFFFFFFFFFFFFCLL)
        && v23->AcquiredByte
        && (*(_QWORD *)&v23->LockState.0 & 1) == 0 )
      {
        v23->AcquiredByte = 0;
        KiAbEntryFreeAndEnableInterrupts(v23, CurrentThread, a1 + 352, 1LL, 0LL);
        goto LABEL_26;
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 352, 0LL, 0LL);
    p_Lock = (struct _KLOCK_QUEUE_HANDLE *)KeGetCurrentPrcb();
    v50 = (signed __int32 *)p_Lock[1522].LockQueue.Lock;
    if ( v50 )
    {
      _m_prefetchw(v50);
      v51 = *v50;
      do
      {
        v52 = v51;
        v51 = _InterlockedCompareExchange(v50, v51 & 0xFFDFFFFF, v51);
      }
      while ( v52 != v51 );
      if ( (v51 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(p_Lock);
    }
    _enable();
  }
LABEL_26:
  v24 = *(_QWORD *)(a1 + 40);
  v25 = (v7 != 0) | 4;
  if ( !a5 )
    v25 = v7 != 0;
  v58 = v25;
  if ( MiniCompletionPacket
    || (LOBYTE(p_Lock) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(p_Lock, 0LL)) != 0) )
  {
    *(_DWORD *)(MiniCompletionPacket + 40) = 0;
    *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
    v26 = v54;
    *(_QWORD *)(MiniCompletionPacket + 24) = v24;
    *(_QWORD *)(MiniCompletionPacket + 32) = -(__int64)(a2 != 0);
    v27 = (_QWORD *)(v54 + 8);
    v28 = KeGetCurrentIrql();
    v55 = v28;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v28);
    CurrentPrcb = KeGetCurrentPrcb();
    v30 = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(v30, MiniCompletionPacket, IsThreadRunning);
    }
    v53 = ((unsigned __int8)~*(_BYTE *)(v54 + 1) >> 1) & 1;
    Object = v30[1].WaitBlock[1].Object;
    if ( !Object )
      Object = &v30->Header.Lock;
    v32 = v25 && (*(_DWORD *)(Object[68] + 136LL) & 0x2000) != 0;
    KiAcquireKobjectLockSafe(v54);
    if ( (_QWORD *)*v27 == v27
      || *(_DWORD *)(v54 + 40) >= *(_DWORD *)(v54 + 44) && !v32
      || v30->Queue == (_DISPATCHER_HEADER *volatile)v54 && v30->WaitReason == 15 )
    {
LABEL_78:
      v44 = *(_DWORD *)(v26 + 4);
      *(_DWORD *)(v26 + 4) = v44 + 1;
      v45 = *(__int64 **)(v26 + 32);
      if ( *v45 != v26 + 24 )
LABEL_45:
        __fastfail(3u);
      *(_QWORD *)MiniCompletionPacket = v26 + 24;
      *(_QWORD *)(MiniCompletionPacket + 8) = v45;
      *v45 = MiniCompletionPacket;
      *(_QWORD *)(v26 + 32) = MiniCompletionPacket;
      if ( !v44 && (_QWORD *)*v27 != v27 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v26);
    }
    else
    {
      v34 = (_QWORD *)*v27;
      while ( 1 )
      {
        v35 = v34;
        v34 = (_QWORD *)*v34;
        if ( *((_BYTE *)v35 + 16) != 3 )
        {
LABEL_59:
          v26 = v54;
          LOBYTE(v25) = v58;
          goto LABEL_78;
        }
        v36 = (_QWORD *)v35[1];
        if ( (_QWORD *)v34[1] != v35 || (_QWORD *)*v36 != v35 )
          goto LABEL_45;
        *v36 = v34;
        v41 = 0;
        v34[1] = v36;
        v42 = 0;
        v43 = v35[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 64), 0LL) )
        {
          do
          {
            if ( (++v42 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v33) )
            {
              HvlNotifyLongSpinWait(v42);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v43 + 64) );
        }
        if ( *(_BYTE *)(v43 + 388) == 5 )
        {
          v33 = *(unsigned __int8 *)(v43 + 112);
          v37 = *(_BYTE *)(v43 + 112) & 7;
          if ( v37 == 1 || v37 == 4 )
          {
            v38 = *(_QWORD *)(v43 + 232);
            if ( v38 )
            {
              if ( (*(_BYTE *)v38 & 0x7F) == 0x15 )
              {
                v47 = (unsigned __int8)*(_DWORD *)(v43 + 540);
                *(_DWORD *)(v43 + 540) = v47;
                _InterlockedIncrement((volatile signed __int32 *)(v38 + 4 * v47 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v38 + 40));
              }
            }
            KiRemovePrcbWaitEntry(v43);
            v39 = *(_BYTE *)(v43 + 388);
            if ( v39 == 1 )
            {
              *(_DWORD *)(v43 + 116) |= 2u;
            }
            else if ( v39 == 5 )
            {
              v40 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v43 + 436));
              if ( *(_BYTE *)(v43 + 391) )
                *(_QWORD *)(v43 + 1000) += v40;
              else
                *(_QWORD *)(v43 + 992) += v40;
            }
            *(_BYTE *)(v43 + 388) = 7;
            v33 = v43 + 216;
            *(_QWORD *)(v43 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
            v41 = 1;
            CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v43 + 216);
            *(_QWORD *)(v43 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v43 + 976) = 0LL;
          }
          else if ( (*(_BYTE *)(v43 + 112) & 7) != 0 )
          {
            if ( v37 == 5 )
            {
              LOBYTE(v33) = v33 & 0xF8 | 6;
              *(_BYTE *)(v43 + 112) = v33;
            }
            else if ( v37 == 3 )
            {
              *((_BYTE *)v35 + 17) = 2;
            }
          }
          else
          {
            v41 = 1;
            LOBYTE(v33) = v33 & 0xF8 | 2;
            *(_BYTE *)(v43 + 112) = v33;
            *(_QWORD *)(v43 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v43 + 976) = 0LL;
            *((_BYTE *)v35 + 17) = 0;
          }
        }
        *(_QWORD *)(v43 + 64) = 0LL;
        ++*((_BYTE *)v35 + 17);
        if ( v41 )
          break;
        if ( v34 == v27 )
          goto LABEL_59;
      }
      LOBYTE(v25) = v58;
      v26 = v54;
      *(_QWORD *)MiniCompletionPacket = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
    if ( (v25 & 1) != 0 )
    {
      v46 = 3;
    }
    else
    {
      v46 = 0;
      if ( (v25 & 4) != 0 )
      {
        KiCompleteDirectSwitchThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
        v46 = 6;
      }
    }
    KiExitDispatcher((_DWORD)CurrentPrcb, v46, 1, v53, v55);
  }
}
