/*
 * XREFs of sub_1800813B0 @ 0x1800813B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027530 @ 0x180027530 (sub_180027530.c)
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 */

__int64 __fastcall sub_1800813B0(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180027530((__int64 *)(a1 + 136), &v5);
  v5 = a2;
  return sub_180027EDC((__int64 *)(a1 + 80), &v5);
}
