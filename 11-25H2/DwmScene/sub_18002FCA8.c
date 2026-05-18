/*
 * XREFs of sub_18002FCA8 @ 0x18002FCA8
 * Callers:
 *     sub_18002FCDC @ 0x18002FCDC (sub_18002FCDC.c)
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_0 @ 0x180030A20 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z_0.c)
 * Callees:
 *     sub_180036610 @ 0x180036610 (sub_180036610.c)
 */

__int64 __fastcall sub_18002FCA8(_QWORD *a1)
{
  *a1 = &std::wstringbuf::`vftable';
  sub_180036610();
  return std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(a1);
}
