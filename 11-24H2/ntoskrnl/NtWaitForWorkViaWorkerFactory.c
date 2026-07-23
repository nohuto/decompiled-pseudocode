/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x1402D2740
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiWakeQueueWaiter @ 0x1402CD6B0 (KiWakeQueueWaiter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1402D381C (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     ExpWorkerFactoryFinishDeferredWork @ 0x1402D38E0 (ExpWorkerFactoryFinishDeferredWork.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeRegisterObjectNotification @ 0x14032D090 (KeRegisterObjectNotification.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403AC630 (AlpcpQueueIoCompletion.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403AD7A0 (ExpWorkerFactoryCheckCreate.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x140442D68 (ExpWorkerFactoryWantsToCreate.c)
 *     AlpcpReleaseDirectAttribute @ 0x140463550 (AlpcpReleaseDirectAttribute.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14047335C (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     NtAlpcSendWaitReceivePort @ 0x140846380 (NtAlpcSendWaitReceivePort.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409C52D0 (IopAllocateMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  char *v7; // rbx
  unsigned __int8 PreviousMode; // r12
  __int64 v9; // rcx
  int v10; // r14d
  unsigned __int64 *v11; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v13; // rdx
  PVOID v14; // rdi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 *volatile v18; // rdx
  signed __int64 v19; // r13
  bool v20; // cc
  signed __int64 v21; // r13
  unsigned __int64 v23; // rdi
  char v24; // al
  HANDLE v25; // r14
  ULONG v26; // edi
  HANDLE v27; // rcx
  struct _KTHREAD *v28; // rax
  unsigned int v29; // edi
  PVOID v30; // rax
  signed __int32 v31; // esi
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rdi
  ULONG *v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // ecx
  _QWORD *v38; // rsi
  __int64 MiniCompletionPacket; // rsi
  char *v40; // rdi
  signed __int64 *v41; // rcx
  __int64 v42; // rcx
  bool v43; // cf
  __int64 v44; // rax
  __int64 v45; // rdi
  ULONG *v46; // rcx
  struct _KPRCB *v47; // rdi
  _KTHREAD *v48; // r9
  _QWORD *p_Lock; // rax
  _QWORD *v50; // r8
  char v51; // al
  struct _KTHREAD *v52; // rdi
  unsigned __int8 v53; // si
  __int64 v54; // rcx
  unsigned __int64 *v55; // rdi
  unsigned __int8 v56; // si
  __int64 v57; // rdx
  struct _KTHREAD *v58; // r12
  unsigned int v59; // ecx
  char *v60; // rdi
  __int64 v61; // rsi
  PVOID *v62; // rdi
  __int64 v63; // rdi
  unsigned __int64 OldIrql; // rdi
  __int64 Next; // rax
  unsigned __int8 Lock; // cl
  bool v67; // di
  __int64 v68; // r8
  __int64 v69; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v72; // ecx
  unsigned int i; // ecx
  __int64 v74; // rax
  int v75; // edx
  __int64 *v76; // rcx
  void *v77; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v79; // r9
  signed __int32 v80; // eax
  signed __int32 v81; // ett
  __int64 v82; // rax
  volatile signed __int64 *v83; // rcx
  __int64 v84; // r9
  signed __int32 v85[8]; // [rsp+0h] [rbp-218h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1F0h]
  PLARGE_INTEGER Timeout; // [rsp+38h] [rbp-1E0h]
  char v88; // [rsp+40h] [rbp-1D8h]
  unsigned __int8 v89; // [rsp+41h] [rbp-1D7h]
  PULONG v90; // [rsp+48h] [rbp-1D0h]
  struct _KLOCK_QUEUE_HANDLE v91; // [rsp+50h] [rbp-1C8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-1B0h]
  char *v93; // [rsp+70h] [rbp-1A8h]
  ULONG v94; // [rsp+78h] [rbp-1A0h]
  ULONG v95; // [rsp+7Ch] [rbp-19Ch] BYREF
  ULONG v96; // [rsp+80h] [rbp-198h]
  PVOID v97; // [rsp+88h] [rbp-190h] BYREF
  PVOID Object; // [rsp+90h] [rbp-188h] BYREF
  PULONG v99; // [rsp+98h] [rbp-180h]
  PVOID P; // [rsp+A0h] [rbp-178h]
  __int128 v101; // [rsp+A8h] [rbp-170h] BYREF
  HANDLE Handle[2]; // [rsp+B8h] [rbp-160h]
  ULONG Flags[2]; // [rsp+C8h] [rbp-150h]
  __int64 v104[2]; // [rsp+D0h] [rbp-148h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-138h] BYREF
  PFILE_IO_COMPLETION_INFORMATION v106; // [rsp+F8h] [rbp-120h]
  PVOID v107[2]; // [rsp+100h] [rbp-118h] BYREF
  __int128 v108; // [rsp+110h] [rbp-108h]
  __int128 v109; // [rsp+120h] [rbp-F8h]
  __int128 v110; // [rsp+130h] [rbp-E8h]
  int v111; // [rsp+140h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+148h] [rbp-D0h]
  _OWORD v113[8]; // [rsp+150h] [rbp-C8h] BYREF
  __int64 retaddr; // [rsp+218h] [rbp+0h]

  v99 = PacketsReturned;
  v94 = Count;
  v106 = MiniPackets;
  v93 = (char *)WorkerFactoryHandle;
  BugCheckParameter2 = (ULONG_PTR)MiniPackets;
  v96 = Count;
  v90 = PacketsReturned;
  v101 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *(_QWORD *)Flags = 0LL;
  memset(&v91, 0, sizeof(v91));
  memset(v113, 0, sizeof(v113));
  v95 = 0;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v89 = PreviousMode;
  v88 = PreviousMode;
  P = v113;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v10 = -1073741811;
    goto LABEL_31;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v99 < 0x7FFFFFFF0000LL )
      v9 = (__int64)v99;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v7 = (char *)Object;
  v104[1] = (__int64)Object;
  if ( v10 >= 0 )
  {
    if ( Count > 0x10 )
    {
      P = (PVOID)ExAllocatePool2(0x40uLL, 8LL * Count, 0x656E6F4Eu);
      if ( !P )
      {
        v94 = 16;
        P = v113;
      }
    }
    v11 = (unsigned __int64 *)*((_QWORD *)v7 + 2);
    v91.LockQueue.Lock = v11;
    v91.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v91.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v13 = _InterlockedExchange64((volatile __int64 *)v11, (__int64)&v91);
      if ( v13 )
        KxWaitForLockOwnerShip(&v91, v13);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v91, v11);
    }
    v14 = Object;
    v15 = *((_QWORD *)Object + 2);
    if ( *(_BYTE *)(v15 + 33) )
    {
      KeReleaseInStackQueuedSpinLock(&v91);
      v10 = 128;
      goto LABEL_31;
    }
    v16 = *((_DWORD *)Object + 102);
    if ( (v16 & 0x200) != 0 )
    {
      if ( (v16 & 0x400) != 0
        && KiDeregisterObjectWaitBlock(*(void **)(v15 + 8), (struct _KWAIT_BLOCK *)((char *)Object + 616)) )
      {
        ObfDereferenceObjectWithTag(v14, 0x746C6644u);
        *((_DWORD *)v14 + 102) &= ~0x400u;
      }
      *((_DWORD *)v14 + 102) &= ~0x200u;
    }
    ++*(_DWORD *)(*((_QWORD *)v14 + 2) + 28LL);
    while ( 1 )
    {
      if ( *((_DWORD *)v7 + 95) < *((_DWORD *)v7 + 96) || *(_BYTE *)(*((_QWORD *)v7 + 2) + 33LL) )
      {
        v10 = 258;
LABEL_94:
        --*(_DWORD *)(*((_QWORD *)v7 + 2) + 28LL);
        if ( v10 == 258 )
        {
          --*((_DWORD *)v7 + 96);
          --*((_DWORD *)v7 + 97);
          ExpRemoveCurrentThreadFromThreadHistory(v7);
        }
        else if ( (*((_DWORD *)v7 + 102) & 7) != 4 )
        {
          v58 = KeGetCurrentThread();
          v59 = 0;
          v60 = (char *)Object;
          while ( v59 < 4 )
          {
            if ( *((struct _KTHREAD **)Object + v59 + 9) == v58 )
              goto LABEL_101;
            ++v59;
          }
          ObfReferenceObjectWithTag(v58, 0x746C6644u);
          for ( i = 0; ; ++i )
          {
            if ( i >= 4 )
            {
              v61 = *((_DWORD *)v7 + 102) & 7;
              v62 = (PVOID *)&v7[8 * v61];
              ObfDereferenceObjectWithTag(v62[9], 0x746C6644u);
              v62[9] = v58;
              *((_DWORD *)v7 + 102) = *((_DWORD *)v7 + 102) & 0xFFFFFFF8 | ((_BYTE)v61 + 1) & 3;
              goto LABEL_101;
            }
            v74 = 8LL * i + 72;
            if ( !*(_QWORD *)&v60[v74] )
              break;
          }
          *(_QWORD *)&v7[v74] = v58;
        }
LABEL_101:
        v63 = *((_QWORD *)v7 + 2);
        if ( *((_DWORD *)v7 + 96) >= *((_DWORD *)v7 + 95) || *(_DWORD *)(v63 + 28) )
        {
LABEL_103:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
          {
            KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v91, retaddr);
            goto LABEL_106;
          }
          _m_prefetchw(&v91);
          Next = (__int64)v91.LockQueue.Next;
          if ( v91.LockQueue.Next )
          {
LABEL_114:
            v91.LockQueue.Next = 0LL;
            Lock = (unsigned __int8)v91.LockQueue.Lock;
            if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                             (volatile __int64 *)(Next + 8),
                                             (__int64)v91.LockQueue.Lock)) & 4) != 0 )
            {
              _InterlockedOr(v85, 0);
              v67 = KeDisableInterrupts();
              KiHaltOnAddressWakeEntireList(v69, _InterlockedExchange64(&KiHaltOnAddressHashTable[v68], 0LL));
              if ( v67 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
                if ( SchedulerAssist )
                {
                  _m_prefetchw(SchedulerAssist);
                  v80 = *SchedulerAssist;
                  do
                  {
                    v81 = v80;
                    v80 = _InterlockedCompareExchange(SchedulerAssist, v80 & 0xFFDFFFFF, v80);
                  }
                  while ( v81 != v80 );
                  if ( (v80 & 0x200000) != 0 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                _enable();
              }
            }
          }
          else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)v91.LockQueue.Lock,
                                                    0LL,
                                                    (signed __int64)&v91) != &v91 )
          {
            Next = KxWaitForLockChainValid((__int64 *)&v91);
            goto LABEL_114;
          }
LABEL_106:
          OldIrql = v91.OldIrql;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v91.OldIrql);
          __writecr8(OldIrql);
        }
        else
        {
          if ( *((_DWORD *)v7 + 101) )
          {
            v72 = *((_DWORD *)v7 + 102) | 0x200;
            *((_DWORD *)v7 + 102) = v72;
            if ( !*(_DWORD *)(*(_QWORD *)(v63 + 8) + 4LL) )
            {
              if ( (v72 & 0x400) == 0 )
              {
                *((_DWORD *)v7 + 102) = v72 | 0x400;
                ObfReferenceObjectWithTag(v7, 0x746C6644u);
                KeRegisterObjectNotification(*(_QWORD *)(v63 + 8), &ExpWorkerFactoryManagerQueue, v7 + 616);
              }
              goto LABEL_103;
            }
          }
          ExpWorkerFactoryCheckCreate(v7, &v91);
        }
        if ( !v10 )
          *v99 = v95;
        break;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(&v91);
        v17 = (__int64)v91.LockQueue.Next;
        if ( !v91.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v91.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&v91) == &v91 )
            goto LABEL_47;
          v17 = KxWaitForLockChainValid((__int64 *)&v91);
        }
        v91.LockQueue.Next = 0LL;
        v18 = v91.LockQueue.Lock;
        if ( (((unsigned __int8)v18 ^ (unsigned __int8)_InterlockedExchange64(
                                                         (volatile __int64 *)(v17 + 8),
                                                         (__int64)v91.LockQueue.Lock)) & 4) != 0 )
          KeWakeAddressAll(v17 + 8, (__int64)v18);
      }
      else
      {
        KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v91, retaddr);
      }
