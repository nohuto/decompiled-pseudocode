/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_counted_range_unsigned_char_const____::_1_::catch$0 @ 0x140095142
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x14005A0F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_counted_range_unsigned_char_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 48), *(_QWORD *)(a2 + 136));
  throw;
}
