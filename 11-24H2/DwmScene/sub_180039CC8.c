/*
 * XREFs of sub_180039CC8 @ 0x180039CC8
 * Callers:
 *     sub_180084280 @ 0x180084280 (sub_180084280.c)
 * Callees:
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

char __fastcall sub_180039CC8(__int64 a1)
{
  sub_18003BE3C(a1);
  return HIWORD(*(_DWORD *)(a1 + 448)) & 1;
}