LABEL_47:
      v23 = v91.OldIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v91.OldIrql);
      __writecr8(v23);
      v24 = Flags[1];
      if ( (Flags[1] & 1) == 0 )
        goto LABEL_82;
      v25 = Handle[0];
      v26 = Flags[0];
      v27 = Handle[1];
      *(_OWORD *)v107 = 0LL;
      v108 = 0LL;
      v109 = 0LL;
      v110 = 0LL;
      v28 = KeGetCurrentThread();
      --v28->KernelApcDisable;
      v101 = 0LL;
      v29 = v26 & 0xFFFF0000;
      if ( (v29 & 0x20000) == 0 )
      {
        v97 = 0LL;
        if ( ObReferenceObjectByHandle(v27, 1u, AlpcPortObjectType, PreviousMode, &v97, 0LL) >= 0 )
        {
          v30 = v97;
          if ( (v29 & 0x40000) != 0 )
          {
            v31 = _InterlockedIncrement((volatile signed __int32 *)v97 + 101);
            v30 = v97;
            v93 = (char *)v97;
            if ( *((_QWORD *)v97 + 51) )
            {
              BugCheckParameter2 = (ULONG_PTR)v97 + 352;
              v82 = KeAbPreAcquire((char *)v97 + 352, 0LL, 0LL);
              v90 = (PULONG)v82;
              v83 = (volatile signed __int64 *)BugCheckParameter2;
              if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx(v83, v82, v83);
                v83 = (volatile signed __int64 *)BugCheckParameter2;
                v82 = (__int64)v90;
              }
              if ( v82 )
                *(_BYTE *)(v82 + 10) = 1;
              v84 = *((_QWORD *)v93 + 51);
              if ( v84 && v31 == *(_DWORD *)(v84 + 24) )
              {
                KeSetEvent(*((PRKEVENT *)v93 + 51), 0, 0);
                v83 = (volatile signed __int64 *)BugCheckParameter2;
              }
              if ( (_InterlockedExchangeAdd64(v83, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              {
                ExfTryToWakePushLock(v83);
                v83 = (volatile signed __int64 *)BugCheckParameter2;
              }
              KeAbPostRelease((ULONG_PTR)v83);
              v30 = v97;
            }
          }
          v107[0] = v30;
          LODWORD(v110) = v29 | 4;
          v109 = 0uLL;
          *((_QWORD *)&v108 + 1) = 0LL;
          if ( (int)AlpcpSendMessage(v107, v25, 0LL, PreviousMode) < 0 )
          {
            ObfDereferenceObject(v107[0]);
          }
          else
          {
            v32 = v109;
            v93 = (char *)v109;
            *(_QWORD *)&v101 = v109;
            *((PVOID *)&v101 + 1) = v107[0];
            if ( !(_QWORD)v109 )
            {
              if ( *((_QWORD *)&v108 + 1) )
              {
                KeReleaseSemaphoreEx((PVOID)(*((_QWORD *)&v108 + 1) + 1304LL), 5, 0LL);
              }
              else if ( (BYTE8(v109) & 1) != 0 )
              {
                if ( (*((_QWORD *)&v109 + 1) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
                {
                  KeSetEvent((PRKEVENT)(*((_QWORD *)&v109 + 1) & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
                  AlpcpReleaseDirectAttribute(*((_QWORD *)&v109 + 1));
                }
                *((_QWORD *)&v109 + 1) = 0LL;
              }
              goto LABEL_81;
            }
            if ( BYTE10(v110) )
            {
              v88 = BYTE11(v110);
              *(_QWORD *)&LockHandle.OldIrql = 0LL;
              v33 = *(_QWORD *)(v109 + 32);
              v34 = *(_QWORD *)(v109 + 48);
              LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v34;
              LockHandle.LockQueue.Next = 0LL;
              v35 = (ULONG *)KeGetCurrentIrql();
              v90 = v35;
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                KiRaiseIrqlProcessIrqlFlags(v35, 2LL);
                LOBYTE(v35) = (_BYTE)v90;
              }
              LockHandle.OldIrql = (unsigned __int8)v35;
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
              {
                v36 = _InterlockedExchange64((volatile __int64 *)v34, (__int64)&LockHandle);
                if ( v36 )
                  KxWaitForLockOwnerShip(&LockHandle, v36);
              }
              else
              {
                KiAcquireQueuedSpinLockInstrumented(&LockHandle, v34);
              }
              v37 = *(_DWORD *)(v34 + 12);
              if ( v37 >= *(_DWORD *)(v34 + 8) )
              {
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( !(unsigned int)AlpcpQueueIoCompletion(v33, *(_QWORD *)(v32 + 40), -(v88 != 0), 0, 0, 0) )
                {
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v34, &LockHandle);
                  if ( v88 )
                    ++*(_DWORD *)(v34 + 20);
                  else
                    ++*(_DWORD *)(v34 + 16);
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                }
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v32 + 352));
                KeAbPostRelease(v32 + 352);
                goto LABEL_81;
              }
              v38 = *(_QWORD **)(v34 + 32);
              if ( v38 )
                *(_QWORD *)(v34 + 32) = *v38;
              MiniCompletionPacket = v38[1];
              *(_DWORD *)(v34 + 12) = v37 + 1;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              v40 = v93;
              v41 = (signed __int64 *)(v93 + 352);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)v93 + 44, 0LL, 17LL) != 17 )
              {
                ExfReleasePushLockShared(v41);
                v41 = (signed __int64 *)(v40 + 352);
              }
              KeAbPostRelease((ULONG_PTR)v41);
              v43 = v88 != 0;
              v88 = -v88;
              v44 = -(__int64)v43;
              v90 = (PULONG)v44;
              v45 = *((_QWORD *)v40 + 5);
              if ( MiniCompletionPacket )
                goto LABEL_68;
              LOBYTE(v42) = 1;
              MiniCompletionPacket = IopAllocateMiniCompletionPacket(v42, 0LL);
              if ( MiniCompletionPacket )
              {
                v44 = (__int64)v90;
LABEL_68:
                *(_QWORD *)(MiniCompletionPacket + 24) = v45;
                *(_QWORD *)(MiniCompletionPacket + 32) = v44;
                *(_DWORD *)(MiniCompletionPacket + 40) = 0;
                *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
                v88 = 0;
                v46 = (ULONG *)KeGetCurrentIrql();
                v90 = v46;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags(v46, 2LL);
                v47 = KeGetCurrentPrcb();
                v48 = v47->CurrentThread;
                v93 = (char *)v48;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(v48);
                  EtwTraceEnqueueWork(v79, MiniCompletionPacket, IsThreadRunning);
                  v48 = (_KTHREAD *)v93;
                }
                LODWORD(BugCheckParameter2) = ((unsigned __int8)~*(_BYTE *)(v33 + 1) >> 1) & 1;
                p_Lock = v48[1].WaitBlock[1].Object;
                if ( !p_Lock )
                  p_Lock = &v48->Header.Lock;
                v96 = *(_DWORD *)(p_Lock[68] + 136LL) & 0x2000;
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v33);
                v111 = *(_DWORD *)(v33 + 4);
                v50 = (_QWORD *)(v33 + 8);
                if ( (_QWORD *)*v50 == v50
                  || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44) && !v96
                  || *((_QWORD *)v93 + 29) == v33 && v93[643] == 15 )
                {
                  v51 = v88;
                }
                else
                {
                  v51 = KiWakeQueueWaiter((__int64)v47, v33, MiniCompletionPacket);
                  v50 = (_QWORD *)(v33 + 8);
                }
                if ( v51 )
                {
                  *(_QWORD *)MiniCompletionPacket = 0LL;
                }
                else
                {
                  v75 = *(_DWORD *)(v33 + 4);
                  *(_DWORD *)(v33 + 4) = v75 + 1;
                  v76 = *(__int64 **)(v33 + 32);
                  if ( *v76 != v33 + 24 )
                    __fastfail(3u);
                  *(_QWORD *)MiniCompletionPacket = v33 + 24;
                  *(_QWORD *)(MiniCompletionPacket + 8) = v76;
                  *v76 = MiniCompletionPacket;
                  *(_QWORD *)(v33 + 32) = MiniCompletionPacket;
                  if ( !v75 && (_QWORD *)*v50 != v50 )
                    KiWakeOtherQueueWaiters(v47, v33);
                }
                _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
                KiExitDispatcher((unsigned __int64)v47, 3LL, 1u, BugCheckParameter2, (unsigned __int8)v90);
              }
            }
            else
            {
              v77 = *(void **)(v109 + 248);
              LODWORD(v104[0]) = 0;
              KeReleaseSemaphoreEx(v77, 9, (__int64)v104);
            }
          }
        }
      }
