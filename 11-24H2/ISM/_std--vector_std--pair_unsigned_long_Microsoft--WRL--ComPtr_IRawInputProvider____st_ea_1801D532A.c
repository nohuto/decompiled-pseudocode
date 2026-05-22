/*
 * XREFs of _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Reallocate_0__::_1_::catch$0 @ 0x1801D532A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Reallocate_0__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 64), (const struct std::nothrow_t *)(16LL * **(_QWORD **)(a2 + 72)));
  throw;
}
