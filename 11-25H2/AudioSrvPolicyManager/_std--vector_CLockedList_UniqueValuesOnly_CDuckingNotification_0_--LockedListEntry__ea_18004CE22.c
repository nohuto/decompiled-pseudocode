/*
 * XREFs of _std::vector_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry_std::allocator_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification_&_int__::_1_::catch$1 @ 0x18004CE22
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180027E64 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     _CxxThrowException_0 @ 0x18004B3B4 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry_std::allocator_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification___int__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
    *(CDuckingNotification **)(a2 + 144),
    *(CDuckingNotification **)(a2 + 152));
  std::_Deallocate<16,0>(*(void **)(a2 + 48), (const struct std::nothrow_t *)(*(_QWORD *)(a2 + 32) << 6));
  throw;
}
