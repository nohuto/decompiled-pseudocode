/*
 * XREFs of IopCloseFile @ 0x140845AF0
 * Callers:
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x140252C50 (IopDequeueIrpFromThread.c)
 *     IopAllocateIrpMustSucceed @ 0x140253750 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IopResetEvent @ 0x1402A1570 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x1402A1E80 (IoGetAttachedDevice.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IopCloseFileObjectExtension @ 0x1403757D0 (IopCloseFileObjectExtension.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IopSetLockOperationProcess @ 0x140432070 (IopSetLockOperationProcess.c)
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x1409E2DF0 (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x140ABF604 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x140B99470 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140B997F8 (VfFastIoSnapState.c)
 */

int __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  int result; // eax
  int v7; // r15d
  _QWORD *FileObjectExtension; // rax
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rsi
  bool v12; // zf
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v14; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  struct _KTHREAD *v16; // rax
  __int64 *v17; // rax
  ULONG_PTR FastIoUnlockAll; // rbp
  struct _DRIVER_OBJECT *DriverObject; // rdi
  void *v20; // rdi
  char v21; // r14
  IRP *v22; // rdi
  struct _IO_STACK_LOCATION *v23; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v25; // r13
  int v26; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v28; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v31; // rax
  char v32[8]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  char v35; // [rsp+A0h] [rbp+18h] BYREF

  result = 0;
  v7 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( a3 == 1 )
  {
    FileObjectExtension = a2->FileObjectExtension;
    if ( FileObjectExtension )
      v9 = FileObjectExtension[3];
    else
      v9 = 0LL;
    v10 = a2->FileObjectExtension;
    if ( v10 )
      v11 = v10[5];
    else
      v11 = 0LL;
    if ( a4 == 1 )
    {
      if ( (a2->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(a2);
      v25 = AttachedDevice;
      v26 = a2->Flags | 0x40000;
      a2->Flags = v26;
      if ( a1 && (v26 & 2) != 0 )
      {
        v7 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v28 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((_DWORD)a2, 0, 0, (_DWORD)v28, (__int64)v32) )
            goto LABEL_47;
        }
        if ( v28 )
          *((_BYTE *)v28 + 10) = 1;
        PsReferenceSiloContext(a2);
      }
LABEL_47:
      if ( v11 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)a2);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v25, (unsigned __int8)v25->StackSize);
      MustSucceed->Tail.Overlay.OriginalFileObject = a2;
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      MustSucceed->UserIosb = &MustSucceed->IoStatus;
      CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
      MustSucceed->RequestorMode = 0;
      MustSucceed->UserEvent = &Event;
      MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
      MustSucceed->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      IopQueueThreadIrp((__int64)MustSucceed);
      v31 = KeGetCurrentThread();
      ++v31->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v25, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
      IoFreeIrp(MustSucceed);
      if ( v7 )
        IopReleaseFileObjectLock((ULONG_PTR)a2);
      IopCleanupProcessResources(a2, a1, v9);
      return (unsigned int)IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      IopCleanupProcessResources(a2, a1, v9);
      result = IopSetLockOperationProcess((__int64)a2, a1, 1);
      if ( result >= 0 )
      {
        v12 = (a2->Flags & 0x800) == 0;
        v33 = 0LL;
        if ( v12 )
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
        else
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        v14 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v7 = 1;
          while ( 1 )
          {
            v16 = KeGetCurrentThread();
            --v16->KernelApcDisable;
            v17 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((_DWORD)a2, 0, 0, (_DWORD)v17, (__int64)&v35) )
              goto LABEL_22;
          }
          if ( v17 )
            *((_BYTE *)v17 + 10) = 1;
          PsReferenceSiloContext(a2);
        }
LABEL_22:
        if ( !FastIoDispatch )
          goto LABEL_31;
        FastIoUnlockAll = (ULONG_PTR)FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_31;
        if ( (MmVerifierData & 0x10) != 0 && (DriverObject = v14->DriverObject, MmIsDriverVerifying(DriverObject)) )
          v20 = (void *)VfFastIoSnapState(DriverObject);
        else
          v20 = 0LL;
        result = guard_dispatch_icall_no_overrides(a2);
        v21 = result;
        if ( v20 )
          result = VfFastIoCheckState(v20, FastIoUnlockAll);
        if ( !v21 )
        {
LABEL_31:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v22 = (IRP *)IopAllocateIrpMustSucceed((__int64)v14, (unsigned __int8)v14->StackSize);
          v22->Tail.Overlay.OriginalFileObject = a2;
          v22->Tail.Overlay.Thread = KeGetCurrentThread();
          v22->UserIosb = &v22->IoStatus;
          v23 = v22->Tail.Overlay.CurrentStackLocation;
          v22->RequestorMode = 0;
          v22->UserEvent = &Event;
          v22->Flags = 4100;
          v22->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v23[-1].MajorFunction = 785;
          v23[-1].FileObject = a2;
          PsReferenceSiloContext(a2);
          IopQueueThreadIrp((__int64)v22);
          result = IofCallDriver(v14, v22);
          if ( result == 259 )
            result = KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v7 == 1 )
          return IopReleaseFileObjectLock((ULONG_PTR)a2);
      }
    }
  }
  return result;
}
