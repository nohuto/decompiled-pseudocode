/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x180002ED4
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x180003036 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((char *)a2 + 8);
  return this;
}
