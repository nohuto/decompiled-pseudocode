/*
 * XREFs of sub_1800D09F0 @ 0x1800D09F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_1800D1220 @ 0x1800D1220 (sub_1800D1220.c)
 */

int __fastcall sub_1800D09F0(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  sub_180011C30(a1 + 112);
  sub_1800D1220(a1 + 144, &v4);
  return Mtx_unlock((_Mtx_t)(a1 + 112));
}
