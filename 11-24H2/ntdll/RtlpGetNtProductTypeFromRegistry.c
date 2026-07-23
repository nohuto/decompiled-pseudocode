/*
 * XREFs of RtlpGetNtProductTypeFromRegistry @ 0x1800A732C
 * Callers:
 *     RtlGetNtProductType @ 0x18000BB20 (RtlGetNtProductType.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800A7500 (RtlEqualUnicodeString.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetNtProductTypeFromRegistry(_DWORD *a1)
{
  NTSTATUS v2; // ebx
  ULONG ResultLength; // [rsp+38h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-71h] BYREF
  _UNICODE_STRING String1; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v7[2]; // [rsp+58h] [rbp-59h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-49h] BYREF
  _UNICODE_STRING String2; // [rsp+78h] [rbp-39h] BYREF
  _UNICODE_STRING v10; // [rsp+88h] [rbp-29h] BYREF
  _UNICODE_STRING v11; // [rsp+98h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+D8h] [rbp+27h] BYREF
  int v14; // [rsp+DCh] [rbp+2Bh]
  unsigned int v15; // [rsp+E0h] [rbp+2Fh]
  int v16; // [rsp+E4h] [rbp+33h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ResultLength = 0;
  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v7[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ValueName.Buffer = L"ProductType";
  v10.Buffer = L"LanmanNt";
  v11.Buffer = L"ServerNt";
  String2.Buffer = L"WinNt";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  v7[0] = 8650882LL;
  *(_QWORD *)&ValueName.Length = 1572886LL;
  *(_QWORD *)&v10.Length = 1179664LL;
  *(_QWORD *)&v11.Length = 1179664LL;
  *(_QWORD *)&String2.Length = 786442LL;
  ObjectAttributes.Attributes = 576;
  v2 = NtOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
    if ( v2 >= 0 )
    {
      if ( v14 != 1 || v15 < 2 )
      {
LABEL_12:
        v2 = -1073739509;
        goto LABEL_2;
      }
      String1.MaximumLength = v15;
      String1.Buffer = (wchar_t *)&v16;
      String1.Length = v15 - 2;
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        *a1 = 1;
      }
      else
      {
        if ( !RtlEqualUnicodeString(&String1, &v10, 1u) )
        {
          if ( RtlEqualUnicodeString(&String1, &v11, 1u) )
          {
            *a1 = 3;
            goto LABEL_2;
          }
          goto LABEL_12;
        }
        *a1 = 2;
      }
    }
  }
LABEL_2:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v2;
}
