/*
 * XREFs of FContainCallBackAce @ 0x14086ADD0
 * Callers:
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     LocalGetAceCount @ 0x14086AF60 (LocalGetAceCount.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 */

__int64 __fastcall FContainCallBackAce(wchar_t *Str1)
{
  wchar_t *i; // rbx
  unsigned __int64 v3; // rdi
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx

  for ( i = Str1; ; ++i )
  {
    if ( !*i )
      return 0LL;
    v3 = (unsigned __int64)(i - 1);
    if ( !i[1] )
      return 0LL;
    if ( !wcsnicmp(i, L"XA", 2uLL)
      || !wcsnicmp(i, L"XD", 2uLL)
      || !wcsnicmp(i, L"RA", 2uLL)
      || !wcsnicmp(i, L"SP", 2uLL)
      || !wcsnicmp(i, L"XU", 2uLL)
      || !wcsnicmp(i, L"ZA", 2uLL)
      || !wcsnicmp(i, L"FL", 2uLL) )
    {
      v5 = 1;
      if ( v3 >= (unsigned __int64)Str1 )
      {
        v7 = 1LL;
        do
        {
          if ( i[-v7] != 32 )
            break;
          v7 = ++v5;
        }
        while ( &i[-v5] >= Str1 );
      }
      if ( i[-v5] == 40 )
      {
        LODWORD(v6) = 2;
        if ( *(_WORD *)(v3 + 6) == 32 )
        {
          do
            v6 = (unsigned int)(v6 + 1);
          while ( i[v6] == 32 );
        }
        if ( i[(unsigned int)v6] == 59 )
          break;
      }
    }
  }
  return 1LL;
}
