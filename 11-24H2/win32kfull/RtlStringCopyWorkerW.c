/*
 * XREFs of RtlStringCopyWorkerW @ 0x140145920
 * Callers:
 *     _RegisterDManipHook @ 0x14021A630 (_RegisterDManipHook.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1402633C0 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v5; // r8
  __int64 v6; // rax
  signed __int64 v7; // r9
  wchar_t v8; // dx
  NTSTRSAFE_PWSTR v9; // rdx
  NTSTATUS result; // eax

  v5 = cchDest;
  if ( cchDest )
  {
    v6 = 2147483646LL;
    v7 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !v6 )
        break;
      v8 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
      if ( !v8 )
        break;
      *pszDest = v8;
      --v6;
      ++pszDest;
      --v5;
    }
    while ( v5 );
  }
  v9 = pszDest - 1;
  result = -2147483643;
  if ( v5 )
  {
    v9 = pszDest;
    result = 0;
  }
  *v9 = 0;
  return result;
}
