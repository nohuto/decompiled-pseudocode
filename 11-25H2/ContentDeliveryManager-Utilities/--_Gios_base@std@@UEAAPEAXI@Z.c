/*
 * XREFs of ??_Gios_base@std@@UEAAPEAXI@Z @ 0x18004D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000567C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
std::ios_base *__fastcall std::ios_base::`scalar deleting destructor'(std::ios_base *this, char a2)
{
  *(_QWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
