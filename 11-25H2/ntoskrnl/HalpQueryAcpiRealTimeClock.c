/*
 * XREFs of HalpQueryAcpiRealTimeClock @ 0x140A7DD74
 * Callers:
 *     HalQueryRealTimeClock @ 0x14042D740 (HalQueryRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140A7DC2C (HalpUtcTimeToAcpiRealTime.c)
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

__int64 __fastcall HalpQueryAcpiRealTimeClock(PLARGE_INTEGER Timeout)
{
  int DynamicDevicePointer; // eax
  IRP *v3; // rax
  NTSTATUS Status; // [rsp+50h] [rbp+7h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+Fh] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp+17h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp+2Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp+3Fh] BYREF

  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DynamicDevicePointer = HalpGetDynamicDevicePointer(Timeout, &DeviceObject);
  Status = DynamicDevicePointer;
  if ( DynamicDevicePointer == -1073741275 )
  {
    Status = -1073741822;
  }
  else if ( DynamicDevicePointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(0x294210u, DeviceObject, 0LL, 0, Timeout, 0x10u, 0, &Event, &IoStatusBlock);
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
  if ( DeviceObject )
  {
    ObfDereferenceObject(DeviceObject);
    if ( Status < 0
      && HalpDiagnosticEventsRegistered
      && EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TAD_QUERY_FAILURE) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&Status;
      UserData.Size = 4;
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TAD_QUERY_FAILURE, 0LL, 1u, &UserData);
    }
  }
  return (unsigned int)Status;
}
