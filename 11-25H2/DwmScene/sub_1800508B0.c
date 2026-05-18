/*
 * XREFs of sub_1800508B0 @ 0x1800508B0
 * Callers:
 *     sub_1800691C0 @ 0x1800691C0 (sub_1800691C0.c)
 * Callees:
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 *     sub_180050B40 @ 0x180050B40 (sub_180050B40.c)
 */

__int64 __fastcall sub_1800508B0(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180050B40(a1 + 128, &v5);
  v5 = a2;
  return sub_180027D7C((__int64 *)(a1 + 80), &v5);
}
