/*
 * XREFs of ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x180022AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _o___std_exception_destroy_0 @ 0x1800210B2 (_o___std_exception_destroy_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::`vector deleting destructor'(std::bad_alloc *this, char a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
