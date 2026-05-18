/*
 * XREFs of sub_18000FFC0 @ 0x18000FFC0
 * Callers:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 * Callees:
 *     sub_18000D3E8 @ 0x18000D3E8 (sub_18000D3E8.c)
 *     sub_18000DBC4 @ 0x18000DBC4 (sub_18000DBC4.c)
 */

void __noreturn sub_18000FFC0()
{
  unsigned int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = sub_18000D3E8(0x8007000E);
  sub_18000DBC4(retaddr, v1, v2, v0);
}
