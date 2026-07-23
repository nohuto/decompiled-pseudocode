/*
 * XREFs of _PnpMultiSzAppend @ 0x1409AAF98
 * Callers:
 *     _CmAppendDeclarativeDefaultFilters @ 0x14081E4DC (_CmAppendDeclarativeDefaultFilters.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14081E5C4 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmMergeFilterLists @ 0x1409AADB4 (_CmMergeFilterLists.c)
 *     _CmGetDeviceChildren @ 0x1409AB39C (_CmGetDeviceChildren.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x1404447AC (RtlStringCbCopyExW.c)
 */

char __fastcall PnpMultiSzAppend(NTSTRSAFE_PWSTR pszDest, unsigned int *a2, const wchar_t *a3, wchar_t **a4)
{
  unsigned int v5; // ecx
  NTSTRSAFE_PWSTR v9; // rdi
  size_t v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  wchar_t *v13; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // edi
  wchar_t *v18; // rax

  v5 = *a2;
  if ( *pszDest )
  {
    v9 = pszDest;
    v10 = v5;
    do
    {
      if ( 2 * (unsigned __int64)(unsigned int)(v9 - pszDest) >= v5 )
        break;
      while ( *v9 )
        ++v9;
      ++v9;
    }
    while ( *v9 );
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    if ( 2 * (v9 - pszDest + v12) + 4 <= v10 && RtlStringCbCopyExW(v9, v10, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v11;
      while ( a3[v11] );
      v13 = &v9[v11 + 1];
      *v13 = 0;
      *a2 = 2 * (v13 - pszDest) + 2;
      if ( a4 )
        *a4 = v13;
      return 1;
    }
  }
  else
  {
    v15 = -1LL;
    v16 = -1LL;
    do
      ++v16;
    while ( a3[v16] );
    v17 = 2 * v16 + 4;
    if ( v17 <= v5 && RtlStringCbCopyExW(pszDest, *a2, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v15;
      while ( pszDest[v15] );
      *a2 = v17;
      v18 = &pszDest[v15 + 1];
      *v18 = 0;
      if ( a4 )
        *a4 = v18;
      return 1;
    }
  }
  return 0;
}
