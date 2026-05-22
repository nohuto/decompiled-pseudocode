/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x18009F66C
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x18009F55C (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x1800A69D4 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x1800A69FC (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x1800A7368 (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1800A8C20 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_variant_access@std@@QEAA@AEBV01@@Z @ 0x1800B3348 (--0bad_variant_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x1800F8FCC (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18009D38E (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
