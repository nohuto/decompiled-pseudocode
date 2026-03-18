/*
 * XREFs of AcpiDiagTraceDevicePassiveCooling @ 0x14004ECC0
 * Callers:
 *     ACPIThermalReevaluateConstraintsWorker @ 0x14004AF70 (ACPIThermalReevaluateConstraintsWorker.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1400394F0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceDevicePassiveCooling(__int64 a1, char a2)
{
  __int16 v3; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  char *v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]
  char v11; // [rsp+98h] [rbp+18h] BYREF

  v11 = a2;
  v3 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext
    && EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_DEVICE_PASSIVE_COOLING)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), (__int64)&DestinationString) >= 0 )
  {
    v3 = DestinationString.Length >> 1;
    UserData.Ptr = (unsigned __int64)&v3;
    Buffer = DestinationString.Buffer;
    v9 = &v11;
    v7 = 2 * (DestinationString.Length >> 1);
    *(_QWORD *)&UserData.Size = 2LL;
    v8 = 0;
    v10 = 1LL;
    EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_DEVICE_PASSIVE_COOLING, 0LL, 3u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
