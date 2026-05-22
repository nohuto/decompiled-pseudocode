/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801C2824
 * Callers:
 *     ??$_Emplace@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAAPEAU?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@1@QEAU21@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@Z @ 0x1801C1B9C (--$_Emplace@AEBV-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@-$list@V-$ComPtr@VHotkeyCli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v2 + 16));
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>(a1);
}
