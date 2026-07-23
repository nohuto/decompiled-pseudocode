/*
 * XREFs of IopInvalidateVolumesForDevice @ 0x1408AEAB4
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x140731D68 (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     IoCreateStreamFileObjectLite @ 0x1408AD0D0 (IoCreateStreamFileObjectLite.c)
 */

__int64 __fastcall IopInvalidateVolumesForDevice(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v1; // r14
  NTSTATUS v2; // edi
  PDEVICE_OBJECT i; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // r12
  ULONG DeviceType; // eax
  __int64 *v7; // r14
  __int64 *j; // r15
  struct _DEVICE_OBJECT *v9; // r13
  struct _DEVICE_OBJECT *k; // rax
  PIRP v11; // rax
  int Status; // eax
  PFILE_OBJECT Object; // [rsp+58h] [rbp-70h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-58h] BYREF
  HANDLE InputBuffer; // [rsp+D8h] [rbp+10h] BYREF
  PDEVICE_OBJECT v19; // [rsp+E0h] [rbp+18h]
  PRKEVENT p_DeviceLock; // [rsp+E8h] [rbp+20h]

  v1 = DeviceObject;
  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  for ( i = DeviceObject; ; i = i->AttachedDevice )
  {
    v19 = i;
    if ( !i )
      break;
    if ( i->Vpb )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      p_DeviceLock = &i->DeviceLock;
      KeWaitForSingleObject(&i->DeviceLock, Executive, 0, 0, 0LL);
      InputBuffer = 0LL;
      Object = IoCreateStreamFileObjectLite(0LL, i);
      Object->Vpb = i->Vpb;
      v2 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &InputBuffer);
      if ( v2 >= 0 )
      {
        v5 = KeGetCurrentThread();
        --v5->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
        DeviceType = v1->DeviceType;
        if ( DeviceType == 7 || DeviceType == 36 )
        {
          v7 = &IopDiskFileSystemQueueHead;
        }
        else
        {
          v7 = &IopCdRomFileSystemQueueHead;
          if ( DeviceType != 2 )
            v7 = &IopTapeFileSystemQueueHead;
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v2 = 0;
        for ( j = (__int64 *)*v7; j != v7 && (__int64 *)*j != v7; j = (__int64 *)*j )
        {
          v9 = (struct _DEVICE_OBJECT *)(j - 10);
          for ( k = (struct _DEVICE_OBJECT *)*(j - 7); k; k = k->AttachedDevice )
            v9 = k;
          KeResetEvent(&Event);
          v11 = IoBuildDeviceIoControlRequest(0x90054u, v9, &InputBuffer, 8u, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( !v11 )
          {
            v2 = -1073741670;
            break;
          }
          *(_WORD *)&v11->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 13;
          Status = IofCallDriver(v9, v11);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          else
          {
            IoStatusBlock.Status = Status;
            IoStatusBlock.Information = 0LL;
          }
          if ( Status == -1073741808 || Status == -1073741822 )
            Status = 0;
          if ( v2 >= 0 && Status < 0 )
            v2 = Status;
        }
        ExReleaseResourceLite(&IopDatabaseResource);
        KeLeaveCriticalRegionThread();
        if ( Object )
        {
          ObfDereferenceObject(Object);
          if ( InputBuffer )
            ZwClose(InputBuffer);
        }
      }
      KeSetEvent(p_DeviceLock, 0, 0);
      KeLeaveCriticalRegion();
      v1 = DeviceObject;
    }
  }
  return (unsigned int)v2;
}
