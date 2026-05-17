/*
 * XREFs of RtlpGetCustomCultureData @ 0x180115750
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180032F80 (RtlLocaleNameToLcid.c)
 *     RtlGetNeutralFallback @ 0x180033500 (RtlGetNeutralFallback.c)
 *     RtlGetParentLocaleName @ 0x180033970 (RtlGetParentLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800DA8C0 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801157D4 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x180146640 (RtlpGetCustomCultureDataFromFile.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
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
