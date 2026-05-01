/*
 * XREFs of _std::vector_std::pair_unsigned_long_Windows::Internal::String__std::allocator_std::pair_unsigned_long_Windows::Internal::String_____::_Emplace_reallocate_std::pair_unsigned_long_Windows::Internal::String____::_1_::catch$1 @ 0x1806DF7EC
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x18001BDE0 (--$_Destroy_range@V-$allocator@U-$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU-$pai.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_Windows::Internal::String__std::allocator_std::pair_unsigned_long_Windows::Internal::String_____::_Emplace_reallocate_std::pair_unsigned_long_Windows::Internal::String____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 120)));
  throw;
}
