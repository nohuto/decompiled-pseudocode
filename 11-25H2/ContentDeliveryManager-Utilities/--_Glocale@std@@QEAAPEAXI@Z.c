/*
 * XREFs of ??_Glocale@std@@QEAAPEAXI@Z @ 0x18004DB74
 * Callers:
 *     ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18004C2C8 (--1-$basic_streambuf@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18004C824 (--1locale@std@@QEAA@XZ.c)
 */

std::locale *__fastcall std::locale::`scalar deleting destructor'(std::locale *this, char a2)
{
  std::locale::~locale(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
