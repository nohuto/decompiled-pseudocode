/*
 * XREFs of sub_18000F1C4 @ 0x18000F1C4
 * Callers:
 *     sub_18000E604 @ 0x18000E604 (sub_18000E604.c)
 *     sub_18000F8EC @ 0x18000F8EC (sub_18000F8EC.c)
 * Callees:
 *     sub_18000CF8C @ 0x18000CF8C (sub_18000CF8C.c)
 */

__int64 __fastcall sub_18000F1C4(int a1, int a2, __int64 a3, int a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return sub_18000CF8C(a1, a2, a3, a4, v5, retaddr);
}
