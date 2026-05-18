/*
 * XREFs of sub_180053D24 @ 0x180053D24
 * Callers:
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 */

int __fastcall sub_180053D24(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  sub_180011C30(a1 + 128);
  *(_DWORD *)(a1 + 32) = 0;
  return Mtx_unlock(v1);
}
