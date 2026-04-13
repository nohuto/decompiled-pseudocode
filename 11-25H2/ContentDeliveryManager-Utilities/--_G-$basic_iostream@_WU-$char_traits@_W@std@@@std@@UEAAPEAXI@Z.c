/*
 * XREFs of ??_G?$basic_iostream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x1800606D4
 * Callers:
 *     ??_E?$basic_iostream@GU?$char_traits@G@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x1800605C0 (--_E-$basic_iostream@GU-$char_traits@G@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000567C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     ??1?$basic_iostream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18005FEB8 (--1-$basic_iostream@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wiostream::`scalar deleting destructor'(struct std::ios_base *this, char a2)
{
  std::basic_iostream<unsigned short>::~basic_iostream<unsigned short,std::char_traits<unsigned short>>((__int64)this);
  *(_QWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    operator delete((char *)this - 32);
  return (__int64)this - 32;
}
