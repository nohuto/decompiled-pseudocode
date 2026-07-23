/*
 * XREFs of SmUniqueIdParseProductName @ 0x14060B270
 * Callers:
 *     SmKmEtwAppendProductName @ 0x14060BE04 (SmKmEtwAppendProductName.c)
 * Callees:
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     wcsstr @ 0x1404FDB70 (wcsstr.c)
 *     StringCbCopyNW @ 0x14060B754 (StringCbCopyNW.c)
 *     StringCopyWorkerW @ 0x14060B7A0 (StringCopyWorkerW.c)
 */

__int64 __fastcall SmUniqueIdParseProductName(wchar_t *Str, STRSAFE_LPWSTR pszDest, size_t cbDest)
{
  size_t v4; // r15
  wchar_t *v5; // rbp
  wchar_t *v7; // rax
  unsigned int v8; // ebx
  const wchar_t *v9; // rsi
  __int64 v10; // rdi
  size_t *v11; // r8
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rax
  STRSAFE_LPWSTR v15; // rcx
  __int64 v16; // rcx
  wchar_t *v17; // rax
  const wchar_t *v18; // rdi
  __int64 v19; // rax
  const wchar_t *i; // rcx
  wchar_t *v21; // rax

  v4 = (unsigned int)cbDest;
  v5 = pszDest;
  v7 = wcsstr(Str, L"&Ven_");
  v8 = 0;
  if ( !v7 )
    return (unsigned int)-1073700864;
  v9 = v7 + 5;
  v10 = wcschr(v7 + 5, 0x26u) - (v7 + 5);
  if ( (_DWORD)v10 )
  {
    if ( StringCbCopyNW(pszDest, v4, v9, 2LL * (unsigned int)v10) < 0 )
      return (unsigned int)-1073741789;
    v13 = v12 >> 1;
    if ( !v13 )
      return (unsigned int)-1073741789;
    v14 = v13;
    v15 = pszDest;
    do
    {
      if ( !*v15 )
        break;
      ++v15;
      --v14;
    }
    while ( v14 );
    v16 = v14 ? v13 - v14 : 0LL;
    if ( !v14 || StringCopyWorkerW(&pszDest[v16], v13 - v16, v11, L" ", 0x7FFFFFFEuLL) < 0 )
      return (unsigned int)-1073741789;
    v5 = &pszDest[(unsigned int)(v10 + 1)];
    LODWORD(v4) = -2 - 2 * v10 + v4;
  }
  v17 = wcsstr(Str, L"&Prod_");
  if ( !v17 )
    return (unsigned int)-1073700864;
  v18 = v17 + 6;
  v19 = wcschr(v17 + 6, 0x26u) - (v17 + 6);
  if ( (_DWORD)v19 && StringCbCopyNW(v5, (unsigned int)v4, v18, 2LL * (unsigned int)v19) < 0 )
    return (unsigned int)-1073741789;
  for ( i = pszDest; ; i = v21 )
  {
    v21 = wcschr(i, 0x5Fu);
    if ( !v21 )
      break;
    *v21 = 32;
  }
  return v8;
}
