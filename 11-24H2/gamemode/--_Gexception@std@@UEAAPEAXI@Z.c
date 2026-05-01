/*
 * XREFs of ??_Gexception@std@@UEAAPEAXI@Z @ 0x180004360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002604 (--3@YAXPEAX_K@Z.c)
 *     _o___std_exception_destroy_0 @ 0x180002D42 (_o___std_exception_destroy_0.c)
 */

std::exception *__fastcall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
