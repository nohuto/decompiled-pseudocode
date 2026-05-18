/*
 * XREFs of sub_180082D60 @ 0x180082D60
 * Callers:
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 * Callees:
 *     sub_180082E54 @ 0x180082E54 (sub_180082E54.c)
 */

__int64 __fastcall sub_180082D60(__int64 a1, int a2, int a3, int a4)
{
  char v6; // [rsp+20h] [rbp-38h]

  v6 = a3;
  sub_180082E54(a1, a2, a3, a4, v6);
  return a1;
}
