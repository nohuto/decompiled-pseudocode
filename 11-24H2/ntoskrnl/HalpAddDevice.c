/*
 * XREFs of HalpAddDevice @ 0x1406FC520
 * Callers:
 *     HalpDriverEntry @ 0x1406FC830 (HalpDriverEntry.c)
 * Callees:
 *     IoAttachDeviceToDeviceStack @ 0x1403B3CB0 (IoAttachDeviceToDeviceStack.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalAcpiGetTable @ 0x14053A6E0 (HalAcpiGetTable.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     HalpAddChildPdo @ 0x1406FC4F8 (HalpAddChildPdo.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     HalpInitializeSecondaryInterruptServices @ 0x140C13134 (HalpInitializeSecondaryInterruptServices.c)
 */

NTSTATUS __fastcall HalpAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT TargetDevice)
{
  NTSTATUS v4; // eax
  struct _DEVICE_OBJECT *v5; // rdi
  PDEVICE_OBJECT v6; // rcx
  _QWORD *DeviceExtension; // rbx
  PDEVICE_OBJECT v8; // rax
  NTSTATUS result; // eax
  PDEVICE_OBJECT v10; // r9
  _QWORD *v11; // rcx
  __int64 v12; // r9
  PDEVICE_OBJECT v13; // rdi
  _QWORD *v14; // rcx
  PDEVICE_OBJECT v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // r9
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-19h] BYREF
  PDEVICE_OBJECT v19[2]; // [rsp+48h] [rbp-11h] BYREF
  PDEVICE_OBJECT v20; // [rsp+58h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  PVOID NotificationEntry; // [rsp+D0h] [rbp+77h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+D8h] [rbp+7Fh] BYREF

  v19[0] = 0LL;
  SourceDevice = 0LL;
  DeviceObject = 0LL;
  v20 = 0LL;
  NotificationEntry = 0LL;
  v4 = IoCreateDevice(DriverObject, 0x28u, 0LL, 0x2Au, 0, 0, &SourceDevice);
  if ( v4 < 0 )
    KeBugCheckEx(0x5Cu, 0x10EuLL, v4, 0LL, 0LL);
  v5 = SourceDevice;
  v6 = SourceDevice;
  DeviceExtension = SourceDevice->DeviceExtension;
  *(_DWORD *)DeviceExtension = 193;
  DeviceExtension[2] = TargetDevice;
  DeviceExtension[3] = v6;
  v6->Flags &= ~0x80u;
  v8 = IoAttachDeviceToDeviceStack(v6, TargetDevice);
  if ( v8 )
  {
    DeviceExtension[4] = v8;
    if ( HalAcpiGetTable(0LL, 1414353488)
      && IoCreateDevice(DriverObject, 0x30u, 0LL, 0x2Au, 0x80u, 0, &DeviceObject) >= 0 )
    {
      v10 = DeviceObject;
      v11 = DeviceObject->DeviceExtension;
      *(_DWORD *)v11 = 192;
      v11[1] = 0LL;
      v11[2] = v10;
      v11[3] = DeviceExtension;
      *((_DWORD *)v11 + 8) = 132;
      HalpAddChildPdo((__int64)v11, (__int64)DeviceExtension, (__int64 *)&NotificationEntry);
      *(_DWORD *)(v12 + 48) &= ~0x80u;
    }
    result = IoCreateDevice(DriverObject, 0x30u, 0LL, 0x2Au, 0x80u, 0, v19);
    if ( result >= 0 )
    {
      v13 = v19[0];
      AcpiRootPdo = v19[0];
      v14 = v19[0]->DeviceExtension;
      *(_DWORD *)v14 = 192;
      v14[1] = 0LL;
      v14[2] = v13;
      v14[3] = DeviceExtension;
      *((_DWORD *)v14 + 8) = 129;
      HalpAddChildPdo((__int64)v14, (__int64)DeviceExtension, (__int64 *)&NotificationEntry);
      SourceDevice = 0LL;
      v19[1] = (PDEVICE_OBJECT)L"\\REGISTRY\\MACHINE\\HARDWARE\\UEFI";
      v19[0] = (PDEVICE_OBJECT)4194366;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey((PHANDLE)&SourceDevice, 0x20019u, &ObjectAttributes) >= 0 )
      {
        ZwClose(SourceDevice);
        if ( IoCreateDevice(DriverObject, 0x30u, 0LL, 0x2Au, 0x80u, 0, &v20) >= 0 )
        {
          v15 = v20;
          v16 = v20->DeviceExtension;
          *(_DWORD *)v16 = 192;
          v16[1] = 0LL;
          v16[2] = v15;
          v16[3] = DeviceExtension;
          *((_DWORD *)v16 + 8) = 131;
          HalpAddChildPdo((__int64)v16, (__int64)DeviceExtension, (__int64 *)&NotificationEntry);
          *(_DWORD *)(v17 + 48) &= ~0x80u;
        }
      }
      v13->Flags &= ~0x80u;
      NotificationEntry = 0LL;
      HalpInitializeSecondaryInterruptServices();
      KeInitializeEvent(&HalpDynamicDeviceInterfaceLock, SynchronizationEvent, 1u);
      IoRegisterPlugPlayNotification(
        EventCategoryDeviceInterfaceChange,
        1u,
        HalpDynamicDeviceInterfaces,
        HalpDriverObject,
        HalpDynamicDeviceInterfaceNotification,
        0LL,
        &NotificationEntry);
      result = 0;
      HalpDynamicDevicesReady = 1;
    }
  }
  else
  {
    IoDeleteDevice(v5);
    return -1073741810;
  }
  return result;
}
