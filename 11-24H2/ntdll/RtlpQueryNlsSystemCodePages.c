/*
 * XREFs of RtlpQueryNlsSystemCodePages @ 0x180009BE0
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800095A8 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x180013E20 (RtlUnicodeStringToInteger.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryNlsSystemCodePages(PULONG Value, PULONG a2)
{
  size_t v4; // rax
  size_t v5; // rax
  NTSTATUS v6; // ebx
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-61h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-59h] BYREF
  _UNICODE_STRING v14; // [rsp+50h] [rbp-49h] BYREF
  _WORD v15[2]; // [rsp+60h] [rbp-39h] BYREF
  int v16; // [rsp+64h] [rbp-35h]
  const wchar_t *v17; // [rsp+68h] [rbp-31h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-29h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+7h] BYREF
  int v20; // [rsp+A4h] [rbp+Bh]
  wchar_t String[11]; // [rsp+ACh] [rbp+13h] BYREF
  __int16 v22; // [rsp+C2h] [rbp+29h]

  *Value = 65001;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v17 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage";
  ResultLength = 0;
  KeyHandle = 0LL;
  *a2 = 65001;
  v16 = 0;
  v4 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v4 >= 0xFFFE )
    LOWORD(v4) = -4;
  v15[0] = v4;
  v15[1] = v4 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  if ( NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
    goto LABEL_20;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ValueName.Buffer = (wchar_t *)L"ACP";
  v5 = 2 * wcslen(L"ACP");
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  ValueName.Length = v5;
  ValueName.MaximumLength = v5 + 2;
  v6 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
  if ( v6 >= 0 )
  {
    if ( v20 != 1 )
      goto LABEL_11;
    v22 = 0;
    v14.Buffer = String;
    *(_DWORD *)(&v14.MaximumLength + 1) = 0;
    v7 = 2 * wcslen(String);
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    v14.Length = v7;
    v14.MaximumLength = v7 + 2;
    v6 = RtlUnicodeStringToInteger(&v14, 0xAu, Value);
    if ( v6 >= 0 )
    {
LABEL_11:
      *(_QWORD *)&ValueName.Length = 0LL;
      ValueName.Buffer = (wchar_t *)L"OEMCP";
      v8 = 2 * wcslen(L"OEMCP");
      if ( v8 >= 0xFFFE )
        LOWORD(v8) = -4;
      ValueName.Length = v8;
      ValueName.MaximumLength = v8 + 2;
      v6 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
      if ( v6 >= 0 && v20 == 1 )
      {
        v22 = 0;
        v14.Buffer = String;
        *(_DWORD *)(&v14.MaximumLength + 1) = 0;
        v9 = 2 * wcslen(String);
        if ( v9 >= 0xFFFE )
          LOWORD(v9) = -4;
        v14.Length = v9;
        v14.MaximumLength = v9 + 2;
        v6 = RtlUnicodeStringToInteger(&v14, 0xAu, a2);
      }
    }
  }
  NtClose(KeyHandle);
  if ( v6 < 0 )
  {
LABEL_20:
    *Value = 65001;
    *a2 = 65001;
  }
  return 0LL;
}
