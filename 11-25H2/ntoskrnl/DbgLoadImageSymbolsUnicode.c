/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x1404A5398
 * Callers:
 *     MiCacheImageSymbols @ 0x140ABB930 (MiCacheImageSymbols.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x1404A546C (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1404A5500 (DbgLoadImageSymbols.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, __int64 a2)
{
  _STRING P; // [rsp+20h] [rbp-18h] BYREF

  P = 0LL;
  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&P, SourceString) )
    return 0LL;
  DbgLoadImageSymbols(&P, a2, -1LL);
  ExFreePoolWithTag(P.Buffer, 0);
  return 1LL;
}
