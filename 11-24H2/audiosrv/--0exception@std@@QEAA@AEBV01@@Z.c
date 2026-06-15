/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800A8564
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1800A8484 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x1800AD7BC (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1800D2418 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1800A4D52 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
