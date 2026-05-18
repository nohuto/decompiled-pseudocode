/*
 * XREFs of sub_1800100C0 @ 0x1800100C0
 * Callers:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 * Callees:
 *     sub_18000D4D0 @ 0x18000D4D0 (sub_18000D4D0.c)
 *     sub_18000DCA4 @ 0x18000DCA4 (sub_18000DCA4.c)
 */

void __noreturn sub_1800100C0()
{
  unsigned int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = sub_18000D4D0(0x8007000E);
  sub_18000DCA4(retaddr, v1, v2, v0);
}
