/*
 * XREFs of _std::vector_unsigned_int_std::allocator_unsigned_int___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x1801CEA5F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DAE6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_int_std::allocator_unsigned_int___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 72), (const struct std::nothrow_t *)(4LL * *(_QWORD *)(a2 + 80)));
  throw;
}
