/*
 * XREFs of CmpSetSystemRegistryString @ 0x140667790
 * Callers:
 *     CmpSetSystemValues @ 0x140C480A0 (CmpSetSystemValues.c)
 * Callees:
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A7FF0 (ZwDeleteValueKey.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14077E300 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 */

__int64 __fastcall CmpSetSystemRegistryString(HANDLE KeyHandle, PUNICODE_STRING ValueName, __int64 a3)
{
  wchar_t *Buffer; // rdi
  char v6; // al
  unsigned int v7; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( a3 )
  {
    v6 = RtlCreateUnicodeStringFromAsciiz(&UnicodeString);
    Buffer = UnicodeString.Buffer;
    if ( v6 )
      v7 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
    else
      v7 = -1073741823;
  }
  else
  {
    v7 = ZwDeleteValueKey(KeyHandle, ValueName);
    if ( v7 != -1073741772 )
      return v7;
    v7 = 0;
  }
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return v7;
}
