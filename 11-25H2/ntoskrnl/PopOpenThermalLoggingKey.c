/*
 * XREFs of PopOpenThermalLoggingKey @ 0x1404C3350
 * Callers:
 *     PopThermalWriteShutdownToRegistry @ 0x1404C31C0 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalHandlePreviousShutdown @ 0x140748274 (PopThermalHandlePreviousShutdown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     RtlGetPersistedStateLocation @ 0x1409B3D60 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PopOpenThermalLoggingKey(char a1, HANDLE *a2)
{
  NTSTATUS PersistedStateLocation; // ecx
  ULONG CreateOptions; // ebx
  const WCHAR *v5; // rdx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v11[528]; // [rsp+90h] [rbp-70h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( a1 )
  {
    CreateOptions = 1;
    v5 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power\\LastThermalEvent";
  }
  else
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(L"ThermalLogging", v11, 520, (__int64)&v8);
    if ( PersistedStateLocation < 0 )
      return (unsigned int)PersistedStateLocation;
    CreateOptions = 0;
    v5 = (const WCHAR *)v11;
  }
  RtlInitUnicodeString(&DestinationString, v5);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, CreateOptions, 0LL);
  if ( PersistedStateLocation >= 0 )
    *a2 = KeyHandle;
  return (unsigned int)PersistedStateLocation;
}
