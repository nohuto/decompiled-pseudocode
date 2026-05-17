/*
 * XREFs of RtlIsValidLocaleName @ 0x1800DA8C0
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800DA0F0 (RtlGetUserPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x180116D44 (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x180033300 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800333EC (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x1800F77DC (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x180115750 (RtlpGetCustomCultureData.c)
 */

char __fastcall RtlIsValidLocaleName(wchar_t *String, int a2)
{
  char v2; // di
  int NameIndex; // eax

  v2 = a2;
  if ( !String || (a2 & 0xFFFFFFFD) != 0 || !pTblPtrs && !RtlpLoadNlsData() )
    return 0;
  NameIndex = RtlpNlsGetNameIndex((__int64)String);
  if ( NameIndex < 0 )
  {
    if ( !(unsigned __int8)RtlpIsCustomLocale(String)
      || (v2 & 2) == 0 && (int)RtlpGetCustomCultureData(String, 0LL, 0LL, 0LL) < 0 )
    {
      return 0;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    _mm_lfence();
    if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                   * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                   + *(_QWORD *)(pTblPtrs + 8)
                   + 24LL) & 1) == 0 )
      return 0;
  }
  return 1;
}
