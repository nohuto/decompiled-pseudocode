/*
 * XREFs of sub_18002FE08 @ 0x18002FE08
 * Callers:
 *     sub_18002FE3C @ 0x18002FE3C (sub_18002FE3C.c)
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_0 @ 0x180030B80 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z_0.c)
 * Callees:
 *     sub_180036770 @ 0x180036770 (sub_180036770.c)
 */

__int64 __fastcall sub_18002FE08(_QWORD *a1)
{
  *a1 = &std::wstringbuf::`vftable';
  sub_180036770();
  return std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(a1);
}
