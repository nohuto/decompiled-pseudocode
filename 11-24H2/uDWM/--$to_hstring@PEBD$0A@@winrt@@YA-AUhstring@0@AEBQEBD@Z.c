/*
 * XREFs of ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800DE43C
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$15 @ 0x1800F87A9 (_winrt--to_hresult_--_1_--catch$15.c)
 *     _winrt::to_hresult_::_1_::catch$16 @ 0x1800F8847 (_winrt--to_hresult_--_1_--catch$16.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1800F88E8 (_winrt--to_hresult_--_1_--catch$17.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009A53C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     MultiByteToWideChar_0 @ 0x18009D711 (MultiByteToWideChar_0.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800A0AD0 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::to_hstring<char const *,0>(
        struct winrt::impl::shared_hstring_header **a1,
        const CHAR **a2)
{
  const CHAR *v2; // rbp
  __int64 v4; // rsi
  unsigned int v5; // eax
  int cchWideChar; // r14d
  struct winrt::impl::shared_hstring_header *v7; // rbx
  void *v9; // [rsp+68h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v2[v4] );
  v5 = MultiByteToWideChar_0(0xFDE9u, 0, v2, v4, 0LL, 0);
  cchWideChar = v5;
  if ( v5 )
  {
    v7 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)v5);
    MultiByteToWideChar_0(0xFDE9u, 0, v2, v4, *((LPWSTR *)v7 + 2), cchWideChar);
    v9 = 0LL;
    *a1 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
