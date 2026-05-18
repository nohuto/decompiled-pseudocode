/*
 * XREFs of sub_180069C10 @ 0x180069C10
 * Callers:
 *     sub_180025980 @ 0x180025980 (sub_180025980.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180069DD8 @ 0x180069DD8 (sub_180069DD8.c)
 *     sub_180069E18 @ 0x180069E18 (sub_180069E18.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180069C10(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rdi

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  sub_180011C30(a1 + 24);
  sub_180011C30(a1 + 56);
  sub_180069E18(a1);
  sub_180069DD8(a1 + 88);
  sub_180069DD8(a1 + 104);
  Mtx_unlock((_Mtx_t)(a1 + 56));
  return Mtx_unlock(v2);
}
