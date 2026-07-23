/*
 * XREFs of IoSetInformation @ 0x1407123B0
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1403EF264 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x1407EE36C (MiAttemptPageFileExtension.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140712BD4 (IopSetFileMemoryPartitionInformation.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x140955124 (IopOpenLinkOrRenameTarget.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140A0B2A4 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x140A76074 (IopCancelAlertedRequest.c)
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
  IRP *v19; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v21; // r15
  ULONG v22; // eax
  ULONG Flags; // edx
  ULONG v24; // eax
  ULONG v25; // edx
  unsigned int v26; // eax
  ULONG v27; // edx
  int FinalStatus; // esi
  CCHAR v29; // dl
  char v30; // al
  char v31; // [rsp+30h] [rbp-40h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v34; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  char v36; // [rsp+A0h] [rbp+30h] BYREF
  ULONG v37; // [rsp+B0h] [rbp+40h]

  v37 = Length;
  v4 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  v34 = 0LL;
  v31 = 0;
  PsReferenceSiloContext(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
    v36 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      LOBYTE(v12) = v10;
      v13 = IopWaitAndAcquireFileObjectLock((_DWORD)FileObject, 0, v12, (_DWORD)v11, (__int64)&v36);
      if ( v36 )
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
  v36 = v4;
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
        v31 = 1;
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
  v19 = (IRP *)Irp;
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
  v21 = *(_QWORD *)(Irp + 184);
  v22 = v37;
  v19->UserIosb = (PIO_STATUS_BLOCK)&v34;
  *(_BYTE *)(v21 - 72) = 6;
  *(_QWORD *)(v21 - 24) = FileObject;
  v19->Flags |= 0x10u;
  v19->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  *(_DWORD *)(v21 - 64) = v22;
  *(_DWORD *)(v21 - 56) = FileInformationClass;
  if ( v5 )
  {
    *(_BYTE *)(v21 - 70) |= 1u;
  }
  else if ( v31 )
  {
    *(_BYTE *)(v21 - 70) |= 1u;
  }
  IopQueueThreadIrp((__int64)v19);
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
      v24 = Flags;
      v25 = Flags | 0x20;
      v26 = v24 & 0xFFFFFFDF;
      if ( (*(_BYTE *)FileInformation & 4) == 0 )
        v25 = v26;
      FileObject->Flags = v25;
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
      {
        if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
          v27 = v25 | 4;
        else
          v27 = v25 & 0xFFFFFFFB;
        FileObject->Flags = v27;
      }
      --v19->CurrentLocation;
      FinalStatus = 0;
      --v19->Tail.Overlay.CurrentStackLocation;
      v29 = 0;
      v19->IoStatus.Status = 0;
      v19->IoStatus.Information = 0LL;
      goto LABEL_60;
    case FileRenameInformation:
      goto LABEL_53;
    case FileRenameInformationEx:
LABEL_52:
      v30 = *(_BYTE *)FileInformation & 1;
LABEL_54:
      *(_BYTE *)(v21 - 40) = v30;
LABEL_55:
      if ( *((_WORD *)FileInformation + 10) == 92 || *((_QWORD *)FileInformation + 1) )
      {
        FinalStatus = IopOpenLinkOrRenameTarget(&Handle, v19, FileInformation, FileObject);
        if ( FinalStatus < 0 )
        {
          v29 = 2;
          goto LABEL_59;
        }
      }
LABEL_61:
      FinalStatus = IofCallDriver(DeviceObject, v19);
      goto LABEL_62;
    case FileLinkInformation:
LABEL_53:
      v30 = *(_BYTE *)FileInformation;
      goto LABEL_54;
    case FileLinkInformationEx:
      goto LABEL_52;
    case FileMoveClusterInformation:
      *(_DWORD *)(v21 - 40) = *(_DWORD *)FileInformation;
      goto LABEL_55;
  }
  if ( FileInformationClass != FileMemoryPartitionInformation )
    goto LABEL_61;
  FinalStatus = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, v37);
  v19->IoStatus.Status = FinalStatus;
  v29 = 0;
  v19->IoStatus.Information = 0LL;
LABEL_59:
  --v19->CurrentLocation;
  --v19->Tail.Overlay.CurrentStackLocation;
LABEL_60:
  IofCompleteRequest(v19, v29);
LABEL_62:
  if ( v36 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v19);
      FinalStatus = FileObject->FinalStatus;
    }
    IopReleaseFileObjectLock((ULONG_PTR)FileObject);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v34;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
