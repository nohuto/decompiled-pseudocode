/*
 * XREFs of RtlWriteRegistryValue @ 0x180086820
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1801401D0 (RtlSetPortableOperatingSystem.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x180140318 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 */

NTSTATUS __cdecl RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  ULONG v10; // edi
  size_t v11; // rax
  NTSTATUS v12; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING ValueNamea; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    *(_QWORD *)&ValueNamea.Length = 0LL;
    v10 = ValueType & 0xFFFFFF;
    ValueNamea.Buffer = (wchar_t *)ValueName;
    if ( ValueName )
    {
      v11 = 2 * wcslen(ValueName);
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      ValueNamea.Length = v11;
      ValueNamea.MaximumLength = v11 + 2;
    }
    v12 = ZwSetValueKey(KeyHandle, &ValueNamea, 0, v10, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      NtClose(KeyHandle);
    return v12;
  }
  return result;
}
