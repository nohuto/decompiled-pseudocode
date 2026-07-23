/*
 * XREFs of NtSetVolumeInformationFile @ 0x140715F10
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140957634 (IopSynchronousApiServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140A0B2A4 (IopAllocateIrpCleanup.c)
 *     IoReportTargetDeviceChange @ 0x140A47610 (IoReportTargetDeviceChange.c)
 *     IoGetRelatedTargetDevice @ 0x140A4E0F8 (IoGetRelatedTargetDevice.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  struct _KEVENT *v7; // r13
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // r11
  __int64 v10; // rdx
  ULONG v11; // eax
  NTSTATUS result; // eax
  __int64 v13; // rcx
  _KPROCESS *Process; // rax
  __int16 v15; // ax
  char v16; // al
  struct _FILE_OBJECT *v17; // r14
  int RelatedTargetDevice; // eax
  struct _DEVICE_OBJECT *v19; // rdi
  ULONG *p_Flags; // r12
  bool v21; // si
  struct _KTHREAD *v22; // rax
  __int64 v23; // rbx
  _QWORD *v24; // rax
  int v25; // edx
  int v26; // r8d
  NTSTATUS v27; // ebx
  PVOID v28; // rcx
  char v29; // bl
  struct _KEVENT *Pool2; // rax
  __int64 v31; // rdx
  IRP *v32; // rax
  IRP *v33; // rsi
  struct _IO_STATUS_BLOCK *v34; // rax
  struct _KEVENT *v35; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  unsigned int v37; // ebx
  struct _IRP *v38; // rax
  KPROCESSOR_MODE v39; // cl
  int v40; // eax
  char v41; // r12
  __int64 v42; // r9
  int v43; // [rsp+20h] [rbp-E8h]
  char v44; // [rsp+40h] [rbp-C8h] BYREF
  KPROCESSOR_MODE v45; // [rsp+41h] [rbp-C7h]
  _DWORD Size[3]; // [rsp+44h] [rbp-C4h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  PIO_STATUS_BLOCK v48; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  struct _KTHREAD *v50; // [rsp+68h] [rbp-A0h]
  void *Src; // [rsp+70h] [rbp-98h]
  ULONG *v52; // [rsp+78h] [rbp-90h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+80h] [rbp-88h]
  PIRP Irp; // [rsp+88h] [rbp-80h]
  __int128 v55; // [rsp+90h] [rbp-78h] BYREF
  int NotificationStructure; // [rsp+A0h] [rbp-68h] BYREF
  GUID v57; // [rsp+A4h] [rbp-64h]
  int v58; // [rsp+B4h] [rbp-54h]
  __int64 v59; // [rsp+B8h] [rbp-50h]
  int v60; // [rsp+C0h] [rbp-48h]
  int v61; // [rsp+C4h] [rbp-44h]

  Size[0] = Length;
  Src = FsInformation;
  v48 = IoStatusBlock;
  *(_QWORD *)&Size[1] = 0LL;
  v7 = 0LL;
  P = 0LL;
  Object = 0LL;
  CurrentThread = KeGetCurrentThread();
  v50 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v45 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= 0x10 )
      return -1073741821;
    v10 = FsInformationClass;
    v11 = *((unsigned __int8 *)IopSetFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v11 )
      return -1073741821;
    if ( Length < v11 )
      return -1073741820;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v13 = (__int64)IoStatusBlock;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    Process = CurrentThread->ApcState.Process;
    if ( Process[1].ReadyTime
      && ((v15 = WORD2(Process[3].PerProcessorCycleTimes), v15 == 332) || v15 == 452 ? (v16 = 1) : (v16 = 0),
          (v44 = v16) != 0) )
    {
      if ( Length && ((unsigned __int8)FsInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else if ( Length
           && ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1LL) & (unsigned __int64)FsInformation) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
  }
  else
  {
    v10 = FsInformationClass;
  }
  result = IopReferenceFileObject(FileHandle, IopSetFsOperationAccess[v10], PreviousMode, (PVOID *)&Size[1], 0LL);
  if ( result >= 0 )
  {
    v17 = *(struct _FILE_OBJECT **)&Size[1];
    RelatedTargetDevice = IoGetRelatedTargetDevice(*(_QWORD *)&Size[1], &Object);
    v19 = (struct _DEVICE_OBJECT *)Object;
    if ( RelatedTargetDevice < 0 )
      v19 = 0LL;
    Object = v19;
    p_Flags = &v17->Flags;
    v52 = &v17->Flags;
    if ( (v17->Flags & 2) != 0 )
    {
      v21 = (v17->Flags & 4) != 0;
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      v23 = *(_QWORD *)&Size[1];
      v24 = KeAbPreAcquire(*(_QWORD *)&Size[1] + 128LL, 0LL);
      v44 = 0;
      if ( _InterlockedExchange((volatile __int32 *)(v23 + 116), 1) )
      {
        LOBYTE(v26) = v21;
        LOBYTE(v25) = v45;
        v17 = *(struct _FILE_OBJECT **)&Size[1];
        v27 = IopWaitAndAcquireFileObjectLock(Size[1], v25, v26, (_DWORD)v24, (__int64)&v44);
      }
      else
      {
        if ( v24 )
          *((_BYTE *)v24 + 10) = 1;
        v17 = *(struct _FILE_OBJECT **)&Size[1];
        PsReferenceSiloContext(*(void **)&Size[1]);
        v27 = 0;
      }
      if ( v44 )
      {
        ObfDereferenceObject(v17);
        v28 = Object;
        if ( !Object )
          return v27;
LABEL_34:
        ObfDereferenceObject(v28);
        return v27;
      }
      v29 = 1;
      v19 = (struct _DEVICE_OBJECT *)Object;
    }
    else
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x76456F49u);
      v7 = Pool2;
      P = Pool2;
      if ( !Pool2 )
      {
        ObfDereferenceObject(v17);
LABEL_44:
        if ( v19 )
          ObfDereferenceObject(v19);
        return -1073741670;
      }
      KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      v29 = 0;
    }
    v44 = v29;
    IopResetEvent((__int64)v17);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v17);
    LOBYTE(v31) = RelatedDeviceObject->StackSize;
    v32 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v31, 0LL);
    v33 = v32;
    Irp = v32;
    if ( !v32 )
    {
      if ( (*p_Flags & 2) == 0 )
        ExFreePoolWithTag(v7, 0);
      IopAllocateIrpCleanup((ULONG_PTR)v17, 0LL);
      goto LABEL_44;
    }
    v32->Tail.Overlay.OriginalFileObject = v17;
    v32->Tail.Overlay.Thread = v50;
    v32->RequestorMode = v45;
    v55 = 0LL;
    if ( v29 )
    {
      v34 = v48;
      v35 = 0LL;
    }
    else
    {
      v32->Flags = 4;
      v34 = (struct _IO_STATUS_BLOCK *)&v55;
      v35 = v7;
    }
    v33->UserEvent = v35;
    v33->UserIosb = v34;
    v33->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v33->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 11;
    CurrentStackLocation[-1].FileObject = v17;
    v33->AssociatedIrp.MasterIrp = 0LL;
    v33->MdlAddress = 0LL;
    v37 = Size[0];
    v38 = (struct _IRP *)ExAllocatePool2(0x61uLL, Size[0], 0x42536F49u);
    v33->AssociatedIrp.MasterIrp = v38;
    memmove(v38, Src, v37);
    v39 = v45;
    if ( !v45
      || FsInformationClass != FileFsLabelInformation
      || (v40 = *(_DWORD *)v33->AssociatedIrp.MasterIrp, v40 >= 0) && (unsigned int)(v40 + 4) <= Size[0] )
    {
      v33->Flags |= 0x30u;
      CurrentStackLocation[-1].Parameters.Read.Length = Size[0];
      CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
      v41 = v44;
      LOBYTE(v43) = v39;
      v27 = IopSynchronousServiceTail(RelatedDeviceObject, v33, v17, 0LL, v43, v44, 2);
      if ( !v41 )
      {
        LOBYTE(v42) = v45;
        v27 = IopSynchronousApiServiceTail((unsigned int)v27, v7, v33, v42, &v55, v48);
      }
      if ( !v19 )
        return v27;
      if ( v27 >= 0 )
      {
        v58 = 0;
        v61 = 0;
        NotificationStructure = 2359297;
        v59 = 0LL;
        v60 = -1;
        v57 = GUID_IO_VOLUME_CHANGE;
        IoReportTargetDeviceChange(v19, &NotificationStructure);
      }
      v28 = v19;
      goto LABEL_34;
    }
    IopExceptionCleanupEx((ULONG_PTR)v17, v33, 0LL, v7, (*v52 & 2) != 0);
    if ( v19 )
      ObfDereferenceObject(v19);
    return -1073741811;
  }
  return result;
}
