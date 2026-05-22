/*
 * XREFs of ??0DragManagerClientProxy@@QEAA@XZ @ 0x18002F6C0
 * Callers:
 *     ?CreateDragManagerClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18002E950 (-CreateDragManagerClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@I.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000D380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0BamoDragManagerClientProxyImpl@BamoImpl@@QEAA@XZ @ 0x18002F690 (--0BamoDragManagerClientProxyImpl@BamoImpl@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
DragManagerClientProxy *__fastcall DragManagerClientProxy::DragManagerClientProxy(DragManagerClientProxy *this)
{
  _QWORD *v2; // rax

  *(_QWORD *)this = &BamoDragManagerClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &BamoDragManagerClientProxy::`vftable'{for `IDragManagerClientProxy'};
  BamoImpl::BamoDragManagerClientProxyImpl::BamoDragManagerClientProxyImpl((DragManagerClientProxy *)((char *)this + 16));
  *(_QWORD *)this = &DragManagerClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &BamoDragManagerClientProxy::`vftable'{for `IDragManagerClientProxy'};
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 11) = v2;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 7LL;
  *((_QWORD *)this + 17) = 8LL;
  *((_DWORD *)this + 20) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)this + 104,
    0x10uLL,
    *((_QWORD *)this + 11));
  *((_BYTE *)this + 144) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  return this;
}
