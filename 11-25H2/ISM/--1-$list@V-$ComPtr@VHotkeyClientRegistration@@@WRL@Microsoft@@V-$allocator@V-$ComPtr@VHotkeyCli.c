/*
 * XREFs of ??1?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801C2A7C
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$1 @ 0x1801D2096 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x1801C2098 (--$_Freenode@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEA.c)
 */

void __fastcall std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::~list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>(
        char **a1)
{
  char *v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  v1 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(_QWORD **)v1;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Freenode<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
        (__int64)a1,
        (__int64)v3);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x18);
}
