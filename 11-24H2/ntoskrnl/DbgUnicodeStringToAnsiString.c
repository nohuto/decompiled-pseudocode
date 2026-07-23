/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x14049EE30
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14049ED5C (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14049EDB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x140AAC348 (MiLoadUserSymbols.c)
 * Callees:
 *     RtlxUnicodeStringToOemSize @ 0x140904E70 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgUnicodeStringToAnsiString(PANSI_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v4; // eax
  char *Pool2; // rax

  v4 = RtlxUnicodeStringToOemSize(SourceString);
  if ( v4 > 0xFFFF )
    return 0LL;
  DestinationString->MaximumLength = v4;
  DestinationString->Length = v4 - 1;
  Pool2 = (char *)ExAllocatePool2(0x40uLL, v4, 0x644C6D4Du);
  DestinationString->Buffer = Pool2;
  if ( !Pool2 )
    return 0LL;
  if ( RtlUnicodeStringToAnsiString(DestinationString, SourceString, 0) < 0 )
  {
    ExFreePoolWithTag(DestinationString->Buffer, 0);
    return 0LL;
  }
  return 1LL;
}
