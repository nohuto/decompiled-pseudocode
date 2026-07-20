/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x14001D92C
 * Callers:
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D77C (BasepOpenParentDirectoryNoRedirection.c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker @ 0x14001DAF0 (RtlUnicodeStringValidateSrcWorker.c)
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  NTSTATUS result; // eax
  __int64 v5; // r11
  size_t v6; // rcx
  signed __int64 v7; // rdx
  NTSTRSAFE_PWSTR v8; // rax
  ULONG v9; // [rsp+20h] [rbp-18h]
  size_t pcchSrcLength; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *ppszSrc; // [rsp+58h] [rbp+20h] BYREF

  if ( (cbDest >> 1) - 1 > 0x7FFE )
    return -1073741811;
  ppszSrc = 0LL;
  pcchSrcLength = 0LL;
  result = RtlUnicodeStringValidateSrcWorker(SourceString, &ppszSrc, &pcchSrcLength, (const size_t)SourceString, v9);
  if ( result < 0 )
  {
    *pszDest = 0;
  }
  else
  {
    v6 = pcchSrcLength - v5;
    v7 = (char *)ppszSrc - (char *)pszDest;
    do
    {
      if ( !(v6 + v5) )
        break;
      *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
      ++pszDest;
      --v5;
    }
    while ( v5 );
    v8 = pszDest - 1;
    if ( v5 )
      v8 = pszDest;
    *v8 = 0;
    return v5 == 0 ? 0x80000005 : 0;
  }
  return result;
}
