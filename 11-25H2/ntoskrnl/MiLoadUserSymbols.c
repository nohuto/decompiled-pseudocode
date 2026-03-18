/*
 * XREFs of MiLoadUserSymbols @ 0x140AABED8
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     DbgUnicodeStringToAnsiString @ 0x1404A546C (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadUserImageSymbols @ 0x1405DB52C (DbgLoadUserImageSymbols.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
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
