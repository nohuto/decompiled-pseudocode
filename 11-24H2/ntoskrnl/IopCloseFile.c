/*
 * XREFs of IopCloseFile @ 0x140842070
 * Callers:
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x140253D60 (IopAllocateIrpMustSucceed.c)
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     IopCloseFileObjectExtension @ 0x1403C4780 (IopCloseFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x1403C4FC0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopSetLockOperationProcess @ 0x14042AC50 (IopSetLockOperationProcess.c)
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x1409E26D0 (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x140AC2D5C (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  _QWORD *FileObjectExtension; // rax
  __int64 v8; // r14
  _QWORD *v9; // rbx
  bool v10; // zf
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v12; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  struct _KTHREAD *v14; // rax
  _QWORD *v15; // rax
  ULONG_PTR FastIoUnlockAll; // r14
  struct _DRIVER_OBJECT *DriverObject; // rbx
  void *v18; // rbx
  char v19; // r12
  __int64 v20; // rdx
  IRP *v21; // rbx
  struct _KTHREAD *v22; // rcx
  struct _IO_STACK_LOCATION *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v27; // r13
  int v28; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  IRP *MustSucceed; // rbx
  struct _KTHREAD *v33; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KTHREAD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  char v40[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v41; // [rsp+38h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-18h] BYREF
  char v43; // [rsp+A0h] [rbp+40h] BYREF

  if ( a3 == 1 )
  {
    v4 = 0;
    FileObjectExtension = a2->FileObjectExtension;
    memset(&Event, 0, sizeof(Event));
    if ( FileObjectExtension )
      v8 = FileObjectExtension[3];
    else
      v8 = 0LL;
    v9 = a2->FileObjectExtension;
    if ( v9 )
      v9 = (_QWORD *)v9[5];
    if ( a4 == 1 )
    {
      if ( (a2->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(a2);
      v27 = AttachedDevice;
      v28 = a2->Flags | 0x40000;
      a2->Flags = v28;
      if ( a1 && (v28 & 2) != 0 )
      {
        v4 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v30 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((_DWORD)a2, 0, 0, (_DWORD)v30, (__int64)v40) )
            goto LABEL_46;
        }
        if ( v30 )
          *((_BYTE *)v30 + 10) = 1;
        PsReferenceSiloContext(a2);
      }
LABEL_46:
      if ( v9 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)a2);
      LOBYTE(v31) = v27->StackSize;
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v27, v31);
      MustSucceed->Tail.Overlay.OriginalFileObject = a2;
      v33 = KeGetCurrentThread();
      MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
      MustSucceed->Tail.Overlay.Thread = v33;
      MustSucceed->UserIosb = &MustSucceed->IoStatus;
      CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
      MustSucceed->RequestorMode = 0;
      MustSucceed->UserEvent = &Event;
      MustSucceed->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      IopQueueThreadIrp((__int64)MustSucceed, v35, v36);
      v37 = KeGetCurrentThread();
      ++v37->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v27, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed, v38, v39);
      IoFreeIrp(MustSucceed);
      if ( v4 )
        IopReleaseFileObjectLock((ULONG_PTR)a2);
      IopCleanupProcessResources(a2, a1, v8);
      IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      IopCleanupProcessResources(a2, a1, v8);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1) >= 0 )
      {
        v10 = (a2->Flags & 0x800) == 0;
        v41 = 0LL;
        if ( v10 )
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
        else
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        v12 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v4 = 1;
          while ( 1 )
          {
            v14 = KeGetCurrentThread();
            --v14->KernelApcDisable;
            v15 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((_DWORD)a2, 0, 0, (_DWORD)v15, (__int64)&v43) )
              goto LABEL_21;
          }
          if ( v15 )
            *((_BYTE *)v15 + 10) = 1;
          PsReferenceSiloContext(a2);
        }
LABEL_21:
        if ( !FastIoDispatch )
          goto LABEL_30;
        FastIoUnlockAll = (ULONG_PTR)FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_30;
        if ( (MmVerifierData & 0x10) != 0 && (DriverObject = v12->DriverObject, MmIsDriverVerifying(DriverObject)) )
          v18 = (void *)VfFastIoSnapState(DriverObject);
        else
          v18 = 0LL;
        v19 = guard_dispatch_icall_no_overrides(a2, KeGetCurrentThread()->ApcState.Process, &v41, v12);
        if ( v18 )
          VfFastIoCheckState(v18, FastIoUnlockAll);
        if ( !v19 )
        {
LABEL_30:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          LOBYTE(v20) = v12->StackSize;
          v21 = (IRP *)IopAllocateIrpMustSucceed((__int64)v12, v20);
          v21->Tail.Overlay.OriginalFileObject = a2;
          v22 = KeGetCurrentThread();
          v21->Overlay.AllocationSize.QuadPart = 0LL;
          v21->Tail.Overlay.Thread = v22;
          v21->UserIosb = &v21->IoStatus;
          v23 = v21->Tail.Overlay.CurrentStackLocation;
          v21->RequestorMode = 0;
          v21->UserEvent = &Event;
          v21->Flags = 4100;
          *(_WORD *)&v23[-1].MajorFunction = 785;
          v23[-1].FileObject = a2;
          PsReferenceSiloContext(a2);
          IopQueueThreadIrp((__int64)v21, v24, v25);
          if ( IofCallDriver(v12, v21) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v4 == 1 )
          IopReleaseFileObjectLock((ULONG_PTR)a2);
      }
    }
  }
}
