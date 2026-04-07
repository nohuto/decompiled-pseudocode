/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@@Z @ 0x1800FB8CC
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@@Z @ 0x1800FB8CC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@-$.c)
 *     ??1?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@QEAA@XZ @ 0x1800FC824 (--1-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$allocator@U-$pair@$$CBUhstring@winrt@.c)
 *     ??_G?$heap_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800FCBC0 (--_G-$heap_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winr.c)
 *     ?Clear@?$map_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@N@winrt@@QEAAXXZ @ 0x1800FCF0C (-Clear@-$map_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@.c)
 *     ?SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800FEB88 (-SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FEE08 (-UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@W4ShellTransition@345@@Z @ 0x1800FF098 (-UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Wi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005C050 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@@Z @ 0x1800FB8CC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@-$.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  void **i; // rdi
  void **v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = std::_Deallocate<16,0>(v6, 0x30uLL) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (void **)*i;
    winrt::handle_type<winrt::impl::hstring_traits>::close(v6 + 4);
  }
  return result;
}
