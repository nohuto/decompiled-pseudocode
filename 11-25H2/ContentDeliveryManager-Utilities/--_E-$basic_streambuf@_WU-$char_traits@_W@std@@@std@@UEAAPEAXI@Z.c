/*
 * XREFs of ??_E?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x18004D8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18004C2C8 (--1-$basic_streambuf@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

_QWORD *__fastcall std::wstreambuf::`vector deleting destructor'(_QWORD *a1, char a2)
{
  std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
