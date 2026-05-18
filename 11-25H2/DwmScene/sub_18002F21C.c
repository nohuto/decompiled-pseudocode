/*
 * XREFs of sub_18002F21C @ 0x18002F21C
 * Callers:
 *     sub_18002E360 @ 0x18002E360 (sub_18002E360.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F21C(__int64 a1, __int64 a2)
{
  sub_180016F54(a1, a2);
  sub_180016F54(a1 + 32, a2 + 32);
  return a1;
}
