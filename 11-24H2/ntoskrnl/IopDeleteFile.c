/*
 * XREFs of IopDeleteFile @ 0x140841DB0
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x140253D60 (IopAllocateIrpMustSucceed.c)
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     IopDecrementVpbRefCount @ 0x1402D48F0 (IopDecrementVpbRefCount.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x1403C4FC0 (IoGetAttachedDevice.c)
 *     IoGetFileObjectFilterContext @ 0x1403C5A00 (IoGetFileObjectFilterContext.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1403F1910 (IopDecrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1403F2340 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041A700 (IopIncrementDeviceObjectRefCount.c)
 *     ExCleanupAutoExpandPushLock @ 0x14043A400 (ExCleanupAutoExpandPushLock.c)
 *     IoChangeFileObjectFilterContext @ 0x1404446F0 (IoChangeFileObjectFilterContext.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFile(ULONG_PTR BugCheckParameter1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  ULONG_PTR v3; // rbp
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v5; // rsi
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r15
  ULONG_PTR v11; // rcx
  char v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG_PTR v15; // rcx
  PVOID v16; // rdi
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  v3 = 0LL;
  v17 = 0LL;
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
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v5, (unsigned __int8)v5->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v17;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed, v8, v9);
    v10 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v10 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), 1);
        v3 = *(_QWORD *)(v10 + 8);
        if ( v3 )
          IopIncrementDeviceObjectRefCount(*(_QWORD *)(v10 + 8), 1);
      }
    }
    v11 = *(_QWORD *)(BugCheckParameter1 + 8);
    if ( (*(_DWORD *)(v11 + 48) & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount(v11, 1);
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    if ( IofCallDriver(v5, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed, v13, v14);
    IoFreeIrp(MustSucceed);
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v15 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, v15, 0x80uLL, *(_QWORD *)(v15 + 16));
      ObfDereferenceObject(*(PVOID *)v15);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    {
      P = 0LL;
      IoGetFileObjectFilterContext(BugCheckParameter1, &P, 0);
      v16 = P;
      if ( P )
      {
        IoChangeFileObjectFilterContext(BugCheckParameter1, (signed __int64)P, 0);
        ExCleanupAutoExpandPushLock((__int64)v16);
        ExFreePoolWithTag(v16, 0);
      }
    }
    if ( !v12 )
      IopDecrementDeviceObjectRef(*(_QWORD *)(BugCheckParameter1 + 8), 0);
    if ( v3 && v10 )
      IopDecrementDeviceObjectRef(v3, 0);
  }
  IopDeleteFileObjectExtension(BugCheckParameter1);
}
