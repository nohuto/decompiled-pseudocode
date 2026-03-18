/*
 * XREFs of HalpSetAcpiRealTimeClock @ 0x1406F0518
 * Callers:
 *     HalSetRealTimeClock @ 0x14042D240 (HalSetRealTimeClock.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D49E0 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     HalpGetDynamicDevicePointer @ 0x140A7DEF0 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpSetAcpiRealTimeClock(PVOID InputBuffer)
{
  IRP *v2; // rax
  NTSTATUS DynamicDevicePointer; // [rsp+50h] [rbp+7h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+Fh] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp+17h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp+2Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp+3Fh] BYREF

  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DynamicDevicePointer = HalpGetDynamicDevicePointer(InputBuffer, &DeviceObject);
  if ( DynamicDevicePointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v2 = IoBuildDeviceIoControlRequest(0x298214u, DeviceObject, InputBuffer, 0x10u, 0LL, 0, 0, &Event, &IoStatusBlock);
    if ( v2 )
    {
      DynamicDevicePointer = IofCallDriver(DeviceObject, v2);
      if ( DynamicDevicePointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DynamicDevicePointer = IoStatusBlock.Status;
      }
    }
    else
    {
      DynamicDevicePointer = -1073741670;
    }
  }
  if ( DeviceObject )
  {
    ObfDereferenceObject(DeviceObject);
    if ( DynamicDevicePointer < 0
      && HalpDiagnosticEventsRegistered
      && EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TAD_SET_FAILURE) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&DynamicDevicePointer;
      UserData.Size = 4;
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TAD_SET_FAILURE, 0LL, 1u, &UserData);
    }
  }
  return (unsigned int)DynamicDevicePointer;
}
