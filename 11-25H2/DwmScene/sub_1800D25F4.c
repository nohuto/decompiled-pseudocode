/*
 * XREFs of sub_1800D25F4 @ 0x1800D25F4
 * Callers:
 *     sub_1800D25C4 @ 0x1800D25C4 (sub_1800D25C4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800D25F4(__int64 a1)
{
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 104));
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 32));
  _Mtx_destroy_in_situ((_Mtx_t)a1);
}
