/*
 * XREFs of sub_18007F230 @ 0x18007F230
 * Callers:
 *     sub_18007E118 @ 0x18007E118 (sub_18007E118.c)
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 * Callees:
 *     sub_180027530 @ 0x180027530 (sub_180027530.c)
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 */

__int64 __fastcall sub_18007F230(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180027530((__int64 *)(a1 + 128), &v5);
  v5 = a2;
  return sub_180027EDC((__int64 *)(a1 + 80), &v5);
}
