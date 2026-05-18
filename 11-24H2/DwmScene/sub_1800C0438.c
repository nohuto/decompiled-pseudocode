/*
 * XREFs of sub_1800C0438 @ 0x1800C0438
 * Callers:
 *     sub_180018010 @ 0x180018010 (sub_180018010.c)
 *     sub_1800C03E4 @ 0x1800C03E4 (sub_1800C03E4.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800BEDD0 @ 0x1800BEDD0 (sub_1800BEDD0.c)
 *     sub_1800C24AC @ 0x1800C24AC (sub_1800C24AC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C0438(__int64 *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  sub_1800BEDD0(a1 + 21, a2);
  sub_1800BEDD0(a1 + 20, a3);
  sub_18000E954(a1 + 22);
  sub_1800C24AC(a1, a4);
  sub_18000E954(a2);
  return sub_18000E954(a3);
}
