/*
 * XREFs of IopfCompleteRequest @ 0x1403DBB10
 * Callers:
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x1403DC6BC (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140BA6768 (IovCompleteRequest.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PoDeviceReleaseIrp @ 0x1402A1810 (PoDeviceReleaseIrp.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopFreeIrpExtension @ 0x14031B360 (IopFreeIrpExtension.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IopDropIrp @ 0x1403C5110 (IopDropIrp.c)
 *     IopIoRingCompleteIrp @ 0x1403C5DA0 (IopIoRingCompleteIrp.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     IopDoesCompletionNeedsApc @ 0x1403DC510 (IopDoesCompletionNeedsApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopfCompleteRequest(IRP *BugCheckParameter1, char a2, __int64 a3, __int64 a4)
{
  const GUID *ActivityId; // r10
  char CurrentLocation; // r8
  PIRP v6; // rsi
  __int64 AuxiliaryBuffer; // r15
  CHAR StackCount; // dl
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v10; // r13
  int Flink; // r12d
  int v12; // r11d
  PIRP v13; // rdi
  UCHAR *p_Control; // rbx
  PIRP v15; // rcx
  struct _LIST_ENTRY *Status; // rax
  char v17; // dl
  char v18; // al
  char v19; // r14
  PIRP v20; // rdx
  __int64 v21; // rcx
  PDEVICE_OBJECT DeviceObject; // rdi
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rax
  wchar_t *Buffer; // r8
  _WORD *v28; // rcx
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int16 v32; // ax
  _WORD *v33; // rax
  int v34; // eax
  const wchar_t *v35; // rcx
  __int64 v36; // rax
  struct _MDL *MdlAddress; // rcx
  IRP *MasterIrp; // rsi
  struct _MDL *Next; // rbx
  __int64 v40; // rdx
  unsigned __int64 Information; // rax
  unsigned __int8 v42; // r12
  struct _FILE_OBJECT *OriginalFileObject; // rcx
  ULONG DeviceType; // ecx
  PCHAR v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  PIRP v49; // rbx
  ULONG Flags; // eax
  PIRP v51; // rax
  CCHAR ApcEnvironment; // cl
  PETHREAD Thread; // rdx
  __int64 v54; // r8
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *p_Tail; // rcx
  unsigned int v56; // r9d
  __int64 v57; // rdx
  PMDL v58; // rdi
  ULONG v59; // esi
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  ULONG_PTR v62; // r14
  PETHREAD v63; // rdi
  KIRQL v64; // al
  unsigned __int8 CurrentIrql; // bl
  PIRP v66; // rax
  CCHAR v67; // cl
  KIRQL v68; // al
  PIRP v69; // r8
  KIRQL v70; // bl
  __int64 v71; // rdx
  PETHREAD v72; // r10
  __int64 *v73; // r9
  CCHAR ApcStateIndex; // al
  __int64 **v75; // rax
  PIRP Irp; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v77; // [rsp+50h] [rbp-B8h]
  __int64 v78; // [rsp+58h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v79; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR v80; // [rsp+68h] [rbp-A0h] BYREF
  PIRP v81; // [rsp+70h] [rbp-98h] BYREF
  __int64 v82; // [rsp+78h] [rbp-90h] BYREF
  __int64 v83; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  PDEVICE_OBJECT *v85; // [rsp+98h] [rbp-70h]
  __int64 v86; // [rsp+A0h] [rbp-68h]
  const wchar_t *v87; // [rsp+A8h] [rbp-60h]
  int v88; // [rsp+B0h] [rbp-58h]
  int v89; // [rsp+B4h] [rbp-54h]
  _BYTE v90[128]; // [rsp+B8h] [rbp-50h] BYREF

  ActivityId = 0LL;
  Irp = BugCheckParameter1;
  CurrentLocation = BugCheckParameter1->CurrentLocation;
  v6 = BugCheckParameter1;
  LOBYTE(v77) = a2;
  AuxiliaryBuffer = 0LL;
  StackCount = BugCheckParameter1->StackCount;
  v78 = 0LL;
  if ( CurrentLocation > (char)(StackCount + 1) || BugCheckParameter1->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)BugCheckParameter1, 0x1311uLL, 0LL, 0LL);
  CurrentStackLocation = BugCheckParameter1->Tail.Overlay.CurrentStackLocation;
  if ( CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v10 = 1;
    PoDeviceReleaseIrp(
      (__int64)BugCheckParameter1,
      CurrentStackLocation->MinorFunction,
      (__int64)CurrentStackLocation->DeviceObject);
    v6 = Irp;
    ActivityId = 0LL;
  }
  else
  {
    v10 = 0;
  }
  if ( (v6[1].Size & 0x200) != 0 )
    Flink = (int)v6[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  ++v6->CurrentLocation;
  v12 = 1;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v13 = Irp;
  if ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) )
  {
    p_Control = &CurrentStackLocation->Control;
    while ( 1 )
    {
      v13->PendingReturned = *p_Control & 1;
      v15 = Irp;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status < 0 && (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(v6[1].Size) |= 2u;
        v6[1].ThreadListEntry.Flink = Status;
        v15 = Irp;
      }
      v17 = *p_Control;
      v18 = *p_Control;
      if ( v15->IoStatus.Status < 0 )
      {
        if ( v17 < 0 )
          goto LABEL_17;
      }
      else if ( (v17 & 0x40) != 0 )
      {
        goto LABEL_17;
      }
      if ( v15->Cancel )
      {
        v18 = *p_Control;
        if ( (v17 & 0x20) != 0 )
        {
LABEL_17:
          v19 = *(p_Control - 2);
          *p_Control = v18 & 2;
          *((_WORD *)p_Control - 1) = 0;
          *(_QWORD *)(p_Control + 5) = 0LL;
          *(_QWORD *)(p_Control + 13) = 0LL;
          *(_QWORD *)(p_Control + 21) = 0LL;
          *(_QWORD *)(p_Control + 45) = 0LL;
          v20 = Irp;
          v21 = Irp->StackCount;
          if ( Irp->CurrentLocation == (_BYTE)v21 + 1 )
            DeviceObject = 0LL;
          else
            DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
          if ( v10 && (unsigned __int8)(v19 - 2) <= 1u && DeviceObject )
          {
            v23 = PopDiagHandleRegistered == 0;
            v24 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * v21 + 10);
            v79 = DeviceObject;
            v81 = Irp;
            *(_QWORD *)(v24 + 40) = DeviceObject;
            if ( !v23 && PopDiagHandle )
            {
              if ( (v25 = *(_QWORD *)(PopDiagHandle + 32), *(_DWORD *)(v25 + 96))
                && (unsigned __int8)(*(_BYTE *)(v25 + 100) - 1) > 2u
                && (*(_QWORD *)(v25 + 112) & 0x4000000000000008LL) != 0
                && (*(_QWORD *)(v25 + 120) & 0x4000000000000008LL) == *(_QWORD *)(v25 + 120)
                || *(_WORD *)(PopDiagHandle + 102)
                && EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 40) + 96LL, 4u, 0x4000000000000008LL) )
              {
                if ( !v79 )
                  goto LABEL_48;
                DriverObject = v79->DriverObject;
                Buffer = DriverObject->DriverName.Buffer;
                if ( !Buffer || !DriverObject->DriverName.Length )
                  goto LABEL_48;
                v28 = v90;
                v29 = ((unsigned __int64)DriverObject->DriverName.Length >> 1) - 64;
                v30 = 64LL;
                v31 = (char *)Buffer - v90;
                do
                {
                  if ( !(v30 + v29) )
                    break;
                  v32 = *(_WORD *)((char *)v28 + v31);
                  if ( !v32 )
                    break;
                  *v28++ = v32;
                  --v30;
                }
                while ( v30 );
                v33 = v28 - 1;
                if ( v30 )
                  v33 = v28;
                *v33 = (_WORD)ActivityId;
                v34 = v12;
                if ( !v30 )
LABEL_48:
                  v34 = (int)ActivityId;
                *(_QWORD *)&UserData.Size = 8LL;
                v86 = 8LL;
                v35 = (const wchar_t *)v90;
                if ( !v34 )
                  v35 = &SourceString;
                UserData.Ptr = (ULONGLONG)&v81;
                v85 = &v79;
                v36 = -1LL;
                v87 = v35;
                do
                  v23 = v35[++v36] == 0;
                while ( !v23 );
                v88 = 2 * v36 + 2;
                v89 = (int)ActivityId;
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
            v20 = Irp;
          }
          if ( (unsigned int)guard_dispatch_icall_no_overrides(DeviceObject, v20, *(_QWORD *)(p_Control + 61), a4) == -1073741802 )
            return;
          if ( v10 )
            PoDeviceReleaseIrp((__int64)Irp, v19, (__int64)DeviceObject);
          v12 = 1;
          ActivityId = 0LL;
          goto LABEL_59;
        }
      }
      if ( v15->PendingReturned && v15->CurrentLocation <= v15->StackCount )
        v15->Tail.Overlay.CurrentStackLocation->Control |= 1u;
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
      v13 = Irp;
      if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      {
        AuxiliaryBuffer = v78;
        break;
      }
    }
  }
  if ( (v13->Flags & 8) != 0 )
  {
    MdlAddress = v13->MdlAddress;
    MasterIrp = v13->AssociatedIrp.MasterIrp;
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
    IoFreeIrp(v13);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(MasterIrp, v77);
    return;
  }
  v40 = 4194817LL;
  if ( v13->IoStatus.Status == 260 )
  {
    Information = v13->IoStatus.Information;
    if ( Information > 2 )
    {
      if ( Information - 2684354563u <= 0x16 && _bittest64(&v40, Information - 2684354563u) )
      {
        AuxiliaryBuffer = (__int64)v13->Tail.Overlay.AuxiliaryBuffer;
        v78 = AuxiliaryBuffer;
        v13->Tail.Overlay.AuxiliaryBuffer = 0LL;
      }
      else
      {
        v13->IoStatus.Status = -1073741191;
      }
      v13 = Irp;
    }
  }
  v42 = v77;
  if ( !(_BYTE)v77 )
  {
    OriginalFileObject = v13->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (v13->Flags & 0x400) == 0 )
      {
        DeviceType = IoGetRelatedDeviceObject(OriginalFileObject)->DeviceType;
        if ( DeviceType == 8 || DeviceType == 20 )
          v42 = 1;
        v13 = Irp;
      }
    }
  }
  v45 = v13->Tail.Overlay.AuxiliaryBuffer;
  if ( v45 )
  {
    ExFreePoolWithTag(v45, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v13 = Irp;
  }
  if ( !IopFreeIrpExtension((__int64)v13, -1, 1)
    || !(unsigned __int8)guard_dispatch_icall_no_overrides(&Irp, Irp->Tail.Overlay.OriginalFileObject, v42, v48) )
  {
    v49 = Irp;
    Flags = Irp->Flags;
    if ( (Flags & 0x402) != 0 )
    {
      if ( (Flags & 0x440) != 0 )
      {
        *(_OWORD *)&Irp->UserIosb->Status = *(_OWORD *)&Irp->IoStatus.Status;
        if ( (Flags & 0x42) != 0 )
        {
          IopDequeueIrpFromThread(Irp, v46, v47);
          KeSetEvent(Irp->UserEvent, v42, 0);
          IoFreeIrp(Irp);
        }
        else
        {
          KeSetEvent(Irp->UserEvent, v42, 0);
        }
        return;
      }
      IopDequeueIrpFromThread(Irp, v46, v47);
      v51 = Irp;
      ApcEnvironment = Irp->ApcEnvironment;
      Thread = Irp->Tail.Overlay.Thread;
      Irp->Tail.Apc.Type = 18;
      v51->Tail.Apc.Size = 88;
      if ( ApcEnvironment == 2 )
        ApcEnvironment = Thread->ApcStateIndex;
      v51->Tail.Apc.ApcStateIndex = ApcEnvironment;
      v54 = 0LL;
      v51->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)Thread;
      v51->Tail.Overlay.Thread = (PETHREAD)IopCompletePageWrite;
      v51->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v51->Tail.Overlay.ListEntry.Flink = 0LL;
      *(_WORD *)((char *)&v51->Tail.CompletionKey + 81) = 0;
      v51->Tail.Overlay.ListEntry.Blink = 0LL;
      v51->Tail.Apc.SpareByte0 = 0;
      p_Tail = &Irp->Tail;
      v56 = v42;
      v57 = 0LL;
LABEL_92:
      KeInsertQueueApc((__int64)p_Tail, v57, v54, v56);
      return;
    }
    v58 = Irp->MdlAddress;
    if ( v58 )
    {
      do
      {
        if ( (v58->MdlFlags & 2) != 0 )
          MmUnlockPages(v58);
        v58 = v58->Next;
      }
      while ( v58 );
      v49 = Irp;
    }
    if ( (v49->Flags & 0x2000) != 0 )
    {
      ObfDereferenceObjectWithTag(v49->Tail.Overlay.Thread, 0x746C6644u);
      v49 = Irp;
    }
    v59 = v49->Flags;
    if ( (v59 & 0x800) != 0 && !v49->PendingReturned )
    {
      if ( v49->IoStatus.Status == 260 )
      {
        v60 = v49->IoStatus.Information - 2684354563u;
        if ( v60 <= 0x16 )
        {
          v61 = 4194817LL;
          if ( _bittest64(&v61, v60) )
            v49->Tail.Overlay.AuxiliaryBuffer = (PCHAR)AuxiliaryBuffer;
        }
      }
      return;
    }
    v62 = (ULONG_PTR)v49->Tail.Overlay.OriginalFileObject;
    v63 = v49->Tail.Overlay.Thread;
    v80 = v62;
    if ( (v59 & 0x200000) != 0 )
    {
      if ( !(unsigned __int8)IopDoesCompletionNeedsApc(v49) && (!v49->Cancel || (v59 & 0x2000) != 0) )
      {
        IopIoRingCompleteIrp(v49, v62, v42);
        return;
      }
    }
    else if ( (v59 & 0x2000) != 0 )
    {
      if ( IopCompleteIrpInFileObjectList(v49, v62, v42, v48) )
        return;
      v49 = Irp;
    }
    if ( v63 )
    {
      v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v63[1].WaitBlock[0].Thread);
      KeReleaseSpinLock((PKSPIN_LOCK)&v63[1].WaitBlock[0].Thread, v64);
      v49 = Irp;
    }
    if ( v49->Cancel )
    {
      v68 = KeAcquireQueuedSpinLock(0xBuLL);
      v69 = Irp;
      v70 = v68;
      v71 = IopDeadIrps;
      v72 = Irp->Tail.Overlay.Thread;
      if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
      {
LABEL_134:
        if ( v72 )
        {
          ApcStateIndex = Irp->ApcEnvironment;
          Irp->Tail.Apc.Type = 18;
          v69->Tail.Apc.Size = 88;
          if ( ApcStateIndex == 2 )
            ApcStateIndex = v72->ApcStateIndex;
          v69->Tail.Apc.ApcStateIndex = ApcStateIndex;
          v69->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
          v69->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v72;
          v69->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
          v69->Tail.Overlay.ListEntry.Flink = 0LL;
          *(_WORD *)((char *)&v69->Tail.CompletionKey + 81) = 0;
          v69->Tail.Overlay.ListEntry.Blink = 0LL;
          v69->Tail.Apc.SpareByte0 = 0;
          KeInsertQueueApc((__int64)&Irp->Tail, v62, AuxiliaryBuffer, v42);
          KeReleaseQueuedSpinLock(0xBuLL, v70);
          return;
        }
      }
      else
      {
        while ( 1 )
        {
          v73 = *(__int64 **)v71;
          if ( (PIRP)(v71 - 32) == Irp )
            break;
          v71 = *(_QWORD *)v71;
          if ( v73 == &IopDeadIrps )
            goto LABEL_134;
        }
        if ( v73[1] != v71 || (v75 = *(__int64 ***)(v71 + 8), *v75 != (__int64 *)v71) )
          __fastfail(3u);
        *v75 = v73;
        v73[1] = (__int64)v75;
        *(_QWORD *)(v71 + 8) = v71;
        *(_QWORD *)v71 = v71;
        ObfDereferenceObjectWithTag(v72, 0x746C6644u);
      }
      KeReleaseQueuedSpinLock(0xBuLL, v70);
      IopDropIrp(Irp, v62);
      return;
    }
    if ( v63 != KeGetCurrentThread()
      || KeGetCurrentThread()->SpecialApcDisable
      || !KeAreInterruptsEnabled()
      || KeGetCurrentIrql()
      || KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      v66 = Irp;
      v67 = Irp->ApcEnvironment;
      Irp->Tail.Apc.Type = 18;
      v66->Tail.Apc.Size = 88;
      if ( v67 == 2 )
        v67 = v63->ApcStateIndex;
      v66->Tail.Apc.ApcStateIndex = v67;
      v54 = v78;
      v57 = v80;
      v66->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
      v66->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
      v66->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v63;
      v66->Tail.Overlay.ListEntry.Flink = 0LL;
      *(_WORD *)((char *)&v66->Tail.CompletionKey + 81) = 0;
      v66->Tail.Overlay.ListEntry.Blink = 0LL;
      v66->Tail.Apc.SpareByte0 = 0;
      p_Tail = &Irp->Tail;
      v56 = v42;
      goto LABEL_92;
    }
    v82 = 1LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)&v83, &v82, &v80, &v78);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
