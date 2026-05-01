/*
 * XREFs of ??$make_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@wil@@YA?AV?$pointer_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@0@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@0@0@Z @ 0x1806733B0
 * Callers:
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180673EBC (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@AEBV012@@Z @ 0x180673540 (--0-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@Q.c)
 */

__int64 __fastcall wil::make_range<wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>>(
        __int64 a1,
        void **a2,
        void **a3)
{
  void *v7[7]; // [rsp+20h] [rbp-88h] BYREF
  void *v8[10]; // [rsp+58h] [rbp-50h] BYREF

  wil::reg::key_iterator_data<std::wstring>::key_iterator_data<std::wstring>(v8, a3);
  wil::reg::key_iterator_data<std::wstring>::key_iterator_data<std::wstring>(v7, a2);
  wil::reg::key_iterator_data<std::wstring>::key_iterator_data<std::wstring>(a1, v7);
  wil::reg::key_iterator_data<std::wstring>::key_iterator_data<std::wstring>(a1 + 56, v8);
  std::wstring::_Tidy_deallocate(v7);
  std::wstring::_Tidy_deallocate(v8);
  std::wstring::_Tidy_deallocate(a2);
  std::wstring::_Tidy_deallocate(a3);
  return a1;
}
