/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x1404A546C
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x1404A5398 (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404A53F0 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x140AABED8 (MiLoadUserSymbols.c)
 * Callees:
 *     RtlxUnicodeStringToOemSize @ 0x1408E6460 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1408E67D0 (RtlUnicodeStringToAnsiString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgUnicodeStringToAnsiString(PANSI_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v4; // eax
  char *Pool2; // rax

  v4 = RtlxUnicodeStringToOemSize(SourceString);
  if ( v4 <= 0xFFFF )
  {
    DestinationString->MaximumLength = v4;
    DestinationString->Length = v4 - 1;
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    DestinationString->Buffer = Pool2;
    if ( Pool2 )
    {
      if ( RtlUnicodeStringToAnsiString(DestinationString, SourceString, 0) >= 0 )
        return 1LL;
      ExFreePoolWithTag(DestinationString->Buffer, 0);
    }
  }
  return 0LL;
}
