/*
 * XREFs of sub_1800D2754 @ 0x1800D2754
 * Callers:
 *     sub_1800D2724 @ 0x1800D2724 (sub_1800D2724.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800D2754(__int64 a1)
{
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 104));
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 32));
  _Mtx_destroy_in_situ((_Mtx_t)a1);
}
