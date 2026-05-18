/*
 * XREFs of sub_18006985C @ 0x18006985C
 * Callers:
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 *     sub_1800D6250 @ 0x1800D6250 (sub_1800D6250.c)
 *     sub_1800D6269 @ 0x1800D6269 (sub_1800D6269.c)
 *     sub_1800D6282 @ 0x1800D6282 (sub_1800D6282.c)
 * Callees:
 *     sub_18002FBAC @ 0x18002FBAC (sub_18002FBAC.c)
 */

__int64 __fastcall sub_18006985C(__int64 a1)
{
  sub_18002FBAC((void **)(a1 + 104));
  sub_18002FBAC((void **)(a1 + 88));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 56));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 24));
  return sub_180069C18(a1);
}
