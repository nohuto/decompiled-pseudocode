/*
 * XREFs of ??1?$pointer_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@wil@@QEAA@XZ @ 0x180673720
 * Callers:
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180673EBC (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 *     _RdpShellExtensionHost::ProcessAllRdpShellExtensions_::_1_::dtor$3 @ 0x180703E80 (_RdpShellExtensionHost--ProcessAllRdpShellExtensions_--_1_--dtor$3.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall wil::details::pointer_range<wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>>::~pointer_range<wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>>(
        void **a1)
{
  std::wstring::_Tidy_deallocate(a1 + 7);
  std::wstring::_Tidy_deallocate(a1);
}
