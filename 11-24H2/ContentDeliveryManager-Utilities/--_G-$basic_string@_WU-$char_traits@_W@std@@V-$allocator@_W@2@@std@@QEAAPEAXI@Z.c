/*
 * XREFs of ??_G?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAPEAXI@Z @ 0x1800846D4
 * Callers:
 *     ?_Destroy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@0@Z @ 0x180088018 (-_Destroy@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator.c)
 *     ?_Freenode@?$_List_buy@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@2@@Z @ 0x180097028 (-_Freenode@-$_List_buy@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$alloc.c)
 *     _std::_Uninit_move_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______::_1_::catch$0 @ 0x1800BBFB6 (_std--_Uninit_move_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

_QWORD *__fastcall std::wstring::`scalar deleting destructor'(_QWORD *a1)
{
  std::wstring::_Tidy(a1, 1, 0LL);
  return a1;
}
