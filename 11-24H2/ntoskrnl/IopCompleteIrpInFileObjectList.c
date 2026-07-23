/*
 * XREFs of IopCompleteIrpInFileObjectList @ 0x1402C4020
 * Callers:
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     IopDequeueIrpFromFileObject @ 0x1402C2DC0 (IopDequeueIrpFromFileObject.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     KiRemovePrcbWaitEntry @ 0x1402C5A30 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     ObDereferenceObjectExWithTag @ 0x1403B3DE0 (ObDereferenceObjectExWithTag.c)
 *     IopDoesCompletionNeedsApc @ 0x1403CBC6C (IopDoesCompletionNeedsApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall IopCompleteIrpInFileObjectList(PIRP Irp, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rdx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // r14
  _QWORD *v10; // r12
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rbx
  _QWORD *v14; // rsi
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  char v17; // cl
  int v18; // eax
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rcx
  char v22; // r13
  int v23; // edx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 **v24; // rcx
  char v25; // si
  unsigned __int64 v26; // rbx
  ULONG Flags; // eax
  PFILE_OBJECT OriginalFileObject; // rsi
  PMDL MdlAddress; // rcx
  PKEVENT UserEvent; // rcx
  ULONG v31; // eax
  unsigned int v33; // ebp
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int8 IsThreadRunning; // al
  NTSTATUS Status; // ecx
  unsigned __int64 UserApcRoutine; // rax
  unsigned __int64 v41; // r8
  __int64 v42; // r9
  struct _MDL *Next; // rbx
  __int64 v44; // [rsp+30h] [rbp-68h] BYREF
  __int64 v45; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+40h] [rbp-58h] BYREF
  __int128 v47; // [rsp+48h] [rbp-50h] BYREF
  __int64 v48; // [rsp+58h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  struct _KPRCB *v50; // [rsp+B8h] [rbp+20h]

  v46 = 0LL;
  v44 = 0LL;
  if ( !Irp->PendingReturned )
  {
    Status = Irp->IoStatus.Status;
    if ( (Status & 0xC0000000) == 0xC0000000 || (*(_DWORD *)(a2 + 80) & 0x2000000) != 0 && Status >= 0 )
      return 0;
  }
  v5 = *(__int64 **)(a2 + 176);
  if ( v5 )
  {
    v47 = 0LL;
    v48 = 0LL;
    v6 = *v5;
    Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v5[1];
    Irp->Tail.Overlay.PacketType = 0;
    *(_QWORD *)&v47 = 0LL;
    *((_QWORD *)&v47 + 1) = v6 + 64;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LOBYTE(v48) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v8 = _InterlockedExchange64((volatile __int64 *)(v6 + 64), (__int64)&v47);
      if ( v8 )
        KxWaitForLockOwnerShip(&v47, v8);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v47, v6 + 64);
    }
    Irp->Flags |= 0x10000u;
    if ( *(_BYTE *)(v6 + 72) )
    {
      v25 = 1;
    }
    else
    {
      p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
      v10 = (_QWORD *)(v6 + 8);
      v11 = KeGetCurrentIrql();
      v45 = v11;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v11, 2LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v50 = CurrentPrcb;
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, &Irp->Tail.CompletionKey + 6, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe(v6);
      if ( (_QWORD *)*v10 == v10
        || *(_DWORD *)(v6 + 40) >= *(_DWORD *)(v6 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v6 && CurrentThread->WaitReason == 15 )
      {
LABEL_34:
        v23 = *(_DWORD *)(v6 + 4);
        *(_DWORD *)(v6 + 4) = v23 + 1;
        v24 = *(struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 ***)(v6 + 32);
        if ( *v24 != (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)(v6 + 24) )
LABEL_20:
          __fastfail(3u);
        p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(v6 + 24);
        p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)v24;
        *v24 = p_ListEntry;
        *(_QWORD *)(v6 + 32) = p_ListEntry;
        if ( !v23 && (_QWORD *)*v10 != v10 )
          KiWakeOtherQueueWaiters(CurrentPrcb, v6);
      }
      else
      {
        v14 = (_QWORD *)*v10;
        while ( 1 )
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
          if ( *((_BYTE *)v15 + 16) != 3 )
          {
LABEL_33:
            p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
            CurrentPrcb = v50;
            goto LABEL_34;
          }
          v16 = (_QWORD *)v15[1];
          if ( (_QWORD *)v14[1] != v15 || (_QWORD *)*v16 != v15 )
            goto LABEL_20;
          *v16 = v14;
          v22 = 0;
          v14[1] = v16;
          v33 = 0;
          v34 = v15[3];
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 64), 0LL) )
          {
            do
            {
              if ( (++v33 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v33);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v34 + 64) );
          }
          if ( *(_BYTE *)(v34 + 388) == 5 )
          {
            v17 = *(_BYTE *)(v34 + 112);
            v18 = v17 & 7;
            if ( v18 == 1 || v18 == 4 )
            {
              v19 = *(_QWORD *)(v34 + 232);
              if ( v19 )
              {
                if ( (*(_BYTE *)v19 & 0x7F) == 0x15 )
                {
                  v35 = (unsigned __int8)*(_DWORD *)(v34 + 540);
                  *(_DWORD *)(v34 + 540) = v35;
                  _InterlockedIncrement((volatile signed __int32 *)(v19 + 4 * v35 + 536));
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v19 + 40));
                }
              }
              KiRemovePrcbWaitEntry(v34);
              v20 = *(_BYTE *)(v34 + 388);
              if ( v20 == 1 )
              {
                *(_DWORD *)(v34 + 116) |= 2u;
              }
              else if ( v20 == 5 )
              {
                v21 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v34 + 436));
                if ( *(_BYTE *)(v34 + 391) )
                  *(_QWORD *)(v34 + 1000) += v21;
                else
                  *(_QWORD *)(v34 + 992) += v21;
              }
              *(_BYTE *)(v34 + 388) = 7;
              v22 = 1;
              *(_QWORD *)(v34 + 216) = v50->DeferredReadyListHead.Next;
              v50->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v34 + 216);
              *(_QWORD *)(v34 + 200) = &Irp->Tail.Overlay.ListEntry;
              *(_QWORD *)(v34 + 976) = 0LL;
            }
            else if ( (*(_BYTE *)(v34 + 112) & 7) != 0 )
            {
              if ( v18 == 5 )
              {
                *(_BYTE *)(v34 + 112) = v17 & 0xF8 | 6;
              }
              else if ( v18 == 3 )
              {
                *((_BYTE *)v15 + 17) = 2;
              }
            }
            else
            {
              v22 = 1;
              *(_BYTE *)(v34 + 112) = v17 & 0xF8 | 2;
              *(_QWORD *)(v34 + 200) = &Irp->Tail.Overlay.ListEntry;
              *(_QWORD *)(v34 + 976) = 0LL;
              *((_BYTE *)v15 + 17) = 0;
            }
          }
          *(_QWORD *)(v34 + 64) = 0LL;
          ++*((_BYTE *)v15 + 17);
          if ( v22 )
            break;
          if ( v14 == v10 )
            goto LABEL_33;
        }
        CurrentPrcb = v50;
        Irp->Tail.Overlay.ListEntry.Flink = 0LL;
      }
      _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
      KiExitDispatcher(CurrentPrcb, v45);
      v25 = 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v47, retaddr);
LABEL_42:
      v26 = (unsigned __int8)v48;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v48);
      __writecr8(v26);
      if ( v25 )
      {
        Flags = Irp->Flags;
        OriginalFileObject = Irp->Tail.Overlay.OriginalFileObject;
        if ( (Flags & 0x20) != 0 )
        {
          ExFreePoolWithTag(Irp->AssociatedIrp.MasterIrp, 0);
          Flags = Irp->Flags;
        }
        MdlAddress = Irp->MdlAddress;
        if ( MdlAddress )
        {
          do
          {
            Next = MdlAddress->Next;
            IoFreeMdl(MdlAddress);
            MdlAddress = Next;
          }
          while ( Next );
          Flags = Irp->Flags;
        }
        UserEvent = Irp->UserEvent;
        if ( UserEvent && OriginalFileObject && (Flags & 4) == 0 )
          ObfDereferenceObjectWithTag(UserEvent, 0x746C6644u);
        v31 = Irp->Flags;
        if ( (v31 & 0x2000) != 0 )
        {
          IopDequeueIrpFromFileObject((__int64)Irp, (__int64)OriginalFileObject);
          v31 = Irp->Flags;
        }
        if ( OriginalFileObject && (v31 & 0x80u) == 0 )
          ObDereferenceObjectExWithTag((ULONG_PTR)OriginalFileObject);
        if ( (Irp->Flags & 0x8000) == 0 )
          goto LABEL_53;
        UserApcRoutine = (unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcRoutine;
        do
        {
          v41 = UserApcRoutine;
          v42 = ((UserApcRoutine >> 1) & 3) - 1;
          UserApcRoutine = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&Irp->Overlay,
                             UserApcRoutine & 0xFFFFFFFFFFFFFFF9uLL | (2 * v42),
                             UserApcRoutine);
        }
        while ( v41 != UserApcRoutine );
        if ( !(_DWORD)v42 )
LABEL_53:
          IoFreeIrp(Irp);
      }
      return 1;
    }
    _m_prefetchw(&v47);
    v36 = v47;
    if ( !(_QWORD)v47 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v47 + 1), 0LL, (signed __int64)&v47) == &v47 )
        goto LABEL_42;
      v36 = KxWaitForLockChainValid(&v47);
    }
    *(_QWORD *)&v47 = 0LL;
    v37 = *((_QWORD *)&v47 + 1);
    if ( (((unsigned __int8)v37 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v36 + 8),
                                                     *((__int64 *)&v47 + 1))) & 4) != 0 )
      KeWakeAddressAll(v36 + 8, v37, a3, a4);
    goto LABEL_42;
  }
  if ( !(unsigned __int8)IopDoesCompletionNeedsApc(Irp) )
  {
    IopCompleteRequest((_DWORD)Irp + 120, (unsigned int)&v46, (unsigned int)&v44, (_DWORD)Irp + 192, (__int64)&v44);
    return 1;
  }
  return 0;
}
