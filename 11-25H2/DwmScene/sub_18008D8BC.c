/*
 * XREFs of sub_18008D8BC @ 0x18008D8BC
 * Callers:
 *     sub_18008D5BC @ 0x18008D5BC (sub_18008D5BC.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180078CA4 @ 0x180078CA4 (sub_180078CA4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18008D8BC(__int64 a1, __int64 a2, __int64 a3)
{
  sub_180016F54(a2, a3);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 32);
  return sub_180078CA4((__int64 *)(a2 + 40), a3 + 40);
}
