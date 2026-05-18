/*
 * XREFs of sub_18008CB30 @ 0x18008CB30
 * Callers:
 *     sub_1800698B4 @ 0x1800698B4 (sub_1800698B4.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 */

__int64 __fastcall sub_18008CB30(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  __int64 v3; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  sub_180011C30(a1 + 48);
  v3 = *(_QWORD *)(a1 + 24);
  Mtx_unlock(v1);
  return v3;
}
