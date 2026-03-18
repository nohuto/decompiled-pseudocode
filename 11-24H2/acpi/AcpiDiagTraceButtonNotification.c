/*
 * XREFs of AcpiDiagTraceButtonNotification @ 0x14002442C
 * Callers:
 *     ACPIButtonEvent @ 0x14002433C (ACPIButtonEvent.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1400394F0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceButtonNotification(__int64 a1, int a2, int a3)
{
  __int16 v4; // [rsp+30h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp+7h]
  int v8; // [rsp+68h] [rbp+Fh]
  int v9; // [rsp+6Ch] [rbp+13h]
  int *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+C8h] [rbp+6Fh] BYREF
  int v15; // [rsp+D0h] [rbp+77h] BYREF

  v15 = a3;
  v14 = a2;
  v4 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext
    && EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_BUTTON_NOTIFICATION)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), &DestinationString, 1LL) >= 0 )
  {
    v4 = DestinationString.Length >> 1;
    UserData.Ptr = (unsigned __int64)&v4;
    Buffer = DestinationString.Buffer;
    v10 = &v14;
    v12 = &v15;
    v8 = 2 * (DestinationString.Length >> 1);
    *(_QWORD *)&UserData.Size = 2LL;
    v9 = 0;
    v11 = 4LL;
    v13 = 4LL;
    EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_BUTTON_NOTIFICATION, 0LL, 4u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
