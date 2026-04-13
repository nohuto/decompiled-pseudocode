/*
 * XREFs of ??0range_error@std@@QEAA@AEBV01@@Z @ 0x18006712C
 * Callers:
 *     <none>
 * Callees:
 *     ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x18004B430 (--0runtime_error@std@@QEAA@AEBV01@@Z.c)
 */

std::range_error *__fastcall std::range_error::range_error(std::range_error *this, const struct std::range_error *a2)
{
  std::runtime_error::runtime_error(this, a2);
  *(_QWORD *)this = &std::range_error::`vftable';
  return this;
}
