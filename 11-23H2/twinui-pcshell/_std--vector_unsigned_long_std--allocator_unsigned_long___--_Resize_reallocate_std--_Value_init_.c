/*
 * XREFs of _std::vector_unsigned_long_std::allocator_unsigned_long___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$5 @ 0x1806CA20B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_long_std::allocator_unsigned_long___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 72), 4LL * *(_QWORD *)(a2 + 80));
  throw;
}
