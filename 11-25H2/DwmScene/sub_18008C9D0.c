/*
 * XREFs of sub_18008C9D0 @ 0x18008C9D0
 * Callers:
 *     sub_180069754 @ 0x180069754 (sub_180069754.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 */

__int64 __fastcall sub_18008C9D0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  __int64 v3; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  sub_180011B30(a1 + 48);
  v3 = *(_QWORD *)(a1 + 24);
  Mtx_unlock(v1);
  return v3;
}
