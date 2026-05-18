/*
 * XREFs of sub_180082470 @ 0x180082470
 * Callers:
 *     sub_18007DFB8 @ 0x18007DFB8 (sub_18007DFB8.c)
 * Callees:
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 */

__int64 __fastcall sub_180082470(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_1800273D0((__int64 *)(a1 + 144), &v5);
  v5 = a2;
  return sub_180027D7C((__int64 *)(a1 + 80), &v5);
}
