/*
 * XREFs of sub_1800D2718 @ 0x1800D2718
 * Callers:
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 */

int __fastcall sub_1800D2718(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  sub_180011B30(*a1);
  *(_BYTE *)(v1 + 180) = 0;
  Mtx_unlock((_Mtx_t)v1);
  return Cnd_broadcast((_Cnd_t)(v1 + 104));
}
