/*
 * XREFs of ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x180004664
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@@QEAA@AEBV0@@Z_0 @ 0x180022694 (--0exception@@QEAA@AEBV0@@Z_0.c)
 */

std::logic_error *__fastcall std::logic_error::logic_error(std::logic_error *this, const struct std::logic_error *a2)
{
  exception::exception(this, a2);
  *(_QWORD *)this = &std::length_error::`vftable';
  return this;
}
