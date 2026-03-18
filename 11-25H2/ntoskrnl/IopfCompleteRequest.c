/*
 * XREFs of IopfCompleteRequest @ 0x140251740
 * Callers:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x14049CE74 (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140B96788 (IovCompleteRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     IopFreeIrpExtension @ 0x140252920 (IopFreeIrpExtension.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140252A98 (PopDiagTraceDeviceAcquireIrp.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     IopDequeueIrpFromThread @ 0x140252C50 (IopDequeueIrpFromThread.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     IopDequeueIrpFromFileObject @ 0x140284230 (IopDequeueIrpFromFileObject.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1402A2964 (IopIoRingCompleteIrp.c)
 *     IopCopyCompleteReadIrp @ 0x1402D3280 (IopCopyCompleteReadIrp.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     IoGetRequestorProcess @ 0x140376780 (IoGetRequestorProcess.c)
 *     ObDereferenceObjectExWithTag @ 0x1404381A0 (ObDereferenceObjectExWithTag.c)
 *     IopDoesCompletionNeedsApc @ 0x14049A530 (IopDoesCompletionNeedsApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopfCompleteRequest(IRP *BugCheckParameter1, CCHAR a2, __int64 a3)
{
  PIRP v3; // r14
  CHAR v4; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int Flink; // edx
  UCHAR *p_Control; // rsi
  PIRP v8; // rdi
  PIRP v9; // rcx
  struct _LIST_ENTRY *Status; // rax
  char v11; // al
  char v12; // di
  PIRP v13; // r15
  __int64 v14; // rcx
  PDEVICE_OBJECT v15; // r13
  __int64 v16; // rax
  PIRP v17; // rcx
  PVOID *v18; // r12
  int v19; // r13d
  PVOID v20; // rdi
  PIRP v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rdi
  unsigned __int8 v24; // r12
  PCHAR v25; // rcx
  __int64 (__fastcall *v26)(_QWORD, _QWORD, _QWORD); // rax
  PIRP v27; // rsi
  ULONG Flags; // edi
  PMDL v29; // rdi
  ULONG_PTR v30; // rsi
  signed __int64 v31; // rdi
  signed __int64 v32; // r14
  bool v33; // cc
  signed __int64 v34; // r14
  ULONG v35; // eax
  ULONG_PTR v36; // rax
  IRP *v37; // rcx
  PMDL MdlAddress; // rcx
  struct _IRP *MasterIrp; // rsi
  struct _MDL *Next; // rbx
  ULONG_PTR v41; // rdx
  PETHREAD v42; // r14
  unsigned __int8 v43; // si
  volatile signed __int64 *p_Thread; // rcx
  KIRQL v45; // si
  void *ArbitraryUserPointer; // rax
  __int64 v47; // rcx
  volatile __int64 *v48; // r8
  PIRP v49; // r8
  __int64 *v50; // rdx
  PETHREAD v51; // rcx
  volatile signed __int64 **v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  char v56; // di
  __int64 v57; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  PIRP v60; // rdi
  struct _MDL *v61; // rcx
  PKEVENT UserEvent; // rcx
  ULONG_PTR v63; // rbx
  ULONG v64; // eax
  PFILE_OBJECT OriginalFileObject; // rdx
  PVPB Vpb; // rcx
  PVPB v67; // rcx
  PDEVICE_OBJECT v68; // rcx
  _QWORD *FileObjectExtension; // rax
  __int64 *v70; // rax
  struct _DEVICE_OBJECT *i; // rax
  PDEVICE_OBJECT v72; // rax
  ULONG DeviceType; // eax
  int v74; // edi
  PIRP v75; // r14
  unsigned __int8 CurrentIrql; // si
  PETHREAD Thread; // rbx
  PIRP v78; // rax
  CCHAR v79; // cl
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *v80; // r8
  PCHAR v81; // r8
  ULONG_PTR v82; // rdx
  NTSTATUS v83; // eax
  struct _KPROCESS *Process; // rdi
  struct _LIST_ENTRY *v85; // rdx
  LIST_ENTRY *p_ThreadListEntry; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v88; // bl
  signed __int32 v89; // eax
  signed __int32 v90; // ett
  PDEVICE_OBJECT v91; // rdx
  PFILE_OBJECT v92; // rdx
  char v93; // al
  PDEVICE_OBJECT DeviceObject; // rdx
  unsigned __int8 v95; // al
  __int64 StackCount; // rax
  __int64 v97; // rdi
  PIRP v98; // rax
  CCHAR ApcEnvironment; // cl
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *p_Tail; // r9
  PETHREAD v101; // r8
  CCHAR ApcStateIndex; // al
  ULONG_PTR v103; // rdx
  unsigned __int64 UserApcRoutine; // rax
  unsigned __int64 v105; // r9
  __int64 v106; // rcx
  ULONG_PTR Information; // rax
  unsigned __int64 v108; // rcx
  __int64 v109; // rax
  struct _MDL *v110; // rbx
  __int64 v111; // r9
  __int64 *v112; // rax
  signed __int64 v113; // rcx
  signed __int64 j; // rax
  signed __int32 v115[6]; // [rsp+8h] [rbp-B9h] BYREF
  unsigned __int8 v116; // [rsp+48h] [rbp-79h]
  PIRP Irp; // [rsp+50h] [rbp-71h] BYREF
  CCHAR v118; // [rsp+58h] [rbp-69h]
  char v119; // [rsp+59h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-61h] BYREF
  PDEVICE_OBJECT v121; // [rsp+68h] [rbp-59h] BYREF
  PCHAR AuxiliaryBuffer; // [rsp+70h] [rbp-51h] BYREF
  __int64 v123; // [rsp+78h] [rbp-49h] BYREF
  PIRP v124; // [rsp+80h] [rbp-41h] BYREF
  IRP *v125; // [rsp+88h] [rbp-39h] BYREF
  PDEVICE_OBJECT v126; // [rsp+90h] [rbp-31h] BYREF
  __int64 v127; // [rsp+98h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+A0h] [rbp-21h] BYREF
  __int64 *v129; // [rsp+B0h] [rbp-11h]
  __int64 v130; // [rsp+B8h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-1h] BYREF
  __int64 *v132; // [rsp+D0h] [rbp+Fh]
  __int64 v133; // [rsp+D8h] [rbp+17h]
  void *retaddr; // [rsp+120h] [rbp+5Fh]

  Irp = BugCheckParameter1;
  v3 = BugCheckParameter1;
  v4 = BugCheckParameter1->StackCount + 1;
  v118 = a2;
  AuxiliaryBuffer = 0LL;
  if ( BugCheckParameter1->CurrentLocation > v4 || BugCheckParameter1->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)BugCheckParameter1, 0x1311uLL, 0LL, 0LL);
  CurrentStackLocation = BugCheckParameter1->Tail.Overlay.CurrentStackLocation;
  if ( BugCheckParameter1->CurrentLocation <= BugCheckParameter1->StackCount
    && CurrentStackLocation->MajorFunction == 22 )
  {
    LOBYTE(a3) = 1;
    DeviceObject = CurrentStackLocation->DeviceObject;
    v95 = CurrentStackLocation->MinorFunction - 2;
    v116 = 1;
    if ( v95 <= 1u )
    {
      StackCount = BugCheckParameter1->StackCount;
      v126 = DeviceObject;
      v125 = BugCheckParameter1;
      v97 = *((_QWORD *)&BugCheckParameter1->Tail.CompletionKey + 9 * StackCount + 10);
      if ( PopDiagHandleRegistered )
      {
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERRELEASE) )
        {
          v128.Ptr = (ULONGLONG)&v125;
          *(_QWORD *)&v128.Size = 8LL;
          v129 = (__int64 *)&v126;
          v130 = 8LL;
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERRELEASE, 0LL, 0, 0LL, 0LL, 2u, &v128);
        }
        LOBYTE(a3) = 1;
      }
      *(_QWORD *)(v97 + 40) = 0LL;
      v3 = Irp;
    }
  }
  else
  {
    LOBYTE(a3) = 0;
    v116 = 0;
  }
  if ( (v3[1].Size & 0x200) != 0 )
    Flink = (int)v3[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  ++v3->CurrentLocation;
  LODWORD(BugCheckParameter2) = Flink;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  p_Control = &CurrentStackLocation->Control;
  while ( 1 )
  {
    v8 = Irp;
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      break;
    Irp->PendingReturned = *p_Control & 1;
    v9 = Irp;
    Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
    if ( (int)Status < 0 && (_DWORD)Status != Flink )
    {
      *p_Control |= 2u;
      HIBYTE(v3[1].Size) |= 2u;
      v3[1].ThreadListEntry.Flink = Status;
      v9 = Irp;
      LODWORD(BugCheckParameter2) = (_DWORD)Status;
    }
    v11 = *p_Control;
    if ( v9->IoStatus.Status < 0 )
    {
      if ( v11 < 0 )
        goto LABEL_13;
    }
    else if ( (v11 & 0x40) != 0 )
    {
      goto LABEL_13;
    }
    if ( !v9->Cancel || (v11 = *p_Control, (*p_Control & 0x20) == 0) )
    {
      if ( v9->PendingReturned && v9->CurrentLocation <= v9->StackCount )
        v9->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      *p_Control &= 2u;
      *((_WORD *)p_Control - 1) = 0;
      *(_QWORD *)(p_Control + 5) = 0LL;
      *(_QWORD *)(p_Control + 13) = 0LL;
      *(_QWORD *)(p_Control + 21) = 0LL;
      *(_QWORD *)(p_Control + 45) = 0LL;
      goto LABEL_55;
    }
LABEL_13:
    v12 = *(p_Control - 2);
    *p_Control = v11 & 2;
    *((_WORD *)p_Control - 1) = 0;
    *(_QWORD *)(p_Control + 5) = 0LL;
    *(_QWORD *)(p_Control + 13) = 0LL;
    *(_QWORD *)(p_Control + 21) = 0LL;
    *(_QWORD *)(p_Control + 45) = 0LL;
    v13 = Irp;
    v119 = v12;
    v14 = Irp->StackCount;
    if ( Irp->CurrentLocation == (_BYTE)v14 + 1 )
      v15 = 0LL;
    else
      v15 = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
    v121 = v15;
    if ( (_BYTE)a3 && (unsigned __int8)(v12 - 2) <= 1u && v15 )
    {
      v16 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * v14 + 10);
      v17 = Irp;
      *(_QWORD *)(v16 + 40) = v15;
      PopDiagTraceDeviceAcquireIrp(v17, v15);
      v13 = Irp;
    }
    v18 = *(PVOID **)(p_Control + 61);
    if ( *(_UNKNOWN **)(p_Control + 53) != &IopUnloadSafeCompletion )
    {
      v19 = guard_dispatch_icall_no_overrides(v15, v13);
LABEL_233:
      v22 = (__int64)v121;
      goto LABEL_25;
    }
    v19 = 0;
    if ( v13->IoStatus.Status < 0 )
    {
      if ( *((_BYTE *)v18 + 24) )
        goto LABEL_24;
    }
    else if ( *((_BYTE *)v18 + 25) )
    {
      goto LABEL_24;
    }
    if ( !v13->Cancel || !*((_BYTE *)v18 + 26) )
    {
      if ( v13->PendingReturned )
      {
        v19 = 259;
        v13->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      }
      ExFreePoolWithTag(v18, 0);
      goto LABEL_233;
    }
LABEL_24:
    v20 = *v18;
    ObfReferenceObjectWithTag(*v18, 0x70436F49u);
    v21 = v13;
    v22 = (__int64)v121;
    v19 = guard_dispatch_icall_no_overrides(v121, v21);
    ExFreePoolWithTag(v18, 0);
    ObfDereferenceObjectWithTag(v20, 0x70436F49u);
    v12 = v119;
LABEL_25:
    if ( v19 == -1073741802 )
      return;
    a3 = v116;
    if ( v116 && (unsigned __int8)(v12 - 2) <= 1u )
    {
      v123 = v22;
      v124 = Irp;
      v23 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
      if ( PopDiagHandleRegistered )
      {
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERRELEASE) )
        {
          UserData.Ptr = (ULONGLONG)&v124;
          *(_QWORD *)&UserData.Size = 8LL;
          v132 = &v123;
          v133 = 8LL;
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERRELEASE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
        }
        a3 = v116;
      }
      *(_QWORD *)(v23 + 40) = 0LL;
    }
LABEL_55:
    p_Control += 72;
    Flink = BugCheckParameter2;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( (Irp->Flags & 8) != 0 )
  {
    MdlAddress = Irp->MdlAddress;
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
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
    IoFreeIrp(Irp);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(MasterIrp, v118);
    return;
  }
  if ( Irp->IoStatus.Status == 260 )
  {
    Information = Irp->IoStatus.Information;
    if ( Information > 2 )
    {
      v108 = Information - 2684354563u;
      if ( Information - 2684354563u <= 0x16 && (v109 = 4194817LL, _bittest64(&v109, v108)) )
      {
        AuxiliaryBuffer = Irp->Tail.Overlay.AuxiliaryBuffer;
        Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
      }
      else
      {
        Irp->IoStatus.Status = -1073741191;
      }
      v8 = Irp;
    }
  }
  v24 = v118;
  if ( v118 )
    goto LABEL_36;
  OriginalFileObject = v8->Tail.Overlay.OriginalFileObject;
  if ( !OriginalFileObject || (v8->Flags & 0x400) != 0 )
    goto LABEL_36;
  Vpb = OriginalFileObject->Vpb;
  if ( (!Vpb || (v68 = Vpb->DeviceObject) == 0LL)
    && ((OriginalFileObject->Flags & 0x800) != 0
     || (v67 = OriginalFileObject->DeviceObject->Vpb) == 0LL
     || (v68 = v67->DeviceObject) == 0LL) )
  {
    v68 = OriginalFileObject->DeviceObject;
  }
  if ( !v68->AttachedDevice )
  {
LABEL_121:
    v72 = v68;
    goto LABEL_122;
  }
  FileObjectExtension = OriginalFileObject->FileObjectExtension;
  if ( !FileObjectExtension || (v70 = (__int64 *)FileObjectExtension[2]) == 0LL || (v72 = (PDEVICE_OBJECT)*v70) == 0LL )
  {
LABEL_118:
    for ( i = v68->AttachedDevice; i; i = i->AttachedDevice )
      v68 = i;
    v8 = Irp;
    goto LABEL_121;
  }
  v91 = v68;
  while ( v91 != v72 )
  {
    v91 = v91->AttachedDevice;
    if ( !v91 )
      goto LABEL_118;
  }
  v8 = Irp;
LABEL_122:
  DeviceType = v72->DeviceType;
  if ( DeviceType == 20 || DeviceType == 8 )
    v24 = 1;
LABEL_36:
  v25 = v8->Tail.Overlay.AuxiliaryBuffer;
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v8 = Irp;
  }
  LOBYTE(a3) = 1;
  v26 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))IopFreeIrpExtension(v8, 0xFFFFFFFFLL, a3);
  if ( !v26
    || ((v92 = Irp->Tail.Overlay.OriginalFileObject, v26 != IopCopyCompleteReadIrp)
      ? (v93 = guard_dispatch_icall_no_overrides(&Irp, v92))
      : (v93 = IopCopyCompleteReadIrp(&Irp, v92, v24)),
        !v93) )
  {
    v27 = Irp;
    Flags = Irp->Flags;
    if ( (Flags & 0x402) != 0 )
    {
      if ( (Flags & 0x440) != 0 )
      {
        *(_OWORD *)&Irp->UserIosb->Status = *(_OWORD *)&Irp->IoStatus.Status;
        v74 = Flags & 0x42;
        if ( !v74 )
          goto LABEL_57;
        v75 = Irp;
        CurrentIrql = 0;
        Thread = Irp->Tail.Overlay.Thread;
        if ( Thread )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockFill11[24], 0LL) )
              KxWaitForSpinLockAndAcquire(&Thread[1].WaitBlockFill11[24]);
          }
          else
          {
            KiAcquireSpinLockInstrumented(&Thread[1].WaitBlockFill11[24]);
          }
        }
        v85 = v75->ThreadListEntry.Flink;
        p_ThreadListEntry = &v75->ThreadListEntry;
        Blink = v75->ThreadListEntry.Blink;
        if ( v85->Blink != &v75->ThreadListEntry || Blink->Flink != p_ThreadListEntry )
          goto LABEL_159;
        Blink->Flink = v85;
        v85->Blink = Blink;
        v75->ThreadListEntry.Blink = &v75->ThreadListEntry;
        p_ThreadListEntry->Flink = p_ThreadListEntry;
        if ( Thread )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64((volatile signed __int64 *)&Thread[1].WaitBlock[0].Thread, 0LL);
          else
            KiReleaseSpinLockInstrumented(&Thread[1].WaitBlockFill11[24], retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          KeSetEvent(Irp->UserEvent, v24, 0);
        }
        else
        {
LABEL_57:
          KeSetEvent(Irp->UserEvent, v24, 0);
          if ( !v74 )
            return;
        }
        v37 = Irp;
        goto LABEL_59;
      }
      IopDequeueIrpFromThread(Irp);
      v98 = Irp;
      ApcEnvironment = Irp->ApcEnvironment;
      p_Tail = &Irp->Tail;
      v101 = Irp->Tail.Overlay.Thread;
      Irp->Tail.Apc.Type = 18;
      v98->Tail.Apc.Size = 88;
      if ( ApcEnvironment == 2 )
        ApcEnvironment = v101->ApcStateIndex;
      p_Tail->Apc.ApcStateIndex = ApcEnvironment;
      v98->Tail.Overlay.Thread = (PETHREAD)IopCompletePageWrite;
      v98->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v101;
      v98->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v98->Tail.Overlay.ListEntry.Flink = 0LL;
      *(_WORD *)((char *)&v98->Tail.CompletionKey + 81) = 0;
      v98->Tail.Overlay.ListEntry.Blink = 0LL;
      v98->Tail.Apc.SpareByte0 = 0;
      KeInsertQueueApc(&Irp->Tail, 0LL, 0LL, v24);
    }
    else
    {
      v29 = Irp->MdlAddress;
      if ( v29 )
      {
        do
        {
          if ( (v29->MdlFlags & 2) != 0 )
            MmUnlockPages(v29);
          v29 = v29->Next;
        }
        while ( v29 );
        v27 = Irp;
      }
      if ( (v27->Flags & 0x2000) != 0 )
      {
        v30 = (ULONG_PTR)v27->Tail.Overlay.Thread;
        v31 = v30 - 48;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v30 - 48);
        v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL);
        v33 = v32 <= 1;
        v34 = v32 - 1;
        if ( v33 )
        {
          if ( *(_QWORD *)(v31 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v31 + 24) ^ (unsigned __int64)BYTE1(v31)],
              v30,
              1uLL,
              *(_QWORD *)(v31 + 8));
          if ( v34 < 0 )
            KeBugCheckEx(0x18u, 0LL, v30, 2uLL, v34);
          if ( KeGetCurrentThread()->SpecialApcDisable
            || !(unsigned __int8)KeAreInterruptsEnabled()
            || KeGetCurrentIrql() )
          {
            _m_prefetchw(&ObpRemoveObjectList);
            v113 = ObpRemoveObjectList;
            *(_QWORD *)(v31 + 8) = ObpRemoveObjectList;
            for ( j = _InterlockedCompareExchange64(&ObpRemoveObjectList, v31, v113);
                  j != v113;
                  j = _InterlockedCompareExchange64(&ObpRemoveObjectList, v31, j) )
            {
              v113 = j;
              *(_QWORD *)(v31 + 8) = j;
            }
            if ( !v113 )
            {
              if ( (unsigned __int8)ObGetCurrentIrql() > 2u )
                KeInsertQueueDpc(&ObpRemoveObjectDpc, 0LL, 0LL);
              else
                ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
            }
          }
          else
          {
            if ( (*(_BYTE *)(v31 + 26) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)(v31 - ObpInfoMaskToOffset[*(_BYTE *)(v31 + 26) & 0x7F]) + 24LL) )
            {
              ObpHandleRevocationBlockRemoveObject();
            }
            if ( ObpTraceFlags )
              ObpDeregisterObject(v30 - 48);
            ObpRemoveObjectRoutine(v30 - 48, 0LL);
          }
        }
        v27 = Irp;
      }
      v35 = v27->Flags;
      if ( (v35 & 0x800) != 0 && !v27->PendingReturned )
      {
        if ( v27->IoStatus.Status == 260 )
        {
          v36 = v27->IoStatus.Information;
          if ( v36 == 2684354563 || v36 == 2684354572 || v36 == 2684354585 )
            v27->Tail.Overlay.AuxiliaryBuffer = AuxiliaryBuffer;
        }
        return;
      }
      v41 = (ULONG_PTR)v27->Tail.Overlay.OriginalFileObject;
      v42 = v27->Tail.Overlay.Thread;
      BugCheckParameter2 = v41;
      if ( (v35 & 0x200000) != 0 )
      {
        if ( (v35 & 0x50) != 0x50
          || (v83 = v27->IoStatus.Status, v83 == -2147483626)
          || (v83 & 0xC0000000) == 0xC0000000
          || (v27 = Irp, Process = KeGetCurrentThread()->ApcState.Process, IoGetRequestorProcess(Irp) == Process) )
        {
          IopIoRingCompleteIrp(v27);
          return;
        }
      }
      else if ( (v35 & 0x2000) != 0 )
      {
        v127 = 0LL;
        v121 = 0LL;
        if ( v27->PendingReturned
          || (v27->IoStatus.Status & 0xC0000000) != 0xC0000000
          && ((*(_DWORD *)(v41 + 80) & 0x2000000) == 0 || v27->IoStatus.Status < 0) )
        {
          if ( *(_QWORD *)(v41 + 176) )
          {
            IopInsertIrpInCompletionQueue(v27);
            return;
          }
          if ( !(unsigned __int8)IopDoesCompletionNeedsApc(v27) )
          {
            IopCompleteRequest(
              (_DWORD)v27 + 120,
              (unsigned int)&v127,
              (unsigned int)&v121,
              (_DWORD)v27 + 192,
              (__int64)&v121);
            return;
          }
        }
      }
      if ( v42 )
      {
        v43 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v43);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)&v42[1].WaitBlockFill11[24], 0LL) )
            KxWaitForSpinLockAndAcquire(&v42[1].WaitBlockFill11[24]);
        }
        else
        {
          KiAcquireSpinLockInstrumented(&v42[1].WaitBlockFill11[24]);
        }
        p_Thread = (volatile signed __int64 *)&v42[1].WaitBlock[0].Thread;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64(p_Thread, 0LL);
        else
          KiReleaseSpinLockInstrumented(p_Thread, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v43);
        __writecr8(v43);
        v27 = Irp;
      }
      if ( v27->Cancel )
      {
        v45 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v45);
        ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
        v47 = (__int64)ArbitraryUserPointer + 176;
        v48 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 23);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64(v48, v47) )
            KxWaitForLockOwnerShip();
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v47, v48);
        }
        v49 = Irp;
        v50 = (__int64 *)IopDeadIrps;
        v51 = Irp->Tail.Overlay.Thread;
        while ( v50 != &IopDeadIrps )
        {
          v111 = *v50;
          if ( v50 - 4 == (__int64 *)Irp )
          {
            v112 = (__int64 *)v50[1];
            if ( *(__int64 **)(v111 + 8) == v50 && (__int64 *)*v112 == v50 )
            {
              *v112 = v111;
              *(_QWORD *)(v111 + 8) = v112;
              v50[1] = (__int64)v50;
              *v50 = (__int64)v50;
              ObfDereferenceObjectWithTag(v51, 0x746C6644u);
              goto LABEL_87;
            }
LABEL_159:
            __fastfail(3u);
          }
          v50 = (__int64 *)*v50;
        }
        if ( v51 )
        {
          ApcStateIndex = Irp->ApcEnvironment;
          Irp->Tail.Apc.Type = 18;
          v49->Tail.Apc.Size = 88;
          if ( ApcStateIndex == 2 )
            ApcStateIndex = v51->ApcStateIndex;
          v49->Tail.Apc.ApcStateIndex = ApcStateIndex;
          v103 = BugCheckParameter2;
          v49->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v51;
          v49->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
          v49->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
          v49->Tail.Overlay.ListEntry.Flink = 0LL;
          *(_WORD *)((char *)&v49->Tail.CompletionKey + 81) = 0;
          v49->Tail.Overlay.ListEntry.Blink = 0LL;
          v49->Tail.Apc.SpareByte0 = 0;
          KeInsertQueueApc(&Irp->Tail, v103, AuxiliaryBuffer, v24);
          KeReleaseQueuedSpinLock(0xBuLL, v45);
        }
        else
        {
LABEL_87:
          v52 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 176);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _m_prefetchw(v52);
            v53 = (__int64)*v52;
            if ( !*v52 )
            {
              if ( v52 == (volatile signed __int64 **)_InterlockedCompareExchange64(v52[1], 0LL, (signed __int64)v52) )
                goto LABEL_95;
              v53 = KxWaitForLockChainValid(v52);
            }
            *v52 = 0LL;
            v54 = (__int64)v52[1];
            if ( (((unsigned __int8)v54 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v53 + 8), v54)) & 4) != 0 )
            {
              _InterlockedOr(v115, 0);
              v56 = KeDisableInterrupts(v54, v50, ((unsigned __int64)(v53 + 8) >> 5) & 0x7F);
              KiHaltOnAddressWakeEntireList(v57, _InterlockedExchange64(&KiHaltOnAddressHashTable[v55], 0LL));
              if ( v56 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
                if ( SchedulerAssist )
                {
                  _m_prefetchw(SchedulerAssist);
                  v89 = *SchedulerAssist;
                  do
                  {
                    v90 = v89;
                    v89 = _InterlockedCompareExchange(SchedulerAssist, v89 & 0xFFDFFFFF, v89);
                  }
                  while ( v90 != v89 );
                  if ( (v89 & 0x200000) != 0 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
                _enable();
              }
            }
          }
          else
          {
            KiReleaseQueuedSpinLockInstrumented(v52, retaddr);
          }
LABEL_95:
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v45);
          __writecr8(v45);
          v60 = Irp;
          if ( (Irp->Flags & 0x20) != 0 )
            ExFreePoolWithTag(Irp->AssociatedIrp.MasterIrp, 0);
          v61 = v60->MdlAddress;
          if ( v61 )
          {
            do
            {
              v110 = v61->Next;
              IoFreeMdl(v61);
              v61 = v110;
            }
            while ( v110 );
          }
          UserEvent = v60->UserEvent;
          v63 = BugCheckParameter2;
          if ( UserEvent && BugCheckParameter2 && (v60->Flags & 4) == 0 )
            ObfDereferenceObjectWithTag(UserEvent, 0x746C6644u);
          v64 = v60->Flags;
          if ( (v64 & 0x2000) != 0 )
          {
            IopDequeueIrpFromFileObject(v60, v63);
            v64 = v60->Flags;
          }
          if ( v63 && (v64 & 0x80u) == 0 )
            ObDereferenceObjectExWithTag(v63);
          if ( (v60->Flags & 0x8000) == 0 )
            goto LABEL_105;
          UserApcRoutine = (unsigned __int64)v60->Overlay.AsynchronousParameters.UserApcRoutine;
          do
          {
            v105 = UserApcRoutine;
            v106 = ((UserApcRoutine >> 1) & 3) - 1;
            UserApcRoutine = _InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v60->Overlay,
                               UserApcRoutine & 0xFFFFFFFFFFFFFFF9uLL | (2 * v106),
                               UserApcRoutine);
          }
          while ( v105 != UserApcRoutine );
          if ( !(_DWORD)v106 )
          {
LABEL_105:
            v37 = v60;
LABEL_59:
            IoFreeIrp(v37);
          }
        }
      }
      else if ( v42 != KeGetCurrentThread()
             || KeGetCurrentThread()->SpecialApcDisable
             || !(unsigned __int8)KeAreInterruptsEnabled()
             || KeGetCurrentIrql()
             || KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        v78 = Irp;
        v79 = Irp->ApcEnvironment;
        v80 = &Irp->Tail;
        Irp->Tail.Apc.Type = 18;
        v78->Tail.Apc.Size = 88;
        if ( v79 == 2 )
          v79 = v42->ApcStateIndex;
        v80->Apc.ApcStateIndex = v79;
        v81 = AuxiliaryBuffer;
        v82 = BugCheckParameter2;
        v78->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
        v78->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
        v78->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v42;
        v78->Tail.Overlay.ListEntry.Flink = 0LL;
        *(_WORD *)((char *)&v78->Tail.CompletionKey + 81) = 0;
        v78->Tail.Overlay.ListEntry.Blink = 0LL;
        v78->Tail.Apc.SpareByte0 = 0;
        KeInsertQueueApc(&Irp->Tail, v82, v81, v24);
      }
      else
      {
        v123 = 1LL;
        v88 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v88);
        IopCompleteRequest(
          (_DWORD)Irp + 120,
          (unsigned int)&v124,
          (unsigned int)&v123,
          (unsigned int)&BugCheckParameter2,
          (__int64)&AuxiliaryBuffer);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v88);
        __writecr8(v88);
      }
    }
  }
}
