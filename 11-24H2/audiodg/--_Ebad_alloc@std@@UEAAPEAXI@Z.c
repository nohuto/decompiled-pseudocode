/*
 * XREFs of ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x14005C660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _o___std_exception_destroy_0 @ 0x140059F52 (_o___std_exception_destroy_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::`vector deleting destructor'(std::bad_alloc *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
