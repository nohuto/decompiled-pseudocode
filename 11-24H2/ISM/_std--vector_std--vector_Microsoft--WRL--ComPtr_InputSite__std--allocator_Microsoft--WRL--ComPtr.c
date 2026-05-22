/*
 * XREFs of _std::vector_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite______std::allocator_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite_________::_Emplace_reallocate_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite________::_1_::catch$1 @ 0x1801D0300
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1800493B0 (--$_Destroy_range@V-$allocator@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite______std::allocator_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite_________::_Emplace_reallocate_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite________::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
    *(_QWORD *)(a2 + 32),
    *(_QWORD *)(a2 + 40));
  std::_Deallocate<16,0>(*(char **)(a2 + 136), (const struct std::nothrow_t *)(24LL * *(_QWORD *)(a2 + 112)));
  throw;
}
