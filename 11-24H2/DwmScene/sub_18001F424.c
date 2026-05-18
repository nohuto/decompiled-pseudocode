/*
 * XREFs of sub_18001F424 @ 0x18001F424
 * Callers:
 *     sub_18001F458 @ 0x18001F458 (sub_18001F458.c)
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x18001F510 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 *     sub_18004DC50 @ 0x18004DC50 (sub_18004DC50.c)
 * Callees:
 *     sub_18001F6C4 @ 0x18001F6C4 (sub_18001F6C4.c)
 */

__int64 __fastcall sub_18001F424(_QWORD *a1)
{
  *a1 = &std::stringbuf::`vftable';
  sub_18001F6C4();
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
