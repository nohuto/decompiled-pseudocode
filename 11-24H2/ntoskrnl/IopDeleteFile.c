/*
 * XREFs of IopDeleteFile @ 0x14083E070
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x140284370 (IopAllocateIrpMustSucceed.c)
 *     IopDequeueIrpFromThread @ 0x1402847D0 (IopDequeueIrpFromThread.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExCleanupAutoExpandPushLock @ 0x1402B9C50 (ExCleanupAutoExpandPushLock.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IopDecrementVpbRefCount @ 0x140355B70 (IopDecrementVpbRefCount.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x1403B3B80 (IoGetAttachedDevice.c)
 *     IoGetFileObjectFilterContext @ 0x1403B45C0 (IoGetFileObjectFilterContext.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1403E5630 (IopDecrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1403E6060 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14040A700 (IopIncrementDeviceObjectRefCount.c)
 *     IoChangeFileObjectFilterContext @ 0x14043A190 (IoChangeFileObjectFilterContext.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFile(ULONG_PTR BugCheckParameter1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  ULONG_PTR v3; // rbp
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v5; // rsi
  PIRP IrpMustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v8; // r15
  ULONG_PTR v9; // rcx
  char v10; // r14
  ULONG_PTR v11; // rcx
  PVOID v12; // rdi
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  v3 = 0LL;
  v13 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v2);
    else
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)BugCheckParameter1);
    v5 = AttachedDevice;
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x240000) == 0 )
      IopCloseFile(0LL, BugCheckParameter1, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(BugCheckParameter1 + 152));
    IrpMustSucceed = IopAllocateIrpMustSucceed((__int64)v5, (unsigned __int8)v5->StackSize);
    CurrentStackLocation = IrpMustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter1;
    IrpMustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v13;
    IrpMustSucceed->UserEvent = &Event;
    IrpMustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    IrpMustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IrpMustSucceed->AssociatedIrp.MasterIrp = 0LL;
    IrpMustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)IrpMustSucceed);
    v8 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v8 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), 1);
        v3 = *(_QWORD *)(v8 + 8);
        if ( v3 )
          IopIncrementDeviceObjectRefCount(*(_QWORD *)(v8 + 8), 1);
      }
    }
    v9 = *(_QWORD *)(BugCheckParameter1 + 8);
    if ( (*(_DWORD *)(v9 + 48) & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount(v9, 1);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    if ( IofCallDriver(v5, IrpMustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    IrpMustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(IrpMustSucceed);
    IoFreeIrp(IrpMustSucceed);
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v11 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, v11, 0x80uLL, *(_QWORD *)(v11 + 16));
      ObfDereferenceObject(*(PVOID *)v11);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    {
      P = 0LL;
      IoGetFileObjectFilterContext(BugCheckParameter1, &P, 0);
      v12 = P;
      if ( P )
      {
        IoChangeFileObjectFilterContext(BugCheckParameter1, (signed __int64)P, 0);
        ExCleanupAutoExpandPushLock((__int64)v12);
        ExFreePoolWithTag(v12, 0);
      }
    }
    if ( !v10 )
      IopDecrementDeviceObjectRef(*(_QWORD *)(BugCheckParameter1 + 8), 0);
    if ( v3 && v8 )
      IopDecrementDeviceObjectRef(v3, 0);
  }
  IopDeleteFileObjectExtension(BugCheckParameter1);
}
