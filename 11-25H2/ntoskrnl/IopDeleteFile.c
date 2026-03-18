/*
 * XREFs of IopDeleteFile @ 0x140844B30
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x140252C50 (IopDequeueIrpFromThread.c)
 *     IopAllocateIrpMustSucceed @ 0x140253750 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDevice @ 0x1402A1E80 (IoGetAttachedDevice.c)
 *     IoGetFileObjectFilterContext @ 0x1402A27C0 (IoGetFileObjectFilterContext.c)
 *     IopDecrementVpbRefCount @ 0x1402FE6C0 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FED30 (IopDecrementDeviceObjectRef.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     ExCleanupAutoExpandPushLock @ 0x14036D350 (ExCleanupAutoExpandPushLock.c)
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041D000 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14041F5D0 (IopDecrementDeviceObjectRefCount.c)
 *     IoChangeFileObjectFilterContext @ 0x140443130 (IoChangeFileObjectFilterContext.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFile(ULONG_PTR BugCheckParameter1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  ULONG_PTR v3; // rbp
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v5; // rsi
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  ULONG_PTR v11; // rcx
  char v12; // r14
  __int64 v13; // r9
  ULONG_PTR v14; // rcx
  PVOID v15; // rdi
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  v3 = 0LL;
  v16 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v2);
    else
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)BugCheckParameter1);
    v5 = AttachedDevice;
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x240000) == 0 )
      IopCloseFile(0LL, BugCheckParameter1, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(BugCheckParameter1 + 152));
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v5, (unsigned __int8)v5->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v16;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed);
    v10 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v10 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), 1, v8, v9);
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
    IopDequeueIrpFromThread(MustSucceed);
    IoFreeIrp(MustSucceed);
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v14 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, v14, 0x80uLL, *(_QWORD *)(v14 + 16));
      ObfDereferenceObject(*(PVOID *)v14);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    {
      P = 0LL;
      IoGetFileObjectFilterContext(BugCheckParameter1, &P, 0);
      v15 = P;
      if ( P )
      {
        IoChangeFileObjectFilterContext(BugCheckParameter1, (signed __int64)P, 0);
        ExCleanupAutoExpandPushLock((__int64)v15);
        ExFreePoolWithTag(v15, 0);
      }
    }
    if ( !v12 )
      IopDecrementDeviceObjectRef(
        *(_QWORD *)(BugCheckParameter1 + 8),
        0,
        (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7,
        v13);
    if ( v3 && v10 )
      IopDecrementDeviceObjectRef(v3, 0, (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7, v13);
  }
  IopDeleteFileObjectExtension(BugCheckParameter1);
}
