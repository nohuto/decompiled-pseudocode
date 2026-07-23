/*
 * XREFs of NtUnlockFile @ 0x14095AC90
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x1403B3B80 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140957634 (IopSynchronousApiServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  unsigned __int8 v8; // r12
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v10; // rbx
  __int64 v11; // rcx
  ULONG *p_Flags; // r15
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v14; // rsi
  struct _DRIVER_OBJECT *DriverObject; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  ULONG_PTR FastIoUnlockSingle; // rdi
  void *v18; // r14
  char v19; // r12
  struct _KEVENT *Pool2; // rax
  struct _KEVENT *v21; // rdi
  bool v22; // di
  struct _KTHREAD *v23; // rax
  volatile __int32 *v24; // rbx
  _QWORD *v25; // rax
  NTSTATUS v26; // edi
  __int64 Irp; // rax
  IRP *v28; // r14
  char v29; // r15
  PIO_STATUS_BLOCK v30; // rax
  struct _KEVENT *v31; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  LONGLONG *v33; // rax
  char v34; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+41h] [rbp-77h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG v38; // [rsp+58h] [rbp-60h]
  LONGLONG QuadPart; // [rsp+60h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  __int128 v42; // [rsp+78h] [rbp-40h]
  unsigned int v43[6]; // [rsp+88h] [rbp-30h] BYREF

  QuadPart = 0LL;
  v38 = 0LL;
  HandleInformation = 0LL;
  *(_OWORD *)v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             &Object,
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v10 = (struct _FILE_OBJECT *)Object;
  BugCheckParameter2 = (ULONG_PTR)Object;
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (BYTE4(HandleInformation) & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
        v11 = (__int64)IoStatusBlock;
      *(_DWORD *)v11 = *(_DWORD *)v11;
      if ( ((unsigned __int8)ByteOffset & 3) != 0
        || (QuadPart = ByteOffset->QuadPart, ((unsigned __int8)Length & 3) != 0) )
      {
        ExRaiseDatatypeMisalignment();
      }
      v38 = Length->QuadPart;
      v10 = (struct _FILE_OBJECT *)Object;
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v38 = Length->QuadPart;
    }
    p_Flags = &v10->Flags;
    if ( (v10->Flags & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v10->DeviceObject);
    else
      AttachedDevice = IoGetRelatedDeviceObject(v10);
    v14 = AttachedDevice;
    DriverObject = AttachedDevice->DriverObject;
    FastIoDispatch = DriverObject->FastIoDispatch;
    if ( FastIoDispatch )
    {
      FastIoUnlockSingle = (ULONG_PTR)FastIoDispatch->FastIoUnlockSingle;
      if ( FastIoUnlockSingle )
      {
        v42 = 0LL;
        if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
          v18 = (void *)VfFastIoSnapState(DriverObject);
        else
          v18 = 0LL;
        v19 = guard_dispatch_icall_no_overrides(v10, &QuadPart);
        if ( v18 )
          VfFastIoCheckState(v18, FastIoUnlockSingle);
        if ( v19 )
        {
          *(_OWORD *)&IoStatusBlock->Status = v42;
          ObfDereferenceObject(v10);
          return v42;
        }
        v8 = PreviousMode;
      }
    }
    if ( (*p_Flags & 2) != 0 )
    {
      v22 = (*p_Flags & 4) != 0;
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v24 = (volatile __int32 *)Object;
      v25 = KeAbPreAcquire((__int64)Object + 128, 0LL);
      v34 = 0;
      if ( _InterlockedExchange(v24 + 29, 1) )
      {
        v10 = (struct _FILE_OBJECT *)Object;
        v26 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v8, v22, (__int64)v25, &v34);
      }
      else
      {
        if ( v25 )
          *((_BYTE *)v25 + 10) = 1;
        v10 = (struct _FILE_OBJECT *)Object;
        PsReferenceSiloContext(Object);
        v26 = 0;
      }
      if ( v34 )
      {
        ObfDereferenceObject(v10);
        return v26;
      }
      v34 = 1;
      v21 = 0LL;
      HandleInformation = 0LL;
    }
    else
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x76456F49u);
      v21 = Pool2;
      HandleInformation = Pool2;
      if ( !Pool2 )
      {
LABEL_25:
        ObfDereferenceObject(v10);
        return -1073741670;
      }
      KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      v34 = 0;
    }
    IopResetEvent((__int64)v10);
    Irp = IopAllocateIrpExReturn((__int64)v14, (unsigned __int8)v14->StackSize, 0LL);
    v28 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      if ( (*p_Flags & 2) != 0 )
        IopReleaseFileObjectLock((ULONG_PTR)v10);
      goto LABEL_25;
    }
    *(_QWORD *)(Irp + 192) = v10;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = v8;
    v29 = v34;
    if ( v34 )
    {
      v30 = IoStatusBlock;
      v31 = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      v30 = (PIO_STATUS_BLOCK)v43;
      v31 = v21;
    }
    v28->UserEvent = v31;
    v28->UserIosb = v30;
    v28->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v28->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter2;
    v33 = (LONGLONG *)ExAllocatePool2(0x61uLL, 8uLL, 0x654C6F49u);
    *v33 = v38;
    v28->Tail.Overlay.AuxiliaryBuffer = (PCHAR)v33;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v33;
    CurrentStackLocation[-1].Parameters.Create.Options = Key;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    result = IopSynchronousServiceTail(v14, (__int64)v28, BugCheckParameter2, 0, v8, v29, 2u);
    if ( !v29 )
      return IopSynchronousApiServiceTail(result, v21, v28, v8, v43, IoStatusBlock);
  }
  return result;
}
