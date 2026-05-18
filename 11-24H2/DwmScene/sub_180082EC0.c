/*
 * XREFs of sub_180082EC0 @ 0x180082EC0
 * Callers:
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 * Callees:
 *     sub_180082FB4 @ 0x180082FB4 (sub_180082FB4.c)
 */

__int64 __fastcall sub_180082EC0(__int64 a1, int a2, int a3, int a4)
{
  char v6; // [rsp+20h] [rbp-38h]

  v6 = a3;
  sub_180082FB4(a1, a2, a3, a4, v6);
  return a1;
}
