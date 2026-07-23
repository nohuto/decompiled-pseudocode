/*
 * XREFs of _CmFindFilterListInflectionPoint @ 0x1409AACFC
 * Callers:
 *     _CmMergeFilterLists @ 0x1409AADB4 (_CmMergeFilterLists.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     _PnpMultiSzFind @ 0x14082125C (_PnpMultiSzFind.c)
 */

wchar_t *__fastcall CmFindFilterListInflectionPoint(wchar_t *Str2, wchar_t *Str1, wchar_t *a3)
{
  wchar_t *v5; // rdi
  wchar_t *v6; // rbx
  wchar_t *v7; // rsi
  wchar_t *v8; // r14
  int v9; // eax
  __int64 v10; // rcx

  v5 = Str2;
  v6 = 0LL;
  v7 = 0LL;
  if ( Str1 && *Str1 && *Str2 )
  {
    while ( 1 )
    {
      v8 = v5;
      v6 = PnpMultiSzFind(Str1, v5);
      if ( v6 )
        break;
      v9 = wcsicmp(v5, a3);
      v10 = -1LL;
      do
        ++v10;
      while ( v5[v10] );
      v5 += v10 + 1;
      if ( v9 )
        v8 = v7;
      v7 = v8;
      if ( !*v5 )
      {
        if ( v8 )
          return v8;
        return v6;
      }
    }
  }
  return v6;
}
