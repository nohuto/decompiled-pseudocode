/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x140B50B80
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x140745A2C (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     BapdRegisterEtwProvider @ 0x1404A47C8 (BapdRegisterEtwProvider.c)
 *     ExIsSoftBoot @ 0x1404F7080 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 *     BapdpWriteEventDataToRegistry @ 0x140B5D6F8 (BapdpWriteEventDataToRegistry.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS BapdRecordFirmwareBootStats()
{
  REGHANDLE v0; // rdi
  REGHANDLE v1; // rcx
  REGHANDLE RegHandle; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD Data[5]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF

  RegHandle = 0LL;
  DestinationString = 0LL;
  v0 = 0LL;
  memset(Data, 0, sizeof(Data));
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E091F8, 0LL, 0LL);
  if ( !ExIsSoftBoot() )
  {
    if ( BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, 1, &RegHandle) >= 0 )
      guard_dispatch_icall_no_overrides(34LL);
    v0 = RegHandle;
  }
  RtlInitUnicodeString(&DestinationString, L"FwPOSTTime");
  BapdpWriteEventDataToRegistry(Data);
  if ( v0 )
    EtwUnregister(v0);
  v1 = qword_140E09218;
  qword_140E09218 = 0LL;
  dword_140E091F8 = 0;
  return EtwUnregister(v1);
}
