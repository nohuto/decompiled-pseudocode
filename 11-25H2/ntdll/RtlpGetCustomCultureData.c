/*
 * XREFs of RtlpGetCustomCultureData @ 0x180118940
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18005C210 (RtlLocaleNameToLcid.c)
 *     RtlGetNeutralFallback @ 0x18005C940 (RtlGetNeutralFallback.c)
 *     RtlGetParentLocaleName @ 0x1800A7380 (RtlGetParentLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800A8400 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801189C4 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x180147BF0 (RtlpGetCustomCultureDataFromFile.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlpGetCustomCultureData(__int64 a1, char a2, char a3, __int64 a4)
{
  int CustomCultureDataFromFile; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  CustomCultureDataFromFile = RtlpOpenAndMapCustomCultureFile(a1, &v11, &v12);
  if ( CustomCultureDataFromFile >= 0 )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    CustomCultureDataFromFile = RtlpGetCustomCultureDataFromFile(v11, v12, v8, v9, a4);
    NtUnmapViewOfSection(-1LL);
  }
  return (unsigned int)CustomCultureDataFromFile;
}
