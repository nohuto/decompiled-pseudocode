/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1802DB54C
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1802DB444 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x1802DB524 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x1802DB644 (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x1802DEC4C (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1802E2E94 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x180315044 (--0_System_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x180315084 (--0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z.c)
 *     ??0system_error@std@@QEAA@AEBV01@@Z @ 0x18031521C (--0system_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x18042AAB4 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1802D23D2 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
