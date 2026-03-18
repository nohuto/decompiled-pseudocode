/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x1404A3FCC
 * Callers:
 *     MiCacheImageSymbols @ 0x140ABFD60 (MiCacheImageSymbols.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x1404A40A0 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1404A4130 (DbgLoadImageSymbols.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, __int64 a2)
{
  STRING P; // [rsp+20h] [rbp-18h] BYREF

  P = 0LL;
  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&P, SourceString) )
    return 0LL;
  DbgLoadImageSymbols(&P, a2, -1LL);
  ExFreePoolWithTag(P.Buffer, 0);
  return 1LL;
}