LABEL_81:
      KeLeaveCriticalRegionThread();
      v24 = Flags[1];
LABEL_82:
      if ( (v24 & 2) != 0 )
      {
        v52 = KeGetCurrentThread();
        if ( (v52->MiscFlags & 4) == 0 )
        {
          v53 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v53, 2LL);
          v52->WaitIrql = v53;
          v52->MiscFlags |= 4u;
        }
        PspRevertContainerImpersonation((__int64)KeGetCurrentThread());
      }
      v54 = *((_QWORD *)v7 + 2);
      LOBYTE(Timeout) = 1;
      LOBYTE(HandleInformation) = PreviousMode;
      v10 = IoRemoveIoCompletion(
              *(_QWORD *)(v54 + 8),
              v106,
              P,
              v94,
              &v95,
              (_DWORD)HandleInformation,
              0LL,
              (_DWORD)Timeout);
      ExpWorkerFactoryFinishDeferredWork(&v101);
      v55 = (unsigned __int64 *)*((_QWORD *)v7 + 2);
      v91.LockQueue.Lock = v55;
      v91.LockQueue.Next = 0LL;
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v56, 2LL);
      v91.OldIrql = v56;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v57 = _InterlockedExchange64((volatile __int64 *)v55, (__int64)&v91);
        if ( v57 )
          KxWaitForLockOwnerShip(&v91, v57);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&v91, v55);
      }
      if ( v10 != 258
        || !(unsigned __int8)ExpWorkerFactoryWantsToCreate(v7, 1LL)
        && *((_DWORD *)v7 + 96) > *((_DWORD *)v7 + 94)
        && *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber == (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
      {
        goto LABEL_94;
      }
    }
  }
LABEL_31:
  if ( P != v113 )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)v7 - 48);
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v20 = v19 <= 1;
    v21 = v19 - 1;
    if ( v20 )
    {
      if ( *((_QWORD *)v7 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v7 - 48) >> 8)],
          (ULONG_PTR)v7,
          1uLL,
          *((_QWORD *)v7 - 5));
      if ( v21 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v7, 2uLL, v21);
      if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
      {
        ObpDeferObjectDeletion(v7 - 48);
      }
      else
      {
        if ( (*(v7 - 22) & 0x40) != 0 && *(_BYTE *)(*(_QWORD *)&v7[-ObpInfoMaskToOffset[*(v7 - 22) & 0x7F] - 48] + 24LL) )
          ObpHandleRevocationBlockRemoveObject();
        if ( ObpTraceFlags )
          ObpDeregisterObject(v7 - 48);
        ObpRemoveObjectRoutine(v7 - 48, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v10;
}
