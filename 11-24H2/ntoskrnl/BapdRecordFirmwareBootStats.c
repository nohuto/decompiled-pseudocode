/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x140B62D80
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x14074FE1C (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     BapdRegisterEtwProvider @ 0x14049FA88 (BapdRegisterEtwProvider.c)
 *     ExIsSoftBoot @ 0x1404F7160 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 *     BapdpWriteEventDataToRegistry @ 0x140B6E078 (BapdpWriteEventDataToRegistry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09348, 0LL, 0LL);
  if ( !ExIsSoftBoot() )
  {
    if ( BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, 1, &RegHandle) >= 0 )
      guard_dispatch_icall_no_overrides(34LL, 0LL);
    v0 = RegHandle;
  }
  RtlInitUnicodeString(&DestinationString, L"FwPOSTTime");
  BapdpWriteEventDataToRegistry(Data);
  if ( v0 )
    EtwUnregister(v0);
  v1 = qword_140E09368;
  qword_140E09368 = 0LL;
  dword_140E09348 = 0;
  return EtwUnregister(v1);
}
