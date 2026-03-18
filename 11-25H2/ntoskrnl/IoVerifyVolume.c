/*
 * XREFs of IoVerifyVolume @ 0x140AB22D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IopDecrementVpbRefCount @ 0x1402FE6C0 (IopDecrementVpbRefCount.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IopDereferenceVpbAndFree @ 0x140441A14 (IopDereferenceVpbAndFree.c)
 *     IopReferenceVerifyVpb @ 0x1404BDF28 (IopReferenceVerifyVpb.c)
 *     IopCreateVpb @ 0x140708DC8 (IopCreateVpb.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x140AABF98 (PoVolumeDevice.c)
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
  IRP *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+40h] BYREF

  p_DeviceLock = &DeviceObject->DeviceLock;
  DeviceObjecta = 0LL;
  v19 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v19, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v19 = 0LL,
          (int)IopMountVolume(DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v19) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v19 )
    {
      IopDecrementVpbRefCount(v19, 1, v14, v15);
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
  v11 = (IRP *)Irp;
  if ( !Irp )
  {
    IopDereferenceVpbAndFree(v19);
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = &v17;
  v12 = *(_QWORD *)(Irp + 184);
  v13 = v19;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v12 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v12 - 56) = DeviceObjecta;
  *(_WORD *)(v12 - 72) = 525;
  *(_QWORD *)(v12 - 64) = v13;
  IopQueueThreadIrp(Irp);
  v6 = IofCallDriver(v8, v11);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v17;
  }
  IopDereferenceVpbAndFree(v13);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KeLeaveCriticalRegion();
  return v6;
}
