/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x1400694C0
 * Callers:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x140069460 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v5; // r11d
  wchar_t *v6; // r9
  __int64 v7; // rax
  size_t v8; // r10

  v5 = 0;
  v6 = L"Total, ";
  v7 = 0x7FFFLL;
  v8 = 0LL;
  if ( cchDest )
  {
    while ( v7 && *v6 )
    {
      *pszDest++ = *v6++;
      --v7;
      ++v8;
      if ( !--cchDest )
      {
        if ( !v7 || !*v6 )
          break;
        goto LABEL_2;
      }
    }
  }
  else
  {
LABEL_2:
    v5 = -2147483643;
  }
  *pcchNewDestLength = v8;
  return v5;
}
