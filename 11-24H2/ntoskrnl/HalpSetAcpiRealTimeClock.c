/*
 * XREFs of HalpSetAcpiRealTimeClock @ 0x1406F9E9C
 * Callers:
 *     HalSetRealTimeClock @ 0x1404191C0 (HalSetRealTimeClock.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpGetDynamicDevicePointer @ 0x140A7BFD0 (HalpGetDynamicDevicePointer.c)
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
