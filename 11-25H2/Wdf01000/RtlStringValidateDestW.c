/*
 * XREFs of RtlStringValidateDestW @ 0x1400860F4
 * Callers:
 *     RtlStringCchPrintfW @ 0x140085DF8 (RtlStringCchPrintfW.c)
 *     RtlStringCbCopyUnicodeString @ 0x14008F264 (RtlStringCbCopyUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringValidateDestW(const wchar_t *cchDest, unsigned __int64 cchMax, unsigned __int64 pszDest)
{
  __int64 result; // rax

  result = 0LL;
  if ( !cchMax || cchMax > pszDest )
    return 3221225485LL;
  return result;
}
