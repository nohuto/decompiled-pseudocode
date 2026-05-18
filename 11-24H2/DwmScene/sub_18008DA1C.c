/*
 * XREFs of sub_18008DA1C @ 0x18008DA1C
 * Callers:
 *     sub_18008D71C @ 0x18008D71C (sub_18008D71C.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180078E04 @ 0x180078E04 (sub_180078E04.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18008DA1C(__int64 a1, __int64 a2, __int64 a3)
{
  sub_180017054(a2, a3);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 32);
  return sub_180078E04((__int64 *)(a2 + 40), a3 + 40);
}
