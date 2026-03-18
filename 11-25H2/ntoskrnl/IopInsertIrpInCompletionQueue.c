/*
 * XREFs of IopInsertIrpInCompletionQueue @ 0x140283BF0
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     EtwTraceEnqueueWork @ 0x1402811B8 (EtwTraceEnqueueWork.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     IopDequeueIrpFromFileObject @ 0x140284230 (IopDequeueIrpFromFileObject.c)
 *     KiRemovePrcbWaitEntry @ 0x140285980 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ObDereferenceObjectExWithTag @ 0x1404381A0 (ObDereferenceObjectExWithTag.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopInsertIrpInCompletionQueue(PIRP Irp, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v7; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // rdx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // r14
  _QWORD *v11; // r13
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 CurrentThread; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  _QWORD *v17; // r14
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  char v23; // r12
  int v24; // edx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 **v25; // rcx
  char v26; // si
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  ULONG Flags; // eax
  PFILE_OBJECT OriginalFileObject; // rsi
  PMDL MdlAddress; // rcx
  PKEVENT UserEvent; // rcx
  ULONG v34; // eax
  unsigned int v35; // ebp
  __int64 v36; // rbx
  __int64 v37; // rax
  char IsThreadRunning; // al
  unsigned __int64 UserApcRoutine; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // r9
  struct _MDL *Next; // rbx
  __int128 v43; // [rsp+30h] [rbp-58h] BYREF
  __int64 v44; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v46; // [rsp+90h] [rbp+8h]
  struct _KPRCB *v47; // [rsp+98h] [rbp+10h]
  char v48; // [rsp+A8h] [rbp+20h]

  v4 = (char)a3;
  v44 = 0LL;
  v5 = *(_QWORD *)(a2 + 176);
  v43 = 0LL;
  v7 = *(_QWORD *)v5;
  Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)(v5 + 8);
  Irp->Tail.Overlay.PacketType = 0;
  *(_QWORD *)&v43 = 0LL;
  *((_QWORD *)&v43 + 1) = v7 + 64;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v43 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LOBYTE(v44) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = _InterlockedExchange64((volatile __int64 *)(v7 + 64), (__int64)&v43);
    if ( v9 )
      KxWaitForLockOwnerShip(&v43, v9, a3, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v43, v7 + 64);
  }
  Irp->Flags |= 0x10000u;
  if ( *(_BYTE *)(v7 + 72) )
  {
    v26 = 1;
  }
  else
  {
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
    v46 = v4;
    v11 = (_QWORD *)(v7 + 8);
    v12 = KeGetCurrentIrql();
    v48 = v12;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v12);
    CurrentPrcb = KeGetCurrentPrcb();
    v47 = CurrentPrcb;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, (__int64)&Irp->Tail.Overlay.ListEntry, IsThreadRunning);
    }
    if ( v4 )
    {
      if ( (*(_BYTE *)(v7 + 1) & 2) != 0 )
        v4 = 0;
      v46 = v4;
    }
    KiAcquireKobjectLockSafe(v7);
    if ( (_QWORD *)*v11 == v11
      || *(_DWORD *)(v7 + 40) >= *(_DWORD *)(v7 + 44)
      || *(_QWORD *)(CurrentThread + 232) == v7 && *(_BYTE *)(CurrentThread + 643) == 15 )
    {
LABEL_36:
      v24 = *(_DWORD *)(v7 + 4);
      *(_DWORD *)(v7 + 4) = v24 + 1;
      v25 = *(struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 ***)(v7 + 32);
      if ( *v25 != (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)(v7 + 24) )
LABEL_22:
        __fastfail(3u);
      p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(v7 + 24);
      p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)v25;
      *v25 = p_ListEntry;
      *(_QWORD *)(v7 + 32) = p_ListEntry;
      if ( !v24 && (_QWORD *)*v11 != v11 )
        KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v7);
    }
    else
    {
      v16 = (_QWORD *)*v11;
      while ( 1 )
      {
        v17 = v16;
        v16 = (_QWORD *)*v16;
        if ( *((_BYTE *)v17 + 16) != 3 )
        {
LABEL_35:
          v4 = v46;
          p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
          CurrentPrcb = v47;
          goto LABEL_36;
        }
        v18 = (_QWORD *)v17[1];
        if ( (_QWORD *)v16[1] != v17 || (_QWORD *)*v18 != v17 )
          goto LABEL_22;
        *v18 = v16;
        v23 = 0;
        v16[1] = v18;
        v35 = 0;
        v36 = v17[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 64), 0LL) )
        {
          do
          {
            if ( (++v35 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
            {
              HvlNotifyLongSpinWait(v35);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v36 + 64) );
        }
        if ( *(_BYTE *)(v36 + 388) == 5 )
        {
          v15 = *(unsigned __int8 *)(v36 + 112);
          v19 = *(_BYTE *)(v36 + 112) & 7;
          if ( v19 == 1 || v19 == 4 )
          {
            v20 = *(_QWORD *)(v36 + 232);
            if ( v20 )
            {
              if ( (*(_BYTE *)v20 & 0x7F) == 0x15 )
              {
                v37 = (unsigned __int8)*(_DWORD *)(v36 + 540);
                *(_DWORD *)(v36 + 540) = v37;
                _InterlockedIncrement((volatile signed __int32 *)(v20 + 4 * v37 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v20 + 40));
              }
            }
            KiRemovePrcbWaitEntry(v36);
            v21 = *(_BYTE *)(v36 + 388);
            if ( v21 == 1 )
            {
              *(_DWORD *)(v36 + 116) |= 2u;
            }
            else if ( v21 == 5 )
            {
              v22 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v36 + 436));
              if ( *(_BYTE *)(v36 + 391) )
                *(_QWORD *)(v36 + 1000) += v22;
              else
                *(_QWORD *)(v36 + 992) += v22;
            }
            v15 = v36 + 216;
            *(_BYTE *)(v36 + 388) = 7;
            v23 = 1;
            *(_QWORD *)(v36 + 216) = v47->DeferredReadyListHead.Next;
            v47->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v36 + 216);
            *(_QWORD *)(v36 + 200) = &Irp->Tail.Overlay.ListEntry;
            *(_QWORD *)(v36 + 976) = 0LL;
          }
          else if ( (*(_BYTE *)(v36 + 112) & 7) != 0 )
          {
            if ( v19 == 5 )
            {
              LOBYTE(v15) = v15 & 0xF8 | 6;
              *(_BYTE *)(v36 + 112) = v15;
            }
            else if ( v19 == 3 )
            {
              *((_BYTE *)v17 + 17) = 2;
            }
          }
          else
          {
            LOBYTE(v15) = v15 & 0xF8 | 2;
            v23 = 1;
            *(_BYTE *)(v36 + 112) = v15;
            *(_QWORD *)(v36 + 200) = &Irp->Tail.Overlay.ListEntry;
            *(_QWORD *)(v36 + 976) = 0LL;
            *((_BYTE *)v17 + 17) = 0;
          }
        }
        *(_QWORD *)(v36 + 64) = 0LL;
        ++*((_BYTE *)v17 + 17);
        if ( v23 )
          break;
        if ( v16 == v11 )
          goto LABEL_35;
      }
      LODWORD(CurrentPrcb) = (_DWORD)v47;
      v4 = v46;
      Irp->Tail.Overlay.ListEntry.Flink = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, v4, v48);
    v26 = 0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v43);
    v27 = v43;
    if ( !(_QWORD)v43 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v43 + 1), 0LL, (signed __int64)&v43) == &v43 )
        goto LABEL_47;
      v27 = KxWaitForLockChainValid(&v43);
    }
    *(_QWORD *)&v43 = 0LL;
    v28 = *((_QWORD *)&v43 + 1);
    if ( (((unsigned __int8)v28 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v27 + 8),
                                                     *((__int64 *)&v43 + 1))) & 4) != 0 )
      KeWakeAddressAll(v27 + 8, v28, a3, a4);
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(&v43, retaddr);
  }
LABEL_47:
  v29 = (unsigned __int8)v44;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v44);
  __writecr8(v29);
  if ( v26 )
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
    v34 = Irp->Flags;
    if ( (v34 & 0x2000) != 0 )
    {
      IopDequeueIrpFromFileObject(Irp, OriginalFileObject);
      v34 = Irp->Flags;
    }
    if ( OriginalFileObject && (v34 & 0x80u) == 0 )
      ObDereferenceObjectExWithTag((ULONG_PTR)OriginalFileObject);
    if ( (Irp->Flags & 0x8000) == 0 )
      goto LABEL_58;
    UserApcRoutine = (unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcRoutine;
    do
    {
      v40 = UserApcRoutine;
      v41 = ((UserApcRoutine >> 1) & 3) - 1;
      UserApcRoutine = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&Irp->Overlay,
                         UserApcRoutine & 0xFFFFFFFFFFFFFFF9uLL | (2 * v41),
                         UserApcRoutine);
    }
    while ( v40 != UserApcRoutine );
    if ( !(_DWORD)v41 )
LABEL_58:
      IoFreeIrp(Irp);
  }
}
