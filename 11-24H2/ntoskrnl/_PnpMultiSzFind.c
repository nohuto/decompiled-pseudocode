/*
 * XREFs of _PnpMultiSzFind @ 0x14082125C
 * Callers:
 *     _CmFindFilterListInflectionPoint @ 0x1409AACFC (_CmFindFilterListInflectionPoint.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 */

wchar_t *__fastcall PnpMultiSzFind(wchar_t *Str1, wchar_t *Str2)
{
  __int64 v2; // rbx
  __int64 v4; // rbp
  __int64 v6; // rsi

  v2 = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( Str2[v4] );
  while ( *Str1 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( Str1[v6] );
    if ( (_DWORD)v6 == (_DWORD)v4 && !wcsicmp(Str1, Str2) )
      return Str1;
    Str1 += (unsigned int)(v6 + 1);
  }
  return (wchar_t *)v2;
}
