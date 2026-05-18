/*
 * XREFs of sub_180030650 @ 0x180030650
 * Callers:
 *     sub_180030A5C @ 0x180030A5C (sub_180030A5C.c)
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 *     sub_1800D71ED @ 0x1800D71ED (sub_1800D71ED.c)
 * Callees:
 *     sub_18002FCDC @ 0x18002FCDC (sub_18002FCDC.c)
 */

__int64 __fastcall sub_180030650(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_18002FCDC(a1 + 152);
  return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v1);
}
