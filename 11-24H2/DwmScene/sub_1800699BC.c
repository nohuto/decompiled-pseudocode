/*
 * XREFs of sub_1800699BC @ 0x1800699BC
 * Callers:
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 *     sub_1800D63B0 @ 0x1800D63B0 (sub_1800D63B0.c)
 *     sub_1800D63C9 @ 0x1800D63C9 (sub_1800D63C9.c)
 *     sub_1800D63E2 @ 0x1800D63E2 (sub_1800D63E2.c)
 * Callees:
 *     sub_18002FD0C @ 0x18002FD0C (sub_18002FD0C.c)
 */

__int64 __fastcall sub_1800699BC(__int64 a1)
{
  sub_18002FD0C((void **)(a1 + 104));
  sub_18002FD0C((void **)(a1 + 88));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 56));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 24));
  return sub_180069D78(a1);
}
