/*
 * XREFs of ??1?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAA@XZ @ 0x18007480C
 * Callers:
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$2 @ 0x1801CC6D2 (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<unsigned int,PointerInputMediator::ContactData>::~unordered_map<unsigned int,PointerInputMediator::ContactData>(
        __int64 a1)
{
  std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::~_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>(a1);
}
