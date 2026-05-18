/*
 * XREFs of sub_18001F2C4 @ 0x18001F2C4
 * Callers:
 *     sub_18001F2F8 @ 0x18001F2F8 (sub_18001F2F8.c)
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x18001F3B0 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 *     sub_18004DAF0 @ 0x18004DAF0 (sub_18004DAF0.c)
 * Callees:
 *     sub_18001F564 @ 0x18001F564 (sub_18001F564.c)
 */

__int64 __fastcall sub_18001F2C4(_QWORD *a1)
{
  *a1 = &std::stringbuf::`vftable';
  sub_18001F564();
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
