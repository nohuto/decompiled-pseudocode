/*
 * XREFs of RtlInt64ToUnicodeString @ 0x18013C200
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180039960 (RtlAnsiStringToUnicodeString.c)
 *     RtlLargeIntegerToChar @ 0x1800F5580 (RtlLargeIntegerToChar.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlInt64ToUnicodeString(ULONGLONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-88h] BYREF
  LARGE_INTEGER v7[2]; // [rsp+30h] [rbp-78h] BYREF
  CHAR v8[80]; // [rsp+40h] [rbp-68h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v7[0].QuadPart = Value;
  result = RtlLargeIntegerToChar(v7, Base, 65, v8);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 65;
    SourceString.Buffer = v8;
    v5 = -1LL;
    do
      ++v5;
    while ( v8[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
