/*
 * XREFs of RtlPrefixString @ 0x140A51520
 * Callers:
 *     IopCheckDiskName @ 0x140593758 (IopCheckDiskName.c)
 * Callees:
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     RtlUpperChar @ 0x1408E6D10 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlPrefixString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rdi
  char *v5; // rsi
  char *v7; // r14
  CHAR v8; // bp
  CHAR v9; // bl

  Length = String1->Length;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  if ( String2->Length < (unsigned __int16)Length )
    return 0;
  v7 = &Buffer[Length];
  if ( !CaseInSensitive )
    return memcmp(String1->Buffer, String2->Buffer, String1->Length) == 0;
  while ( Buffer < v7 )
  {
    v8 = *Buffer;
    if ( *Buffer != *v5 )
    {
      v9 = RtlUpperChar(*v5);
      if ( RtlUpperChar(v8) != v9 )
        return 0;
    }
    ++Buffer;
    ++v5;
  }
  return 1;
}
