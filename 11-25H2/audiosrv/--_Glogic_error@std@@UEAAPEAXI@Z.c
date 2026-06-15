/*
 * XREFs of ??_Glogic_error@std@@UEAAPEAXI@Z @ 0x1800AC4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _o___std_exception_destroy_0 @ 0x1800A8A6E (_o___std_exception_destroy_0.c)
 */

std::logic_error *__fastcall std::logic_error::`scalar deleting destructor'(std::logic_error *this, char a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
