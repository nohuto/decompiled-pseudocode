/*
 * XREFs of DCEInUseCountTelemetryInit @ 0x140144944
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

int DCEInUseCountTelemetryInit()
{
  int result; // eax
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v16; // [rsp+84h] [rbp-7Ch]
  unsigned int v17; // [rsp+8Ch] [rbp-74h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"GlobalDCEsInUseThreshold");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v16 == 4 )
    {
      v2 = v17;
      if ( v17 )
      {
        if ( v2 > *(_DWORD *)(W32GetUserSessionState(v1) + 19704) )
          *(_DWORD *)(W32GetUserSessionState(v3) + 19704) = v2;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"ProcessDCEsInUseThreshold");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v16 == 4 )
    {
      v5 = v17;
      if ( v17 )
      {
        if ( v5 > *(_DWORD *)(W32GetUserSessionState(v4) + 19708) )
          *(_DWORD *)(W32GetUserSessionState(v6) + 19708) = v5;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"EventIntervalMinute");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v16 == 4 )
    {
      if ( v17 )
      {
        v8 = v17;
        if ( v8 > *(_QWORD *)(W32GetUserSessionState(v7) + 19696) )
          *(_QWORD *)(W32GetUserSessionState(v9) + 19696) = v8;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"DCEInUseTelemetryDisabled");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v16 == 4 )
    {
      if ( v17 )
        *(_DWORD *)(W32GetUserSessionState(v10) + 19712) = 1;
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
