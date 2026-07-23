/*
 * XREFs of NtQueryVolumeInformationFile @ 0x140957060
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x140934634 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x140954FEC (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x140957B7C (PfSnQueryVolumeInfo.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopFileObjectRevoked @ 0x140405E80 (IopFileObjectRevoked.c)
 *     IopGetMountFlag @ 0x140469480 (IopGetMountFlag.c)
 *     IopGetDriverPathInformation @ 0x1405933C8 (IopGetDriverPathInformation.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140957634 (IopSynchronousApiServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r10
  __int64 v9; // rbx
  ULONG v10; // eax
  __int64 v11; // rcx
  _KPROCESS *Process; // rax
  __int16 v13; // cx
  bool v14; // al
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  ACCESS_MASK v18; // edx
  int v19; // ebx
  char *v20; // rdi
  NTSTATUS result; // eax
  _DWORD *v22; // r14
  int v23; // esi
  bool v24; // si
  struct _KTHREAD *v25; // rax
  volatile __int32 *v26; // rbx
  _QWORD *v27; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 Irp; // rax
  IRP *v30; // rbx
  PIO_STATUS_BLOCK v31; // rax
  struct _KEVENT *v32; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v34; // rax
  char v35; // di
  unsigned __int8 v36; // r14
  int MountFlag; // ecx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // eax
  struct _KEVENT *Pool2; // rax
  _BYTE *v43; // rsi
  NTSTATUS DriverPathInformation; // eax
  char v45; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 v46; // [rsp+41h] [rbp-77h]
  bool v47; // [rsp+42h] [rbp-76h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  NTSTATUS v49; // [rsp+50h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  _BYTE *v52; // [rsp+68h] [rbp-50h]
  char *v53; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *v54; // [rsp+78h] [rbp-40h]
  __int128 v55; // [rsp+80h] [rbp-38h] BYREF

  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v46 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= 0x10 )
      return -1073741821;
    v9 = FsInformationClass;
    v10 = *((unsigned __int8 *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v10 )
      return -1073741821;
    if ( Length < v10 )
      return -1073741820;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v11 = (__int64)IoStatusBlock;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    Process = CurrentThread->ApcState.Process;
    v14 = 0;
    if ( Process[1].ReadyTime )
    {
      v13 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v13 == 332 || v13 == 452 )
        v14 = 1;
    }
    v47 = v14;
    if ( v14 )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v46;
    }
    else if ( Length )
    {
      v15 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (unsigned __int64)FsInformation + Length - 1;
      if ( (unsigned __int64)FsInformation > v16 || v16 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
    }
  }
  else
  {
    v9 = FsInformationClass;
  }
  v18 = IopQueryFsOperationAccess[v9];
  Object = 0LL;
  v19 = ObReferenceObjectByHandle(FileHandle, v18, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v20 = (char *)Object;
  BugCheckParameter2 = (ULONG_PTR)Object;
  if ( v19 < 0 )
    return v19;
  if ( IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObject(v20);
    v19 = -1073739504;
  }
  if ( v19 < 0 )
    return v19;
  v22 = v20 + 80;
  v53 = v20 + 80;
  v23 = *((_DWORD *)v20 + 20);
  if ( (v23 & 0x800) != 0 )
  {
    if ( FsInformationClass != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v20);
      return -1073741808;
    }
  }
  else if ( FsInformationClass != FileFsDeviceInformation )
  {
    goto LABEL_32;
  }
  if ( (v23 & 0x800) == 0 && *(_DWORD *)(*((_QWORD *)v20 + 1) + 72LL) == 20 )
  {
LABEL_32:
    if ( (v23 & 2) != 0 )
    {
      v24 = (v23 & 4) != 0;
      v25 = KeGetCurrentThread();
      --v25->KernelApcDisable;
      v26 = (volatile __int32 *)Object;
      v27 = KeAbPreAcquire((__int64)Object + 128, 0LL);
      v45 = 0;
      if ( _InterlockedExchange(v26 + 29, 1) )
      {
        v20 = (char *)Object;
        v19 = IopWaitAndAcquireFileObjectLock((_DWORD)Object, v46, v24, (_DWORD)v27, (__int64)&v45);
      }
      else
      {
        if ( v27 )
          *((_BYTE *)v27 + 10) = 1;
        v20 = (char *)Object;
        PsReferenceSiloContext(Object);
        v19 = 0;
      }
      if ( v45 )
      {
LABEL_70:
        ObfDereferenceObject(v20);
        return v19;
      }
      v45 = 1;
    }
    else
    {
      v45 = 0;
    }
    if ( FsInformationClass != FileFsDriverPathInformation )
    {
      IopResetEvent((__int64)v20);
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v20);
      if ( (*v22 & 2) == 0 )
      {
        Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x76456F49u);
        P = Pool2;
        if ( !Pool2 )
          goto LABEL_63;
        KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      }
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
      v30 = (IRP *)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v20;
        *(_QWORD *)(Irp + 152) = v54;
        *(_BYTE *)(Irp + 64) = v46;
        v55 = 0LL;
        if ( v45 )
        {
          v31 = IoStatusBlock;
          v32 = 0LL;
        }
        else
        {
          *(_DWORD *)(Irp + 16) = 4;
          v31 = (PIO_STATUS_BLOCK)&v55;
          v32 = (struct _KEVENT *)P;
        }
        v30->UserEvent = v32;
        v30->UserIosb = v31;
        v30->Overlay.AllocationSize.QuadPart = 0LL;
        CurrentStackLocation = v30->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MajorFunction = 10;
        CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter2;
        v30->UserBuffer = FsInformation;
        v30->AssociatedIrp.MasterIrp = 0LL;
        v30->MdlAddress = 0LL;
        v34 = ExAllocatePool2(0x41uLL, Length, 0x42536F49u);
        v30->AssociatedIrp.MasterIrp = (struct _IRP *)v34;
        if ( v34 )
        {
          v30->Flags |= 0x870u;
          CurrentStackLocation[-1].Parameters.Read.Length = Length;
          CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
          v35 = v45;
          v36 = v46;
          result = IopSynchronousServiceTail(RelatedDeviceObject, (__int64)v30, BugCheckParameter2, 1, v46, v45, 2u);
          if ( !v35 )
            return IopSynchronousApiServiceTail((unsigned int)result, P, v30, v36, &v55, IoStatusBlock);
        }
        else
        {
          IopExceptionCleanupEx(BugCheckParameter2, v30, 0LL, P, (*(_DWORD *)(BugCheckParameter2 + 80) & 2) != 0);
          return -1073741670;
        }
        return result;
      }
      if ( (*v22 & 2) == 0 )
        ExFreePoolWithTag(P, 0);
      if ( (*v22 & 2) != 0 )
        IopReleaseFileObjectLock((ULONG_PTR)v20);
LABEL_63:
      ObfDereferenceObject(v20);
      return -1073741670;
    }
    v52 = 0LL;
    v43 = (_BYTE *)ExAllocatePool2(0x61uLL, Length, 0x42536F49u);
    v52 = v43;
    memmove(v43, FsInformation, Length);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v20, (__int64)v43, Length);
    v19 = DriverPathInformation;
    v49 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *v43;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( v43 )
      ExFreePoolWithTag(v43, 0);
    if ( (*v22 & 2) != 0 )
      IopReleaseFileObjectLock((ULONG_PTR)v20);
    goto LABEL_70;
  }
  MountFlag = 0;
  v38 = *((_QWORD *)v20 + 1);
  v39 = *(_QWORD *)(v38 + 56);
  if ( v39 )
  {
    v40 = *((_QWORD *)v20 + 2);
    if ( v40 == v39 )
    {
      MountFlag = *(_WORD *)(v40 + 4) & 1;
      v20 = (char *)Object;
    }
    else
    {
      MountFlag = IopGetMountFlag(*((_QWORD *)v20 + 1));
    }
  }
  if ( Length < 8 )
  {
    ObfDereferenceObject(v20);
    return -1073741820;
  }
  else
  {
    *(_DWORD *)FsInformation = *(_DWORD *)(v38 + 72);
    v41 = *(_DWORD *)(v38 + 52);
    *((_DWORD *)FsInformation + 1) = v41;
    if ( MountFlag )
      *((_DWORD *)FsInformation + 1) = v41 | 0x20;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 8LL;
    v49 = 0;
    ObfDereferenceObject(v20);
    return 0;
  }
}
