/*
 * XREFs of RtlpSetMachineUILanguagesImmediate @ 0x18013E7D0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x1800149A0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     LdrpCreateKey @ 0x18013D0F0 (LdrpCreateKey.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwSetValueKey @ 0x180160C40 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlpSetMachineUILanguagesImmediate(__int64 a1)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+30h] BYREF
  HANDLE v8; // [rsp+78h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  v2 = LdrpCreateKey(&DestinationString, 0LL, 0, 0xF003Fu, &KeyHandle);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 7u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
    if ( v2 >= 0 && OpenGlobalizationUserSettingsKey(0x2000000LL, v3, &v8) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      v2 = LdrpCreateKey(&DestinationString, v8, 1u, 0xF003Fu, &Handle);
      if ( v2 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        v2 = ZwSetValueKey(Handle, &DestinationString, 0, 7u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v8 )
    NtClose(v8);
  return (unsigned int)v2;
}
