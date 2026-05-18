/*
 * XREFs of sub_18001BFFC @ 0x18001BFFC
 * Callers:
 *     sub_18001BD34 @ 0x18001BD34 (sub_18001BD34.c)
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 * Callees:
 *     sub_18001BF90 @ 0x18001BF90 (sub_18001BF90.c)
 */

_DWORD *__fastcall sub_18001BFFC(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_18001BF90((__int64)(a1 + 2), (__int64)(a2 + 2));
  return a1;
}
