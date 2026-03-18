/*
 * XREFs of HalpQueryAcpiRealTimeClock @ 0x140A813F4
 * Callers:
 *     HalQueryRealTimeClock @ 0x140425810 (HalQueryRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140A812AC (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x1402678C0 (IoBuildDeviceIoControlRequest.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     HalpGetDynamicDevicePointer @ 0x140A81570 (HalpGetDynamicDevicePointer.c)
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
