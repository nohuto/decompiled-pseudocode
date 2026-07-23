/*
 * XREFs of RtlPrefixString @ 0x140907510
 * Callers:
 *     IopCheckDiskName @ 0x140593DE8 (IopCheckDiskName.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     RtlUpperChar @ 0x140905720 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlPrefixString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rdi
  char *v5; // rsi
  char *v6; // r14
  CHAR v7; // bp
  CHAR v9; // bl

  Length = String1->Length;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  if ( String2->Length < (unsigned __int16)Length )
    return 0;
  v6 = &Buffer[Length];
  if ( !CaseInSensitive )
    return memcmp(String1->Buffer, String2->Buffer, String1->Length) == 0;
  while ( Buffer < v6 )
  {
    v7 = *Buffer;
    if ( *Buffer != *v5 )
    {
      v9 = RtlUpperChar(*v5);
      if ( RtlUpperChar(v7) != v9 )
        return 0;
    }
    ++Buffer;
    ++v5;
  }
  return 1;
}
