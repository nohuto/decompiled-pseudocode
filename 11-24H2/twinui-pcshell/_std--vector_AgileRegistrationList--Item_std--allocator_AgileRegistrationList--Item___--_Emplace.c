/*
 * XREFs of _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::_Emplace_reallocate_AgileRegistrationList::Item__::_1_::catch$3 @ 0x1806CBE6D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180046A10 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::_Emplace_reallocate_AgileRegistrationList::Item__::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 120)));
  throw;
}
