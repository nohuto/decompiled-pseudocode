/*
 * XREFs of RtlInt64ToUnicodeString @ 0x14091C0F0
 * Callers:
 *     ExpWnfComposeValueName @ 0x14091BEE8 (ExpWnfComposeValueName.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlLargeIntegerToChar @ 0x1408E5910 (RtlLargeIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlInt64ToUnicodeString(ULONGLONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-88h] BYREF
  ULONGLONG v7[2]; // [rsp+30h] [rbp-78h] BYREF
  char v8[80]; // [rsp+40h] [rbp-68h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v7[0] = Value;
  result = RtlLargeIntegerToChar(v7, *(unsigned __int64 *)&Base, 65, v8);
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
