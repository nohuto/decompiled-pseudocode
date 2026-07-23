/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x1800D7734
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x1800D7360 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1800D75B0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x18013D9C0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18013DBC0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1800718D0 (RtlpIsUtf8Process.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(__int64 a1)
{
  unsigned __int16 *v2; // rcx
  __int64 v3; // r11
  char v4; // r9
  unsigned int v5; // edx
  unsigned int v7; // ebp
  unsigned int v8; // r10d
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rsi
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
    return 1;
  _InterlockedOr(v13, 0);
  v4 = 1;
  v5 = 0;
  if ( CodePageTable.DBCSCodePage )
  {
    v7 = *v2;
    v8 = 0;
    while ( v5 < v7 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(unsigned __int8 *)(v5 + v9);
      if ( *(_WORD *)(qword_1801CF028 + 2 * v10) && (v12 = v5 + 1, (unsigned int)v12 < v7) )
      {
        ++v5;
        v11 = ((char)v10 << 8) + *(unsigned __int8 *)(v12 + v9) == CodePageTable.DefaultChar;
      }
      else
      {
        v11 = (char)v10 == LOBYTE(CodePageTable.DefaultChar);
      }
      if ( v11 && *(_WORD *)(*(_QWORD *)(v3 + 8) + 2LL * v8) != CodePageTable.TransDefaultChar )
        return 0;
      ++v5;
      ++v8;
    }
  }
  else
  {
    while ( v5 < *v2 )
    {
      if ( *(char *)(v5 + *(_QWORD *)(a1 + 8)) == LOBYTE(CodePageTable.DefaultChar)
        && *(_WORD *)(*(_QWORD *)(v3 + 8) + 2LL * v5) != CodePageTable.TransDefaultChar )
      {
        return 0;
      }
      ++v5;
    }
  }
  return v4;
}
