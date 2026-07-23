/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x14049ED5C
 * Callers:
 *     MiCacheImageSymbols @ 0x140ABAE40 (MiCacheImageSymbols.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x14049EE30 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbols @ 0x14049EEC0 (DbgLoadImageSymbols.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
