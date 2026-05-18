/*
 * XREFs of sub_180027A10 @ 0x180027A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 */

__int64 __fastcall sub_180027A10(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return sub_180027D7C(a1 + 80, &v3);
}
