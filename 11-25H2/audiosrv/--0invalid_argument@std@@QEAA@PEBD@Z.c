/*
 * XREFs of ??0invalid_argument@std@@QEAA@PEBD@Z @ 0x1800DF4BC
 * Callers:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800E3B44 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1800A8A62 (_o___std_exception_copy_0.c)
 */

std::invalid_argument *__fastcall std::invalid_argument::invalid_argument(std::invalid_argument *this, const char *a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
