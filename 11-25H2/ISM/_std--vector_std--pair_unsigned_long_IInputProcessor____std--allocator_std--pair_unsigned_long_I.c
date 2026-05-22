/*
 * XREFs of _std::vector_std::pair_unsigned_long_IInputProcessor____std::allocator_std::pair_unsigned_long_IInputProcessor_______::_Emplace_reallocate_unsigned_long_&_IInputProcessor____::_1_::catch$0 @ 0x1801CBEBF
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DAE6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_IInputProcessor____std::allocator_std::pair_unsigned_long_IInputProcessor_______::_Emplace_reallocate_unsigned_long___IInputProcessor____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 104), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 96)));
  throw;
}
