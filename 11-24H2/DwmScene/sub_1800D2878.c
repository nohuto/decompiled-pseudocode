/*
 * XREFs of sub_1800D2878 @ 0x1800D2878
 * Callers:
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 */

int __fastcall sub_1800D2878(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  sub_180011C30(*a1);
  *(_BYTE *)(v1 + 180) = 0;
  Mtx_unlock((_Mtx_t)v1);
  return Cnd_broadcast((_Cnd_t)(v1 + 104));
}
