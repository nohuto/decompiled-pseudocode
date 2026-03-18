/*
 * XREFs of IoSetInformation @ 0x140714820
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1403F9154 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x1407EDD9C (MiAttemptPageFileExtension.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140715044 (IopSetFileMemoryPartitionInformation.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x14096C6C4 (IopOpenLinkOrRenameTarget.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140A0C064 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x140A7BD74 (IopCancelAlertedRequest.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  char v4; // r15
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  bool v10; // bl
  _QWORD *v11; // rax
  int v12; // r8d
  NTSTATUS v13; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 Irp; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  IRP *v21; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v23; // r15
  ULONG v24; // eax
  ULONG Flags; // edx
  ULONG v26; // eax
  ULONG v27; // edx
  unsigned int v28; // eax
  ULONG v29; // edx
  int FinalStatus; // esi
  CCHAR v31; // dl
  char v32; // al
  char v33; // [rsp+30h] [rbp-40h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v36; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  char v38; // [rsp+A0h] [rbp+30h] BYREF
  ULONG v39; // [rsp+B0h] [rbp+40h]

  v39 = Length;
  v4 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  v36 = 0LL;
  v33 = 0;
  PsReferenceSiloContext(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
    v38 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      LOBYTE(v12) = v10;
      v13 = IopWaitAndAcquireFileObjectLock((_DWORD)FileObject, 0, v12, (_DWORD)v11, (__int64)&v38);
      if ( v38 )
      {
        ObfDereferenceObject(FileObject);
        return v13;
      }
    }
    else
    {
      if ( v11 )
        *((_BYTE *)v11 + 10) = 1;
      PsReferenceSiloContext(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v4 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  v38 = v4;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  if ( FileInformationClass == FileRenameInformationBypassAccessCheck )
  {
    FileInformationClass = FileRenameInformation;
  }
  else if ( FileInformationClass == FileRenameInformationExBypassAccessCheck )
  {
    FileInformationClass = FileRenameInformationEx;
  }
  else if ( FileInformationClass == FileLinkInformationBypassAccessCheck )
  {
    FileInformationClass = FileLinkInformation;
  }
  else
  {
    if ( FileInformationClass != FileLinkInformationExBypassAccessCheck )
    {
      if ( FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
      {
        FileInformationClass = FileCaseSensitiveInformation;
        v33 = 1;
      }
      goto LABEL_21;
    }
    FileInformationClass = FileLinkInformationEx;
  }
  v5 = 1;
LABEL_21:
  LOBYTE(v16) = RelatedDeviceObject->StackSize;
  LOBYTE(v17) = v4 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v16, v17);
  v21 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup((ULONG_PTR)FileObject, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(Irp + 64) = 0;
  if ( v4 )
  {
    *(_BYTE *)(Irp + 71) |= 2u;
    p_Event = 0LL;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    p_Event = &Event;
  }
  *(_QWORD *)(Irp + 80) = p_Event;
  v23 = *(_QWORD *)(Irp + 184);
  v24 = v39;
  v21->UserIosb = (PIO_STATUS_BLOCK)&v36;
  *(_BYTE *)(v23 - 72) = 6;
  *(_QWORD *)(v23 - 24) = FileObject;
  v21->Flags |= 0x10u;
  v21->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  *(_DWORD *)(v23 - 64) = v24;
  *(_DWORD *)(v23 - 56) = FileInformationClass;
  if ( v5 )
  {
    *(_BYTE *)(v23 - 70) |= 1u;
  }
  else if ( v33 )
  {
    *(_BYTE *)(v23 - 70) |= 1u;
  }
  IopQueueThreadIrp((__int64)v21, v19, v20);
  switch ( FileInformationClass )
  {
    case FileModeInformation:
      Flags = FileObject->Flags;
      if ( (Flags & 8) == 0 )
      {
        if ( (*(_DWORD *)FileInformation & 2) != 0 )
          Flags |= 0x10u;
        else
          Flags &= ~0x10u;
        FileObject->Flags = Flags;
      }
      v26 = Flags;
      v27 = Flags | 0x20;
      v28 = v26 & 0xFFFFFFDF;
      if ( (*(_BYTE *)FileInformation & 4) == 0 )
        v27 = v28;
      FileObject->Flags = v27;
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
      {
        if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
          v29 = v27 | 4;
        else
          v29 = v27 & 0xFFFFFFFB;
        FileObject->Flags = v29;
      }
      --v21->CurrentLocation;
      FinalStatus = 0;
      --v21->Tail.Overlay.CurrentStackLocation;
      v31 = 0;
      v21->IoStatus.Status = 0;
      v21->IoStatus.Information = 0LL;
      goto LABEL_60;
    case FileRenameInformation:
      goto LABEL_53;
    case FileRenameInformationEx:
LABEL_52:
      v32 = *(_BYTE *)FileInformation & 1;
LABEL_54:
      *(_BYTE *)(v23 - 40) = v32;
LABEL_55:
      if ( *((_WORD *)FileInformation + 10) == 92 || *((_QWORD *)FileInformation + 1) )
      {
        FinalStatus = IopOpenLinkOrRenameTarget(&Handle, v21, FileInformation, FileObject);
        if ( FinalStatus < 0 )
        {
          v31 = 2;
          goto LABEL_59;
        }
      }
LABEL_61:
      FinalStatus = IofCallDriver(DeviceObject, v21);
      goto LABEL_62;
    case FileLinkInformation:
LABEL_53:
      v32 = *(_BYTE *)FileInformation;
      goto LABEL_54;
    case FileLinkInformationEx:
      goto LABEL_52;
    case FileMoveClusterInformation:
      *(_DWORD *)(v23 - 40) = *(_DWORD *)FileInformation;
      goto LABEL_55;
  }
  if ( FileInformationClass != FileMemoryPartitionInformation )
    goto LABEL_61;
  FinalStatus = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, v39);
  v21->IoStatus.Status = FinalStatus;
  v31 = 0;
  v21->IoStatus.Information = 0LL;
LABEL_59:
  --v21->CurrentLocation;
  --v21->Tail.Overlay.CurrentStackLocation;
LABEL_60:
  IofCompleteRequest(v21, v31);
LABEL_62:
  if ( v38 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v21);
      FinalStatus = FileObject->FinalStatus;
    }
    IopReleaseFileObjectLock((ULONG_PTR)FileObject);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v36;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
