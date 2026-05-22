/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@1@AEBV?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@1@@Z @ 0x180052CBC
 * Callers:
 *     _dynamic_initializer_for__VirtualTouchpadControllerProxy::s_configuredControllers__ @ 0x18000A290 (_dynamic_initializer_for__VirtualTouchpadControllerProxy--s_configuredControllers__.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000D380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>(
        __int64 a1,
        int *a2)
{
  _QWORD *v2; // rax

  VirtualTouchpadControllerProxy::s_configuredControllers = *a2;
  qword_180250EB8 = 0LL;
  qword_180250EC0 = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_180250EB8 = (__int64)v2;
  qword_180250EC8 = 0LL;
  xmmword_180250ED0 = 0LL;
  qword_180250EE0 = 7LL;
  qword_180250EE8 = 8LL;
  VirtualTouchpadControllerProxy::s_configuredControllers = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)&qword_180250EC8,
    0x10uLL,
    (unsigned __int64)v2);
  return &VirtualTouchpadControllerProxy::s_configuredControllers;
}
