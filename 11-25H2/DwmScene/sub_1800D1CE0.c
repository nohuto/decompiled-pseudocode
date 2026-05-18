/*
 * XREFs of sub_1800D1CE0 @ 0x1800D1CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 */

char __fastcall sub_1800D1CE0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  __int64 v2; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v2 = a1;
  sub_180011B30(a1 + 8);
  LOBYTE(v2) = *(_BYTE *)(v2 + 64);
  Mtx_unlock(v1);
  return v2;
}
