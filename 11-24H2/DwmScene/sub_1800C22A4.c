/*
 * XREFs of sub_1800C22A4 @ 0x1800C22A4
 * Callers:
 *     sub_1800B90C0 @ 0x1800B90C0 (sub_1800B90C0.c)
 *     sub_1800B9420 @ 0x1800B9420 (sub_1800B9420.c)
 *     sub_1800BF090 @ 0x1800BF090 (sub_1800BF090.c)
 *     sub_1800C3440 @ 0x1800C3440 (sub_1800C3440.c)
 *     sub_1800C3820 @ 0x1800C3820 (sub_1800C3820.c)
 *     sub_1800C3CF0 @ 0x1800C3CF0 (sub_1800C3CF0.c)
 *     sub_1800C5550 @ 0x1800C5550 (sub_1800C5550.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 * Callees:
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 */

__int64 *__fastcall sub_1800C22A4(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 168);
  sub_1800115D0(a2);
  return a2;
}
