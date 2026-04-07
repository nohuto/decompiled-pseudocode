/*
 * XREFs of ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@N@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800FCA20
 * Callers:
 *     ?Remove@?$map_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@N@winrt@@QEAAXAEBUhstring@2@@Z @ 0x1800FE9FC (-Remove@-$map_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005C050 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@N@std@@AEAAXXZ @ 0x1800FF49C (-_Clear@-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V-$allocator@U.c)
 */

void **__fastcall std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>,std::allocator<std::pair<winrt::hstring const,double>>,std::_Node_handle_map_base,winrt::hstring,double>::operator=(
        void **a1,
        void **a2)
{
  void **v4; // rcx
  void *v5; // rax

  v4 = (void **)*a1;
  v5 = *a2;
  if ( v4 )
  {
    if ( !v5 || a1 == a2 )
    {
      std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>,std::allocator<std::pair<winrt::hstring const,double>>,std::_Node_handle_map_base,winrt::hstring,double>::_Clear(a1);
      return a1;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(v4 + 4);
    std::_Deallocate<16,0>(*a1, 0x30uLL);
    v5 = *a2;
    *a2 = 0LL;
    goto LABEL_4;
  }
  if ( v5 )
  {
    *a2 = 0LL;
LABEL_4:
    *a1 = v5;
  }
  return a1;
}
