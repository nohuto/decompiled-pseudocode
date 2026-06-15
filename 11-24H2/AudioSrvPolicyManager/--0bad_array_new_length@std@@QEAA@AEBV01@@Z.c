/*
 * XREFs of ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x18002834C
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x18002262C (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::bad_array_new_length *__fastcall std::bad_array_new_length::bad_array_new_length(
        std::bad_array_new_length *this,
        const struct std::bad_array_new_length *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
