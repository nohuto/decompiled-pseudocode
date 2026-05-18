/*
 * XREFs of sub_180081250 @ 0x180081250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 */

__int64 __fastcall sub_180081250(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_1800273D0((__int64 *)(a1 + 136), &v5);
  v5 = a2;
  return sub_180027D7C((__int64 *)(a1 + 80), &v5);
}
