/*
 * XREFs of InitSafeBoot @ 0x140BFA900
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 */

int __fastcall InitSafeBoot(char a1)
{
  int result; // eax
  NTSTATUS v3; // ebx
  ULONG CreateOptions[2]; // [rsp+30h] [rbp-61h]
  ULONG CreateOptionsa[2]; // [rsp+30h] [rbp-61h]
  __int64 v6; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  __int64 Disposition; // [rsp+70h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-19h] BYREF
  _OWORD v12[2]; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+37h]
  int v14; // [rsp+D0h] [rbp+3Fh]

  LODWORD(v6) = 0;
  KeyHandle = 0LL;
  v13 = 0LL;
  v14 = 0;
  Handle = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSafeBoot;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  memset(v12, 0, sizeof(v12));
  Disposition = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"AlternateShell");
      if ( (int)NtQueryValueKey(
                  KeyHandle,
                  &DestinationString,
                  2u,
                  (unsigned __int64)v12,
                  0x2Cu,
                  (unsigned __int64)&Disposition) < 0 )
        a1 = 0;
    }
    RtlInitUnicodeString(&DestinationString, L"Option");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, (PULONG)&Disposition + 1);
    result = NtClose(KeyHandle);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OptionValue");
      CreateOptions[0] = 4;
      NtSetValueKey((__int64)Handle, &DestinationString, 0, 4u, &InitSafeBootMode, *(size_t *)CreateOptions);
      if ( a1 == 1 )
      {
        RtlInitUnicodeString(&DestinationString, L"UseAlternateShell");
        CreateOptionsa[0] = 4;
        LODWORD(v6) = 1;
        NtSetValueKey((__int64)Handle, &DestinationString, 0, 4u, &v6, *(size_t *)CreateOptionsa);
      }
      return NtClose(Handle);
    }
  }
  return result;
}
