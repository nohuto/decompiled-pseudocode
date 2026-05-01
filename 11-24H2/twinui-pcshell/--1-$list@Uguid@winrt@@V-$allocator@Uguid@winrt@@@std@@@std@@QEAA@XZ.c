/*
 * XREFs of ??1?$list@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x18021C540
 * Callers:
 *     _std::unordered_set_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid__std::allocator_winrt::guid___::unordered_set_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid__std::allocator_winrt::guid____::_1_::dtor$1 @ 0x1806CC0AE (_std--unordered_set_winrt--guid_std--hash_winrt--guid__std--equal_to_winrt--guid__std--allocator.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@std@@@?$_List_node@Uguid@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C3030 (--$_Free_non_head@V-$allocator@U-$_List_node@Uguid@winrt@@PEAX@std@@@std@@@-$_List_node@Uguid@wi.c)
 */

void __fastcall std::list<winrt::guid>::~list<winrt::guid>(void **a1)
{
  std::_List_node<winrt::guid,void *>::_Free_non_head<std::allocator<std::_List_node<winrt::guid,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
