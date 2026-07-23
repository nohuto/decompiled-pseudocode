/*
 * XREFs of RtlpInitNlsFileName @ 0x140A059CC
 * Callers:
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     RtlIntegerToUnicodeString @ 0x140860970 (RtlIntegerToUnicodeString.c)
 */

NTSTATUS __fastcall RtlpInitNlsFileName(int a1, ULONG a2, wchar_t *a3, __int64 a4, UNICODE_STRING *a5)
{
  int v7; // ecx
  int v8; // ecx
  NTSTATUS v9; // ebx
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  char v16; // [rsp+90h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v18; // [rsp+D4h] [rbp-2Ch]
  _BYTE v19[276]; // [rsp+DCh] [rbp-24h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v7 = a1 - 11;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Normalization");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v9 < 0 )
        return v9;
      *(_DWORD *)(&String.MaximumLength + 1) = 0;
      *(_DWORD *)&String.Length = 4194368;
      String.Buffer = (wchar_t *)&v16;
      RtlIntegerToUnicodeString(a2, 0x10u, &String);
      v9 = ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x120u, &ResultLength);
      ZwClose(KeyHandle);
      if ( v9 < 0 )
        return v9;
      if ( v18 != 1 )
        return -1073741823;
      v9 = RtlStringCchPrintfW(a3, 0x40uLL, L"\\SystemRoot\\System32\\%s", v19);
      if ( v9 < 0 )
        return v9;
      goto LABEL_9;
    }
    if ( v8 != 2 )
      return -1073741585;
    result = RtlStringCchCopyW(a3, 0x40uLL, L"\\SystemRoot\\System32\\l_intl.nls");
  }
  else
  {
    result = RtlStringCchPrintfW(a3, 0x40uLL, L"\\SystemRoot\\System32\\c_%.3d.nls", a2);
  }
  v9 = result;
  if ( result >= 0 )
  {
LABEL_9:
    RtlInitUnicodeString(a5, a3);
    return v9;
  }
  return result;
}
