/*
 * XREFs of NtLockFile @ 0x1409D2BE0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     IopDecrementCompletionContextUsageCount @ 0x14027AFD4 (IopDecrementCompletionContextUsageCount.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     IoSetIoCompletionEx @ 0x14031C620 (IoSetIoCompletionEx.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     IopFileObjectRevoked @ 0x14040DC30 (IopFileObjectRevoked.c)
 *     IopSetLockOperationProcess @ 0x14042AC50 (IopSetLockOperationProcess.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x14043E370 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
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
  _BYTE *v14; // rbx
  __int64 v15; // rdx
  char v16; // dl
  _KPROCESS *Process; // r8
  NTSTATUS result; // eax
  __int16 v19; // cx
  struct _IO_STATUS_BLOCK *Status; // rdx
  struct _FILE_OBJECT *v21; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  struct _DRIVER_OBJECT *DriverObject; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  ULONG_PTR FastIoLock; // rdi
  void *v26; // r14
  BOOLEAN v27; // r12
  ULONG v28; // r13d
  char v29; // r15
  PRKEVENT v30; // rsi
  ULONG *p_Flags; // rdi
  unsigned __int8 v32; // r15
  IRP *v33; // rax
  __int64 v34; // r14
  bool v35; // r14
  struct _KTHREAD *v36; // rax
  volatile __int32 *v37; // rbx
  _QWORD *v38; // r9
  NTSTATUS v39; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v41; // al
  LONGLONG *Pool2; // rax
  int v43; // eax
  int v44; // edx
  char v45; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int8 v46; // [rsp+51h] [rbp-97h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-88h]
  __int128 v49; // [rsp+68h] [rbp-80h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-70h] BYREF
  LONGLONG v51; // [rsp+80h] [rbp-68h] BYREF
  PIRP Irp; // [rsp+88h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-58h] BYREF
  PVOID v54; // [rsp+98h] [rbp-50h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-40h]
  struct _KTHREAD *v57; // [rsp+B0h] [rbp-38h]

  v11 = 0;
  Eventa = 0LL;
  QuadPart = 0LL;
  v51 = 0LL;
  HandleInformation = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v46 = PreviousMode;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(
          FileHandle,
          0,
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          &HandleInformation);
  v14 = Object;
  if ( v13 >= 0 && IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObject(v14);
    v13 = -1073739504;
  }
  if ( v13 < 0 )
    return v13;
  if ( PreviousMode )
  {
    if ( (HandleInformation.GrantedAccess & 3) == 0 )
    {
      ObfDereferenceObject(v14);
      return -1073741790;
    }
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v15 = (__int64)IoStatusBlock;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = *((_BYTE *)Object + 80) & 2;
    v57 = KeGetCurrentThread();
    Process = v57->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v19 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( (v19 == 332 || v19 == 452) && !v16 )
      {
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
        Status->Status = Status->Status;
        IoStatusBlock = Status;
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      }
    }
    if ( ((unsigned __int8)ByteOffset & 3) != 0 || (QuadPart = ByteOffset->QuadPart, ((unsigned __int8)Length & 3) != 0) )
      ExRaiseDatatypeMisalignment();
    v51 = Length->QuadPart;
    v14 = Object;
    if ( *((_QWORD *)Object + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741811;
    }
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v51 = Length->QuadPart;
  }
  v14[72] = 1;
  v21 = (struct _FILE_OBJECT *)Object;
  result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0);
  if ( result >= 0 )
  {
    if ( Event )
    {
      v54 = 0LL;
      v39 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v54, 0LL);
      Eventa = (PRKEVENT)v54;
      if ( v39 >= 0 )
        KeResetEvent((PRKEVENT)v54);
    }
    RelatedDeviceObject = IoGetRelatedDeviceObject(v21);
    DriverObject = RelatedDeviceObject->DriverObject;
    FastIoDispatch = DriverObject->FastIoDispatch;
    if ( FastIoDispatch && (FastIoLock = (ULONG_PTR)FastIoDispatch->FastIoLock) != 0 )
    {
      v49 = 0LL;
      if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
        v26 = (void *)VfFastIoSnapState(DriverObject);
      else
        v26 = 0LL;
      v27 = ExclusiveLock;
      v28 = Key;
      v29 = guard_dispatch_icall_no_overrides(v21, &QuadPart, &v51, CurrentThread->ApcState.Process);
      if ( v26 )
        VfFastIoCheckState(v26, FastIoLock);
      if ( v29 )
      {
        if ( ((unsigned __int8)ApcRoutine & 1) != 0 )
        {
          HIDWORD(IoStatusBlock->Pointer) = DWORD2(v49);
          IoStatusBlock->Status = v49;
        }
        else
        {
          *(_OWORD *)&IoStatusBlock->Status = v49;
        }
        v30 = Eventa;
        if ( Eventa )
        {
          if ( (v21->Flags & 0x8000000) == 0 )
            KeSetEvent(Eventa, 0, 0);
          ObfDereferenceObject(v30);
        }
        if ( v21->CompletionContext && ApcContext && (v21->Flags & 0x2000000) == 0 )
        {
          v55 = 0LL;
          Irp = 0LL;
          v45 = 0;
          IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v21, &v45, &v55, &Irp);
          if ( v55 )
          {
            v43 = IoSetIoCompletionEx(v55, (__int64)Irp, (__int64)ApcContext, v49, *((__int64 *)&v49 + 1), 1u, 0LL);
            v44 = v49;
            if ( v43 < 0 )
              v44 = -1073741670;
            LODWORD(v49) = v44;
          }
          if ( v45 )
            IopDecrementCompletionContextUsageCount((ULONG_PTR)v21);
        }
        ObfDereferenceObject(v21);
        return v49;
      }
      v11 = 0;
    }
    else
    {
      v27 = ExclusiveLock;
      v28 = Key;
    }
    p_Flags = &v21->Flags;
    if ( (v21->Flags & 2) == 0 )
    {
      v32 = 0;
      goto LABEL_44;
    }
    v35 = (v21->Flags & 4) != 0;
    v36 = KeGetCurrentThread();
    --v36->KernelApcDisable;
    v37 = (volatile __int32 *)Object;
    v38 = KeAbPreAcquire((__int64)Object + 128, 0LL);
    v45 = 0;
    if ( _InterlockedExchange(v37 + 29, 1) )
    {
      v21 = (struct _FILE_OBJECT *)Object;
      v11 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v46, v35, v38, &v45);
    }
    else
    {
      if ( v38 )
        *((_BYTE *)v38 + 10) = 1;
      v21 = (struct _FILE_OBJECT *)Object;
      PsReferenceSiloContext(Object);
    }
    if ( !v45 )
    {
      v32 = 1;
LABEL_44:
      IopResetEvent((__int64)v21);
      v33 = (IRP *)IopAllocateIrpExReturn(
                     (__int64)RelatedDeviceObject,
                     (unsigned __int8)RelatedDeviceObject->StackSize,
                     v32 ^ 1u);
      v34 = (__int64)v33;
      Irp = v33;
      if ( v33 )
      {
        v33->Tail.Overlay.OriginalFileObject = v21;
        v33->Tail.Overlay.Thread = CurrentThread;
        v33->RequestorMode = v46;
        v33->UserEvent = Eventa;
        v33->UserIosb = IoStatusBlock;
        v33->Overlay.AllocationSize.QuadPart = (LONGLONG)ApcRoutine;
        v33->Overlay.AsynchronousParameters.UserApcContext = ApcContext;
        CurrentStackLocation = v33->Tail.Overlay.CurrentStackLocation;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 273;
        CurrentStackLocation[-1].FileObject = v21;
        CurrentStackLocation[-1].Flags = 0;
        v41 = 0;
        if ( FailImmediately )
        {
          CurrentStackLocation[-1].Flags = 1;
          v41 = 1;
        }
        if ( v27 )
          CurrentStackLocation[-1].Flags = v41 | 2;
        CurrentStackLocation[-1].Parameters.Create.Options = v28;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
        Pool2 = (LONGLONG *)ExAllocatePool2(0x61uLL);
        *Pool2 = v51;
        *(_QWORD *)(v34 + 160) = Pool2;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
        return IopSynchronousServiceTail(RelatedDeviceObject, v34, (__int64)v21, 0, v46, v32, 2u);
      }
      else
      {
        if ( Eventa )
          ObfDereferenceObject(Eventa);
        if ( (*p_Flags & 2) != 0 )
          IopReleaseFileObjectLock((ULONG_PTR)v21);
        ObfDereferenceObject(v21);
        return -1073741670;
      }
    }
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    ObfDereferenceObject(v21);
    return v11;
  }
  return result;
}
