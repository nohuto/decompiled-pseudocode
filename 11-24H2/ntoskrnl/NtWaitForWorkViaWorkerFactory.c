/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x1402A3010
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x140205AB0 (KeRegisterObjectNotification.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSemaphoreEx @ 0x1402A1600 (KeReleaseSemaphoreEx.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1402A40EC (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     ExpWorkerFactoryFinishDeferredWork @ 0x1402A41B0 (ExpWorkerFactoryFinishDeferredWork.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiWakeQueueWaiter @ 0x140324B20 (KiWakeQueueWaiter.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     AlpcpQueueIoCompletion @ 0x1403BD9A0 (AlpcpQueueIoCompletion.c)
 *     KiWakeOtherQueueWaiters @ 0x1403BE270 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403BE4C8 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403BE4F4 (EtwTraceEnqueueWork.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403BEB10 (ExpWorkerFactoryCheckCreate.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x14044BC28 (ExpWorkerFactoryWantsToCreate.c)
 *     AlpcpReleaseDirectAttribute @ 0x14046ABC0 (AlpcpReleaseDirectAttribute.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140476DBC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExSystemExceptionFilter @ 0x1407B6F80 (ExSystemExceptionFilter.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     NtAlpcSendWaitReceivePort @ 0x14084A0C0 (NtAlpcSendWaitReceivePort.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D54A0 (IopAllocateMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtWaitForWorkViaWorkerFactory(
        char *Handle,
        volatile void *Address,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5)
{
  char *v7; // rbx
  unsigned __int8 PreviousMode; // r12
  __int64 v9; // rcx
  signed __int32 *v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // r14d
  unsigned __int64 *v13; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 *volatile v15; // rdx
  PVOID v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  signed __int64 v20; // r13
  bool v21; // cc
  signed __int64 v22; // r13
  unsigned __int64 v24; // rdi
  char v25; // al
  HANDLE v26; // r14
  int v27; // edi
  HANDLE v28; // rcx
  struct _KTHREAD *v29; // rax
  unsigned int v30; // edi
  PVOID v31; // rax
  signed __int32 v32; // esi
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rcx
  unsigned int v38; // ecx
  _QWORD *v39; // rsi
  __int64 MiniCompletionPacket; // rsi
  char *v41; // rdi
  signed __int64 *v42; // rcx
  __int64 v43; // rcx
  bool v44; // cf
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rcx
  struct _KPRCB *v48; // rdi
  _KTHREAD *v49; // r9
  _QWORD *p_Lock; // rax
  _QWORD *v51; // r8
  unsigned __int8 v52; // al
  struct _KTHREAD *v53; // rdi
  unsigned __int8 v54; // si
  __int64 v55; // rcx
  unsigned __int64 *v56; // rdi
  unsigned __int8 v57; // si
  struct _KTHREAD *v58; // r12
  unsigned int v59; // ecx
  char *v60; // rdi
  __int64 v61; // rsi
  PVOID *v62; // rdi
  __int64 v63; // rdi
  unsigned __int64 OldIrql; // rdi
  __int64 Next; // rax
  unsigned __int64 *volatile Lock; // rcx
  char v67; // di
  __int64 v68; // r8
  __int64 v69; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v72; // ecx
  unsigned int i; // ecx
  __int64 v74; // rax
  int v75; // edx
  __int64 *v76; // rcx
  volatile signed __int32 *v77; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v79; // r9
  signed __int32 v80; // eax
  signed __int32 v81; // ett
  __int64 v82; // rax
  volatile signed __int64 *v83; // rcx
  __int64 v84; // r9
  signed __int32 v85[8]; // [rsp+0h] [rbp-218h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1F0h]
  __int64 v87; // [rsp+38h] [rbp-1E0h]
  unsigned __int8 v88; // [rsp+40h] [rbp-1D8h]
  unsigned __int8 v89; // [rsp+41h] [rbp-1D7h]
  __int64 v90; // [rsp+48h] [rbp-1D0h]
  struct _KLOCK_QUEUE_HANDLE v91; // [rsp+50h] [rbp-1C8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-1B0h]
  char *v93; // [rsp+70h] [rbp-1A8h]
  unsigned int v94; // [rsp+78h] [rbp-1A0h]
  int v95; // [rsp+7Ch] [rbp-19Ch] BYREF
  int v96; // [rsp+80h] [rbp-198h]
  PVOID v97; // [rsp+88h] [rbp-190h] BYREF
  PVOID Object; // [rsp+90h] [rbp-188h] BYREF
  _DWORD *v99; // [rsp+98h] [rbp-180h]
  PVOID P; // [rsp+A0h] [rbp-178h]
  __int128 v101; // [rsp+A8h] [rbp-170h] BYREF
  HANDLE Handlea[2]; // [rsp+B8h] [rbp-160h]
  __int64 v103; // [rsp+C8h] [rbp-150h]
  __int64 v104[2]; // [rsp+D0h] [rbp-148h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-138h] BYREF
  volatile void *v106; // [rsp+F8h] [rbp-120h]
  PVOID v107[2]; // [rsp+100h] [rbp-118h] BYREF
  __int128 v108; // [rsp+110h] [rbp-108h]
  __int128 v109; // [rsp+120h] [rbp-F8h]
  __int128 v110; // [rsp+130h] [rbp-E8h]
  int v111; // [rsp+140h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+148h] [rbp-D0h]
  _OWORD v113[8]; // [rsp+150h] [rbp-C8h] BYREF
  _UNKNOWN *retaddr; // [rsp+218h] [rbp+0h]

  v99 = a4;
  v94 = a3;
  v106 = Address;
  v93 = Handle;
  BugCheckParameter2 = (ULONG_PTR)Address;
  v96 = a3;
  v90 = (__int64)a4;
  v101 = 0LL;
  *(_OWORD *)Handlea = 0LL;
  v103 = 0LL;
  memset(&v91, 0, sizeof(v91));
  memset(v113, 0, sizeof(v113));
  v95 = 0;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v89 = PreviousMode;
  v88 = PreviousMode;
  P = v113;
  if ( a3 - 1 > 0x7FFFFFE )
  {
    v12 = -1073741811;
    goto LABEL_31;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(Address, 32LL * a3, 8u);
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v99 < 0x7FFFFFFF0000LL )
      v9 = (__int64)v99;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( (a5 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)Handlea = *(_OWORD *)a5;
    v103 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    *(_OWORD *)Handlea = *(_OWORD *)a5;
    v103 = *(_QWORD *)(a5 + 16);
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v7 = (char *)Object;
  v104[1] = (__int64)Object;
  if ( v12 >= 0 )
  {
    if ( a3 > 0x10 )
    {
      P = (PVOID)ExAllocatePool2(0x40uLL);
      if ( !P )
      {
        v94 = 16;
        P = v113;
      }
    }
    v13 = (unsigned __int64 *)*((_QWORD *)v7 + 2);
    v91.LockQueue.Lock = v13;
    v91.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v91.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v15 = (unsigned __int64 *volatile)_InterlockedExchange64((volatile __int64 *)v13, (__int64)&v91);
      if ( v15 )
        KxWaitForLockOwnerShip(&v91);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v91, v13);
    }
    v16 = Object;
    v17 = *((_QWORD *)Object + 2);
    if ( *(_BYTE *)(v17 + 33) )
    {
      KeReleaseInStackQueuedSpinLock(&v91);
      v12 = 128;
      goto LABEL_31;
    }
    v18 = *((_DWORD *)Object + 102);
    if ( (v18 & 0x200) != 0 )
    {
      if ( (v18 & 0x400) != 0
        && KiDeregisterObjectWaitBlock(*(void **)(v17 + 8), (struct _KWAIT_BLOCK *)((char *)Object + 616)) )
      {
        ObfDereferenceObjectWithTag(v16, 0x746C6644u);
        *((_DWORD *)v16 + 102) &= ~0x400u;
      }
      *((_DWORD *)v16 + 102) &= ~0x200u;
    }
    ++*(_DWORD *)(*((_QWORD *)v16 + 2) + 28LL);
    while ( 1 )
    {
      if ( *((_DWORD *)v7 + 95) < *((_DWORD *)v7 + 96) || *(_BYTE *)(*((_QWORD *)v7 + 2) + 33LL) )
      {
        v12 = 258;
LABEL_94:
        --*(_DWORD *)(*((_QWORD *)v7 + 2) + 28LL);
        if ( v12 == 258 )
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
            KiReleaseQueuedSpinLockInstrumented(&v91, retaddr);
            goto LABEL_106;
          }
          _m_prefetchw(&v91);
          Next = (__int64)v91.LockQueue.Next;
          if ( v91.LockQueue.Next )
          {
LABEL_114:
            v91.LockQueue.Next = 0LL;
            Lock = v91.LockQueue.Lock;
            if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                              (volatile __int64 *)(Next + 8),
                                                              (__int64)v91.LockQueue.Lock)) & 4) != 0 )
            {
              _InterlockedOr(v85, 0);
              v67 = KeDisableInterrupts(Lock, v15, ((unsigned __int64)(Next + 8) >> 5) & 0x7F);
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
            Next = KxWaitForLockChainValid(&v91);
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
                KeRegisterObjectNotification(
                  *(_QWORD *)(v63 + 8),
                  (__int64)&ExpWorkerFactoryManagerQueue,
                  (__int64)(v7 + 616));
              }
              goto LABEL_103;
            }
          }
          ExpWorkerFactoryCheckCreate(v7, &v91);
        }
        if ( !v12 )
          *v99 = v95;
        break;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(&v91);
        v19 = (__int64)v91.LockQueue.Next;
        if ( !v91.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v91.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&v91) == &v91 )
            goto LABEL_47;
          v19 = KxWaitForLockChainValid(&v91);
        }
        v91.LockQueue.Next = 0LL;
        v15 = v91.LockQueue.Lock;
        if ( (((unsigned __int8)v15 ^ (unsigned __int8)_InterlockedExchange64(
                                                         (volatile __int64 *)(v19 + 8),
                                                         (__int64)v91.LockQueue.Lock)) & 4) != 0 )
          KeWakeAddressAll(v19 + 8, v15, v10, v11);
      }
      else
      {
        KiReleaseQueuedSpinLockInstrumented(&v91, retaddr);
      }
LABEL_47:
      v24 = v91.OldIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v91.OldIrql);
      __writecr8(v24);
      v25 = BYTE4(v103);
      if ( (v103 & 0x100000000LL) == 0 )
        goto LABEL_82;
      v26 = Handlea[0];
      v27 = v103;
      v28 = Handlea[1];
      *(_OWORD *)v107 = 0LL;
      v108 = 0LL;
      v109 = 0LL;
      v110 = 0LL;
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      v101 = 0LL;
      v30 = v27 & 0xFFFF0000;
      if ( (v30 & 0x20000) == 0 )
      {
        v97 = 0LL;
        if ( ObReferenceObjectByHandle(v28, 1u, AlpcPortObjectType, PreviousMode, &v97, 0LL) >= 0 )
        {
          v31 = v97;
          if ( (v30 & 0x40000) != 0 )
          {
            v32 = _InterlockedIncrement((volatile signed __int32 *)v97 + 101);
            v31 = v97;
            v93 = (char *)v97;
            if ( *((_QWORD *)v97 + 51) )
            {
              BugCheckParameter2 = (ULONG_PTR)v97 + 352;
              v82 = KeAbPreAcquire((char *)v97 + 352, 0LL, 0LL);
              v90 = v82;
              v83 = (volatile signed __int64 *)BugCheckParameter2;
              if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx(v83, v82, v83);
                v83 = (volatile signed __int64 *)BugCheckParameter2;
                v82 = v90;
              }
              if ( v82 )
                *(_BYTE *)(v82 + 10) = 1;
              v84 = *((_QWORD *)v93 + 51);
              if ( v84 && v32 == *(_DWORD *)(v84 + 24) )
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
              v31 = v97;
            }
          }
          v107[0] = v31;
          LODWORD(v110) = v30 | 4;
          v109 = 0uLL;
          *((_QWORD *)&v108 + 1) = 0LL;
          if ( (int)AlpcpSendMessage(v107, v26, 0LL, PreviousMode) < 0 )
          {
            ObfDereferenceObject(v107[0]);
          }
          else
          {
            v34 = v109;
            v93 = (char *)v109;
            *(_QWORD *)&v101 = v109;
            *((PVOID *)&v101 + 1) = v107[0];
            if ( !(_QWORD)v109 )
            {
              if ( *((_QWORD *)&v108 + 1) )
              {
                KeReleaseSemaphoreEx((volatile signed __int32 *)(*((_QWORD *)&v108 + 1) + 1304LL), 1LL, 1, v33, 5, 0LL);
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
              v35 = *(_QWORD *)(v109 + 32);
              v36 = *(_QWORD *)(v109 + 48);
              LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v36;
              LockHandle.LockQueue.Next = 0LL;
              v37 = KeGetCurrentIrql();
              v90 = v37;
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                KiRaiseIrqlProcessIrqlFlags(v37, 2LL);
                LOBYTE(v37) = v90;
              }
              LockHandle.OldIrql = v37;
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
              {
                if ( _InterlockedExchange64((volatile __int64 *)v36, (__int64)&LockHandle) )
                  KxWaitForLockOwnerShip(&LockHandle);
              }
              else
              {
                KiAcquireQueuedSpinLockInstrumented(&LockHandle, v36);
              }
              v38 = *(_DWORD *)(v36 + 12);
              if ( v38 >= *(_DWORD *)(v36 + 8) )
              {
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( !(unsigned int)AlpcpQueueIoCompletion(v35, *(_QWORD *)(v34 + 40), -(v88 != 0), 0, 0, 0) )
                {
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v36, &LockHandle);
                  if ( v88 )
                    ++*(_DWORD *)(v36 + 20);
                  else
                    ++*(_DWORD *)(v36 + 16);
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                }
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v34 + 352));
                KeAbPostRelease(v34 + 352);
                goto LABEL_81;
              }
              v39 = *(_QWORD **)(v36 + 32);
              if ( v39 )
                *(_QWORD *)(v36 + 32) = *v39;
              MiniCompletionPacket = v39[1];
              *(_DWORD *)(v36 + 12) = v38 + 1;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              v41 = v93;
              v42 = (signed __int64 *)(v93 + 352);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)v93 + 44, 0LL, 17LL) != 17 )
              {
                ExfReleasePushLockShared(v42);
                v42 = (signed __int64 *)(v41 + 352);
              }
              KeAbPostRelease((ULONG_PTR)v42);
              v44 = v88 != 0;
              v88 = -v88;
              v45 = -(__int64)v44;
              v90 = v45;
              v46 = *((_QWORD *)v41 + 5);
              if ( MiniCompletionPacket )
                goto LABEL_68;
              LOBYTE(v43) = 1;
              MiniCompletionPacket = IopAllocateMiniCompletionPacket(v43, 0LL);
              if ( MiniCompletionPacket )
              {
                v45 = v90;
LABEL_68:
                *(_QWORD *)(MiniCompletionPacket + 24) = v46;
                *(_QWORD *)(MiniCompletionPacket + 32) = v45;
                *(_DWORD *)(MiniCompletionPacket + 40) = 0;
                *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
                v88 = 0;
                v47 = KeGetCurrentIrql();
                v90 = v47;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags(v47, 2LL);
                v48 = KeGetCurrentPrcb();
                v49 = v48->CurrentThread;
                v93 = (char *)v49;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(v49);
                  EtwTraceEnqueueWork(v79, MiniCompletionPacket, IsThreadRunning);
                  v49 = (_KTHREAD *)v93;
                }
                LODWORD(BugCheckParameter2) = ((unsigned __int8)~*(_BYTE *)(v35 + 1) >> 1) & 1;
                p_Lock = v49[1].WaitBlock[1].Object;
                if ( !p_Lock )
                  p_Lock = &v49->Header.Lock;
                v96 = *(_DWORD *)(p_Lock[68] + 136LL) & 0x2000;
                KiAcquireKobjectLockSafe(v35);
                v111 = *(_DWORD *)(v35 + 4);
                v51 = (_QWORD *)(v35 + 8);
                if ( (_QWORD *)*v51 == v51
                  || *(_DWORD *)(v35 + 40) >= *(_DWORD *)(v35 + 44) && !v96
                  || *((_QWORD *)v93 + 29) == v35 && v93[643] == 15 )
                {
                  v52 = v88;
                }
                else
                {
                  v52 = KiWakeQueueWaiter(v48, v35, MiniCompletionPacket);
                  v51 = (_QWORD *)(v35 + 8);
                }
                if ( v52 )
                {
                  *(_QWORD *)MiniCompletionPacket = 0LL;
                }
                else
                {
                  v75 = *(_DWORD *)(v35 + 4);
                  *(_DWORD *)(v35 + 4) = v75 + 1;
                  v76 = *(__int64 **)(v35 + 32);
                  if ( *v76 != v35 + 24 )
                    __fastfail(3u);
                  *(_QWORD *)MiniCompletionPacket = v35 + 24;
                  *(_QWORD *)(MiniCompletionPacket + 8) = v76;
                  *v76 = MiniCompletionPacket;
                  *(_QWORD *)(v35 + 32) = MiniCompletionPacket;
                  if ( !v75 && (_QWORD *)*v51 != v51 )
                    KiWakeOtherQueueWaiters(v48, v35);
                }
                _InterlockedAnd((volatile signed __int32 *)v35, 0xFFFFFF7F);
                KiExitDispatcher(v48, v90);
              }
            }
            else
            {
              v77 = *(volatile signed __int32 **)(v109 + 248);
              LODWORD(v104[0]) = 0;
              KeReleaseSemaphoreEx(v77, 1LL, 1, v33, 9, v104);
            }
          }
        }
      }
