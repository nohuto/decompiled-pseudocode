/*
 * XREFs of IopCloseFile @ 0x14083E330
 * Callers:
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x140284370 (IopAllocateIrpMustSucceed.c)
 *     IopDequeueIrpFromThread @ 0x1402847D0 (IopDequeueIrpFromThread.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IopCloseFileObjectExtension @ 0x1403B3340 (IopCloseFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x1403B3B80 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopSetLockOperationProcess @ 0x14041DE90 (IopSetLockOperationProcess.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x1409DC480 (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x140ABE044 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  _QWORD *FileObjectExtension; // rax
  __int64 v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v14; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  struct _KTHREAD *v16; // rax
  _QWORD *v17; // rax
  ULONG_PTR FastIoUnlockAll; // r14
  struct _DRIVER_OBJECT *DriverObject; // rbx
  void *v20; // rbx
  char v21; // r12
  __int64 v22; // rdx
  PIRP v23; // rbx
  struct _KTHREAD *v24; // rcx
  struct _IO_STACK_LOCATION *v25; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v27; // r13
  int v28; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  PIRP IrpMustSucceed; // rbx
  struct _KTHREAD *v33; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v35; // rax
  char v36[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v37; // [rsp+38h] [rbp-28h]
  struct _KEVENT Event; // [rsp+48h] [rbp-18h] BYREF
  char v39; // [rsp+A0h] [rbp+40h] BYREF

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
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((_DWORD)a2, 0, 0, (_DWORD)v30, (__int64)v36) )
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
      IrpMustSucceed = IopAllocateIrpMustSucceed((__int64)v27, v31);
      IrpMustSucceed->Tail.Overlay.OriginalFileObject = a2;
      v33 = KeGetCurrentThread();
      IrpMustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
      IrpMustSucceed->Tail.Overlay.Thread = v33;
      IrpMustSucceed->UserIosb = &IrpMustSucceed->IoStatus;
      CurrentStackLocation = IrpMustSucceed->Tail.Overlay.CurrentStackLocation;
      IrpMustSucceed->RequestorMode = 0;
      IrpMustSucceed->UserEvent = &Event;
      IrpMustSucceed->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      IopQueueThreadIrp((__int64)IrpMustSucceed);
      v35 = KeGetCurrentThread();
      ++v35->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v27, IrpMustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      IrpMustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(IrpMustSucceed);
      IoFreeIrp(IrpMustSucceed);
      if ( v4 )
        IopReleaseFileObjectLock((ULONG_PTR)a2);
      IopCleanupProcessResources(a2, a1, v8);
      IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      IopCleanupProcessResources(a2, a1, v8);
      LOBYTE(v10) = 1;
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, v10, v11) >= 0 )
      {
        v12 = (a2->Flags & 0x800) == 0;
        v37 = 0LL;
        if ( v12 )
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
        else
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        v14 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v4 = 1;
          while ( 1 )
          {
            v16 = KeGetCurrentThread();
            --v16->KernelApcDisable;
            v17 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((_DWORD)a2, 0, 0, (_DWORD)v17, (__int64)&v39) )
              goto LABEL_21;
          }
          if ( v17 )
            *((_BYTE *)v17 + 10) = 1;
          PsReferenceSiloContext(a2);
        }
LABEL_21:
        if ( !FastIoDispatch )
          goto LABEL_30;
        FastIoUnlockAll = (ULONG_PTR)FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_30;
        if ( (MmVerifierData & 0x10) != 0 && (DriverObject = v14->DriverObject, MmIsDriverVerifying(DriverObject)) )
          v20 = (void *)VfFastIoSnapState(DriverObject);
        else
          v20 = 0LL;
        v21 = guard_dispatch_icall_no_overrides(a2, KeGetCurrentThread()->ApcState.Process);
        if ( v20 )
          VfFastIoCheckState(v20, FastIoUnlockAll);
        if ( !v21 )
        {
LABEL_30:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          LOBYTE(v22) = v14->StackSize;
          v23 = IopAllocateIrpMustSucceed((__int64)v14, v22);
          v23->Tail.Overlay.OriginalFileObject = a2;
          v24 = KeGetCurrentThread();
          v23->Overlay.AllocationSize.QuadPart = 0LL;
          v23->Tail.Overlay.Thread = v24;
          v23->UserIosb = &v23->IoStatus;
          v25 = v23->Tail.Overlay.CurrentStackLocation;
          v23->RequestorMode = 0;
          v23->UserEvent = &Event;
          v23->Flags = 4100;
          *(_WORD *)&v25[-1].MajorFunction = 785;
          v25[-1].FileObject = a2;
          PsReferenceSiloContext(a2);
          IopQueueThreadIrp((__int64)v23);
          if ( IofCallDriver(v14, v23) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v4 == 1 )
          IopReleaseFileObjectLock((ULONG_PTR)a2);
      }
    }
  }
}
