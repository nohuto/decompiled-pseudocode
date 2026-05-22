/*
 * XREFs of ??1?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801CA2FC
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$1 @ 0x1801D9B79 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x1801C97A8 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft.c)
 */

void __fastcall std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::~list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>(
        __int64 *a1)
{
  std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Free_non_head<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x18);
}
