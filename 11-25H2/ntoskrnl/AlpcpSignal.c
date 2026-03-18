/*
 * XREFs of AlpcpSignal @ 0x140284330
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x14084E310 (NtAlpcSendWaitReceivePort.c)
 *     NtReplyWaitReceivePortEx @ 0x1408AC130 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiCompleteDirectSwitchThread @ 0x14027FA58 (KiCompleteDirectSwitchThread.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     EtwTraceEnqueueWork @ 0x1402811B8 (EtwTraceEnqueueWork.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     KiRemovePrcbWaitEntry @ 0x140285980 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     AlpcpReleaseDirectAttribute @ 0x14046BB78 (AlpcpReleaseDirectAttribute.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D26C0 (IopAllocateMiniCompletionPacket.c)
 */

void __fastcall AlpcpSignal(__int64 a1, BOOLEAN a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char v6; // si
  __int64 v8; // rbx
  char v9; // r15
  __int64 v10; // rax
  int v11; // r12d
  unsigned __int8 v12; // si
  __int64 v13; // rdx
  unsigned int v14; // edx
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r9
  unsigned int i; // r8d
  _KLOCK_ENTRY *v20; // rcx
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rbx
  int v24; // r15d
  __int64 v25; // r14
  _QWORD *v26; // r12
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // rbp
  __int64 v29; // rbx
  __int64 v30; // rax
  bool v31; // di
  __int64 v32; // rcx
  _QWORD *v33; // rdi
  _QWORD *v34; // rbp
  _QWORD *v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  char v40; // al
  __int64 v41; // rcx
  char v42; // r15
  int v43; // ecx
  int v44; // ebx
  unsigned int v45; // esi
  __int64 v46; // rbx
  int v47; // ecx
  __int64 *v48; // rdx
  __int64 v49; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  int v52; // eax
  int v53; // ecx
  _QWORD *v54; // rdi
  _QWORD *v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // rdx
  char v58; // cl
  bool v59; // zf
  int v60; // ecx
  __int64 v61; // rbx
  unsigned __int8 v62; // r15
  struct _KPRCB *v63; // rdi
  int v64; // eax
  int v65; // ecx
  _QWORD *v66; // rsi
  _QWORD *v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // rdx
  char v70; // cl
  __int64 v71; // rax
  char IsThreadRunning; // al
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v74; // eax
  signed __int32 v75; // ett
  struct _KPRCB *v76; // [rsp+30h] [rbp-78h]
  __int64 v77; // [rsp+38h] [rbp-70h]
  _QWORD *MiniCompletionPacket; // [rsp+40h] [rbp-68h]
  char v79; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  char v81; // [rsp+B0h] [rbp+8h]
  int v82; // [rsp+C8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 32);
  v6 = a3;
  if ( !v4 )
  {
    v36 = *(_QWORD *)(a1 + 24);
    if ( !v36 )
    {
      v37 = *(_QWORD *)(a1 + 40);
      if ( (v37 & 1) != 0 )
      {
        if ( v37 >= 4 )
        {
          KeSetEvent((PRKEVENT)(v37 & 0xFFFFFFFFFFFFFFFCuLL), 0, a2);
          AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
      return;
    }
    if ( !a2 )
    {
      KeReleaseSemaphoreEx((volatile signed __int32 *)(v36 + 1304), 1, 1, a4, 2u, 0LL);
      return;
    }
    v49 = v36 + 1304;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(v49);
    v52 = *(_DWORD *)(v49 + 4);
    v53 = v52 + 1;
    if ( v52 + 1 > *(_DWORD *)(v49 + 24) || v53 < v52 )
    {
      _InterlockedAnd((volatile signed __int32 *)v49, 0xFFFFFF7F);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return;
    }
    *(_DWORD *)(v49 + 4) = v53;
    if ( v52 )
    {
LABEL_97:
      _InterlockedAnd((volatile signed __int32 *)v49, 0xFFFFFF7F);
      v60 = 1;
      if ( v6 )
        v60 = 3;
      KiExitDispatcher((_DWORD)CurrentPrcb, v60, 1, 1, CurrentIrql);
      return;
    }
    v54 = *(_QWORD **)(v49 + 8);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v54 == (_QWORD *)(v49 + 8) )
          goto LABEL_97;
        v55 = (_QWORD *)*v54;
        v56 = (__int64)v54;
        v54 = v55;
        v57 = *(_QWORD **)(v56 + 8);
        if ( v55[1] != v56 || *v57 != v56 )
          goto LABEL_38;
        *v57 = v55;
        v55[1] = v57;
        v58 = *(_BYTE *)(v56 + 16);
        if ( v58 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v56, *(unsigned __int16 *)(v56 + 18), 0LL) )
        {
LABEL_96:
          v59 = (*(_DWORD *)(v49 + 4))-- == 1;
          if ( v59 )
            goto LABEL_97;
        }
      }
      if ( v58 == 2 )
      {
        *(_BYTE *)(v56 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v56 + 24), (__int64 *)v56);
        goto LABEL_96;
      }
      if ( v58 == 4 )
      {
        *(_BYTE *)(v56 + 17) = 5;
        *(_DWORD *)(v49 + 4) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v56 + 24), (PVOID)v49, (PVOID)v56);
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v56, 256LL, 0LL);
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 58) )
  {
    v61 = *(_QWORD *)(v4 + 248);
    v62 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v62);
    v63 = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(v61);
    v64 = *(_DWORD *)(v61 + 4);
    v65 = v64 + 1;
    if ( v64 + 1 > *(_DWORD *)(v61 + 24) || v65 < v64 )
    {
      _InterlockedAnd((volatile signed __int32 *)v61, 0xFFFFFF7F);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v62);
      __writecr8(v62);
      RtlRaiseStatus(-1073741753);
    }
    *(_DWORD *)(v61 + 4) = v65;
    if ( v64 )
    {
LABEL_112:
      _InterlockedAnd((volatile signed __int32 *)v61, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v63, a2 != 0 ? 3 : 0, 1, 1, v62);
      return;
    }
    v66 = *(_QWORD **)(v61 + 8);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v66 == (_QWORD *)(v61 + 8) )
          goto LABEL_112;
        v67 = (_QWORD *)*v66;
        v68 = (__int64)v66;
        v66 = v67;
        v69 = *(_QWORD **)(v68 + 8);
        if ( v67[1] != v68 || *v69 != v68 )
          goto LABEL_38;
        *v69 = v67;
        v67[1] = v69;
        v70 = *(_BYTE *)(v68 + 16);
        if ( v70 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)v63, v68, *(unsigned __int16 *)(v68 + 18), 0LL) )
        {
LABEL_111:
          v59 = (*(_DWORD *)(v61 + 4))-- == 1;
          if ( v59 )
            goto LABEL_112;
        }
      }
      if ( v70 == 2 )
      {
        *(_BYTE *)(v68 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v68 + 24), (__int64 *)v68);
        goto LABEL_111;
      }
      if ( v70 == 4 )
      {
        *(_BYTE *)(v68 + 17) = 5;
        *(_DWORD *)(v61 + 4) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v68 + 24), (PVOID)v61, (PVOID)v68);
      }
      else
      {
        KiTryUnwaitThread((__int64)v63, v68, 256LL, 0LL);
      }
    }
  }
  v8 = *(_QWORD *)(v4 + 48);
  v9 = *(_BYTE *)(a1 + 59);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = *(_QWORD *)(v4 + 32);
  v11 = (unsigned __int8)a3;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v8;
  v77 = v10;
  v12 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(v12);
  LockHandle.OldIrql = v12;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v13 = _InterlockedExchange64((volatile __int64 *)v8, (__int64)&LockHandle);
    if ( v13 )
      KxWaitForLockOwnerShip(&LockHandle, v13, a3, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8);
  }
  v14 = *(_DWORD *)(v8 + 12);
  if ( v14 >= *(_DWORD *)(v8 + 8) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !(unsigned int)AlpcpQueueIoCompletion(v77, *(_QWORD *)(v4 + 40), -(__int64)(v9 != 0), 0LL, 0, v11) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v8, &LockHandle);
      if ( v9 )
        ++*(_DWORD *)(v8 + 20);
      else
        ++*(_DWORD *)(v8 + 16);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 + 352);
    KeAbPostRelease(v4 + 352);
    return;
  }
  v15 = *(_QWORD **)(v8 + 32);
  if ( v15 )
    *(_QWORD *)(v8 + 32) = *v15;
  v16 = v15[1];
  MiniCompletionPacket = (_QWORD *)v16;
  *(_DWORD *)(v8 + 12) = v14 + 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4 + 352);
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v20 = &KernelAbEntries->Entries[i];
    if ( (*(_QWORD *)&v20->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((v4 + 352) & 0x7FFFFFFFFFFFFFFCLL)
      && v20->AcquiredByte
      && (*(_QWORD *)&v20->LockState.0 & 1) == 0 )
    {
      v20->AcquiredByte = 0;
      KiAbEntryFreeAndEnableInterrupts(v20, CurrentThread, v4 + 352, 1LL, 0LL);
      goto LABEL_19;
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4 + 352, 0LL, 0LL);
  v21 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v21->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v74 = *SchedulerAssist;
    do
    {
      v75 = v74;
      v74 = _InterlockedCompareExchange(SchedulerAssist, v74 & 0xFFDFFFFF, v74);
    }
    while ( v75 != v74 );
    if ( (v74 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v21);
  }
  _enable();
LABEL_19:
  v22 = *(_QWORD *)(v4 + 40);
  v23 = -(__int64)(v9 != 0);
  v24 = (a2 != 0) | 4;
  if ( !v11 )
    v24 = a2 != 0;
  v81 = v24;
  if ( v16
    || (LOBYTE(v21) = 1,
        MiniCompletionPacket = (_QWORD *)IopAllocateMiniCompletionPacket(v21, 0LL),
        (v16 = (__int64)MiniCompletionPacket) != 0) )
  {
    v25 = v77;
    *(_QWORD *)(v16 + 24) = v22;
    *(_QWORD *)(v16 + 32) = v23;
    *(_DWORD *)(v16 + 40) = 0;
    v26 = (_QWORD *)(v77 + 8);
    *(_QWORD *)(v16 + 48) = 0LL;
    v27 = KeGetCurrentIrql();
    v79 = v27;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v27);
    v28 = KeGetCurrentPrcb();
    v76 = v28;
    v29 = (__int64)v28->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning((__int64)v28->CurrentThread);
      EtwTraceEnqueueWork(v29, v16, IsThreadRunning);
    }
    v82 = ((unsigned __int8)~*(_BYTE *)(v77 + 1) >> 1) & 1;
    v30 = *(_QWORD *)(v29 + 1616);
    if ( !v30 )
      v30 = v29;
    v31 = v24 && (*(_DWORD *)(*(_QWORD *)(v30 + 544) + 136LL) & 0x2000) != 0;
    KiAcquireKobjectLockSafe(v77);
    if ( (_QWORD *)*v26 == v26
      || *(_DWORD *)(v77 + 40) >= *(_DWORD *)(v77 + 44) && !v31
      || *(_QWORD *)(v29 + 232) == v77 && *(_BYTE *)(v29 + 643) == 15 )
    {
LABEL_80:
      v47 = *(_DWORD *)(v25 + 4);
      *(_DWORD *)(v25 + 4) = v47 + 1;
      v48 = *(__int64 **)(v25 + 32);
      if ( *v48 != v25 + 24 )
LABEL_38:
        __fastfail(3u);
      *(_QWORD *)v16 = v25 + 24;
      *(_QWORD *)(v16 + 8) = v48;
      *v48 = v16;
      *(_QWORD *)(v25 + 32) = v16;
      if ( !v47 && (_QWORD *)*v26 != v26 )
        KiWakeOtherQueueWaiters((__int64)v28, v25);
LABEL_61:
      _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
      if ( (v24 & 1) != 0 )
      {
        v43 = 3;
      }
      else
      {
        v43 = 0;
        if ( (v24 & 4) != 0 )
        {
          v44 = (int)v76;
          KiCompleteDirectSwitchThread(v76, (__int64)v76->CurrentThread);
          v43 = 6;
          goto LABEL_64;
        }
      }
      v44 = (int)v76;
LABEL_64:
      KiExitDispatcher(v44, v43, 1, v82, v79);
      return;
    }
    v33 = (_QWORD *)*v26;
    while ( 1 )
    {
      v34 = v33;
      v33 = (_QWORD *)*v33;
      if ( *((_BYTE *)v34 + 16) != 3 )
      {
LABEL_58:
        v25 = v77;
        v16 = (__int64)MiniCompletionPacket;
        LOBYTE(v24) = v81;
        v28 = v76;
        goto LABEL_80;
      }
      v35 = (_QWORD *)v34[1];
      if ( (_QWORD *)v33[1] != v34 || (_QWORD *)*v35 != v34 )
        goto LABEL_38;
      *v35 = v33;
      v42 = 0;
      v33[1] = v35;
      v45 = 0;
      v46 = v34[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 64), 0LL) )
      {
        do
        {
          if ( (++v45 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32) )
          {
            HvlNotifyLongSpinWait(v45);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v46 + 64) );
      }
      if ( *(_BYTE *)(v46 + 388) == 5 )
      {
        v32 = *(unsigned __int8 *)(v46 + 112);
        v38 = *(_BYTE *)(v46 + 112) & 7;
        if ( v38 == 1 || v38 == 4 )
        {
          v39 = *(_QWORD *)(v46 + 232);
          if ( v39 )
          {
            if ( (*(_BYTE *)v39 & 0x7F) == 0x15 )
            {
              v71 = (unsigned __int8)*(_DWORD *)(v46 + 540);
              *(_DWORD *)(v46 + 540) = v71;
              _InterlockedIncrement((volatile signed __int32 *)(v39 + 4 * v71 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v39 + 40));
            }
          }
          KiRemovePrcbWaitEntry(v46);
          v40 = *(_BYTE *)(v46 + 388);
          if ( v40 == 1 )
          {
            *(_DWORD *)(v46 + 116) |= 2u;
          }
          else if ( v40 == 5 )
          {
            v41 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v46 + 436));
            if ( *(_BYTE *)(v46 + 391) )
              *(_QWORD *)(v46 + 1000) += v41;
            else
              *(_QWORD *)(v46 + 992) += v41;
          }
          v32 = v46 + 216;
          *(_BYTE *)(v46 + 388) = 7;
          *(_QWORD *)(v46 + 216) = v76->DeferredReadyListHead.Next;
          v76->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v46 + 216);
          *(_QWORD *)(v46 + 200) = MiniCompletionPacket;
          *(_QWORD *)(v46 + 976) = 0LL;
          goto LABEL_55;
        }
        if ( (*(_BYTE *)(v46 + 112) & 7) == 0 )
        {
          LOBYTE(v32) = v32 & 0xF8 | 2;
          *(_BYTE *)(v46 + 112) = v32;
          *(_QWORD *)(v46 + 200) = MiniCompletionPacket;
          *(_QWORD *)(v46 + 976) = 0LL;
          *((_BYTE *)v34 + 17) = 0;
LABEL_55:
          v42 = 1;
          goto LABEL_56;
        }
        if ( v38 == 5 )
        {
          LOBYTE(v32) = v32 & 0xF8 | 6;
          *(_BYTE *)(v46 + 112) = v32;
        }
        else if ( v38 == 3 )
        {
          *((_BYTE *)v34 + 17) = 2;
        }
      }
LABEL_56:
      *(_QWORD *)(v46 + 64) = 0LL;
      ++*((_BYTE *)v34 + 17);
      if ( v42 )
      {
        LOBYTE(v24) = v81;
        *MiniCompletionPacket = 0LL;
        v25 = v77;
        goto LABEL_61;
      }
      if ( v33 == v26 )
        goto LABEL_58;
    }
  }
}
