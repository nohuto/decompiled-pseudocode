/*
 * XREFs of ??0SystemContextProvider@@IEAA@XZ @ 0x1800909F4
 * Callers:
 *     ?Create@KernelContextProvider@@CAJPEAPEAV1@@Z @ 0x180082948 (-Create@KernelContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x1801085A0 (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z @ 0x180199BB0 (-Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z @ 0x18019A6DC (-Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18005B560 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_18005B560.c)
 */

// Hidden C++ exception states: #wind=3
SystemContextProvider *__fastcall SystemContextProvider::SystemContextProvider(SystemContextProvider *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &SystemContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &SystemContextProvider::`vftable'{for `RefCountedObject'};
  v2 = (char *)this + 24;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(v2 + 24),
    0x10uLL,
    *((_QWORD *)v2 + 1));
  return this;
}
