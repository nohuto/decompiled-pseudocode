/*
 * XREFs of sub_18001F35C @ 0x18001F35C
 * Callers:
 *     sub_18001F3EC @ 0x18001F3EC (sub_18001F3EC.c)
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 *     sub_1800C223C @ 0x1800C223C (sub_1800C223C.c)
 *     sub_1800E1FE5 @ 0x1800E1FE5 (sub_1800E1FE5.c)
 * Callees:
 *     sub_18001F2F8 @ 0x18001F2F8 (sub_18001F2F8.c)
 */

__int64 __fastcall sub_18001F35C(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_18001F2F8(a1 + 152);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
