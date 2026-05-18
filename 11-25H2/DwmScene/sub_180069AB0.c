/*
 * XREFs of sub_180069AB0 @ 0x180069AB0
 * Callers:
 *     sub_180025820 @ 0x180025820 (sub_180025820.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180069C78 @ 0x180069C78 (sub_180069C78.c)
 *     sub_180069CB8 @ 0x180069CB8 (sub_180069CB8.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180069AB0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rdi

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  sub_180011B30(a1 + 24);
  sub_180011B30(a1 + 56);
  sub_180069CB8(a1);
  sub_180069C78(a1 + 88);
  sub_180069C78(a1 + 104);
  Mtx_unlock((_Mtx_t)(a1 + 56));
  return Mtx_unlock(v2);
}
