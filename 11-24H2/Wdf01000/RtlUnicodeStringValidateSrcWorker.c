/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x140086140
 * Callers:
 *     RtlStringCbCopyUnicodeString @ 0x14008F2C4 (RtlStringCbCopyUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x14009A018 (RtlUnicodeStringCopy.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x14007E6DC (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringValidateSrcWorker(
        const _UNICODE_STRING *SourceString,
        wchar_t **ppszSrc,
        unsigned __int64 *pcchSrcLength,
        const unsigned __int64 a4)
{
  __int64 result; // rax
  unsigned __int16 *v5; // rcx
  unsigned __int64 *v6; // r10
  _QWORD *v7; // r11
  __int64 v8; // rdx

  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  result = RtlUnicodeStringValidateWorker(SourceString, (const unsigned __int64)ppszSrc, (unsigned int)pcchSrcLength);
  if ( (int)result >= 0 )
  {
    if ( v5 )
    {
      v8 = *((_QWORD *)v5 + 1);
      *v6 = (unsigned __int64)*v5 >> 1;
      *v7 = v8;
    }
  }
  return result;
}
