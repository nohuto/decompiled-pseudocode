/*
 * XREFs of PipSendGuestAssignedNotification @ 0x140736264
 * Callers:
 *     PiUpdateGuestAssignedState @ 0x140A63048 (PiUpdateGuestAssignedState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A6B488 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IoGetAttachedDevice @ 0x1403C4FC0 (IoGetAttachedDevice.c)
 *     IoQueueThreadIrp @ 0x1404B1B90 (IoQueueThreadIrp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140733F88 (PpIrpAllocateDeviceUsageNotification.c)
 */

NTSTATUS __fastcall PipSendGuestAssignedNotification(__int64 a1, char a2)
{
  IRP *DeviceUsageNotification; // rax
  IRP *v5; // rbx
  NTSTATUS result; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+38h] [rbp-40h]
  char v9; // [rsp+3Ch] [rbp-3Ch]
  int v10; // [rsp+48h] [rbp-30h]
  _BYTE Object[32]; // [rsp+58h] [rbp-20h] BYREF

  memset_0(&DeviceObject, 0, 0x40uLL);
  DeviceObject = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(a1 + 32));
  v8 = 6;
  v9 = a2;
  DeviceUsageNotification = PpIrpAllocateDeviceUsageNotification((__int64)&DeviceObject);
  v5 = DeviceUsageNotification;
  if ( !DeviceUsageNotification )
    return -1073741801;
  IoQueueThreadIrp(DeviceUsageNotification);
  result = IofCallDriver(DeviceObject, v5);
  if ( result == 259 )
  {
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    return v10;
  }
  return result;
}
