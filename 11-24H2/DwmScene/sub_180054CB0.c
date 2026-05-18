/*
 * XREFs of sub_180054CB0 @ 0x180054CB0
 * Callers:
 *     sub_180054A9C @ 0x180054A9C (sub_180054A9C.c)
 *     sub_180054AD4 @ 0x180054AD4 (sub_180054AD4.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

_DWORD *__fastcall sub_180054CB0(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_180017054((__int64)(a1 + 2), (__int64)(a2 + 2));
  return a1;
}
