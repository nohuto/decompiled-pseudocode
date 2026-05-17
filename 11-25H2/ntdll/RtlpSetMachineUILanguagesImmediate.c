/*
 * XREFs of RtlpSetMachineUILanguagesImmediate @ 0x180141CD0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x18008C0B0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     LdrpCreateKey @ 0x1801405EC (LdrpCreateKey.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlpSetMachineUILanguagesImmediate(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+28h] BYREF
  HANDLE v7; // [rsp+70h] [rbp+30h] BYREF
  HANDLE v8; // [rsp+78h] [rbp+38h] BYREF

  Handle = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  v2 = LdrpCreateKey((__int64)&DestinationString, 0LL, 0, 0xF003Fu, &Handle);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v2 = ZwSetValueKey(Handle, &DestinationString, 0LL, 7LL, *(_QWORD *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
    if ( v2 >= 0 && (int)OpenGlobalizationUserSettingsKey(0x2000000LL, v3, &v8) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      v2 = LdrpCreateKey((__int64)&DestinationString, (__int64)v8, 1, 0xF003Fu, &v7);
      if ( v2 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        v2 = ZwSetValueKey(v7, &DestinationString, 0LL, 7LL, *(_QWORD *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v7 )
  {
    NtClose(v7);
    v7 = 0LL;
  }
  if ( v8 )
    NtClose(v8);
  return (unsigned int)v2;
}
