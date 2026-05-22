/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__std::allocator_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__const_&__::_1_::catch$1 @ 0x1801C968B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180015DA0 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DAE6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__std::allocator_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__const____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(
    *(__int64 **)(a2 + 128),
    *(__int64 **)(a2 + 40));
  std::_Deallocate<16,0>(*(char **)(a2 + 48), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 136)));
  throw;
}
