/*
 * XREFs of AlpcpSignalAndWait @ 0x1402CD9A0
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x14089DB00 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x140993FB0 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiWakeQueueWaiter @ 0x1402CD6B0 (KiWakeQueueWaiter.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403AC630 (AlpcpQueueIoCompletion.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     AlpcpReleaseDirectAttribute @ 0x140463550 (AlpcpReleaseDirectAttribute.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     AlpcpLogUnwait @ 0x140740878 (AlpcpLogUnwait.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409C52D0 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        LARGE_INTEGER *Timeout,
        unsigned __int8 a6)
{
  PVOID *v6; // rdi
  __int64 *v7; // rbp
  BOOLEAN v10; // bl
  void *v11; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  _QWORD *v18; // r14
  __int64 MiniCompletionPacket; // r14
  signed __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rcx
  struct _KPRCB *v25; // rbp
  _KTHREAD *CurrentThread; // r9
  _QWORD *p_Lock; // rax
  _QWORD *v28; // rcx
  unsigned int v29; // eax
  struct _KTHREAD *v30; // rcx
  unsigned int v31; // ebx
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  int v35; // r8d
  __int64 *v36; // rdx
  int v37; // eax
  __int64 v38; // rdi
  __int64 CurrentIrql; // rcx
  int v40; // eax
  int v41; // ecx
  _QWORD *v42; // r15
  _QWORD *v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  char v47; // cl
  bool v48; // zf
  unsigned __int8 IsThreadRunning; // al
  __int64 v50; // r9
  signed __int64 *v51; // rdi
  unsigned int v52; // [rsp+30h] [rbp-68h]
  unsigned __int8 v53; // [rsp+30h] [rbp-68h]
  char v54; // [rsp+38h] [rbp-60h]
  _KTHREAD *v55; // [rsp+38h] [rbp-60h]
  unsigned __int8 v56; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  char v58; // [rsp+A0h] [rbp+8h]
  struct _KPRCB *v59; // [rsp+A0h] [rbp+8h]
  bool v60; // [rsp+A0h] [rbp+8h]
  struct _KPRCB *CurrentPrcb; // [rsp+A0h] [rbp+8h]

  v6 = (PVOID *)(a1 + 32);
  v7 = *(__int64 **)(a1 + 32);
  v10 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
  v11 = a2;
  if ( v7 )
  {
    if ( !*(_BYTE *)(a1 + 58) )
    {
      v38 = v7[31];
      CurrentIrql = KeGetCurrentIrql();
      v53 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      CurrentPrcb = KeGetCurrentPrcb();
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v38);
      v40 = *(_DWORD *)(v38 + 4);
      v41 = v40 + 1;
      if ( v40 + 1 <= v40 || v41 > *(_DWORD *)(v38 + 24) )
      {
        _InterlockedAnd((volatile signed __int32 *)v38, 0xFFFFFF7F);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v53);
        __writecr8(v53);
        RtlRaiseStatus(-1073741753);
      }
      *(_DWORD *)(v38 + 4) = v41;
      if ( !v40 )
      {
        v42 = *(_QWORD **)(v38 + 8);
        v43 = (_QWORD *)(v38 + 8);
        while ( v42 != v43 )
        {
          v44 = (_QWORD *)*v42;
          v45 = v42;
          v42 = v44;
          v46 = (_QWORD *)v45[1];
          if ( (_QWORD *)v44[1] != v45 || (_QWORD *)*v46 != v45 )
            goto LABEL_44;
          *v46 = v44;
          v44[1] = v46;
          v47 = *((_BYTE *)v45 + 16);
          if ( v47 == 1 )
          {
            v48 = (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v45, *((unsigned __int16 *)v45 + 9), 0LL) == 0;
            v43 = (_QWORD *)(v38 + 8);
            if ( !v48 )
            {
              v48 = (*(_DWORD *)(v38 + 4))-- == 1;
              if ( v48 )
                break;
              v43 = (_QWORD *)(v38 + 8);
            }
          }
          else if ( v47 == 2 )
          {
            *((_BYTE *)v45 + 17) = 5;
            KiInsertQueueInternal(v45[3], v45);
            v48 = (*(_DWORD *)(v38 + 4))-- == 1;
            if ( v48 )
              break;
            v43 = (_QWORD *)(v38 + 8);
          }
          else
          {
            if ( v47 == 4 )
            {
              *((_BYTE *)v45 + 17) = 5;
              *(_DWORD *)(v38 + 4) = 0;
              KeInsertQueueDpc((PRKDPC)v45[3], (PVOID)v38, v45);
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v45, 256LL, 0LL);
            }
            v43 = (_QWORD *)(v38 + 8);
          }
        }
      }
      _InterlockedAnd((volatile signed __int32 *)v38, 0xFFFFFF7F);
      KiExitDispatcher((unsigned __int64)CurrentPrcb, 3LL, 1u, 1u, v53);
      goto LABEL_27;
    }
    v13 = v7[6];
    v14 = v7[4];
    v58 = *(_BYTE *)(a1 + 59);
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v13;
    v15 = KeGetCurrentIrql();
    v54 = v15;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      KiRaiseIrqlProcessIrqlFlags(v15, 2LL);
      LOBYTE(v15) = v54;
    }
    LockHandle.OldIrql = v15;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v16 = _InterlockedExchange64((volatile __int64 *)v13, (__int64)&LockHandle);
      if ( v16 )
        KxWaitForLockOwnerShip(&LockHandle, v16);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v13);
    }
    v17 = *(_DWORD *)(v13 + 12);
    if ( v17 >= *(_DWORD *)(v13 + 8) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !(unsigned int)AlpcpQueueIoCompletion(v14, v7[5], -(v58 != 0), 0, 0, a6) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v13, &LockHandle);
        if ( v58 )
          ++*(_DWORD *)(v13 + 20);
        else
          ++*(_DWORD *)(v13 + 16);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      v51 = v7 + 44;
      if ( _InterlockedCompareExchange64(v7 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v51);
      KeAbPostRelease((ULONG_PTR)v51);
      goto LABEL_27;
    }
    v18 = *(_QWORD **)(v13 + 32);
    if ( v18 )
      *(_QWORD *)(v13 + 32) = *v18;
    MiniCompletionPacket = v18[1];
    *(_DWORD *)(v13 + 12) = v17 + 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v20 = v7 + 44;
    if ( _InterlockedCompareExchange64(v7 + 44, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v20);
      v20 = v7 + 44;
    }
    KeAbPostRelease((ULONG_PTR)v20);
    v22 = v7[5];
    v23 = -(__int64)(v58 != 0);
    v59 = (struct _KPRCB *)v23;
    if ( !MiniCompletionPacket )
    {
      LOBYTE(v21) = 1;
      MiniCompletionPacket = IopAllocateMiniCompletionPacket(v21, 0LL);
      if ( !MiniCompletionPacket )
        goto LABEL_26;
      v23 = (__int64)v59;
    }
    *(_QWORD *)(MiniCompletionPacket + 24) = v22;
    *(_QWORD *)(MiniCompletionPacket + 32) = v23;
    *(_DWORD *)(MiniCompletionPacket + 40) = 0;
    *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
    v24 = KeGetCurrentIrql();
    v56 = v24;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v24, 2LL);
    v25 = KeGetCurrentPrcb();
    CurrentThread = v25->CurrentThread;
    v55 = CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentThread);
      EtwTraceEnqueueWork(v50, MiniCompletionPacket, IsThreadRunning);
      CurrentThread = v55;
    }
    v52 = ((unsigned __int8)~*(_BYTE *)(v14 + 1) >> 1) & 1;
    p_Lock = CurrentThread[1].WaitBlock[1].Object;
    if ( !p_Lock )
      p_Lock = &CurrentThread->Header.Lock;
    v60 = (*(_DWORD *)(p_Lock[68] + 136LL) & 0x2000) != 0;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v14);
    v28 = (_QWORD *)(v14 + 8);
    if ( (_QWORD *)*v28 != v28 && (*(_DWORD *)(v14 + 40) < *(_DWORD *)(v14 + 44) || v60) )
    {
      if ( (v55->Queue != (_DISPATCHER_HEADER *volatile)v14 || v55->WaitReason != 15)
        && KiWakeQueueWaiter((__int64)v25, v14, MiniCompletionPacket) )
      {
        *(_QWORD *)MiniCompletionPacket = 0LL;
LABEL_25:
        _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
        KiExitDispatcher((unsigned __int64)v25, 3LL, 1u, v52, v56);
LABEL_26:
        v11 = a2;
LABEL_27:
        v6 = (PVOID *)(a1 + 32);
        goto LABEL_28;
      }
      v28 = (_QWORD *)(v14 + 8);
    }
    v35 = *(_DWORD *)(v14 + 4);
    *(_DWORD *)(v14 + 4) = v35 + 1;
    v36 = *(__int64 **)(v14 + 32);
    if ( *v36 != v14 + 24 )
LABEL_44:
      __fastfail(3u);
    *(_QWORD *)MiniCompletionPacket = v14 + 24;
    *(_QWORD *)(MiniCompletionPacket + 8) = v36;
    *v36 = MiniCompletionPacket;
    *(_QWORD *)(v14 + 32) = MiniCompletionPacket;
    if ( !v35 && (_QWORD *)*v28 != v28 )
      KiWakeOtherQueueWaiters(v25, v14);
    goto LABEL_25;
  }
  v33 = *(_QWORD *)(a1 + 24);
  if ( v33 )
  {
    v37 = 5;
    if ( a6 )
      v37 = 1;
    KeReleaseSemaphoreEx((PVOID)(v33 + 1304), v37, 0LL);
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 40);
    if ( (v34 & 1) != 0 )
    {
      if ( v34 >= 4 )
      {
        KeSetEvent((PRKEVENT)(v34 & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
        AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
        v6 = (PVOID *)(a1 + 32);
      }
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
LABEL_28:
  KeLeaveCriticalRegionThread();
  v29 = KeWaitForSingleObject(v11, a3, a4, v10, Timeout);
  v30 = KeGetCurrentThread();
  v31 = v29;
  --v30->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v29);
  if ( *v6 )
    ObfDereferenceObject(*v6);
  return v31;
}
