/*
 * XREFs of sub_18001F4BC @ 0x18001F4BC
 * Callers:
 *     sub_18001F54C @ 0x18001F54C (sub_18001F54C.c)
 *     sub_1800C22D0 @ 0x1800C22D0 (sub_1800C22D0.c)
 *     sub_1800C239C @ 0x1800C239C (sub_1800C239C.c)
 *     sub_1800E2145 @ 0x1800E2145 (sub_1800E2145.c)
 * Callees:
 *     sub_18001F458 @ 0x18001F458 (sub_18001F458.c)
 */

__int64 __fastcall sub_18001F4BC(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_18001F458(a1 + 152);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
