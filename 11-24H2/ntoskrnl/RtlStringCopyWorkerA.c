/*
 * XREFs of RtlStringCopyWorkerA @ 0x140437D90
 * Callers:
 *     RtlStringCbCatExA @ 0x140537748 (RtlStringCbCatExA.c)
 *     RtlStringCbCopyExA @ 0x1405377FC (RtlStringCbCopyExA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  size_t v5; // r10
  size_t v6; // r11
  __int64 v7; // rax
  signed __int64 v8; // r9
  char v9; // dl
  NTSTRSAFE_PSTR v10; // rdx
  NTSTATUS result; // eax
  size_t v12; // rcx

  v5 = cchDest;
  v6 = 0LL;
  if ( cchDest )
  {
    v7 = 2147483646LL;
    v8 = pszSrc - pszDest;
    do
    {
      if ( !v7 )
        break;
      v9 = pszDest[v8];
      if ( !v9 )
        break;
      *pszDest = v9;
      --v7;
      ++pszDest;
      ++v6;
      --v5;
    }
    while ( v5 );
  }
  v10 = pszDest - 1;
  result = -2147483643;
  if ( v5 )
  {
    v10 = pszDest;
    result = 0;
  }
  *v10 = 0;
  if ( pcchNewDestLength )
  {
    v12 = v6 - 1;
    if ( v5 )
      v12 = v6;
    *pcchNewDestLength = v12;
  }
  return result;
}
