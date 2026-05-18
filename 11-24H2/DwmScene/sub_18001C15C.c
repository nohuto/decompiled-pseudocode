/*
 * XREFs of sub_18001C15C @ 0x18001C15C
 * Callers:
 *     sub_18001BE94 @ 0x18001BE94 (sub_18001BE94.c)
 *     sub_18001C7D4 @ 0x18001C7D4 (sub_18001C7D4.c)
 * Callees:
 *     sub_18001C0F0 @ 0x18001C0F0 (sub_18001C0F0.c)
 */

_DWORD *__fastcall sub_18001C15C(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_18001C0F0((__int64)(a1 + 2), (__int64)(a2 + 2));
  return a1;
}
