/*
 * XREFs of ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800C0A28
 * Callers:
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C08FC (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800C1D74 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder_::_1_::dtor$0 @ 0x1806D0729 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveTabsFromWindowOrder_--_1_.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$15 @ 0x1806D91CA (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$15.c)
 * Callees:
 *     ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1800C0ACC (-_Tidy@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<unsigned __int64>::~deque<unsigned __int64>(void **a1)
{
  void *v2; // rcx

  std::deque<unsigned __int64>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
