/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@@Z @ 0x1801BC43C
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x1801BBF24 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     ??1?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801BC40C (--1-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@@Z @ 0x1801BC43C (--$_Erase_tree@V-$allocator@U-$_Tree_node@_KPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@@Z @ 0x1801BC43C (--$_Erase_tree@V-$allocator@U-$_Tree_node@_KPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@_.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  _QWORD *v6; // rcx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    std::_Deallocate<16,0>(v6, 0x28uLL);
  }
}
