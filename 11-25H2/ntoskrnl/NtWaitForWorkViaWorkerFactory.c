/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x140307190
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     EtwTraceEnqueueWork @ 0x1402811B8 (EtwTraceEnqueueWork.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140303CE0 (ExpWorkerFactoryCheckCreate.c)
 *     KeRegisterObjectNotification @ 0x140306594 (KeRegisterObjectNotification.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1403082D4 (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     ExpWorkerFactoryFinishDeferredWork @ 0x140308390 (ExpWorkerFactoryFinishDeferredWork.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     KiWakeQueueWaiter @ 0x140308B20 (KiWakeQueueWaiter.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x14044CA0C (ExpWorkerFactoryWantsToCreate.c)
 *     AlpcpReleaseDirectAttribute @ 0x14046BB78 (AlpcpReleaseDirectAttribute.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140476FF0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExSystemExceptionFilter @ 0x1407A7AE0 (ExSystemExceptionFilter.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     NtAlpcSendWaitReceivePort @ 0x14084E310 (NtAlpcSendWaitReceivePort.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D26C0 (IopAllocateMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v5; // r13d
  PFILE_IO_COMPLETION_INFORMATION v6; // r9
  char *v8; // rbx
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rcx
  NTSTATUS v11; // r15d
  unsigned __int64 *v12; // rdi
  unsigned __int8 CurrentIrql; // si
  PVOID v14; // rdi
  __int64 v15; // rcx
  int v16; // eax
  __int64 Next; // rax
  unsigned __int8 Lock; // cl
  bool v19; // di
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 OldIrql; // rdi
  char v26; // al
  HANDLE v27; // r15
  ULONG v28; // edi
  HANDLE v29; // rcx
  struct _KTHREAD *v30; // rax
  unsigned int v31; // edi
  signed __int32 v32; // esi
  char *v33; // r12
  __int64 v34; // r9
  __int64 v35; // r15
  __int64 v36; // r12
  __int64 v37; // rdi
  unsigned __int8 v38; // si
  struct _KPRCB **v39; // rdx
  unsigned int v40; // ecx
  _QWORD *v41; // rsi
  __int64 MiniCompletionPacket; // rsi
  __int64 v43; // rcx
  bool v44; // cf
  __int64 v45; // rdi
  __int64 v46; // r15
  __int64 *v47; // rax
  struct _KPRCB *v48; // rdi
  __int64 v49; // r15
  __int64 v50; // rax
  _QWORD *v51; // r8
  KPROCESSOR_MODE v52; // al
  struct _KTHREAD *v53; // rdi
  unsigned __int8 v54; // si
  unsigned __int64 *v55; // rdi
  unsigned __int8 v56; // si
  struct _KTHREAD *v57; // r12
  unsigned int v58; // ecx
  char *v59; // rdi
  __int64 v60; // rsi
  PVOID *v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rax
  unsigned __int8 v64; // cl
  bool v65; // di
  __int64 v66; // r8
  __int64 v67; // rcx
  struct _KPRCB *v68; // rcx
  unsigned __int64 v69; // rdi
  signed __int64 v70; // r13
  bool v71; // cc
  signed __int64 v72; // r13
  int v74; // ecx
  unsigned __int32 v75; // eax
  unsigned __int32 v76; // ett
  signed __int32 v77; // eax
  signed __int32 v78; // ett
  unsigned int i; // ecx
  __int64 v80; // rax
  int v81; // edx
  __int64 *v82; // rcx
  volatile signed __int32 *v83; // rcx
  char v84; // al
  char IsThreadRunning; // al
  KPROCESSOR_MODE v86; // si
  __int64 *v87; // rax
  unsigned __int64 *v88; // rcx
  __int64 v89; // rax
  signed __int32 v90[8]; // [rsp+0h] [rbp-228h] BYREF
  KPROCESSOR_MODE v91; // [rsp+40h] [rbp-1E8h]
  unsigned __int8 v92; // [rsp+41h] [rbp-1E7h]
  struct _KLOCK_QUEUE_HANDLE v93; // [rsp+48h] [rbp-1E0h] BYREF
  ULONG v94; // [rsp+60h] [rbp-1C8h]
  ULONG v95; // [rsp+64h] [rbp-1C4h] BYREF
  ULONG v96; // [rsp+68h] [rbp-1C0h]
  __int64 *v97; // [rsp+70h] [rbp-1B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-1B0h]
  PVOID v99; // [rsp+80h] [rbp-1A8h] BYREF
  PVOID Object; // [rsp+88h] [rbp-1A0h] BYREF
  PULONG v101; // [rsp+90h] [rbp-198h]
  PVOID P; // [rsp+98h] [rbp-190h]
  __int128 v103; // [rsp+A0h] [rbp-188h] BYREF
  HANDLE Handle[2]; // [rsp+B0h] [rbp-178h]
  ULONG Flags[2]; // [rsp+C0h] [rbp-168h]
  __int64 v106[2]; // [rsp+C8h] [rbp-160h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-150h] BYREF
  PFILE_IO_COMPLETION_INFORMATION v108; // [rsp+F0h] [rbp-138h]
  PVOID v109[2]; // [rsp+100h] [rbp-128h] BYREF
  __int128 v110; // [rsp+110h] [rbp-118h]
  __int128 v111; // [rsp+120h] [rbp-108h]
  __int128 v112; // [rsp+130h] [rbp-F8h]
  int v113; // [rsp+140h] [rbp-E8h]
  PFILE_IO_COMPLETION_INFORMATION v114; // [rsp+148h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+150h] [rbp-D8h]
  _OWORD v116[8]; // [rsp+160h] [rbp-C8h] BYREF
  __int64 retaddr; // [rsp+228h] [rbp+0h]

  v101 = PacketsReturned;
  v5 = Count;
  v94 = Count;
  v6 = MiniPackets;
  v108 = MiniPackets;
  BugCheckParameter2 = (ULONG_PTR)WorkerFactoryHandle;
  v114 = MiniPackets;
  v96 = Count;
  v97 = (__int64 *)v101;
  v103 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *(_QWORD *)Flags = 0LL;
  memset(&v93, 0, sizeof(v93));
  memset(v116, 0, sizeof(v116));
  v95 = 0;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v92 = PreviousMode;
  v91 = PreviousMode;
  P = v116;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v11 = -1073741811;
    goto LABEL_104;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v101 < 0x7FFFFFFF0000LL )
      v10 = (__int64)v101;
    *(_DWORD *)v10 = *(_DWORD *)v10;
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
  v11 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v8 = (char *)Object;
  v106[1] = (__int64)Object;
  if ( v11 >= 0 )
  {
    if ( v5 > 0x10 )
    {
      P = (PVOID)ExAllocatePool2(0x40uLL);
      if ( !P )
      {
        v94 = 16;
        P = v116;
      }
    }
    v12 = (unsigned __int64 *)*((_QWORD *)v8 + 2);
    v93.LockQueue.Lock = v12;
    v93.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v93.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      MiniPackets = (PFILE_IO_COMPLETION_INFORMATION)_InterlockedExchange64((volatile __int64 *)v12, (__int64)&v93);
      if ( MiniPackets )
        KxWaitForLockOwnerShip((struct _KPRCB *)&v93, (struct _KPRCB **)MiniPackets);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v93, (volatile __int64 *)v12);
    }
    v14 = Object;
    v15 = *((_QWORD *)Object + 2);
    if ( *(_BYTE *)(v15 + 33) )
    {
      KeReleaseInStackQueuedSpinLock(&v93);
      v11 = 128;
      goto LABEL_104;
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
LABEL_22:
    v6 = (PFILE_IO_COMPLETION_INFORMATION)0x140000000LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v8 + 95) < *((_DWORD *)v8 + 96) || *(_BYTE *)(*((_QWORD *)v8 + 2) + 33LL) )
      {
        v11 = 258;
        goto LABEL_81;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(&v93);
        Next = (__int64)v93.LockQueue.Next;
        if ( !v93.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v93.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&v93) == &v93 )
            goto LABEL_33;
          Next = KxWaitForLockChainValid((__int64 *)&v93);
        }
        v93.LockQueue.Next = 0LL;
        Lock = (unsigned __int8)v93.LockQueue.Lock;
        if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                         (volatile __int64 *)(Next + 8),
                                         (__int64)v93.LockQueue.Lock)) & 4) != 0 )
        {
          _InterlockedOr(v90, 0);
          v19 = KeDisableInterrupts();
          KiHaltOnAddressWakeEntireList(
            v22,
            _InterlockedExchange64((volatile __int64 *)(v21 + 8 * v20 + 15861120), 0LL));
          if ( v19 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v77 = *SchedulerAssist;
              do
              {
                v78 = v77;
                v77 = _InterlockedCompareExchange(SchedulerAssist, v77 & 0xFFDFFFFF, v77);
              }
              while ( v78 != v77 );
              if ( (v77 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
        }
      }
      else
      {
        KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v93, retaddr);
      }
LABEL_33:
      OldIrql = v93.OldIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v93.OldIrql);
      __writecr8(OldIrql);
      v26 = Flags[1];
      if ( (Flags[1] & 1) == 0 )
        goto LABEL_69;
      v27 = Handle[0];
      v28 = Flags[0];
      v29 = Handle[1];
      *(_OWORD *)v109 = 0LL;
      v110 = 0LL;
      v111 = 0LL;
      v112 = 0LL;
      v30 = KeGetCurrentThread();
      --v30->KernelApcDisable;
      v103 = 0LL;
      v31 = v28 & 0xFFFF0000;
      if ( (v31 & 0x20000) == 0 )
      {
        v99 = 0LL;
        if ( ObReferenceObjectByHandle(v29, 1u, AlpcPortObjectType, PreviousMode, &v99, 0LL) >= 0 )
        {
          if ( (v31 & 0x40000) != 0 )
          {
            v32 = _InterlockedIncrement((volatile signed __int32 *)v99 + 101);
            v33 = (char *)v99;
            if ( !*((_QWORD *)v99 + 51) )
              goto LABEL_40;
            BugCheckParameter2 = (ULONG_PTR)v99 + 352;
            v87 = KeAbPreAcquire((__int64)v99 + 352, 0LL);
            v97 = v87;
            v88 = (unsigned __int64 *)(v33 + 352);
            if ( _interlockedbittestandset64((volatile signed __int32 *)v33 + 88, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v88, v87, (__int64)(v33 + 352));
              v88 = (unsigned __int64 *)(v33 + 352);
              v87 = v97;
            }
            if ( v87 )
              *((_BYTE *)v87 + 10) = 1;
            v89 = *((_QWORD *)v33 + 51);
            if ( v89 && v32 == *(_DWORD *)(v89 + 24) )
            {
              KeSetEvent(*((PRKEVENT *)v33 + 51), 0, 0);
              v88 = (unsigned __int64 *)BugCheckParameter2;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            {
              ExfTryToWakePushLock(v88);
              v88 = (unsigned __int64 *)BugCheckParameter2;
            }
            KeAbPostRelease((ULONG_PTR)v88);
          }
          v33 = (char *)v99;
LABEL_40:
          v109[0] = v33;
          LODWORD(v112) = v31 | 4;
          v111 = 0uLL;
          *((_QWORD *)&v110 + 1) = 0LL;
          PreviousMode = v92;
          if ( (int)AlpcpSendMessage(v109, v27, 0LL, v92) < 0 )
          {
            ObfDereferenceObject(v109[0]);
          }
          else
          {
            v35 = v111;
            *(_QWORD *)&v103 = v111;
            *((PVOID *)&v103 + 1) = v109[0];
            if ( (_QWORD)v111 )
            {
              if ( BYTE10(v112) )
              {
                v91 = BYTE11(v112);
                *(_QWORD *)&LockHandle.OldIrql = 0LL;
                v36 = *(_QWORD *)(v111 + 32);
                v37 = *(_QWORD *)(v111 + 48);
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v37;
                LockHandle.LockQueue.Next = 0LL;
                v38 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags(v38);
                LockHandle.OldIrql = v38;
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
                {
                  v39 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)v37, (__int64)&LockHandle);
                  if ( v39 )
                    KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v39);
                }
                else
                {
                  KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v37);
                }
                v40 = *(_DWORD *)(v37 + 12);
                if ( v40 >= *(_DWORD *)(v37 + 8) )
                {
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                  v86 = v91;
                  if ( !(unsigned int)AlpcpQueueIoCompletion(
                                        v36,
                                        *(_QWORD *)(v35 + 40),
                                        -(__int64)(v91 != 0),
                                        0LL,
                                        0,
                                        0) )
                  {
                    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v37, &LockHandle);
                    if ( v86 )
                      ++*(_DWORD *)(v37 + 20);
                    else
                      ++*(_DWORD *)(v37 + 16);
                    KeReleaseInStackQueuedSpinLock(&LockHandle);
                  }
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v35 + 352));
                  KeAbPostRelease(v35 + 352);
                }
                else
                {
                  v41 = *(_QWORD **)(v37 + 32);
                  if ( v41 )
                    *(_QWORD *)(v37 + 32) = *v41;
                  MiniCompletionPacket = v41[1];
                  *(_DWORD *)(v37 + 12) = v40 + 1;
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v35 + 352));
                  KeAbPostRelease(v35 + 352);
                  v44 = v91 != 0;
                  v91 = -v91;
                  v45 = -(__int64)v44;
                  v46 = *(_QWORD *)(v35 + 40);
                  if ( MiniCompletionPacket
                    || (LOBYTE(v43) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(v43, 0LL)) != 0) )
                  {
                    *(_QWORD *)(MiniCompletionPacket + 24) = v46;
                    *(_QWORD *)(MiniCompletionPacket + 32) = v45;
                    *(_DWORD *)(MiniCompletionPacket + 40) = 0;
                    *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
                    v91 = 0;
                    v47 = (__int64 *)KeGetCurrentIrql();
                    v97 = v47;
                    __writecr8(2uLL);
                    if ( KiIrqlFlags )
                      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v47);
                    v48 = KeGetCurrentPrcb();
                    v49 = (__int64)v48->CurrentThread;
                    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                    {
                      IsThreadRunning = KeIsThreadRunning((__int64)v48->CurrentThread);
                      EtwTraceEnqueueWork(v49, MiniCompletionPacket, IsThreadRunning);
                    }
                    LODWORD(BugCheckParameter2) = ((unsigned __int8)~*(_BYTE *)(v36 + 1) >> 1) & 1;
                    v50 = *(_QWORD *)(v49 + 1616);
                    if ( !v50 )
                      v50 = v49;
                    v96 = *(_DWORD *)(*(_QWORD *)(v50 + 544) + 136LL) & 0x2000;
                    KiAcquireKobjectLockSafe((volatile signed __int32 *)v36);
                    v113 = *(_DWORD *)(v36 + 4);
                    v51 = (_QWORD *)(v36 + 8);
                    if ( (_QWORD *)*v51 == v51
                      || *(_DWORD *)(v36 + 40) >= *(_DWORD *)(v36 + 44) && !v96
                      || *(_QWORD *)(v49 + 232) == v36 && *(_BYTE *)(v49 + 643) == 15 )
                    {
                      v52 = v91;
                    }
                    else
                    {
                      v52 = KiWakeQueueWaiter(v48, v36, MiniCompletionPacket);
                      v51 = (_QWORD *)(v36 + 8);
                    }
                    if ( v52 )
                    {
                      *(_QWORD *)MiniCompletionPacket = 0LL;
                    }
                    else
                    {
                      v81 = *(_DWORD *)(v36 + 4);
                      *(_DWORD *)(v36 + 4) = v81 + 1;
                      v82 = *(__int64 **)(v36 + 32);
                      if ( *v82 != v36 + 24 )
                        __fastfail(3u);
                      *(_QWORD *)MiniCompletionPacket = v36 + 24;
                      *(_QWORD *)(MiniCompletionPacket + 8) = v82;
                      *v82 = MiniCompletionPacket;
                      *(_QWORD *)(v36 + 32) = MiniCompletionPacket;
                      if ( !v81 && (_QWORD *)*v51 != v51 )
                        KiWakeOtherQueueWaiters((__int64)v48, v36);
                    }
                    _InterlockedAnd((volatile signed __int32 *)v36, 0xFFFFFF7F);
                    KiExitDispatcher(v48, 3LL, 1u, BugCheckParameter2, (unsigned __int8)v97);
                  }
                }
                PreviousMode = v92;
              }
              else
              {
                v83 = *(volatile signed __int32 **)(v111 + 248);
                LODWORD(v106[0]) = 0;
                KeReleaseSemaphoreEx(v83, 1, 1, v34, 9u, v106);
              }
            }
            else if ( *((_QWORD *)&v110 + 1) )
            {
              KeReleaseSemaphoreEx((volatile signed __int32 *)(*((_QWORD *)&v110 + 1) + 1304LL), 1, 1, v34, 5u, 0LL);
            }
            else if ( (BYTE8(v111) & 1) != 0 )
            {
              if ( (*((_QWORD *)&v111 + 1) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
              {
                KeSetEvent((PRKEVENT)(*((_QWORD *)&v111 + 1) & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
                AlpcpReleaseDirectAttribute(*((_QWORD *)&v111 + 1));
              }
              *((_QWORD *)&v111 + 1) = 0LL;
            }
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v26 = Flags[1];
LABEL_69:
      if ( (v26 & 2) != 0 )
      {
        v53 = KeGetCurrentThread();
        if ( (v53->MiscFlags & 4) == 0 )
        {
          v54 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v54);
          v53->WaitIrql = v54;
          v53->MiscFlags |= 4u;
        }
        PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
      }
      v11 = IoRemoveIoCompletion(
              *(struct _KQUEUE **)(*((_QWORD *)v8 + 2) + 8LL),
              (__int64)v108,
              (PLIST_ENTRY *)P,
              v94,
              &v95,
              PreviousMode,
              0LL,
              1u);
      ExpWorkerFactoryFinishDeferredWork(&v103);
      v55 = (unsigned __int64 *)*((_QWORD *)v8 + 2);
      v93.LockQueue.Lock = v55;
      v93.LockQueue.Next = 0LL;
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v56);
      v93.OldIrql = v56;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        MiniPackets = (PFILE_IO_COMPLETION_INFORMATION)_InterlockedExchange64((volatile __int64 *)v55, (__int64)&v93);
        if ( MiniPackets )
          KxWaitForLockOwnerShip((struct _KPRCB *)&v93, (struct _KPRCB **)MiniPackets);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&v93, (volatile __int64 *)v55);
      }
      if ( v11 != 258 )
        goto LABEL_81;
      v84 = ExpWorkerFactoryWantsToCreate(v8, 1LL);
      v6 = (PFILE_IO_COMPLETION_INFORMATION)0x140000000LL;
      if ( !v84 )
      {
        v6 = (PFILE_IO_COMPLETION_INFORMATION)0x140000000LL;
        if ( *((_DWORD *)v8 + 96) > *((_DWORD *)v8 + 94) )
        {
          if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
            goto LABEL_22;
LABEL_81:
          --*(_DWORD *)(*((_QWORD *)v8 + 2) + 28LL);
          if ( v11 == 258 )
          {
            --*((_DWORD *)v8 + 96);
            --*((_DWORD *)v8 + 97);
            ExpRemoveCurrentThreadFromThreadHistory(v8);
          }
          else if ( (*((_DWORD *)v8 + 102) & 7) != 4 )
          {
            v57 = KeGetCurrentThread();
            v58 = 0;
            v59 = (char *)Object;
            while ( v58 < 4 )
            {
              if ( *((struct _KTHREAD **)Object + v58 + 9) == v57 )
                goto LABEL_88;
              ++v58;
            }
            ObfReferenceObjectWithTag(v57, 0x746C6644u);
            for ( i = 0; ; ++i )
            {
              if ( i >= 4 )
              {
                v60 = *((_DWORD *)v8 + 102) & 7;
                v61 = (PVOID *)&v8[8 * v60];
                ObfDereferenceObjectWithTag(v61[9], 0x746C6644u);
                v61[9] = v57;
                *((_DWORD *)v8 + 102) = *((_DWORD *)v8 + 102) & 0xFFFFFFF8 | ((_BYTE)v60 + 1) & 3;
                goto LABEL_88;
              }
              v80 = 8LL * i + 72;
              if ( !*(_QWORD *)&v59[v80] )
                break;
            }
            *(_QWORD *)&v8[v80] = v57;
          }
LABEL_88:
          v62 = *((_QWORD *)v8 + 2);
          if ( *((_DWORD *)v8 + 96) >= *((_DWORD *)v8 + 95) || *(_DWORD *)(v62 + 28) )
          {
LABEL_90:
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _m_prefetchw(&v93);
              v63 = (__int64)v93.LockQueue.Next;
              if ( !v93.LockQueue.Next )
              {
                if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)v93.LockQueue.Lock,
                                                     0LL,
                                                     (signed __int64)&v93) == &v93 )
                  goto LABEL_98;
                v63 = KxWaitForLockChainValid((__int64 *)&v93);
              }
              v93.LockQueue.Next = 0LL;
              v64 = (unsigned __int8)v93.LockQueue.Lock;
              *(_QWORD *)&Count = v63 + 8;
              if ( ((v64 ^ (unsigned __int8)_InterlockedExchange64(
                                              (volatile __int64 *)(v63 + 8),
                                              (__int64)v93.LockQueue.Lock)) & 4) != 0 )
              {
                _InterlockedOr(v90, 0);
                v65 = KeDisableInterrupts();
                KiHaltOnAddressWakeEntireList(v67, _InterlockedExchange64(&KiHaltOnAddressHashTable[v66], 0LL));
                if ( v65 )
                {
                  v68 = KeGetCurrentPrcb();
                  *(_QWORD *)&Count = v68->SchedulerAssist;
                  if ( *(_QWORD *)&Count )
                  {
                    _m_prefetchw(*(const void **)&Count);
                    v75 = **(_DWORD **)&Count;
                    do
                    {
                      MiniPackets = (PFILE_IO_COMPLETION_INFORMATION)v75;
                      LODWORD(MiniPackets) = v75 & 0xFFDFFFFF;
                      v76 = v75;
                      v75 = _InterlockedCompareExchange(*(volatile signed __int32 **)&Count, v75 & 0xFFDFFFFF, v75);
                    }
                    while ( v76 != v75 );
                    if ( (v75 & 0x200000) != 0 )
                      KiRemoveSystemWorkPriorityKick((__int64)v68);
                  }
                  _enable();
                }
              }
            }
            else
            {
              KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v93, retaddr);
            }
