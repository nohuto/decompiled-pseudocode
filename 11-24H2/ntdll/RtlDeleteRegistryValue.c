/*
 * XREFs of RtlDeleteRegistryValue @ 0x180083C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180083108 (RtlpGetRegistryHandle.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwDeleteValueKey @ 0x180161C20 (ZwDeleteValueKey.c)
 */

NTSTATUS __cdecl RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  NTSTATUS result; // eax
  size_t v6; // rax
  NTSTATUS v7; // ebx
  _UNICODE_STRING ValueNamea; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    *(_QWORD *)&ValueNamea.Length = 0LL;
    ValueNamea.Buffer = (wchar_t *)ValueName;
    if ( ValueName )
    {
      v6 = 2 * wcslen(ValueName);
      if ( v6 >= 0xFFFE )
        LOWORD(v6) = -4;
      ValueNamea.Length = v6;
      ValueNamea.MaximumLength = v6 + 2;
    }
    v7 = ZwDeleteValueKey(KeyHandle, &ValueNamea);
    if ( (RelativeTo & 0x40000000) == 0 )
      NtClose(KeyHandle);
    return v7;
  }
  return result;
}
