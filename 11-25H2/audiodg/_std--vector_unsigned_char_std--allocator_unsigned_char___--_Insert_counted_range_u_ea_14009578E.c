/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_counted_range_unsigned_char_const____::_1_::catch$4 @ 0x14009578E
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1400919E4 (memmove_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_counted_range_unsigned_char_const____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx

  v3 = *(_QWORD **)(a2 + 128);
  memmove_0(*(void **)(a2 + 136), *(const void **)(a2 + 152), *v3 - *(_QWORD *)(a2 + 152));
  *v3 = *(_QWORD *)(a2 + 40);
  throw;
}
