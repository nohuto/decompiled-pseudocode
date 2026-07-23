/*
 * XREFs of InitSafeBoot @ 0x140C0D900
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 */

int __fastcall InitSafeBoot(char a1)
{
  int result; // eax
  NTSTATUS v3; // ebx
  int Data; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-21h] BYREF
  ULONG Disposition; // [rsp+74h] [rbp-1Dh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-19h] BYREF
  _OWORD KeyValueInformation[2]; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+37h]
  int v13; // [rsp+D0h] [rbp+3Fh]

  Data = 0;
  KeyHandle = 0LL;
  v12 = 0LL;
  v13 = 0;
  Handle = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSafeBoot;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  Disposition = 0;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"AlternateShell");
      if ( NtQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x2Cu,
             &ResultLength) < 0 )
        a1 = 0;
    }
    RtlInitUnicodeString(&DestinationString, L"Option");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    result = NtClose(KeyHandle);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OptionValue");
      NtSetValueKey(Handle, &DestinationString, 0, 4u, &InitSafeBootMode, 4u);
      if ( a1 == 1 )
      {
        RtlInitUnicodeString(&DestinationString, L"UseAlternateShell");
        Data = 1;
        NtSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      }
      return NtClose(Handle);
    }
  }
  return result;
}
