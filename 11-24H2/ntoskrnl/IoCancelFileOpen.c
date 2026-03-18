/*
 * XREFs of IoCancelFileOpen @ 0x1406F9E00
 * Callers:
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x140253D60 (IopAllocateIrpMustSucceed.c)
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PoCallDriver @ 0x1403756A0 (PoCallDriver.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     IopCloseFileObjectExtension @ 0x1403C4780 (IopCloseFileObjectExtension.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  bool v2; // zf
  __int64 v5; // rdx
  IRP *MustSucceed; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = (FileObject->Flags & 0x40000) == 0;
  memset(&Event, 0, sizeof(Event));
  if ( !v2 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  IopResetEvent((__int64)FileObject);
  LOBYTE(v5) = DeviceObject->StackSize;
  MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)DeviceObject, v5);
  MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
  CurrentThread = KeGetCurrentThread();
  MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
  MustSucceed->Tail.Overlay.Thread = CurrentThread;
  MustSucceed->UserIosb = &MustSucceed->IoStatus;
  CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
  MustSucceed->RequestorMode = 0;
  MustSucceed->UserEvent = &Event;
  MustSucceed->Flags = 1028;
  CurrentStackLocation[-1].MajorFunction = 18;
  CurrentStackLocation[-1].FileObject = FileObject;
  IopQueueThreadIrp((__int64)MustSucceed, v9, v10);
  if ( PoCallDriver(DeviceObject, MustSucceed) == 259 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  IopDequeueIrpFromThread(MustSucceed, v11, v12);
  IoFreeIrp(MustSucceed);
  KeResetEvent(&FileObject->Event);
  FileObject->Flags |= 0x200000u;
  IopCloseFileObjectExtension((__int64)FileObject);
}
