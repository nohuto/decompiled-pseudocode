/*
 * XREFs of StringCopyWorkerW @ 0x14004B060
 * Callers:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14004B01C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v5; // r8
  signed __int64 v7; // r9
  wchar_t v8; // dx
  STRSAFE_LPWSTR v9; // rdx
  HRESULT result; // eax

  v5 = cchDest;
  if ( cchDest )
  {
    v7 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !cchToCopy )
        break;
      v8 = *(STRSAFE_LPWSTR)((char *)pszDest + v7);
      if ( !v8 )
        break;
      *pszDest = v8;
      --cchToCopy;
      ++pszDest;
      --v5;
    }
    while ( v5 );
  }
  v9 = pszDest - 1;
  result = -2147024774;
  if ( v5 )
  {
    v9 = pszDest;
    result = 0;
  }
  *v9 = 0;
  return result;
}
