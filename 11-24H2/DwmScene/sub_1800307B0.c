/*
 * XREFs of sub_1800307B0 @ 0x1800307B0
 * Callers:
 *     sub_180030BBC @ 0x180030BBC (sub_180030BBC.c)
 *     sub_1800328FC @ 0x1800328FC (sub_1800328FC.c)
 *     sub_1800D734D @ 0x1800D734D (sub_1800D734D.c)
 * Callees:
 *     sub_18002FE3C @ 0x18002FE3C (sub_18002FE3C.c)
 */

__int64 __fastcall sub_1800307B0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_18002FE3C(a1 + 152);
  return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v1);
}
