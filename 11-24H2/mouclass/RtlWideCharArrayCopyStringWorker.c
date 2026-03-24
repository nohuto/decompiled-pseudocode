/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x1C0004E00
 * Callers:
 *     MouConfiguration @ 0x1C0011A90 (MouConfiguration.c)
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
  NTSTATUS v5; // ebx
  const wchar_t *v6; // rax
  __int64 v7; // r9
  size_t v8; // r10
  NTSTATUS result; // eax

  v5 = 0;
  v6 = L"PointerClass";
  v7 = 0x7FFFLL;
  v8 = 0LL;
  if ( cchDest )
  {
    while ( v7 && *v6 )
    {
      *(const wchar_t *)((char *)v6 + (char *)pszDest - (char *)L"PointerClass") = *v6;
      --v7;
      ++v6;
      ++v8;
      if ( !--cchDest )
      {
        if ( !v7 || !*v6 )
          break;
        goto LABEL_7;
      }
    }
  }
  else
  {
LABEL_7:
    v5 = -2147483643;
  }
  result = v5;
  *pcchNewDestLength = v8;
  return result;
}
