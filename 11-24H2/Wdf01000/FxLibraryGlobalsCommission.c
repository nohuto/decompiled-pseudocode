/*
 * XREFs of FxLibraryGlobalsCommission @ 0x140095F6C
 * Callers:
 *     FxLibraryCommonCommission @ 0x14008E578 (FxLibraryCommonCommission.c)
 * Callees:
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400961F4 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxInitializeBugCheckDriverInfo @ 0x1400AB9B4 (FxInitializeBugCheckDriverInfo.c)
 */

NTSTATUS __fastcall FxLibraryGlobalsCommission()
{
  PVOID SystemRoutineAddress; // rax
  NTSTATUS result; // eax
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  unk_1400C8090 = 0;
  unk_1400C80D8 = 0;
  unk_1400C80DA = 0;
  FxLibraryGlobalsQueryRegistrySettings();
  if ( unk_1400C80DC )
    unk_1400C7EE0 = VfQueryDispatchTable(7LL, 24LL);
  else
    unk_1400C7EE0 = 0LL;
  funcName = 0LL;
  RtlInitUnicodeString(&funcName, L"IoConnectInterruptEx");
  unk_1400C7EC0 = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoDisconnectInterruptEx");
  unk_1400C7EC8 = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptActive");
  unk_1400C7ED0 = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptInactive");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&funcName);
  VersionInformation.dwOSVersionInfoSize = 284;
  unk_1400C7ED8 = SystemRoutineAddress;
  RtlGetVersion(&VersionInformation);
  qword_1400C8010 = 0LL;
  unk_1400C8092 = 0;
  unk_1400C8094 = 0;
  unk_1400C8020 = &qword_1400C8018;
  qword_1400C8018 = &qword_1400C8018;
  unk_1400C8008 = 1;
  FxInitializeBugCheckDriverInfo();
  unk_1400C8080 = 0LL;
  ImageSectionHandle = 0LL;
  unk_1400C8070 = 0LL;
  unk_1400C80A0 = 0;
  result = WmiQueryTraceInformation(WdfNotifyRoutinesClass, &qword_1400C80A8, 8u, 0LL, 0LL);
  if ( result < 0 )
  {
    xmmword_1400C80B0 = 0LL;
    qword_1400C80A8 = &xmmword_1400C80B0;
    result = 0;
    LODWORD(xmmword_1400C80B0) = 32;
    unk_1400C80C0 = 0LL;
  }
  return result;
}
