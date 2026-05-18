/*
 * XREFs of sub_180027B70 @ 0x180027B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 */

__int64 __fastcall sub_180027B70(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return sub_180027EDC(a1 + 80, &v3);
}
