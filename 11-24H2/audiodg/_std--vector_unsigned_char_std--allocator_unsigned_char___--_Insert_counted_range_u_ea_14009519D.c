/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_counted_range_unsigned_char_const____::_1_::catch$2 @ 0x14009519D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x14005A0F0 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x140091464 (memmove_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_counted_range_unsigned_char_const____::_1_::catch_2(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // rbx
  size_t v4; // rsi
  _QWORD *v5; // rdi

  v3 = (char *)a2[17];
  v4 = a2[19];
  memmove_0(v3, &v3[v4], v4);
  v5 = (_QWORD *)a2[16];
  memmove_0(&v3[v4], &v3[2 * v4], *v5 - (_QWORD)&v3[2 * v4]);
  *v5 = a2[5];
  throw;
}
