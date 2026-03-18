/*
 * XREFs of RtlUnicodeStringCopy @ 0x140099F3C
 * Callers:
 *     GetImageName @ 0x14006E320 (GetImageName.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x1400DAFB4 (SleepstudyHelper_GetPdoFriendlyName.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x140086110 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x140086150 (RtlUnicodeStringValidateSrcWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(
        _UNICODE_STRING *DestinationString,
        const _UNICODE_STRING *SourceString,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int16 v5; // bx
  int v7; // r8d
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int16 v11; // r10
  wchar_t *v12; // rdx
  signed __int64 v13; // r11
  unsigned __int64 cchDest; // [rsp+30h] [rbp-10h] BYREF
  wchar_t *pszDest; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 cchSrcLength; // [rsp+70h] [rbp+30h] BYREF
  wchar_t *pszSrc; // [rsp+78h] [rbp+38h] BYREF

  v5 = 0;
  pszDest = 0LL;
  cchDest = 0LL;
  v7 = RtlUnicodeStringValidateDestWorker(DestinationString, &pszDest, &cchDest, a4);
  if ( v7 >= 0 )
  {
    pszSrc = 0LL;
    cchSrcLength = 0LL;
    v7 = RtlUnicodeStringValidateSrcWorker(SourceString, &pszSrc, &cchSrcLength, v8);
    if ( v7 >= 0 )
    {
      v9 = cchDest;
      v7 = 0;
      v10 = cchSrcLength;
      v11 = 0;
      v12 = pszSrc;
      if ( !cchDest )
        goto LABEL_8;
      v13 = (char *)pszDest - (char *)pszSrc;
      do
      {
        if ( !v10 )
          break;
        --v10;
        *(wchar_t *)((char *)v12 + v13) = *v12;
        ++v11;
        ++v12;
        --v9;
      }
      while ( v9 );
      if ( !v9 )
      {
LABEL_8:
        if ( v10 )
          v7 = -2147483643;
      }
      v5 = v11;
    }
    DestinationString->Length = 2 * v5;
  }
  return (unsigned int)v7;
}
