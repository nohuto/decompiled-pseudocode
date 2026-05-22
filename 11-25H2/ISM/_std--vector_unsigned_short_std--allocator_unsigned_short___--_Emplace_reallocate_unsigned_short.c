/*
 * XREFs of _std::vector_unsigned_short_std::allocator_unsigned_short___::_Emplace_reallocate_unsigned_short_const_&__::_1_::catch$0 @ 0x1801CE388
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DAE6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_short_std::allocator_unsigned_short___::_Emplace_reallocate_unsigned_short_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 88), (const struct std::nothrow_t *)(2LL * *(_QWORD *)(a2 + 80)));
  throw;
}
