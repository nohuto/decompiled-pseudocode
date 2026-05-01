/*
 * XREFs of ??Y?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAAAEAV012@_K@Z @ 0x1806739AC
 * Callers:
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180673EBC (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802CFC8C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?enumerate_current_index@?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1806746C0 (-enumerate_current_index@-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 */

wchar_t *__fastcall wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>::operator+=(wchar_t *S)
{
  unsigned int v1; // eax
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)S + 10);
  if ( v1 + 1 < v1 )
  {
    v6 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x717,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
      (const char *)v6,
      v8);
  }
  if ( v1 == -2 )
  {
    v7 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x71C,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
      (const char *)v7,
      v8);
  }
  v3 = 0LL;
  do
  {
    ++*((_DWORD *)S + 10);
    v4 = wil::reg::key_iterator_data<std::wstring>::enumerate_current_index(S);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x723,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
        (const char *)(unsigned int)v4,
        v8);
    ++v3;
  }
  while ( !v3 );
  return S;
}
