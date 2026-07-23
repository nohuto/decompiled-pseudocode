/*
 * XREFs of ReadUlongFromKey @ 0x18003A014
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180039D50 (RtlpGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ReadUlongFromKey(HANDLE KeyHandle, wchar_t *String, _DWORD *a3)
{
  size_t v5; // rax
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+58h] [rbp-18h]

  ValueName.Buffer = String;
  ResultLength = 0;
  *a3 = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  v10 = 0;
  KeyValueInformation = 0LL;
  if ( String )
  {
    v5 = 2 * wcslen(String);
    if ( v5 >= 0xFFFE )
      LOWORD(v5) = -4;
    ValueName.Length = v5;
    ValueName.MaximumLength = v5 + 2;
  }
  result = NtQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      *a3 = HIDWORD(KeyValueInformation);
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