LABEL_98:
            v69 = v93.OldIrql;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v93.OldIrql);
            __writecr8(v69);
          }
          else
          {
            if ( *((_DWORD *)v8 + 101) )
            {
              v74 = *((_DWORD *)v8 + 102) | 0x200;
              *((_DWORD *)v8 + 102) = v74;
              if ( !*(_DWORD *)(*(_QWORD *)(v62 + 8) + 4LL) )
              {
                if ( (v74 & 0x400) == 0 )
                {
                  *((_DWORD *)v8 + 102) = v74 | 0x400;
                  ObfReferenceObjectWithTag(v8, 0x746C6644u);
                  KeRegisterObjectNotification(
                    *(_QWORD *)(v62 + 8),
                    (__int64)&ExpWorkerFactoryManagerQueue,
                    (__int64)(v8 + 616));
                }
                goto LABEL_90;
              }
            }
            ExpWorkerFactoryCheckCreate(v8, &v93, 0);
          }
          if ( !v11 )
            *v101 = v95;
          break;
        }
      }
    }
  }
LABEL_104:
  if ( P != v116 )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)(v8 - 48), 0, 1u, 0x746C6644u);
    v70 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v71 = v70 <= 1;
    v72 = v70 - 1;
    if ( v71 )
    {
      if ( *((_QWORD *)v8 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v8 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v8 - 48) >> 8)],
          (ULONG_PTR)v8,
          1uLL,
          *((_QWORD *)v8 - 5));
      if ( v72 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v8, 2uLL, v72);
      if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
      {
        ObpDeferObjectDeletion(v8 - 48, MiniPackets, *(_QWORD *)&Count, v6);
      }
      else
      {
        if ( (*(v8 - 22) & 0x40) != 0 && *(_BYTE *)(*(_QWORD *)&v8[-ObpInfoMaskToOffset[*(v8 - 22) & 0x7F] - 48] + 24LL) )
          ObpHandleRevocationBlockRemoveObject();
        if ( ObpTraceFlags )
          ObpDeregisterObject(v8 - 48);
        ObpRemoveObjectRoutine(v8 - 48, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v11;
}
