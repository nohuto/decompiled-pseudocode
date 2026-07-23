/*
 * XREFs of IoCancelFileOpen @ 0x1406F7A40
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     PoCallDriver @ 0x14025DF60 (PoCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x140284370 (IopAllocateIrpMustSucceed.c)
 *     IopDequeueIrpFromThread @ 0x1402847D0 (IopDequeueIrpFromThread.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IopCloseFileObjectExtension @ 0x1403B3340 (IopCloseFileObjectExtension.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  bool v2; // zf
  __int64 v5; // rdx
  PIRP IrpMustSucceed; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = (FileObject->Flags & 0x40000) == 0;
  memset(&Event, 0, sizeof(Event));
  if ( !v2 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  IopResetEvent((__int64)FileObject);
  LOBYTE(v5) = DeviceObject->StackSize;
  IrpMustSucceed = IopAllocateIrpMustSucceed((__int64)DeviceObject, v5);
  IrpMustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
  CurrentThread = KeGetCurrentThread();
  IrpMustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
  IrpMustSucceed->Tail.Overlay.Thread = CurrentThread;
  IrpMustSucceed->UserIosb = &IrpMustSucceed->IoStatus;
  CurrentStackLocation = IrpMustSucceed->Tail.Overlay.CurrentStackLocation;
  IrpMustSucceed->RequestorMode = 0;
  IrpMustSucceed->UserEvent = &Event;
  IrpMustSucceed->Flags = 1028;
  CurrentStackLocation[-1].MajorFunction = 18;
  CurrentStackLocation[-1].FileObject = FileObject;
  IopQueueThreadIrp((__int64)IrpMustSucceed);
  if ( PoCallDriver(DeviceObject, IrpMustSucceed) == 259 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  IopDequeueIrpFromThread(IrpMustSucceed);
  IoFreeIrp(IrpMustSucceed);
  KeResetEvent(&FileObject->Event);
  FileObject->Flags |= 0x200000u;
  IopCloseFileObjectExtension((__int64)FileObject);
}
