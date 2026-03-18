/*
 * XREFs of AcpiAcquirePrmInterface @ 0x1400A2EE8
 * Callers:
 *     AcpiPrmNotifyInterfaceChange @ 0x1400A3070 (AcpiPrmNotifyInterfaceChange.c)
 *     AcpiPrmTargetDeviceChangeCallback @ 0x1400A3160 (AcpiPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     AcpiQueryPrmInterface @ 0x1400A3288 (AcpiQueryPrmInterface.c)
 */

__int64 __fastcall AcpiAcquirePrmInterface(UNICODE_STRING *SourceString, char a2, void *a3)
{
  NTSTATUS DeviceObjectPointer; // ebx
  unsigned __int16 v7; // bx
  PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine; // [rsp+40h] [rbp-28h] BYREF
  PDEVICE_OBJECT v10; // [rsp+48h] [rbp-20h] BYREF
  PVOID EventCategoryData; // [rsp+88h] [rbp+20h] BYREF

  CallbackRoutine = 0LL;
  EventCategoryData = 0LL;
  v10 = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(SourceString, 0x1F0000u, (PFILE_OBJECT *)&EventCategoryData, &v10);
  if ( DeviceObjectPointer >= 0 )
  {
    if ( a2 )
    {
      v7 = SourceString->Length + 2;
      stru_140088BF8.Buffer = (wchar_t *)ExAllocatePool2(64LL, v7, 1181770561LL);
      if ( !stru_140088BF8.Buffer )
        return 3221225626LL;
      stru_140088BF8.Length = 0;
      stru_140088BF8.MaximumLength = v7;
      RtlCopyUnicodeString(&stru_140088BF8, SourceString);
    }
    AcpiGetDriverProxyEndpoint(&CallbackRoutine, (__int64)AcpiPrmTargetDeviceChangeCallback);
    DeviceObjectPointer = IoRegisterPlugPlayNotification(
                            EventCategoryTargetDeviceChange,
                            0,
                            EventCategoryData,
                            DriverObject,
                            CallbackRoutine,
                            0LL,
                            &qword_140088BB0);
    if ( DeviceObjectPointer >= 0 )
      DeviceObjectPointer = AcpiQueryPrmInterface(*((PDEVICE_OBJECT *)EventCategoryData + 1), a3);
  }
  if ( EventCategoryData )
    ObfDereferenceObject(EventCategoryData);
  if ( DeviceObjectPointer < 0 )
  {
    if ( stru_140088BF8.Buffer )
    {
      RtlFreeUnicodeString(&stru_140088BF8);
      stru_140088BF8.Buffer = 0LL;
      *(_DWORD *)&stru_140088BF8.Length = 0;
    }
  }
  return (unsigned int)DeviceObjectPointer;
}
