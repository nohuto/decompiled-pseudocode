/*
 * XREFs of ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x1800A7368
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x18009F66C (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::logic_error *__fastcall std::logic_error::logic_error(std::logic_error *this, const struct std::logic_error *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::logic_error::`vftable';
  return this;
}
