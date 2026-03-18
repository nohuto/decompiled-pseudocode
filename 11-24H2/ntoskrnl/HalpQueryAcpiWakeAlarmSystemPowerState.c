/*
 * XREFs of HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140701EB4
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6B760 (HaliQuerySystemInformation.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x1402678C0 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     HalpGetDynamicDevicePointer @ 0x140A81570 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpQueryAcpiWakeAlarmSystemPowerState(PLARGE_INTEGER Timeout)
{
  unsigned int Status; // ebx
  IRP *v3; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (int)HalpGetDynamicDevicePointer(Timeout, &DeviceObject) >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(0x294218u, DeviceObject, 0LL, 0, Timeout, 4u, 0, &Event, &IoStatusBlock);
    if ( v3 )
    {
      Status = IofCallDriver(DeviceObject, v3);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
  }
  else
  {
    Status = -1073741823;
  }
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  return Status;
}
