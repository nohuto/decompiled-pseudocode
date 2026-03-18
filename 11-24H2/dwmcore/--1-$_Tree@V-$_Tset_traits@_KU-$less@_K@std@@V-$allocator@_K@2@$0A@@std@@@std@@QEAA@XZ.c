/*
 * XREFs of ??1?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801BC40C
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1801BBC90 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1801BBCC8 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for___currentSequence__ @ 0x1802DFA90 (_anonymous_namespace_--_dynamic_atexit_destructor_for___currentSequence__.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@@Z @ 0x1801BC43C (--$_Erase_tree@V-$allocator@U-$_Tree_node@_KPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@_.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::~_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
    a1,
    a1,
    *((_QWORD *)*a1 + 1));
  operator delete(*a1, 0x28uLL);
}
