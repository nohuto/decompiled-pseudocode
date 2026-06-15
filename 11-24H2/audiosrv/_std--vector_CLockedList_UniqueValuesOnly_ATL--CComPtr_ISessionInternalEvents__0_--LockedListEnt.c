/*
 * XREFs of _std::vector_CLockedList_UniqueValuesOnly_ATL::CComPtr_ISessionInternalEvents__0_::LockedListEntry_std::allocator_CLockedList_UniqueValuesOnly_ATL::CComPtr_ISessionInternalEvents__0_::LockedListEntry___::_Emplace_reallocate_ATL::CComPtr_ISessionInternalEvents__&_int__::_1_::catch$0 @ 0x18016B016
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@0@@Z @ 0x180025924 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISess.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CLockedList_UniqueValuesOnly_ATL::CComPtr_ISessionInternalEvents__0_::LockedListEntry_std::allocator_CLockedList_UniqueValuesOnly_ATL::CComPtr_ISessionInternalEvents__0_::LockedListEntry___::_Emplace_reallocate_ATL::CComPtr_ISessionInternalEvents____int__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
    *(_QWORD **)(a2 + 112),
    *(_QWORD **)(a2 + 48));
  std::_Deallocate<16,0>(*(char **)(a2 + 56), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 32)));
  throw;
}
