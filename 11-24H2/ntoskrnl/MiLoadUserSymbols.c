/*
 * XREFs of MiLoadUserSymbols @ 0x140AB13D8
 * Callers:
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     DbgUnicodeStringToAnsiString @ 0x1404A40A0 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadUserImageSymbols @ 0x1405E75DC (DbgLoadUserImageSymbols.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 */

void __fastcall MiLoadUserSymbols(__int64 a1)
{
  ULONG_PTR v2; // rax
  signed __int64 v3; // rsi
  int v4; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF

  UnicodeString = 0LL;
  v2 = MiReferenceControlAreaFile(a1);
  v3 = v2;
  if ( *(_WORD *)(v2 + 88) )
  {
    v4 = DbgUnicodeStringToAnsiString((PANSI_STRING)&UnicodeString, (PCUNICODE_STRING)(v2 + 88));
    MiDereferenceControlAreaFile(a1, v3);
    if ( v4 )
    {
      DbgLoadUserImageSymbols();
      RtlFreeAnsiString(&UnicodeString);
    }
  }
  else
  {
    MiDereferenceControlAreaFile(a1, v2);
  }
}
