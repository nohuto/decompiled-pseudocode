/*
 * XREFs of NtLockFile @ 0x1409C2A10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IopDecrementCompletionContextUsageCount @ 0x140230564 (IopDecrementCompletionContextUsageCount.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IopFileObjectRevoked @ 0x140405E80 (IopFileObjectRevoked.c)
 *     IopSetLockOperationProcess @ 0x14041DE90 (IopSetLockOperationProcess.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x140433F90 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  NTSTATUS v11; // r15d
  KPROCESSOR_MODE PreviousMode; // r12
  int v13; // esi
  __int64 v14; // r9
  _BYTE *v15; // rbx
  __int64 v16; // rdx
  char v17; // dl
  _KPROCESS *Process; // r8
  NTSTATUS result; // eax
  __int16 v20; // cx
  struct _IO_STATUS_BLOCK *Status; // rdx
  struct _FILE_OBJECT *v22; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  struct _DRIVER_OBJECT *DriverObject; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  ULONG_PTR FastIoLock; // rdi
  void *v27; // r14
  BOOLEAN v28; // r12
  ULONG v29; // r13d
  char v30; // r15
  PRKEVENT v31; // rsi
  ULONG *p_Flags; // rdi
  char v33; // r15
  IRP *v34; // rax
  __int64 v35; // r14
  bool v36; // r14
  struct _KTHREAD *v37; // rax
  volatile __int32 *v38; // rbx
  _QWORD *v39; // r9
  NTSTATUS v40; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v42; // al
  LONGLONG *Pool2; // rax
  int v44; // eax
  int v45; // edx
  char v46; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int8 v47; // [rsp+51h] [rbp-97h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-88h]
  __int128 v50; // [rsp+68h] [rbp-80h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-70h] BYREF
  LONGLONG v52; // [rsp+80h] [rbp-68h]
  PIRP Irp; // [rsp+88h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-58h] BYREF
  PVOID v55; // [rsp+98h] [rbp-50h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-40h]
  struct _KTHREAD *v58; // [rsp+B0h] [rbp-38h]

  v11 = 0;
  Eventa = 0LL;
  QuadPart = 0LL;
  v52 = 0LL;
  HandleInformation = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v47 = PreviousMode;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(
          FileHandle,
          0,
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          &HandleInformation);
  v15 = Object;
  if ( v13 >= 0 && IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObject(v15);
    v13 = -1073739504;
  }
  if ( v13 < 0 )
    return v13;
  if ( PreviousMode )
  {
    if ( (HandleInformation.GrantedAccess & 3) == 0 )
    {
      ObfDereferenceObject(v15);
      return -1073741790;
    }
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v16 = (__int64)IoStatusBlock;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = *((_BYTE *)Object + 80) & 2;
    v58 = KeGetCurrentThread();
    Process = v58->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v20 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( (v20 == 332 || v20 == 452) && !v17 )
      {
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
        Status->Status = Status->Status;
        IoStatusBlock = Status;
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      }
    }
    if ( ((unsigned __int8)ByteOffset & 3) != 0 || (QuadPart = ByteOffset->QuadPart, ((unsigned __int8)Length & 3) != 0) )
      ExRaiseDatatypeMisalignment();
    v52 = Length->QuadPart;
    v15 = Object;
    if ( *((_QWORD *)Object + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741811;
    }
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v52 = Length->QuadPart;
  }
  v15[72] = 1;
  v22 = (struct _FILE_OBJECT *)Object;
  result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0LL, v14);
  if ( result >= 0 )
  {
    if ( Event )
    {
      v55 = 0LL;
      v40 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v55, 0LL);
      Eventa = (PRKEVENT)v55;
      if ( v40 >= 0 )
        KeResetEvent((PRKEVENT)v55);
    }
    RelatedDeviceObject = IoGetRelatedDeviceObject(v22);
    DriverObject = RelatedDeviceObject->DriverObject;
    FastIoDispatch = DriverObject->FastIoDispatch;
    if ( FastIoDispatch && (FastIoLock = (ULONG_PTR)FastIoDispatch->FastIoLock) != 0 )
    {
      v50 = 0LL;
      if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
        v27 = (void *)VfFastIoSnapState(DriverObject);
      else
        v27 = 0LL;
      v28 = ExclusiveLock;
      v29 = Key;
      v30 = guard_dispatch_icall_no_overrides(v22, &QuadPart);
      if ( v27 )
        VfFastIoCheckState(v27, FastIoLock);
      if ( v30 )
      {
        if ( ((unsigned __int8)ApcRoutine & 1) != 0 )
        {
          HIDWORD(IoStatusBlock->Pointer) = DWORD2(v50);
          IoStatusBlock->Status = v50;
        }
        else
        {
          *(_OWORD *)&IoStatusBlock->Status = v50;
        }
        v31 = Eventa;
        if ( Eventa )
        {
          if ( (v22->Flags & 0x8000000) == 0 )
            KeSetEvent(Eventa, 0, 0);
          ObfDereferenceObject(v31);
        }
        if ( v22->CompletionContext && ApcContext && (v22->Flags & 0x2000000) == 0 )
        {
          v56 = 0LL;
          Irp = 0LL;
          v46 = 0;
          IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v22, &v46, &v56, &Irp);
          if ( v56 )
          {
            v44 = IoSetIoCompletionEx(v56, (__int64)Irp, (__int64)ApcContext, v50, *((__int64 *)&v50 + 1), 1u, 0LL);
            v45 = v50;
            if ( v44 < 0 )
              v45 = -1073741670;
            LODWORD(v50) = v45;
          }
          if ( v46 )
            IopDecrementCompletionContextUsageCount((ULONG_PTR)v22);
        }
        ObfDereferenceObject(v22);
        return v50;
      }
      v11 = 0;
    }
    else
    {
      v28 = ExclusiveLock;
      v29 = Key;
    }
    p_Flags = &v22->Flags;
    if ( (v22->Flags & 2) == 0 )
    {
      v33 = 0;
      goto LABEL_44;
    }
    v36 = (v22->Flags & 4) != 0;
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    v38 = (volatile __int32 *)Object;
    v39 = KeAbPreAcquire((__int64)Object + 128, 0LL);
    v46 = 0;
    if ( _InterlockedExchange(v38 + 29, 1) )
    {
      v22 = (struct _FILE_OBJECT *)Object;
      v11 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v47, v36, (__int64)v39, &v46);
    }
    else
    {
      if ( v39 )
        *((_BYTE *)v39 + 10) = 1;
      v22 = (struct _FILE_OBJECT *)Object;
      PsReferenceSiloContext(Object);
    }
    if ( !v46 )
    {
      v33 = 1;
LABEL_44:
      IopResetEvent((__int64)v22);
      v34 = (IRP *)IopAllocateIrpExReturn(
                     (__int64)RelatedDeviceObject,
                     (unsigned __int8)RelatedDeviceObject->StackSize,
                     (unsigned __int8)v33 ^ 1u);
      v35 = (__int64)v34;
      Irp = v34;
      if ( v34 )
      {
        v34->Tail.Overlay.OriginalFileObject = v22;
        v34->Tail.Overlay.Thread = CurrentThread;
        v34->RequestorMode = v47;
        v34->UserEvent = Eventa;
        v34->UserIosb = IoStatusBlock;
        v34->Overlay.AllocationSize.QuadPart = (LONGLONG)ApcRoutine;
        v34->Overlay.AsynchronousParameters.UserApcContext = ApcContext;
        CurrentStackLocation = v34->Tail.Overlay.CurrentStackLocation;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 273;
        CurrentStackLocation[-1].FileObject = v22;
        CurrentStackLocation[-1].Flags = 0;
        v42 = 0;
        if ( FailImmediately )
        {
          CurrentStackLocation[-1].Flags = 1;
          v42 = 1;
        }
        if ( v28 )
          CurrentStackLocation[-1].Flags = v42 | 2;
        CurrentStackLocation[-1].Parameters.Create.Options = v29;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
        Pool2 = (LONGLONG *)ExAllocatePool2(0x61uLL, 8uLL, 0x654C6F49u);
        *Pool2 = v52;
        *(_QWORD *)(v35 + 160) = Pool2;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
        return IopSynchronousServiceTail(RelatedDeviceObject, v35, (__int64)v22, 0, v47, v33, 2u);
      }
      else
      {
        if ( Eventa )
          ObfDereferenceObject(Eventa);
        if ( (*p_Flags & 2) != 0 )
          IopReleaseFileObjectLock((ULONG_PTR)v22);
        ObfDereferenceObject(v22);
        return -1073741670;
      }
    }
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    ObfDereferenceObject(v22);
    return v11;
  }
  return result;
}
