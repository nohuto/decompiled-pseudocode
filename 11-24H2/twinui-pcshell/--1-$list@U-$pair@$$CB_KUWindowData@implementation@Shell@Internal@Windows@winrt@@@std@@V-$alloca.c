/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1802A90FC
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$39 @ 0x1806D9294 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$39.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A917C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@Shell@Inte.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>::~list<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0xF0);
}
