/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_InputSiteElementProxy__std::allocator_Microsoft::WRL::ComPtr_InputSiteElementProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_InputSiteElementProxy____::_1_::catch$0 @ 0x1801CFE3E
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800163BC (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAX.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_InputSiteElementProxy__std::allocator_Microsoft::WRL::ComPtr_InputSiteElementProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_InputSiteElementProxy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSiteElementProxy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
