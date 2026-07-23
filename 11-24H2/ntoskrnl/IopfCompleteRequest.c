/*
 * XREFs of IopfCompleteRequest @ 0x1403CCDE0
 * Callers:
 *     IopPerfCompleteRequest @ 0x1403CB914 (IopPerfCompleteRequest.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x140BA8768 (IovCompleteRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     IopDequeueIrpFromThread @ 0x1402847D0 (IopDequeueIrpFromThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IopDropIrp @ 0x1403B3CD0 (IopDropIrp.c)
 *     IopIoRingCompleteIrp @ 0x1403B4960 (IopIoRingCompleteIrp.c)
 *     IopDoesCompletionNeedsApc @ 0x1403CBC6C (IopDoesCompletionNeedsApc.c)
 *     PoDeviceReleaseIrp @ 0x1403CC27C (PoDeviceReleaseIrp.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopfCompleteRequest(IRP *BugCheckParameter1, char a2)
{
  const GUID *ActivityId; // r10
  char CurrentLocation; // r8
  PIRP v4; // rsi
  __int64 AuxiliaryBuffer; // r15
  CHAR StackCount; // dl
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v8; // r13
  int Flink; // r12d
  int v10; // r11d
  PIRP v11; // rdi
  UCHAR *p_Control; // rbx
  PIRP v13; // rcx
  struct _LIST_ENTRY *Status; // rax
  char v15; // dl
  char v16; // al
  char v17; // r14
  PIRP v18; // rdx
  __int64 v19; // rcx
  PDEVICE_OBJECT DeviceObject; // rdi
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rax
  wchar_t *Buffer; // r8
  _WORD *v26; // rcx
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int16 v30; // ax
  _WORD *v31; // rax
  int v32; // eax
  const wchar_t *v33; // rcx
  __int64 v34; // rax
  struct _MDL *MdlAddress; // rcx
  IRP *MasterIrp; // rsi
  struct _MDL *Next; // rbx
  __int64 v38; // rdx
  unsigned __int64 Information; // rax
  unsigned __int8 v40; // r12
  struct _FILE_OBJECT *OriginalFileObject; // rcx
  ULONG DeviceType; // ecx
  PCHAR v43; // rcx
  __int64 v44; // r9
  PIRP v45; // rbx
  ULONG Flags; // eax
  PIRP v47; // rax
  CCHAR ApcEnvironment; // cl
  PETHREAD Thread; // rdx
  __int64 v50; // r8
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *p_Tail; // rcx
  unsigned int v52; // r9d
  __int64 v53; // rdx
  PMDL v54; // rdi
  ULONG v55; // esi
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  ULONG_PTR v58; // r14
  PETHREAD v59; // rdi
  KIRQL v60; // al
  unsigned __int8 CurrentIrql; // bl
  PIRP v62; // rax
  CCHAR v63; // cl
  KIRQL v64; // al
  PIRP v65; // r8
  KIRQL v66; // bl
  __int64 v67; // rdx
  PETHREAD v68; // r10
  __int64 *v69; // r9
  CCHAR ApcStateIndex; // al
  __int64 **v71; // rax
  PIRP Irp; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+50h] [rbp-B8h]
  __int64 v74; // [rsp+58h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v75; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR v76; // [rsp+68h] [rbp-A0h] BYREF
  PIRP v77; // [rsp+70h] [rbp-98h] BYREF
  __int64 v78; // [rsp+78h] [rbp-90h] BYREF
  __int64 v79; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  PDEVICE_OBJECT *v81; // [rsp+98h] [rbp-70h]
  __int64 v82; // [rsp+A0h] [rbp-68h]
  const wchar_t *v83; // [rsp+A8h] [rbp-60h]
  int v84; // [rsp+B0h] [rbp-58h]
  int v85; // [rsp+B4h] [rbp-54h]
  _BYTE v86[128]; // [rsp+B8h] [rbp-50h] BYREF

  ActivityId = 0LL;
  Irp = BugCheckParameter1;
  CurrentLocation = BugCheckParameter1->CurrentLocation;
  v4 = BugCheckParameter1;
  LOBYTE(v73) = a2;
  AuxiliaryBuffer = 0LL;
  StackCount = BugCheckParameter1->StackCount;
  v74 = 0LL;
  if ( CurrentLocation > (char)(StackCount + 1) || BugCheckParameter1->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)BugCheckParameter1, 0x1311uLL, 0LL, 0LL);
  CurrentStackLocation = BugCheckParameter1->Tail.Overlay.CurrentStackLocation;
  if ( CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v8 = 1;
    PoDeviceReleaseIrp(
      (__int64)BugCheckParameter1,
      CurrentStackLocation->MinorFunction,
      (__int64)CurrentStackLocation->DeviceObject);
    v4 = Irp;
    ActivityId = 0LL;
  }
  else
  {
    v8 = 0;
  }
  if ( (v4[1].Size & 0x200) != 0 )
    Flink = (int)v4[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  ++v4->CurrentLocation;
  v10 = 1;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v11 = Irp;
  if ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) )
  {
    p_Control = &CurrentStackLocation->Control;
    while ( 1 )
    {
      v11->PendingReturned = *p_Control & 1;
      v13 = Irp;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status < 0 && (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(v4[1].Size) |= 2u;
        v4[1].ThreadListEntry.Flink = Status;
        v13 = Irp;
      }
      v15 = *p_Control;
      v16 = *p_Control;
      if ( v13->IoStatus.Status < 0 )
      {
        if ( v15 < 0 )
          goto LABEL_17;
      }
      else if ( (v15 & 0x40) != 0 )
      {
        goto LABEL_17;
      }
      if ( v13->Cancel )
      {
        v16 = *p_Control;
        if ( (v15 & 0x20) != 0 )
        {
LABEL_17:
          v17 = *(p_Control - 2);
          *p_Control = v16 & 2;
          *((_WORD *)p_Control - 1) = 0;
          *(_QWORD *)(p_Control + 5) = 0LL;
          *(_QWORD *)(p_Control + 13) = 0LL;
          *(_QWORD *)(p_Control + 21) = 0LL;
          *(_QWORD *)(p_Control + 45) = 0LL;
          v18 = Irp;
          v19 = Irp->StackCount;
          if ( Irp->CurrentLocation == (_BYTE)v19 + 1 )
            DeviceObject = 0LL;
          else
            DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
          if ( v8 && (unsigned __int8)(v17 - 2) <= 1u && DeviceObject )
          {
            v21 = PopDiagHandleRegistered == 0;
            v22 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * v19 + 10);
            v75 = DeviceObject;
            v77 = Irp;
            *(_QWORD *)(v22 + 40) = DeviceObject;
            if ( !v21 && PopDiagHandle )
            {
              if ( (v23 = *(_QWORD *)(PopDiagHandle + 32), *(_DWORD *)(v23 + 96))
                && (unsigned __int8)(*(_BYTE *)(v23 + 100) - 1) > 2u
                && (*(_QWORD *)(v23 + 112) & 0x4000000000000008LL) != 0
                && (*(_QWORD *)(v23 + 120) & 0x4000000000000008LL) == *(_QWORD *)(v23 + 120)
                || *(_WORD *)(PopDiagHandle + 102)
                && EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 40) + 96LL, 4u, 0x4000000000000008LL) )
              {
                if ( !v75 )
                  goto LABEL_48;
                DriverObject = v75->DriverObject;
                Buffer = DriverObject->DriverName.Buffer;
                if ( !Buffer || !DriverObject->DriverName.Length )
                  goto LABEL_48;
                v26 = v86;
                v27 = ((unsigned __int64)DriverObject->DriverName.Length >> 1) - 64;
                v28 = 64LL;
                v29 = (char *)Buffer - v86;
                do
                {
                  if ( !(v28 + v27) )
                    break;
                  v30 = *(_WORD *)((char *)v26 + v29);
                  if ( !v30 )
                    break;
                  *v26++ = v30;
                  --v28;
                }
                while ( v28 );
                v31 = v26 - 1;
                if ( v28 )
                  v31 = v26;
                *v31 = (_WORD)ActivityId;
                v32 = v10;
                if ( !v28 )
LABEL_48:
                  v32 = (int)ActivityId;
                *(_QWORD *)&UserData.Size = 8LL;
                v82 = 8LL;
                v33 = (const wchar_t *)v86;
                if ( !v32 )
                  v33 = &SourceString;
                UserData.Ptr = (ULONGLONG)&v77;
                v81 = &v75;
                v34 = -1LL;
                v83 = v33;
                do
                  v21 = v33[++v34] == 0;
                while ( !v21 );
                v84 = 2 * v34 + 2;
                v85 = (int)ActivityId;
                EtwWriteEx(
                  PopDiagHandle,
                  &POP_ETW_EVENT_IRP_DRIVERACQUIRE,
                  0LL,
                  0,
                  ActivityId,
                  ActivityId,
                  3u,
                  &UserData);
              }
            }
            v18 = Irp;
          }
          if ( (unsigned int)guard_dispatch_icall_no_overrides(DeviceObject, v18) == -1073741802 )
            return;
          if ( v8 )
            PoDeviceReleaseIrp((__int64)Irp, v17, (__int64)DeviceObject);
          v10 = 1;
          ActivityId = 0LL;
          goto LABEL_59;
        }
      }
      if ( v13->PendingReturned && v13->CurrentLocation <= v13->StackCount )
        v13->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      *p_Control &= 2u;
      *((_WORD *)p_Control - 1) = 0;
      *(_QWORD *)(p_Control + 5) = 0LL;
      *(_QWORD *)(p_Control + 13) = 0LL;
      *(_QWORD *)(p_Control + 21) = 0LL;
      *(_QWORD *)(p_Control + 45) = 0LL;
LABEL_59:
      p_Control += 72;
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v11 = Irp;
      if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      {
        AuxiliaryBuffer = v74;
        break;
      }
    }
  }
  if ( (v11->Flags & 8) != 0 )
  {
    MdlAddress = v11->MdlAddress;
    MasterIrp = v11->AssociatedIrp.MasterIrp;
    if ( MdlAddress )
    {
      do
      {
        Next = MdlAddress->Next;
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
    }
    IoFreeIrp(v11);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(MasterIrp, v73);
    return;
  }
  v38 = 4194817LL;
  if ( v11->IoStatus.Status == 260 )
  {
    Information = v11->IoStatus.Information;
    if ( Information > 2 )
    {
      if ( Information - 2684354563u <= 0x16 && _bittest64(&v38, Information - 2684354563u) )
      {
        AuxiliaryBuffer = (__int64)v11->Tail.Overlay.AuxiliaryBuffer;
        v74 = AuxiliaryBuffer;
        v11->Tail.Overlay.AuxiliaryBuffer = 0LL;
      }
      else
      {
        v11->IoStatus.Status = -1073741191;
      }
      v11 = Irp;
    }
  }
  v40 = v73;
  if ( !(_BYTE)v73 )
  {
    OriginalFileObject = v11->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (v11->Flags & 0x400) == 0 )
      {
        DeviceType = IoGetRelatedDeviceObject(OriginalFileObject)->DeviceType;
        if ( DeviceType == 8 || DeviceType == 20 )
          v40 = 1;
        v11 = Irp;
      }
    }
  }
  v43 = v11->Tail.Overlay.AuxiliaryBuffer;
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v11 = Irp;
  }
  if ( !IopFreeIrpExtension((__int64)v11, -1, 1)
    || !(unsigned __int8)guard_dispatch_icall_no_overrides(&Irp, Irp->Tail.Overlay.OriginalFileObject) )
  {
    v45 = Irp;
    Flags = Irp->Flags;
    if ( (Flags & 0x402) != 0 )
    {
      if ( (Flags & 0x440) != 0 )
      {
        *(_OWORD *)&Irp->UserIosb->Status = *(_OWORD *)&Irp->IoStatus.Status;
        if ( (Flags & 0x42) != 0 )
        {
          IopDequeueIrpFromThread(Irp);
          KeSetEvent(Irp->UserEvent, v40, 0);
          IoFreeIrp(Irp);
        }
        else
        {
          KeSetEvent(Irp->UserEvent, v40, 0);
        }
        return;
      }
      IopDequeueIrpFromThread(Irp);
      v47 = Irp;
      ApcEnvironment = Irp->ApcEnvironment;
      Thread = Irp->Tail.Overlay.Thread;
      Irp->Tail.Apc.Type = 18;
      v47->Tail.Apc.Size = 88;
      if ( ApcEnvironment == 2 )
        ApcEnvironment = Thread->ApcStateIndex;
      v47->Tail.Apc.ApcStateIndex = ApcEnvironment;
      v50 = 0LL;
      v47->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)Thread;
      v47->Tail.Overlay.Thread = (PETHREAD)IopCompletePageWrite;
      v47->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v47->Tail.Overlay.ListEntry.Flink = 0LL;
      *(_WORD *)((char *)&v47->Tail.CompletionKey + 81) = 0;
      v47->Tail.Overlay.ListEntry.Blink = 0LL;
      v47->Tail.Apc.SpareByte0 = 0;
      p_Tail = &Irp->Tail;
      v52 = v40;
      v53 = 0LL;
LABEL_92:
      KeInsertQueueApc((__int64)p_Tail, v53, v50, v52);
      return;
    }
    v54 = Irp->MdlAddress;
    if ( v54 )
    {
      do
      {
        if ( (v54->MdlFlags & 2) != 0 )
          MmUnlockPages(v54);
        v54 = v54->Next;
      }
      while ( v54 );
      v45 = Irp;
    }
    if ( (v45->Flags & 0x2000) != 0 )
    {
      ObfDereferenceObjectWithTag(v45->Tail.Overlay.Thread, 0x746C6644u);
      v45 = Irp;
    }
    v55 = v45->Flags;
    if ( (v55 & 0x800) != 0 && !v45->PendingReturned )
    {
      if ( v45->IoStatus.Status == 260 )
      {
        v56 = v45->IoStatus.Information - 2684354563u;
        if ( v56 <= 0x16 )
        {
          v57 = 4194817LL;
          if ( _bittest64(&v57, v56) )
            v45->Tail.Overlay.AuxiliaryBuffer = (PCHAR)AuxiliaryBuffer;
        }
      }
      return;
    }
    v58 = (ULONG_PTR)v45->Tail.Overlay.OriginalFileObject;
    v59 = v45->Tail.Overlay.Thread;
    v76 = v58;
    if ( (v55 & 0x200000) != 0 )
    {
      if ( !IopDoesCompletionNeedsApc((__int64)v45) && (!v45->Cancel || (v55 & 0x2000) != 0) )
      {
        IopIoRingCompleteIrp(v45, v58, v40);
        return;
      }
    }
    else if ( (v55 & 0x2000) != 0 )
    {
      if ( IopCompleteIrpInFileObjectList(v45, v58, v40, v44) )
        return;
      v45 = Irp;
    }
    if ( v59 )
    {
      v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v59[1].WaitBlock[0].Thread);
      KeReleaseSpinLock((PKSPIN_LOCK)&v59[1].WaitBlock[0].Thread, v60);
      v45 = Irp;
    }
    if ( v45->Cancel )
    {
      v64 = KeAcquireQueuedSpinLock(0xBuLL);
      v65 = Irp;
      v66 = v64;
      v67 = IopDeadIrps;
      v68 = Irp->Tail.Overlay.Thread;
      if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
      {
LABEL_134:
        if ( v68 )
        {
          ApcStateIndex = Irp->ApcEnvironment;
          Irp->Tail.Apc.Type = 18;
          v65->Tail.Apc.Size = 88;
          if ( ApcStateIndex == 2 )
            ApcStateIndex = v68->ApcStateIndex;
          v65->Tail.Apc.ApcStateIndex = ApcStateIndex;
          v65->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
          v65->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v68;
          v65->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
          v65->Tail.Overlay.ListEntry.Flink = 0LL;
          *(_WORD *)((char *)&v65->Tail.CompletionKey + 81) = 0;
          v65->Tail.Overlay.ListEntry.Blink = 0LL;
          v65->Tail.Apc.SpareByte0 = 0;
          KeInsertQueueApc((__int64)&Irp->Tail, v58, AuxiliaryBuffer, v40);
          KeReleaseQueuedSpinLock(0xBuLL, v66);
          return;
        }
      }
      else
      {
        while ( 1 )
        {
          v69 = *(__int64 **)v67;
          if ( (PIRP)(v67 - 32) == Irp )
            break;
          v67 = *(_QWORD *)v67;
          if ( v69 == &IopDeadIrps )
            goto LABEL_134;
        }
        if ( v69[1] != v67 || (v71 = *(__int64 ***)(v67 + 8), *v71 != (__int64 *)v67) )
          __fastfail(3u);
        *v71 = v69;
        v69[1] = (__int64)v71;
        *(_QWORD *)(v67 + 8) = v67;
        *(_QWORD *)v67 = v67;
        ObfDereferenceObjectWithTag(v68, 0x746C6644u);
      }
      KeReleaseQueuedSpinLock(0xBuLL, v66);
      IopDropIrp(Irp, v58);
      return;
    }
    if ( v59 != KeGetCurrentThread()
      || KeGetCurrentThread()->SpecialApcDisable
      || !KeAreInterruptsEnabled()
      || KeGetCurrentIrql()
      || KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      v62 = Irp;
      v63 = Irp->ApcEnvironment;
      Irp->Tail.Apc.Type = 18;
      v62->Tail.Apc.Size = 88;
      if ( v63 == 2 )
        v63 = v59->ApcStateIndex;
      v62->Tail.Apc.ApcStateIndex = v63;
      v50 = v74;
      v53 = v76;
      v62->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
      v62->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
      v62->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v59;
      v62->Tail.Overlay.ListEntry.Flink = 0LL;
      *(_WORD *)((char *)&v62->Tail.CompletionKey + 81) = 0;
      v62->Tail.Overlay.ListEntry.Blink = 0LL;
      v62->Tail.Apc.SpareByte0 = 0;
      p_Tail = &Irp->Tail;
      v52 = v40;
      goto LABEL_92;
    }
    v78 = 1LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)&v79, &v78, &v76, &v74);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