LABEL_81:
      KeLeaveCriticalRegionThread();
      v25 = BYTE4(v103);
LABEL_82:
      if ( (v25 & 2) != 0 )
      {
        v53 = KeGetCurrentThread();
        if ( (v53->MiscFlags & 4) == 0 )
        {
          v54 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v54, 2LL);
          v53->WaitIrql = v54;
          v53->MiscFlags |= 4u;
        }
        PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), (__int64)v15, v10);
      }
      v55 = *((_QWORD *)v7 + 2);
      LOBYTE(v87) = 1;
      LOBYTE(HandleInformation) = PreviousMode;
      v12 = IoRemoveIoCompletion(*(_QWORD *)(v55 + 8), v106, P, v94, &v95, (_DWORD)HandleInformation, 0LL, v87);
      ExpWorkerFactoryFinishDeferredWork(&v101);
      v56 = (unsigned __int64 *)*((_QWORD *)v7 + 2);
      v91.LockQueue.Lock = v56;
      v91.LockQueue.Next = 0LL;
      v57 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v57, 2LL);
      v91.OldIrql = v57;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v15 = (unsigned __int64 *volatile)_InterlockedExchange64((volatile __int64 *)v56, (__int64)&v91);
        if ( v15 )
          KxWaitForLockOwnerShip(&v91);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&v91, v56);
      }
      if ( v12 != 258
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
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v21 = v20 <= 1;
    v22 = v20 - 1;
    if ( v21 )
    {
      if ( *((_QWORD *)v7 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v7 - 48) >> 8)],
          (ULONG_PTR)v7,
          1uLL,
          *((_QWORD *)v7 - 5));
      if ( v22 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v7, 2uLL, v22);
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
  if ( (v103 & 0x100000000LL) != 0 )
    NtAlpcSendWaitReceivePort(Handlea[1], v103, Handlea[0], 0, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v12;
}
