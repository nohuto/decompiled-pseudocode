/*
 * XREFs of sub_1800D0890 @ 0x1800D0890
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_1800D10C0 @ 0x1800D10C0 (sub_1800D10C0.c)
 */

int __fastcall sub_1800D0890(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  sub_180011B30(a1 + 112);
  sub_1800D10C0(a1 + 144, &v4);
  return Mtx_unlock((_Mtx_t)(a1 + 112));
}
