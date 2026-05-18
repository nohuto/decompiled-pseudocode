/*
 * XREFs of sub_180054B50 @ 0x180054B50
 * Callers:
 *     sub_18005493C @ 0x18005493C (sub_18005493C.c)
 *     sub_180054974 @ 0x180054974 (sub_180054974.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

_DWORD *__fastcall sub_180054B50(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_180016F54((__int64)(a1 + 2), (__int64)(a2 + 2));
  return a1;
}
