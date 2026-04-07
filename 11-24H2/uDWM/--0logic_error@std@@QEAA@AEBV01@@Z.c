/*
 * XREFs of ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x18009DDF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::logic_error *__fastcall std::logic_error::logic_error(std::logic_error *this, const struct std::logic_error *a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = &stdext::bad_alloc::`vftable';
  return this;
}
