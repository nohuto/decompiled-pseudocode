/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAA@XZ @ 0x18002EC7C
 * Callers:
 *     _std::vector_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry_std::allocator_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification_&_int__::_1_::dtor$0 @ 0x18004CE10 (_std--vector_CLockedList_UniqueValuesOnly_CDuckingNotification_0_--LockedListEntry_std--allocato.c)
 *     _std::_Uninitialized_move_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry___std::allocator_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry____::_1_::dtor$0 @ 0x18004CE75 (_std--_Uninitialized_move_CLockedList_UniqueValuesOnly_CDuckingNotification_0_--LockedListEntry_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::~_Uninitialized_backout_al<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
        CDuckingNotification **a1)
{
  std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(*a1, a1[1]);
}
