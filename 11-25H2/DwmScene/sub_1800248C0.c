/*
 * XREFs of sub_1800248C0 @ 0x1800248C0
 * Callers:
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 *     sub_1800D621E @ 0x1800D621E (sub_1800D621E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800248C0(__int64 a1)
{
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 16));
  return sub_180024478((void **)a1);
}
