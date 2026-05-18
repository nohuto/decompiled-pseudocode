/*
 * XREFs of sub_180096FC8 @ 0x180096FC8
 * Callers:
 *     sub_180096D10 @ 0x180096D10 (sub_180096D10.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800970DC @ 0x1800970DC (sub_1800970DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180096FC8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_180016F54(a2, a3);
  return sub_1800970DC(a2 + 32, a4);
}
