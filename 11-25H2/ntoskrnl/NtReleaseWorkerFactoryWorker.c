/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x140303750
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     EtwTraceEnqueueWork @ 0x1402811B8 (EtwTraceEnqueueWork.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140303BD0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140303CE0 (ExpWorkerFactoryCheckCreate.c)
 *     KiWakeQueueWaiter @ 0x140308B20 (KiWakeQueueWaiter.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D26C0 (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  unsigned __int64 *v2; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB **v4; // rdx
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  NTSTATUS v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 MiniCompletionPacket; // rbx
  __int64 v13; // rsi
  _QWORD *v14; // r14
  unsigned __int8 v15; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 CurrentThread; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  signed __int64 v22; // rax
  bool v23; // cc
  signed __int64 BugCheckParameter4; // rax
  int v25; // edx
  __int64 *v26; // rcx
  char IsThreadRunning; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  BugCheckParameter2 = 0LL;
  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&BugCheckParameter2,
             0LL);
  if ( result < 0 )
    return result;
  v2 = *(unsigned __int64 **)(BugCheckParameter2 + 16);
  LockHandle.LockQueue.Lock = v2;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v4 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)v2, (__int64)&LockHandle);
    if ( v4 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v2);
  }
  v5 = BugCheckParameter2;
  v6 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( *(_BYTE *)(v6 + 33) )
  {
    v8 = 128;
  }
  else
  {
    v7 = *(_DWORD *)(v6 + 24);
    if ( v7 == -1 )
    {
      v8 = -1073741823;
    }
    else
    {
      v8 = 0;
      *(_DWORD *)(v6 + 24) = v7 + 1;
      v9 = *(_QWORD *)(v5 + 16);
      if ( !*(_BYTE *)(v9 + 32) )
      {
        *(_BYTE *)(v9 + 32) = 1;
        if ( (*(_DWORD *)(v5 + 408) & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode((PVOID)v5);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v11 = *(_QWORD *)(v5 + 16);
        MiniCompletionPacket = *(_QWORD *)(v11 + 16);
        v13 = *(_QWORD *)(v11 + 8);
        if ( MiniCompletionPacket
          || (LOBYTE(v10) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(v10, 0LL)) != 0) )
        {
          *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
          v14 = (_QWORD *)(v13 + 8);
          *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
          *(_DWORD *)(MiniCompletionPacket + 40) = 0;
          *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
          v15 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v15);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = (__int64)CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v13);
          if ( (_QWORD *)*v14 == v14
            || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44)
            || *(_QWORD *)(CurrentThread + 232) == v13 && *(_BYTE *)(CurrentThread + 643) == 15
            || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v13, MiniCompletionPacket) )
          {
            v25 = *(_DWORD *)(v13 + 4);
            *(_DWORD *)(v13 + 4) = v25 + 1;
            v26 = *(__int64 **)(v13 + 32);
            if ( *v26 != v13 + 24 )
              __fastfail(3u);
            *(_QWORD *)MiniCompletionPacket = v13 + 24;
            *(_QWORD *)(MiniCompletionPacket + 8) = v26;
            *v26 = MiniCompletionPacket;
            *(_QWORD *)(v13 + 32) = MiniCompletionPacket;
            if ( !v25 && (_QWORD *)*v14 != v14 )
              KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v13);
          }
          else
          {
            *(_QWORD *)MiniCompletionPacket = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
          KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, v15);
          v5 = BugCheckParameter2;
        }
        ExpWorkerFactoryCheckCreate((PVOID)v5, 0LL);
        goto LABEL_24;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_24:
  v21 = v5 - 48;
  if ( ObpTraceFlags )
    ObpPushStackInfo(v21, 0, 1u, 0x746C6644u);
  v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL);
  v23 = v22 <= 1;
  BugCheckParameter4 = v22 - 1;
  if ( v23 )
  {
    if ( *(_QWORD *)(v21 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v21 + 24) ^ (unsigned __int64)BYTE1(v21)],
        BugCheckParameter2,
        1uLL,
        *(_QWORD *)(v21 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(v21, v18, v19, v20);
    }
    else
    {
      if ( (*(_BYTE *)(v21 + 26) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)(v21 - ObpInfoMaskToOffset[*(_BYTE *)(v21 + 26) & 0x7F]) + 24LL) )
      {
        ObpHandleRevocationBlockRemoveObject();
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(v21);
      ObpRemoveObjectRoutine(v21, 0LL);
    }
  }
  return v8;
}
