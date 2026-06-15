/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x18002257C
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x180022428 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x1800281AC (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1800210A6 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
