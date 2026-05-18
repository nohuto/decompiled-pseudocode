/*
 * XREFs of sub_180053BC4 @ 0x180053BC4
 * Callers:
 *     sub_180018DD0 @ 0x180018DD0 (sub_180018DD0.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 */

int __fastcall sub_180053BC4(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  sub_180011B30(a1 + 128);
  *(_DWORD *)(a1 + 32) = 0;
  return Mtx_unlock(v1);
}
