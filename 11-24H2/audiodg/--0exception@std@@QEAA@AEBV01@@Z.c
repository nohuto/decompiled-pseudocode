/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x14005BF60
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x14005BE30 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x14005BF10 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x14005BF38 (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x14008DA0C (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x140059F46 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
