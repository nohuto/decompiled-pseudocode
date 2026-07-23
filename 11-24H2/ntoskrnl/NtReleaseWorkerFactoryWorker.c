/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1403AD210
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiWakeQueueWaiter @ 0x1402CD6B0 (KiWakeQueueWaiter.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1403AD690 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403AD7A0 (ExpWorkerFactoryCheckCreate.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409C52D0 (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  unsigned __int64 *v2; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v4; // rdx
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
  __int64 v18; // rdi
  signed __int64 v19; // rax
  bool v20; // cc
  signed __int64 BugCheckParameter4; // rax
  int v22; // edx
  __int64 *v23; // rcx
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v4 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v2, (__int64)&LockHandle);
    if ( v4 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v4);
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
            KiRaiseIrqlProcessIrqlFlags(v15, 2LL);
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
            || !KiWakeQueueWaiter((__int64)CurrentPrcb, v13, MiniCompletionPacket) )
          {
            v22 = *(_DWORD *)(v13 + 4);
            *(_DWORD *)(v13 + 4) = v22 + 1;
            v23 = *(__int64 **)(v13 + 32);
            if ( *v23 != v13 + 24 )
              __fastfail(3u);
            *(_QWORD *)MiniCompletionPacket = v13 + 24;
            *(_QWORD *)(MiniCompletionPacket + 8) = v23;
            *v23 = MiniCompletionPacket;
            *(_QWORD *)(v13 + 32) = MiniCompletionPacket;
            if ( !v22 && (_QWORD *)*v14 != v14 )
              KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v13);
          }
          else
          {
            *(_QWORD *)MiniCompletionPacket = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
          KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, v15);
          v5 = BugCheckParameter2;
        }
        ExpWorkerFactoryCheckCreate((PVOID)v5, 0LL);
        goto LABEL_24;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_24:
  v18 = v5 - 48;
  if ( ObpTraceFlags )
    ObpPushStackInfo(v18, 0, 1u, 0x746C6644u);
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL);
  v20 = v19 <= 1;
  BugCheckParameter4 = v19 - 1;
  if ( v20 )
  {
    if ( *(_QWORD *)(v18 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v18 + 24) ^ (unsigned __int64)BYTE1(v18)],
        BugCheckParameter2,
        1uLL,
        *(_QWORD *)(v18 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(v18);
    }
    else
    {
      if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)(v18 - ObpInfoMaskToOffset[*(_BYTE *)(v18 + 26) & 0x7F]) + 24LL) )
      {
        ObpHandleRevocationBlockRemoveObject();
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(v18);
      ObpRemoveObjectRoutine(v18, 0LL);
    }
  }
  return v8;
}
