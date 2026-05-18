/*
 * XREFs of sub_18000F0C4 @ 0x18000F0C4
 * Callers:
 *     sub_18000E504 @ 0x18000E504 (sub_18000E504.c)
 *     sub_18000F7EC @ 0x18000F7EC (sub_18000F7EC.c)
 * Callees:
 *     sub_18000CEA4 @ 0x18000CEA4 (sub_18000CEA4.c)
 */

__int64 __fastcall sub_18000F0C4(int a1, int a2, __int64 a3, int a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return sub_18000CEA4(a1, a2, a3, a4, v5, retaddr);
}
