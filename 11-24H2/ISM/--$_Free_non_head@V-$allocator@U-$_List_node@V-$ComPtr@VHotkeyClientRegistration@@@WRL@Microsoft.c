/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x1801C97A8
 * Callers:
 *     ??1?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801CA2FC (--1-$list@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VHotkeyCli.c)
 *     ??1HotKeyProcessor@@UEAA@XZ @ 0x1801CA3AC (--1HotKeyProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x1801C97DC (--$_Freenode@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEA.c)
 */

_QWORD *__fastcall std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Free_non_head<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Freenode<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
