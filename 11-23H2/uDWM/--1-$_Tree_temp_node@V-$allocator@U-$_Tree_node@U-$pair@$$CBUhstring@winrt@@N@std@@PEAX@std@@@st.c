/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800FC854
 * Callers:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBN@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBN@Z @ 0x1800FB750 (--$_Emplace@AEBUhstring@winrt@@AEBN@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@wi.c)
 *     ??$_Emplace_hint@AEBU?$pair@$$CBUhstring@winrt@@N@std@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBUhstring@winrt@@N@1@@Z @ 0x1800FB828 (--$_Emplace_hint@AEBU-$pair@$$CBUhstring@winrt@@N@std@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005C050 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    winrt::handle_type<winrt::impl::hstring_traits>::close((void **)(v2 + 32));
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 0x30uLL);
}
