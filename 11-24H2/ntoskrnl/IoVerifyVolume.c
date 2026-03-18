/*
 * XREFs of IoVerifyVolume @ 0x140AB7170
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     IopDecrementVpbRefCount @ 0x1402D48F0 (IopDecrementVpbRefCount.c)
 *     IopDereferenceVpbAndFree @ 0x1402D68F8 (IopDereferenceVpbAndFree.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopReferenceVerifyVpb @ 0x1404BCF58 (IopReferenceVerifyVpb.c)
 *     IopCreateVpb @ 0x140714EC8 (IopCreateVpb.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x140AB1498 (PoVolumeDevice.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KEVENT *p_DeviceLock; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  PDEVICE_OBJECT v8; // rbx
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  __int64 Irp; // rax
  __int64 v11; // r8
  IRP *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r14
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+40h] BYREF

  p_DeviceLock = &DeviceObject->DeviceLock;
  DeviceObjecta = 0LL;
  v18 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v16 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v18, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v18 = 0LL,
          (int)IopMountVolume(DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v18) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v18 )
    {
      IopDecrementVpbRefCount(v18, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = DeviceObjecta;
  if ( DeviceObjecta->AttachedDevice )
  {
    AttachedDevice = DeviceObjecta->AttachedDevice;
    do
    {
      v8 = AttachedDevice;
      AttachedDevice = AttachedDevice->AttachedDevice;
    }
    while ( AttachedDevice );
  }
  LOBYTE(v7) = v8->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v8, v7, 0LL);
  v12 = (IRP *)Irp;
  if ( !Irp )
  {
    IopDereferenceVpbAndFree(v18);
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = &v16;
  v13 = *(_QWORD *)(Irp + 184);
  v14 = v18;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v13 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v13 - 56) = DeviceObjecta;
  *(_WORD *)(v13 - 72) = 525;
  *(_QWORD *)(v13 - 64) = v14;
  IopQueueThreadIrp(Irp, v13, v11);
  v6 = IofCallDriver(v8, v12);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v16;
  }
  IopDereferenceVpbAndFree(v14);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KeLeaveCriticalRegion();
  return v6;
}
