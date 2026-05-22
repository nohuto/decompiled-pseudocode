/*
 * XREFs of _std::vector_unsigned_long_std::allocator_unsigned_long___::_Reallocate_1__::_1_::catch$0 @ 0x1801CBE1A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DAE6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_long_std::allocator_unsigned_long___::_Reallocate_1__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 64), (const struct std::nothrow_t *)(4LL * **(_QWORD **)(a2 + 72)));
  throw;
}
