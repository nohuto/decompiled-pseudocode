/*
 * XREFs of sub_180039B68 @ 0x180039B68
 * Callers:
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 * Callees:
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

char __fastcall sub_180039B68(__int64 a1)
{
  sub_18003BCDC(a1);
  return HIWORD(*(_DWORD *)(a1 + 448)) & 1;
}
