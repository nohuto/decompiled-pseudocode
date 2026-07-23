/*
 * XREFs of EtwpGetCpuSpeedFromRegistry @ 0x180083784
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeed @ 0x1800F9430 (EtwpGetCpuSpeed.c)
 * Callees:
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpGetCpuSpeedFromRegistry(_DWORD *a1)
{
  size_t v2; // rax
  NTSTATUS result; // eax
  size_t v4; // rax
  NTSTATUS v5; // ebx
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  _UNICODE_STRING ValueName; // [rsp+48h] [rbp-19h] BYREF
  _WORD v9[2]; // [rsp+58h] [rbp-9h] BYREF
  int v10; // [rsp+5Ch] [rbp-5h]
  const wchar_t *v11; // [rsp+60h] [rbp-1h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+98h] [rbp+37h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v10 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v11 = L"\\Registry\\Machine\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0";
  KeyValueInformation = 0LL;
  v2 = 2 * wcslen(L"\\Registry\\Machine\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0");
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  if ( v2 >= 0xFFFE )
    LOWORD(v2) = -4;
  ObjectAttributes.RootDirectory = 0LL;
  v9[0] = v2;
  v9[1] = v2 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v9;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    ValueName.Buffer = (wchar_t *)L"~MHz";
    v4 = 2 * wcslen(L"~MHz");
    if ( v4 >= 0xFFFE )
      LOWORD(v4) = -4;
    ValueName.Length = v4;
    ValueName.MaximumLength = v4 + 2;
    v5 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength);
    if ( v5 >= 0 )
      *a1 = HIDWORD(KeyValueInformation);
    NtClose(KeyHandle);
    return v5;
  }
  return result;
}
